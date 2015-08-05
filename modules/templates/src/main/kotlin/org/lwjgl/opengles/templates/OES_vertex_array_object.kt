/*
 * Copyright LWJGL. All rights reserved.
 * License terms: http://lwjgl.org/license.php
 */
package org.lwjgl.opengles.templates

import org.lwjgl.generator.*
import org.lwjgl.opengles.*

val OES_vertex_array_object = "OESVertexArrayObject".nativeClassGLES("OES_vertex_array_object", postfix = OES) {
	nativeImport (
		"OpenGLES.h"
	)

	documentation =
		"""
		Native bindings to the $registryLink extension.

		This extension introduces vertex array objects which encapsulate vertex array states on the server side (vertex buffer objects). These objects aim to
		keep pointers to vertex data and to provide names for different sets of vertex data. Therefore applications are allowed to rapidly switch between
		different sets of vertex array state, and to easily return to the default vertex array state.
		"""

	IntConstant(
		"Accepted by the {@code pname} parameter of GetBooleanv, GetIntegerv, GetFloatv.",

		"VERTEX_ARRAY_BINDING_OES" _ 0x85B5
	)

	void(
		"BindVertexArrayOES",
		"",

		GLuint.IN("array", "")
	)

	void(
		"DeleteVertexArraysOES",
		"",

		AutoSize("arrays") _ GLsizei.IN("n", ""),
		SingleValue("array") _ const _ GLuint_p.IN("arrays", "")
	)

	void(
		"GenVertexArraysOES",
		"",

		AutoSize("arrays") _ GLsizei.IN("n", ""),
		returnValue _ Check(1) _ GLuint_p.OUT("arrays", "")
	)

	GLboolean(
		"IsVertexArrayOES",
		"",

		GLuint.IN("array", "")
	)
}