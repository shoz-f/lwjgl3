/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 */
package org.lwjgl.demo.cuda;

import org.lwjgl.system.*;

import java.nio.*;

import static org.lwjgl.cuda.CUDA.*;

public final class HelloCUDA {

    private HelloCUDA() {}

    public static void main(String[] args) {
        cuInit(0);

        try(MemoryStack stack = MemoryStack.stackPush()) {
            IntBuffer pi = stack.mallocInt(1);
            cuDriverGetVersion(pi);
            System.out.println("Hello CUDA " + pi.get(0) + "!");
        }
    }
}
