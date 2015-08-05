/*
 * Copyright LWJGL. All rights reserved.
 * License terms: http://lwjgl.org/license.php
 */
package org.lwjgl.opengles.templates

import org.lwjgl.generator.*
import org.lwjgl.opengles.*

val EXT_debug_label = "EXTDebugLabel".nativeClassGLES("EXT_debug_label", postfix = EXT) {
	nativeImport (
		"OpenGLES.h"
	)

	documentation =
		"""
		Native bindings to the $registryLink extension.

		This extension defines a mechanism for OpenGL and OpenGL ES applications to label their objects (textures, buffers, shaders, etc.) with a descriptive
		string.

		When profiling or debugging such an application within a debugger or profiler it is difficult to identify resources from their object names. Even when
		the resource itself is viewed it can be problematic to differentiate between similar resources. Attaching a label to an object helps obviate this
		difficulty.

		The intended purpose of this is purely to improve the user experience within OpenGL and OpenGL ES development tools.
		"""

	IntConstant(
		"Accepted by the {@code type} parameter of LabelObjectEXT and GetObjectLabelEXT.",

		"BUFFER_OBJECT_EXT" _ 0x9151,
		"SHADER_OBJECT_EXT" _ 0x8B48,
		"PROGRAM_OBJECT_EXT" _ 0x8B40,
		"VERTEX_ARRAY_OBJECT_EXT" _ 0x9154,
		"QUERY_OBJECT_EXT" _ 0x9153,
		"PROGRAM_PIPELINE_OBJECT_EXT" _ 0x8A4F
	)

	void(
		"LabelObjectEXT",
		"",

		GLenum.IN("type", ""),
		GLuint.IN("object", ""),
		AutoSize("label") _ GLsizei.IN("length", ""),
		const _ GLcharUTF8_p.IN("label", "")
	)

	void(
		"GetObjectLabelEXT",
		"",

		GLenum.IN("type", ""),
		GLuint.IN("object", ""),
		AutoSize("label") _ GLsizei.IN("bufSize", ""),
		Check(1) _ GLsizei_p.OUT("length", ""),
		Return("length") _ GLcharUTF8_p.OUT("label", "")
	)
}