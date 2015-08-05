/*
 * Copyright LWJGL. All rights reserved.
 * License terms: http://lwjgl.org/license.php
 */
package org.lwjgl.opengles.templates

import org.lwjgl.generator.*
import org.lwjgl.opengles.*

val OES_rgb8_rgba8 = "OESRGB8RGBA8".nativeClassGLES("OES_rgb8_rgba8", postfix = OES) {
	documentation =
		"""
		Native bindings to the $registryLink extension.

		This extension enables RGB8 and RGBA8 renderbuffer storage formats.
		"""

	IntConstant(
		"Accepted by the {@code internalformat} parameter of RenderbufferStorageOES.",

		"RGB8_OES" _ 0x8051,
		"RGBA8_OES" _ 0x8058
	)
}