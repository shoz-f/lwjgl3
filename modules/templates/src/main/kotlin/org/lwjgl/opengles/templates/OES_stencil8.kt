/*
 * Copyright LWJGL. All rights reserved.
 * License terms: http://lwjgl.org/license.php
 */
package org.lwjgl.opengles.templates

import org.lwjgl.generator.*
import org.lwjgl.opengles.*

val OES_stencil8 = "OESStencil8".nativeClassGLES("OES_stencil8", postfix = OES) {
	documentation =
		"""
		Native bindings to the $registryLink extension.

		This extension enables 8-bit stencil component as a valid render buffer storage format.
		"""

	IntConstant(
		"Accepted by the {@code internalformat} parameter of RenderbufferStorageOES.",

		"STENCIL_INDEX8_OES" _ 0x8D48
	)
}