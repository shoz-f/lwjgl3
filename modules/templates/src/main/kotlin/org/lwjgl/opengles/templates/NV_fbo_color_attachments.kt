/*
 * Copyright LWJGL. All rights reserved.
 * License terms: http://lwjgl.org/license.php
 */
package org.lwjgl.opengles.templates

import org.lwjgl.generator.*
import org.lwjgl.opengles.*

val NV_fbo_color_attachments = "NVFboColorAttachments".nativeClassGLES("NV_fbo_color_attachments", postfix = NV) {
	documentation =
		"""
		Native bindings to the $registryLink extension.

		This extension increases the number of available framebuffer object color attachment points.
		"""

	IntConstant(
		"Accepted by the {@code value} parameter of GetIntegerv.",

		"MAX_COLOR_ATTACHMENTS_NV" _ 0x8CDF
	)

	IntConstant(
		"Accepted by the {@code attachment} parameter of FramebufferRenderbuffer, FramebufferTexture2D and GetFramebufferAttachmentParameteriv.",

		"COLOR_ATTACHMENT0_NV" _ 0x8CE0,
		"COLOR_ATTACHMENT1_NV" _ 0x8CE1,
		"COLOR_ATTACHMENT2_NV" _ 0x8CE2,
		"COLOR_ATTACHMENT3_NV" _ 0x8CE3,
		"COLOR_ATTACHMENT4_NV" _ 0x8CE4,
		"COLOR_ATTACHMENT5_NV" _ 0x8CE5,
		"COLOR_ATTACHMENT6_NV" _ 0x8CE6,
		"COLOR_ATTACHMENT7_NV" _ 0x8CE7,
		"COLOR_ATTACHMENT8_NV" _ 0x8CE8,
		"COLOR_ATTACHMENT9_NV" _ 0x8CE9,
		"COLOR_ATTACHMENT10_NV" _ 0x8CEA,
		"COLOR_ATTACHMENT11_NV" _ 0x8CEB,
		"COLOR_ATTACHMENT12_NV" _ 0x8CEC,
		"COLOR_ATTACHMENT13_NV" _ 0x8CED,
		"COLOR_ATTACHMENT14_NV" _ 0x8CEE,
		"COLOR_ATTACHMENT15_NV" _ 0x8CEF
	)
}