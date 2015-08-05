/*
 * Copyright LWJGL. All rights reserved.
 * License terms: http://lwjgl.org/license.php
 */
package org.lwjgl.opengles.templates

import org.lwjgl.generator.*
import org.lwjgl.opengles.*

val OES_depth24 = "OESDepth24".nativeClassGLES("OES_depth24", postfix = OES) {
	documentation =
		"""
		Native bindings to the $registryLink extension.

		This extension enables 24-bit depth components as a valid render buffer storage format.
		"""

	IntConstant(
		"Accepted by the {@code internalformat} parameter of RenderbufferStorageOES.",

		"DEPTH_COMPONENT24_OES" _ 0x81A6
	)
}