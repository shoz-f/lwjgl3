/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 */
package org.lwjgl.demo.system.jawt;

import org.lwjgl.*;
import org.lwjgl.demo.opengl.*;
import org.lwjgl.opengl.*;
import org.lwjgl.system.*;
import org.lwjgl.system.jawt.JAWT;
import org.lwjgl.system.jawt.*;
import org.lwjgl.system.linux.*;
import org.lwjgl.system.windows.*;

import java.awt.*;
import java.nio.*;
import java.util.*;

import static org.lwjgl.opengl.GL11.*;
import static org.lwjgl.opengl.GLX.*;
import static org.lwjgl.opengl.GLX13.*;
import static org.lwjgl.opengl.WGL.*;
import static org.lwjgl.system.MemoryUtil.*;
import static org.lwjgl.system.jawt.JAWTFunctions.*;
import static org.lwjgl.system.windows.GDI32.*;

/**
 * A Canvas component that uses OpenGL for rendering.
 *
 * <p>This implementation supports Windows only and is no way complete or robust enough for production use.</p>
 */
@SuppressWarnings("serial")
public class LWJGLCanvas extends Canvas {

    private final JAWT awt;

    private final AbstractGears gears;

    private long context;

    private GLCapabilities caps;

    public LWJGLCanvas() {
        awt = JAWT.calloc();
        awt.version(JAWT_VERSION_1_4);
        if (!JAWT_GetAWT(awt)) {
            throw new IllegalStateException("GetAWT failed");
        }

        gears = new AbstractGears();
    }

    @Override
    public void update(Graphics g) {
        paint(g);
    }

    @Override
    public void paint(Graphics g) {
        // Get the drawing surface
        JAWTDrawingSurface ds = JAWT_GetDrawingSurface(this, awt.GetDrawingSurface());
        if (ds == null) {
            throw new IllegalStateException("awt->GetDrawingSurface() failed");
        }

        try {
            // Lock the drawing surface
            int lock = JAWT_DrawingSurface_Lock(ds, ds.Lock());
            if ((lock & JAWT_LOCK_ERROR) != 0) {
                throw new IllegalStateException("ds->Lock() failed");
            }

            try {
                // Get the drawing surface info
                JAWTDrawingSurfaceInfo dsi = JAWT_DrawingSurface_GetDrawingSurfaceInfo(ds, ds.GetDrawingSurfaceInfo());
                if (dsi == null) {
                    throw new IllegalStateException("ds->GetDrawingSurfaceInfo() failed");
                }

                try {
                    switch (Platform.get()) {
                        case LINUX:
                            // Get the platform-specific drawing info
                            JAWTX11DrawingSurfaceInfo dsi_x11 = JAWTX11DrawingSurfaceInfo.create(dsi.platformInfo());

                            long drawable = dsi_x11.drawable();
                            if (drawable != NULL) {
                                if (context == NULL) {
                                    createContext(dsi_x11);
                                    gears.initGLState();
                                } else {
                                    if (!glXMakeCurrent(dsi_x11.display(), drawable, context)) {
                                        throw new IllegalStateException("glXMakeCurrent() failed");
                                    }

                                    GL.setCapabilities(caps);
                                }

                                render();
                                glXSwapBuffers(dsi_x11.display(), drawable);

                                glXMakeCurrent(dsi_x11.display(), NULL, NULL);
                                GL.setCapabilities(null);
                            }
                            break;
                        case WINDOWS:
                            // Get the platform-specific drawing info
                            JAWTWin32DrawingSurfaceInfo dsi_win = JAWTWin32DrawingSurfaceInfo.create(dsi.platformInfo());

                            long hdc = dsi_win.hdc();
                            if (hdc != NULL) {
                                if (context == NULL) {
                                    createContext(dsi_win);
                                    gears.initGLState();
                                } else {
                                    if (!wglMakeCurrent(hdc, context)) {
                                        throw new IllegalStateException("wglMakeCurrent() failed");
                                    }

                                    GL.setCapabilities(caps);
                                }

                                render();
                                SwapBuffers(hdc);

                                wglMakeCurrent(NULL, NULL);
                                GL.setCapabilities(null);
                            }
                            break;
                    }
                } finally {
                    // Free the drawing surface info
                    JAWT_DrawingSurface_FreeDrawingSurfaceInfo(dsi, ds.FreeDrawingSurfaceInfo());
                }
            } finally {
                // Unlock the drawing surface
                JAWT_DrawingSurface_Unlock(ds, ds.Unlock());
            }
        } finally {
            // Free the drawing surface
            JAWT_FreeDrawingSurface(ds, awt.FreeDrawingSurface());
        }

        repaint();
    }

    private void render() {
        glViewport(0, 0, getWidth(), getHeight());

        float f = getHeight() / (float)getWidth();

        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glFrustum(-1.0f, 1.0f, -f, f, 5.0f, 100.0f);
        glMatrixMode(GL_MODELVIEW);

        gears.renderLoop();
    }

    // Simplest possible context creation.
    private void createContext(JAWTWin32DrawingSurfaceInfo dsi_win) {
        long hdc = dsi_win.hdc();

        try (
            PIXELFORMATDESCRIPTOR pfd = PIXELFORMATDESCRIPTOR.calloc()
                .nSize((byte)PIXELFORMATDESCRIPTOR.SIZEOF)
                .nVersion((short)1)
                .dwFlags(PFD_SUPPORT_OPENGL | PFD_DRAW_TO_WINDOW | PFD_DOUBLEBUFFER)
                .iPixelType(PFD_TYPE_RGBA)
                .cColorBits((byte)32)
                .cAlphaBits((byte)8)
                .cDepthBits((byte)24)
                .iLayerType(PFD_MAIN_PLANE)
        ) {
            int pixelFormat = GetPixelFormat(hdc);
            if (pixelFormat != 0) {
                if (DescribePixelFormat(hdc, pixelFormat, pfd) == 0) {
                    throw new IllegalStateException("DescribePixelFormat() failed: " + WinBase.getLastError());
                }
            } else {
                pixelFormat = ChoosePixelFormat(hdc, pfd);
                if (pixelFormat < 1) {
                    throw new IllegalStateException("ChoosePixelFormat() failed: " + WinBase.getLastError());
                }

                if (!SetPixelFormat(hdc, pixelFormat, null)) {
                    throw new IllegalStateException("SetPixelFormat() failed: " + WinBase.getLastError());
                }
            }
        }

        context = wglCreateContext(hdc);
        if (context == NULL) {
            throw new IllegalStateException("wglCreateContext() failed");
        }

        if (!wglMakeCurrent(hdc, context)) {
            throw new IllegalStateException("wglMakeCurrent() failed");
        }

        caps = GL.createCapabilities();
    }

    // Simplest possible context creation.
    private void createContext(JAWTX11DrawingSurfaceInfo dsi_x11) {
        long display  = dsi_x11.display();
        long drawable = dsi_x11.drawable();

        PointerBuffer configs = Objects.requireNonNull(glXChooseFBConfig(display, 0, (IntBuffer)null));

        long config = NULL;
        for (int i = 0; i < configs.remaining(); i++) {
            XVisualInfo vi = Objects.requireNonNull(glXGetVisualFromFBConfig(display, configs.get(i)));
            if (vi.visualid() == dsi_x11.visualID()) {
                config = configs.get(i);
                break;
            }
        }

        context = glXCreateNewContext(display, config, GLX_RGBA_TYPE, NULL, true);
        if (context == NULL) {
            throw new IllegalStateException("glXCreateContext() failed");
        }

        if (!glXMakeCurrent(display, drawable, context)) {
            throw new IllegalStateException("glXMakeCurrent() failed");
        }

        caps = GL.createCapabilities();
    }

    public void destroy() {
        awt.free();

        if (context != NULL) {
            wglDeleteContext(context);
        }
    }

}