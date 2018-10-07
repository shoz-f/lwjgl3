/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"

#ifdef LWJGL_WINDOWS
    #define APIENTRY __stdcall
#else
    #define APIENTRY
#endif

#define ARITY0(type, signature, expression) \
JNIEXPORT type JNICALL Java_org_lwjgl_system_JNI_##signature(JNIEnv *__env, jclass clazz, jlong __functionAddress) { \
    UNUSED_PARAMS(__env, clazz) \
    expression; \
}

#define ARITYn(type, signature, expression, ...) \
JNIEXPORT type JNICALL Java_org_lwjgl_system_JNI_##signature(JNIEnv *__env, jclass clazz, __VA_ARGS__, jlong __functionAddress) { \
    UNUSED_PARAMS(__env, clazz) \
    expression; \
}

ARITYn(jbyte, invokePB__BJJ, return ((jbyte (*) (jbyte, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jbyte param0, jlong param1)
ARITY0(jdouble, invokeD__J, return ((jdouble (*) ())(intptr_t)__functionAddress)())
ARITYn(jdouble, invokeD__IJ, return ((jdouble (*) (jint))(intptr_t)__functionAddress)(param0), jint param0)
ARITYn(jfloat, invokeF__FJ, return ((jfloat (*) (jfloat))(intptr_t)__functionAddress)(param0), jfloat param0)
ARITYn(jfloat, invokeF__IJ, return ((jfloat (*) (jint))(intptr_t)__functionAddress)(param0), jint param0)
ARITYn(jfloat, invokePF__JJ, return ((jfloat (*) (intptr_t))(intptr_t)__functionAddress)((intptr_t)param0), jlong param0)
ARITYn(jfloat, invokePF__JFFJ, return ((jfloat (*) (intptr_t, jfloat, jfloat))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jfloat param1, jfloat param2)
ARITYn(jfloat, invokePPF__JFJIJ, return ((jfloat (*) (intptr_t, jfloat, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3), jlong param0, jfloat param1, jlong param2, jint param3)
ARITYn(jfloat, invokePF__JIJ, return ((jfloat (*) (intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jint param1)
ARITYn(jfloat, invokePPF__JIJJ, return ((jfloat (*) (intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2), jlong param0, jint param1, jlong param2)
ARITYn(jfloat, invokePPF__JJJ, return ((jfloat (*) (intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1), jlong param0, jlong param1)
ARITY0(jint, invokeI__J, return ((jint (*) ())(intptr_t)__functionAddress)())
ARITYn(jint, invokeI__IJ, return ((jint (*) (jint))(intptr_t)__functionAddress)(param0), jint param0)
ARITYn(jint, invokePI__IJJ, return ((jint (*) (jint, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jint param0, jlong param1)
ARITYn(jint, invokePPI__IJIJIZJ, return ((jint (*) (jint, intptr_t, jint, intptr_t, jint, jboolean))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, (intptr_t)param3, param4, param5), jint param0, jlong param1, jint param2, jlong param3, jint param4, jboolean param5)
ARITYn(jint, invokeI__ISJ, return ((jint (*) (jint, jshort))(intptr_t)__functionAddress)(param0, param1), jint param0, jshort param1)
ARITYn(jint, invokePI__JJ, return ((jint (*) (intptr_t))(intptr_t)__functionAddress)((intptr_t)param0), jlong param0)
ARITYn(jint, invokePI__JIJ, return ((jint (*) (intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jint param1)
ARITYn(jint, invokePPPPPPPPI__JIIJJJJJJJJ, return ((jint (*) (intptr_t, jint, jint, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7, (intptr_t)param8, (intptr_t)param9), jlong param0, jint param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jlong param9)
ARITYn(jint, invokePJI__JJJ, return ((jint (*) (intptr_t, jlong))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jlong param1)
ARITYn(jint, invokePPI__JJJ, return ((jint (*) (intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1), jlong param0, jlong param1)
ARITYn(jint, invokePPI__JJIJ, return ((jint (*) (intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jint param2)
ARITYn(jint, invokePPPI__JJIIJJ, return ((jint (*) (intptr_t, intptr_t, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, (intptr_t)param4), jlong param0, jlong param1, jint param2, jint param3, jlong param4)
ARITYn(jint, invokePPPPI__JJIIJJJ, return ((jint (*) (intptr_t, intptr_t, jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jlong param1, jint param2, jint param3, jlong param4, jlong param5)
ARITYn(jint, invokePPPPI__JJIJJJ, return ((jint (*) (intptr_t, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jlong param1, jint param2, jlong param3, jlong param4)
ARITYn(jint, invokePPPI__JJJJ, return ((jint (*) (intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2), jlong param0, jlong param1, jlong param2)
ARITYn(jint, invokePPPI__JJJIJ, return ((jint (*) (intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3), jlong param0, jlong param1, jlong param2, jint param3)
ARITYn(jint, invokePPPPI__JJJJJ, return ((jint (*) (intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jlong param1, jlong param2, jlong param3)
ARITYn(jint, invokePPPPI__JJJJIJ, return ((jint (*) (intptr_t, intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, param4), jlong param0, jlong param1, jlong param2, jlong param3, jint param4)
ARITYn(jint, invokePPPPPI__JJJJJJ, return ((jint (*) (intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4)
ARITYn(jint, invokePPPPPPI__JJJJJJJ, return ((jint (*) (intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5)
ARITYn(jint, invokePPI__JJSJ, return ((jint (*) (intptr_t, intptr_t, jshort))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jshort param2)
ARITYn(jint, invokePI__JSJ, return ((jint (*) (intptr_t, jshort))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jshort param1)
ARITYn(jint, invokePI__SJJ, return ((jint (*) (jshort, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jshort param0, jlong param1)
ARITYn(jint, invokePI__SJBJ, return ((jint (*) (jshort, intptr_t, jbyte))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2), jshort param0, jlong param1, jbyte param2)
ARITYn(jint, invokeI__ZJ, return ((jint (*) (jboolean))(intptr_t)__functionAddress)(param0), jboolean param0)
ARITY0(jlong, invokeJ__J, return ((jlong (*) ())(intptr_t)__functionAddress)())
ARITYn(jlong, invokeJJ__JJ, return ((jlong (*) (jlong))(intptr_t)__functionAddress)(param0), jlong param0)
ARITYn(jlong, invokePJ__JFIFIJ, return ((jlong (*) (intptr_t, jfloat, jint, jfloat, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4), jlong param0, jfloat param1, jint param2, jfloat param3, jint param4)
ARITYn(jlong, invokeJJJ__JJJ, return ((jlong (*) (jlong, jlong))(intptr_t)__functionAddress)(param0, param1), jlong param0, jlong param1)
ARITYn(jlong, invokeJJJJ__JJJJ, return ((jlong (*) (jlong, jlong, jlong))(intptr_t)__functionAddress)(param0, param1, param2), jlong param0, jlong param1, jlong param2)
ARITYn(jlong, invokeJJJJJ__JJJJJ, return ((jlong (*) (jlong, jlong, jlong, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3), jlong param0, jlong param1, jlong param2, jlong param3)
ARITY0(jlong, invokeP__J, return (jlong)((intptr_t (*) ())(intptr_t)__functionAddress)())
ARITYn(jlong, invokeP__IJ, return (jlong)((intptr_t (*) (jint))(intptr_t)__functionAddress)(param0), jint param0)
ARITYn(jlong, invokeP__IIJ, return (jlong)((intptr_t (*) (jint, jint))(intptr_t)__functionAddress)(param0, param1), jint param0, jint param1)
ARITYn(jlong, invokePPPP__IIJJJJ, return (jlong)((intptr_t (*) (jint, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4), jint param0, jint param1, jlong param2, jlong param3, jlong param4)
ARITYn(jlong, invokePP__IJJ, return (jlong)((intptr_t (*) (jint, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jint param0, jlong param1)
ARITYn(jlong, invokePP__JJ, return (jlong)((intptr_t (*) (intptr_t))(intptr_t)__functionAddress)((intptr_t)param0), jlong param0)
ARITYn(jlong, invokePP__JIJ, return (jlong)((intptr_t (*) (intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jint param1)
ARITYn(jlong, invokePP__JIIJ, return (jlong)((intptr_t (*) (intptr_t, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jint param1, jint param2)
ARITYn(jlong, invokePP__JIIIJ, return (jlong)((intptr_t (*) (intptr_t, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3), jlong param0, jint param1, jint param2, jint param3)
ARITYn(jlong, invokePPP__JIIJJ, return (jlong)((intptr_t (*) (intptr_t, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3), jlong param0, jint param1, jint param2, jlong param3)
ARITYn(jlong, invokePPPP__JIIJJJ, return (jlong)((intptr_t (*) (intptr_t, jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jint param1, jint param2, jlong param3, jlong param4)
ARITYn(jlong, invokePPP__JIJJ, return (jlong)((intptr_t (*) (intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2), jlong param0, jint param1, jlong param2)
ARITYn(jlong, invokePPP__JIJIJ, return (jlong)((intptr_t (*) (intptr_t, jint, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3), jlong param0, jint param1, jlong param2, jint param3)
ARITYn(jlong, invokePPPP__JIJJJ, return (jlong)((intptr_t (*) (intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jint param1, jlong param2, jlong param3)
ARITYn(jlong, invokePPP__JJJ, return (jlong)((intptr_t (*) (intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1), jlong param0, jlong param1)
ARITYn(jlong, invokePPP__JJIJ, return (jlong)((intptr_t (*) (intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jint param2)
ARITYn(jlong, invokePPPPPP__JJIIIIIIIJJJJ, return (jlong)((intptr_t (*) (intptr_t, intptr_t, jint, jint, jint, jint, jint, jint, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)param9, (intptr_t)param10, (intptr_t)param11), jlong param0, jlong param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jlong param9, jlong param10, jlong param11)
ARITYn(jlong, invokePPPP__JJJJ, return (jlong)((intptr_t (*) (intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2), jlong param0, jlong param1, jlong param2)
ARITYn(jlong, invokePPPP__JJJIJ, return (jlong)((intptr_t (*) (intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3), jlong param0, jlong param1, jlong param2, jint param3)
ARITYn(jlong, invokePPPPP__JJJJJ, return (jlong)((intptr_t (*) (intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jlong param1, jlong param2, jlong param3)
ARITYn(jlong, invokePPPPPP__JJJJJIJ, return (jlong)((intptr_t (*) (intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, param5), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jint param5)
ARITYn(jlong, invokePPPPPPP__JJJJJJIJ, return (jlong)((intptr_t (*) (intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, param6), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jint param6)
ARITYn(jlong, invokePPP__JJZZJ, return (jlong)((intptr_t (*) (intptr_t, intptr_t, jboolean, jboolean))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3), jlong param0, jlong param1, jboolean param2, jboolean param3)
ARITYn(jlong, invokePPP__JSSSSJJ, return (jlong)((intptr_t (*) (intptr_t, jshort, jshort, jshort, jshort, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, (intptr_t)param5), jlong param0, jshort param1, jshort param2, jshort param3, jshort param4, jlong param5)
ARITYn(jlong, invokePPP__JZZJJ, return (jlong)((intptr_t (*) (intptr_t, jboolean, jboolean, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3), jlong param0, jboolean param1, jboolean param2, jlong param3)
ARITYn(jlong, invokeP__SJ, return (jlong)((intptr_t (*) (jshort))(intptr_t)__functionAddress)(param0), jshort param0)
ARITYn(jlong, invokePP__SJJ, return (jlong)((intptr_t (*) (jshort, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jshort param0, jlong param1)
ARITYn(jlong, invokeP__SSSBIIJ, return (jlong)((intptr_t (*) (jshort, jshort, jshort, jbyte, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jshort param0, jshort param1, jshort param2, jbyte param3, jint param4, jint param5)
ARITY0(jshort, invokeS__J, return ((jshort (*) ())(intptr_t)__functionAddress)())
ARITYn(jshort, invokePS__BJZJ, return ((jshort (*) (jbyte, intptr_t, jboolean))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2), jbyte param0, jlong param1, jboolean param2)
ARITYn(jshort, invokeS__IJ, return ((jshort (*) (jint))(intptr_t)__functionAddress)(param0), jint param0)
ARITYn(jshort, invokeJS__IIJJ, return ((jshort (*) (jint, jint, jlong))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jint param1, jlong param2)
ARITYn(jshort, invokePS__IJSJ, return ((jshort (*) (jint, intptr_t, jshort))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2), jint param0, jlong param1, jshort param2)
ARITYn(jshort, invokeS__ISJ, return ((jshort (*) (jint, jshort))(intptr_t)__functionAddress)(param0, param1), jint param0, jshort param1)
ARITYn(jshort, invokeJS__IZSIJJ, return ((jshort (*) (jint, jboolean, jshort, jint, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jboolean param1, jshort param2, jint param3, jlong param4)
ARITYn(jshort, invokePS__JJ, return ((jshort (*) (intptr_t))(intptr_t)__functionAddress)((intptr_t)param0), jlong param0)
ARITYn(jshort, invokePS__JISJ, return ((jshort (*) (intptr_t, jint, jshort))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jint param1, jshort param2)
ARITYn(jshort, invokePJPS__JJBJJ, return ((jshort (*) (intptr_t, jlong, jbyte, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3), jlong param0, jlong param1, jbyte param2, jlong param3)
ARITYn(jshort, invokePPPS__JJJSFJ, return ((jshort (*) (intptr_t, intptr_t, intptr_t, jshort, jfloat))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3, param4), jlong param0, jlong param1, jlong param2, jshort param3, jfloat param4)
ARITYn(jshort, invokePPS__JJSJ, return ((jshort (*) (intptr_t, intptr_t, jshort))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jshort param2)
ARITYn(jshort, invokePS__JSJ, return ((jshort (*) (intptr_t, jshort))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jshort param1)
ARITYn(jshort, invokePS__JSSIIJ, return ((jshort (*) (intptr_t, jshort, jshort, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4), jlong param0, jshort param1, jshort param2, jint param3, jint param4)
ARITYn(jshort, invokePS__JSSSSJ, return ((jshort (*) (intptr_t, jshort, jshort, jshort, jshort))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4), jlong param0, jshort param1, jshort param2, jshort param3, jshort param4)
ARITYn(jshort, invokeS__SBJ, return ((jshort (*) (jshort, jbyte))(intptr_t)__functionAddress)(param0, param1), jshort param0, jbyte param1)
ARITYn(jshort, invokePS__SJSJ, return ((jshort (*) (jshort, intptr_t, jshort))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2), jshort param0, jlong param1, jshort param2)
ARITYn(jshort, invokeJS__SSIJJ, return ((jshort (*) (jshort, jshort, jint, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3), jshort param0, jshort param1, jint param2, jlong param3)
ARITYn(jshort, invokeS__SSSSJ, return ((jshort (*) (jshort, jshort, jshort, jshort))(intptr_t)__functionAddress)(param0, param1, param2, param3), jshort param0, jshort param1, jshort param2, jshort param3)
ARITYn(jshort, invokeJPS__SSSZIJJJ, return ((jshort (*) (jshort, jshort, jshort, jboolean, jint, jlong, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, (intptr_t)param6), jshort param0, jshort param1, jshort param2, jboolean param3, jint param4, jlong param5, jlong param6)
ARITYn(jshort, invokeS__SSZJ, return ((jshort (*) (jshort, jshort, jboolean))(intptr_t)__functionAddress)(param0, param1, param2), jshort param0, jshort param1, jboolean param2)
ARITYn(jshort, invokeJPS__SSZSIJJJ, return ((jshort (*) (jshort, jshort, jboolean, jshort, jint, jlong, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, (intptr_t)param6), jshort param0, jshort param1, jboolean param2, jshort param3, jint param4, jlong param5, jlong param6)
ARITYn(jshort, invokeS__SZJ, return ((jshort (*) (jshort, jboolean))(intptr_t)__functionAddress)(param0, param1), jshort param0, jboolean param1)
ARITYn(jshort, invokeJPS__SZSIJJJ, return ((jshort (*) (jshort, jboolean, jshort, jint, jlong, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, (intptr_t)param5), jshort param0, jboolean param1, jshort param2, jint param3, jlong param4, jlong param5)
ARITY0(void, invokeV__J, ((void (*) ())(intptr_t)__functionAddress)())
ARITYn(void, invokePV__BJJ, ((void (*) (jbyte, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jbyte param0, jlong param1)
ARITYn(void, invokePV__BJIIJ, ((void (*) (jbyte, intptr_t, jint, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, param3), jbyte param0, jlong param1, jint param2, jint param3)
ARITYn(void, invokeV__BSBIIJ, ((void (*) (jbyte, jshort, jbyte, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jbyte param0, jshort param1, jbyte param2, jint param3, jint param4)
ARITYn(void, invokeV__BSIJ, ((void (*) (jbyte, jshort, jint))(intptr_t)__functionAddress)(param0, param1, param2), jbyte param0, jshort param1, jint param2)
ARITYn(void, invokeV__BSIIJ, ((void (*) (jbyte, jshort, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3), jbyte param0, jshort param1, jint param2, jint param3)
ARITYn(void, invokeV__BSSIJ, ((void (*) (jbyte, jshort, jshort, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3), jbyte param0, jshort param1, jshort param2, jint param3)
ARITYn(void, invokeV__BZJ, ((void (*) (jbyte, jboolean))(intptr_t)__functionAddress)(param0, param1), jbyte param0, jboolean param1)
ARITYn(void, invokeV__DJ, ((void (*) (jdouble))(intptr_t)__functionAddress)(param0), jdouble param0)
ARITYn(void, invokeV__FJ, ((void (*) (jfloat))(intptr_t)__functionAddress)(param0), jfloat param0)
ARITYn(void, invokeV__IJ, ((void (*) (jint))(intptr_t)__functionAddress)(param0), jint param0)
ARITYn(void, invokeV__IFJ, ((void (*) (jint, jfloat))(intptr_t)__functionAddress)(param0, param1), jint param0, jfloat param1)
ARITYn(void, invokeV__IFFFJ, ((void (*) (jint, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jfloat param1, jfloat param2, jfloat param3)
ARITYn(void, invokeV__IIJ, ((void (*) (jint, jint))(intptr_t)__functionAddress)(param0, param1), jint param0, jint param1)
ARITYn(void, invokeV__IIDJ, ((void (*) (jint, jint, jdouble))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jint param1, jdouble param2)
ARITYn(void, invokeV__IIDDDJ, ((void (*) (jint, jint, jdouble, jdouble, jdouble))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jint param1, jdouble param2, jdouble param3, jdouble param4)
ARITYn(void, invokeV__IIFJ, ((void (*) (jint, jint, jfloat))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jint param1, jfloat param2)
ARITYn(void, invokeV__IIFFFJ, ((void (*) (jint, jint, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jint param1, jfloat param2, jfloat param3, jfloat param4)
ARITYn(void, invokeV__IIIJ, ((void (*) (jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jint param1, jint param2)
ARITYn(void, invokeV__IIIIJ, ((void (*) (jint, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jint param1, jint param2, jint param3)
ARITYn(void, invokeV__IIIIIJ, ((void (*) (jint, jint, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jint param1, jint param2, jint param3, jint param4)
ARITYn(void, invokePV__IIJJ, ((void (*) (jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2), jint param0, jint param1, jlong param2)
ARITYn(void, invokeJV__IIJJ, ((void (*) (jint, jint, jlong))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jint param1, jlong param2)
ARITYn(void, invokePV__IIJIIJ, ((void (*) (jint, jint, intptr_t, jint, jint))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, param4), jint param0, jint param1, jlong param2, jint param3, jint param4)
ARITYn(void, invokePPPV__IIJJJJ, ((void (*) (jint, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4), jint param0, jint param1, jlong param2, jlong param3, jlong param4)
ARITYn(void, invokeJJJV__IIJJJJ, ((void (*) (jint, jint, jlong, jlong, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jint param1, jlong param2, jlong param3, jlong param4)
ARITYn(void, invokePV__IJJ, ((void (*) (jint, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jint param0, jlong param1)
ARITYn(void, invokePPPPPV__IJIJJJIJIZJ, ((void (*) (jint, intptr_t, jint, intptr_t, intptr_t, intptr_t, jint, intptr_t, jint, jboolean))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, param6, (intptr_t)param7, param8, param9), jint param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jint param6, jlong param7, jint param8, jboolean param9)
ARITYn(void, invokePPPV__IJJJJ, ((void (*) (jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3), jint param0, jlong param1, jlong param2, jlong param3)
ARITYn(void, invokeV__ISJ, ((void (*) (jint, jshort))(intptr_t)__functionAddress)(param0, param1), jint param0, jshort param1)
ARITYn(void, invokePV__JJ, ((void (*) (intptr_t))(intptr_t)__functionAddress)((intptr_t)param0), jlong param0)
ARITYn(void, invokePV__JBJ, ((void (*) (intptr_t, jbyte))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jbyte param1)
ARITYn(void, invokePPV__JBJIIJ, ((void (*) (intptr_t, jbyte, intptr_t, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, param4), jlong param0, jbyte param1, jlong param2, jint param3, jint param4)
ARITYn(void, invokePV__JBSBIIJ, ((void (*) (intptr_t, jbyte, jshort, jbyte, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5), jlong param0, jbyte param1, jshort param2, jbyte param3, jint param4, jint param5)
ARITYn(void, invokePV__JBSIJ, ((void (*) (intptr_t, jbyte, jshort, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3), jlong param0, jbyte param1, jshort param2, jint param3)
ARITYn(void, invokePV__JBSIIJ, ((void (*) (intptr_t, jbyte, jshort, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4), jlong param0, jbyte param1, jshort param2, jint param3, jint param4)
ARITYn(void, invokePV__JBSSIJ, ((void (*) (intptr_t, jbyte, jshort, jshort, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4), jlong param0, jbyte param1, jshort param2, jshort param3, jint param4)
ARITYn(void, invokePV__JDDJ, ((void (*) (intptr_t, jdouble, jdouble))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jdouble param1, jdouble param2)
ARITYn(void, invokePV__JFJ, ((void (*) (intptr_t, jfloat))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jfloat param1)
ARITYn(void, invokePV__JFFJ, ((void (*) (intptr_t, jfloat, jfloat))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jfloat param1, jfloat param2)
ARITYn(void, invokePPV__JFJIIJ, ((void (*) (intptr_t, jfloat, intptr_t, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, param4), jlong param0, jfloat param1, jlong param2, jint param3, jint param4)
ARITYn(void, invokePV__JIJ, ((void (*) (intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jint param1)
ARITYn(void, invokeJV__JIJ, ((void (*) (jlong, jint))(intptr_t)__functionAddress)(param0, param1), jlong param0, jint param1)
ARITYn(void, invokePV__JIBIZZJ, ((void (*) (intptr_t, jint, jbyte, jint, jboolean, jboolean))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5), jlong param0, jint param1, jbyte param2, jint param3, jboolean param4, jboolean param5)
ARITYn(void, invokePV__JIIJ, ((void (*) (intptr_t, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jint param1, jint param2)
ARITYn(void, invokePV__JIIIJ, ((void (*) (intptr_t, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3), jlong param0, jint param1, jint param2, jint param3)
ARITYn(void, invokePV__JIIIIJ, ((void (*) (intptr_t, jint, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4), jlong param0, jint param1, jint param2, jint param3, jint param4)
ARITYn(void, invokePV__JIIIIZJ, ((void (*) (intptr_t, jint, jint, jint, jint, jboolean))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5), jlong param0, jint param1, jint param2, jint param3, jint param4, jboolean param5)
ARITYn(void, invokePPV__JIIJJ, ((void (*) (intptr_t, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3), jlong param0, jint param1, jint param2, jlong param3)
ARITYn(void, invokePPV__JIJJ, ((void (*) (intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2), jlong param0, jint param1, jlong param2)
ARITYn(void, invokePPPV__JIJJJ, ((void (*) (intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jint param1, jlong param2, jlong param3)
ARITYn(void, invokePJJV__JIJJJ, ((void (*) (intptr_t, jint, jlong, jlong))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3), jlong param0, jint param1, jlong param2, jlong param3)
ARITYn(void, invokePPPV__JIJJIJ, ((void (*) (intptr_t, jint, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, param4), jlong param0, jint param1, jlong param2, jlong param3, jint param4)
ARITYn(void, invokePPPPPV__JIJJJJJ, ((void (*) (intptr_t, jint, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jint param1, jlong param2, jlong param3, jlong param4, jlong param5)
ARITYn(void, invokePV__JISJ, ((void (*) (intptr_t, jint, jshort))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jint param1, jshort param2)
ARITYn(void, invokePPV__JJJ, ((void (*) (intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1), jlong param0, jlong param1)
ARITYn(void, invokePPV__JJFJ, ((void (*) (intptr_t, intptr_t, jfloat))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jfloat param2)
ARITYn(void, invokePPV__JJIJ, ((void (*) (intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jint param2)
ARITYn(void, invokePJV__JJIJ, ((void (*) (intptr_t, jlong, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jlong param1, jint param2)
ARITYn(void, invokePPV__JJIIJ, ((void (*) (intptr_t, intptr_t, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3), jlong param0, jlong param1, jint param2, jint param3)
ARITYn(void, invokePPV__JJIIIIIJ, ((void (*) (intptr_t, intptr_t, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, param4, param5, param6), jlong param0, jlong param1, jint param2, jint param3, jint param4, jint param5, jint param6)
ARITYn(void, invokePPPV__JJIIIJIZJ, ((void (*) (intptr_t, intptr_t, jint, jint, jint, intptr_t, jint, jboolean))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, param4, (intptr_t)param5, param6, param7), jlong param0, jlong param1, jint param2, jint param3, jint param4, jlong param5, jint param6, jboolean param7)
ARITYn(void, invokePPPV__JJIJSJ, ((void (*) (intptr_t, intptr_t, jint, intptr_t, jshort))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, param4), jlong param0, jlong param1, jint param2, jlong param3, jshort param4)
ARITYn(void, invokePPPV__JJJJ, ((void (*) (intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2), jlong param0, jlong param1, jlong param2)
ARITYn(void, invokePPPV__JJJIJ, ((void (*) (intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3), jlong param0, jlong param1, jlong param2, jint param3)
ARITYn(void, invokePJPV__JJJIJ, ((void (*) (intptr_t, jlong, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3), jlong param0, jlong param1, jlong param2, jint param3)
ARITYn(void, invokePPPV__JJJIZZJ, ((void (*) (intptr_t, intptr_t, intptr_t, jint, jboolean, jboolean))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3, param4, param5), jlong param0, jlong param1, jlong param2, jint param3, jboolean param4, jboolean param5)
ARITYn(void, invokePPPPV__JJJJJ, ((void (*) (intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jlong param1, jlong param2, jlong param3)
ARITYn(void, invokePPPPV__JJJJIJ, ((void (*) (intptr_t, intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, param4), jlong param0, jlong param1, jlong param2, jlong param3, jint param4)
ARITYn(void, invokePPPPPV__JJJJJJ, ((void (*) (intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4)
ARITYn(void, invokePPPV__JJJZZJ, ((void (*) (intptr_t, intptr_t, intptr_t, jboolean, jboolean))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3, param4), jlong param0, jlong param1, jlong param2, jboolean param3, jboolean param4)
ARITYn(void, invokePPPV__JJSIJJ, ((void (*) (intptr_t, intptr_t, jshort, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, (intptr_t)param4), jlong param0, jlong param1, jshort param2, jint param3, jlong param4)
ARITYn(void, invokePPPPV__JJSJJJ, ((void (*) (intptr_t, intptr_t, jshort, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jlong param1, jshort param2, jlong param3, jlong param4)
ARITYn(void, invokePPV__JJZJ, ((void (*) (intptr_t, intptr_t, jboolean))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jboolean param2)
ARITYn(void, invokePV__JSJ, ((void (*) (intptr_t, jshort))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jshort param1)
ARITYn(void, invokePV__JSIIJ, ((void (*) (intptr_t, jshort, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3), jlong param0, jshort param1, jint param2, jint param3)
ARITYn(void, invokePPV__JSJSJ, ((void (*) (intptr_t, jshort, intptr_t, jshort))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3), jlong param0, jshort param1, jlong param2, jshort param3)
ARITYn(void, invokePV__JSSBSSSSBSSSSSSJ, ((void (*) (intptr_t, jshort, jshort, jbyte, jshort, jshort, jshort, jshort, jbyte, jshort, jshort, jshort, jshort, jshort, jshort))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14), jlong param0, jshort param1, jshort param2, jbyte param3, jshort param4, jshort param5, jshort param6, jshort param7, jbyte param8, jshort param9, jshort param10, jshort param11, jshort param12, jshort param13, jshort param14)
ARITYn(void, invokePV__JSSIIIBJ, ((void (*) (intptr_t, jshort, jshort, jint, jint, jint, jbyte))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, param6), jlong param0, jshort param1, jshort param2, jint param3, jint param4, jint param5, jbyte param6)
ARITYn(void, invokePV__JSSIZJ, ((void (*) (intptr_t, jshort, jshort, jint, jboolean))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4), jlong param0, jshort param1, jshort param2, jint param3, jboolean param4)
ARITYn(void, invokePV__JSSSIZJ, ((void (*) (intptr_t, jshort, jshort, jshort, jint, jboolean))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5), jlong param0, jshort param1, jshort param2, jshort param3, jint param4, jboolean param5)
ARITYn(void, invokePV__JSSSSSBJ, ((void (*) (intptr_t, jshort, jshort, jshort, jshort, jshort, jbyte))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, param6), jlong param0, jshort param1, jshort param2, jshort param3, jshort param4, jshort param5, jbyte param6)
ARITYn(void, invokePV__JSSSSSIZJ, ((void (*) (intptr_t, jshort, jshort, jshort, jshort, jshort, jint, jboolean))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, param6, param7), jlong param0, jshort param1, jshort param2, jshort param3, jshort param4, jshort param5, jint param6, jboolean param7)
ARITYn(void, invokePV__JSSSZZSIJ, ((void (*) (intptr_t, jshort, jshort, jshort, jboolean, jboolean, jshort, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, param6, param7), jlong param0, jshort param1, jshort param2, jshort param3, jboolean param4, jboolean param5, jshort param6, jint param7)
ARITYn(void, invokePV__JSZJ, ((void (*) (intptr_t, jshort, jboolean))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jshort param1, jboolean param2)
ARITYn(void, invokePPPV__JZIJJIJ, ((void (*) (intptr_t, jboolean, jint, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3, (intptr_t)param4, param5), jlong param0, jboolean param1, jint param2, jlong param3, jlong param4, jint param5)
ARITYn(void, invokeV__SJ, ((void (*) (jshort))(intptr_t)__functionAddress)(param0), jshort param0)
ARITYn(void, invokePV__SBSSSSSSJJ, ((void (*) (jshort, jbyte, jshort, jshort, jshort, jshort, jshort, jshort, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)param8), jshort param0, jbyte param1, jshort param2, jshort param3, jshort param4, jshort param5, jshort param6, jshort param7, jlong param8)
ARITYn(void, invokeV__SIJ, ((void (*) (jshort, jint))(intptr_t)__functionAddress)(param0, param1), jshort param0, jint param1)
ARITYn(void, invokeV__SIIJ, ((void (*) (jshort, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2), jshort param0, jint param1, jint param2)
ARITYn(void, invokePV__SIJJ, ((void (*) (jshort, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2), jshort param0, jint param1, jlong param2)
ARITYn(void, invokePV__SJJ, ((void (*) (jshort, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jshort param0, jlong param1)
ARITYn(void, invokePV__SJIJ, ((void (*) (jshort, intptr_t, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2), jshort param0, jlong param1, jint param2)
ARITYn(void, invokePPV__SJJJ, ((void (*) (jshort, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2), jshort param0, jlong param1, jlong param2)
ARITYn(void, invokePPPV__SJJBJJ, ((void (*) (jshort, intptr_t, intptr_t, jbyte, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, param3, (intptr_t)param4), jshort param0, jlong param1, jlong param2, jbyte param3, jlong param4)
ARITYn(void, invokePV__SJSJ, ((void (*) (jshort, intptr_t, jshort))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2), jshort param0, jlong param1, jshort param2)
ARITYn(void, invokeV__SSJ, ((void (*) (jshort, jshort))(intptr_t)__functionAddress)(param0, param1), jshort param0, jshort param1)
ARITYn(void, invokePV__SSBBSSSSJSJ, ((void (*) (jshort, jshort, jbyte, jbyte, jshort, jshort, jshort, jshort, intptr_t, jshort))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)param8, param9), jshort param0, jshort param1, jbyte param2, jbyte param3, jshort param4, jshort param5, jshort param6, jshort param7, jlong param8, jshort param9)
ARITYn(void, invokePV__SSBJJ, ((void (*) (jshort, jshort, jbyte, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3), jshort param0, jshort param1, jbyte param2, jlong param3)
ARITYn(void, invokePPV__SSBJJJ, ((void (*) (jshort, jshort, jbyte, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, (intptr_t)param4), jshort param0, jshort param1, jbyte param2, jlong param3, jlong param4)
ARITYn(void, invokeV__SSBSSSSBSSSSSSJ, ((void (*) (jshort, jshort, jbyte, jshort, jshort, jshort, jshort, jbyte, jshort, jshort, jshort, jshort, jshort, jshort))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13), jshort param0, jshort param1, jbyte param2, jshort param3, jshort param4, jshort param5, jshort param6, jbyte param7, jshort param8, jshort param9, jshort param10, jshort param11, jshort param12, jshort param13)
ARITYn(void, invokePV__SSBSSSSJSJ, ((void (*) (jshort, jshort, jbyte, jshort, jshort, jshort, jshort, intptr_t, jshort))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7, param8), jshort param0, jshort param1, jbyte param2, jshort param3, jshort param4, jshort param5, jshort param6, jlong param7, jshort param8)
ARITYn(void, invokeV__SSFBBBBBBBBBJ, ((void (*) (jshort, jshort, jfloat, jbyte, jbyte, jbyte, jbyte, jbyte, jbyte, jbyte, jbyte, jbyte))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11), jshort param0, jshort param1, jfloat param2, jbyte param3, jbyte param4, jbyte param5, jbyte param6, jbyte param7, jbyte param8, jbyte param9, jbyte param10, jbyte param11)
ARITYn(void, invokeV__SSIFBJ, ((void (*) (jshort, jshort, jint, jfloat, jbyte))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jshort param0, jshort param1, jint param2, jfloat param3, jbyte param4)
ARITYn(void, invokeV__SSIIIBJ, ((void (*) (jshort, jshort, jint, jint, jint, jbyte))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jshort param0, jshort param1, jint param2, jint param3, jint param4, jbyte param5)
ARITYn(void, invokeV__SSIZJ, ((void (*) (jshort, jshort, jint, jboolean))(intptr_t)__functionAddress)(param0, param1, param2, param3), jshort param0, jshort param1, jint param2, jboolean param3)
ARITYn(void, invokePV__SSJJ, ((void (*) (jshort, jshort, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2), jshort param0, jshort param1, jlong param2)
ARITYn(void, invokeV__SSSIJ, ((void (*) (jshort, jshort, jshort, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3), jshort param0, jshort param1, jshort param2, jint param3)
ARITYn(void, invokeV__SSSIZJ, ((void (*) (jshort, jshort, jshort, jint, jboolean))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jshort param0, jshort param1, jshort param2, jint param3, jboolean param4)
ARITYn(void, invokePV__SSSSJSJ, ((void (*) (jshort, jshort, jshort, jshort, intptr_t, jshort))(intptr_t)__functionAddress)(param0, param1, param2, param3, (intptr_t)param4, param5), jshort param0, jshort param1, jshort param2, jshort param3, jlong param4, jshort param5)
ARITYn(void, invokeV__SSSSSJ, ((void (*) (jshort, jshort, jshort, jshort, jshort))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jshort param0, jshort param1, jshort param2, jshort param3, jshort param4)
ARITYn(void, invokeV__SSSSSBJ, ((void (*) (jshort, jshort, jshort, jshort, jshort, jbyte))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jshort param0, jshort param1, jshort param2, jshort param3, jshort param4, jbyte param5)
ARITYn(void, invokeV__SSSSSIZJ, ((void (*) (jshort, jshort, jshort, jshort, jshort, jint, jboolean))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6), jshort param0, jshort param1, jshort param2, jshort param3, jshort param4, jint param5, jboolean param6)
ARITYn(void, invokeV__SZJ, ((void (*) (jshort, jboolean))(intptr_t)__functionAddress)(param0, param1), jshort param0, jboolean param1)
ARITY0(jboolean, invokeZ__J, return ((jboolean (*) ())(intptr_t)__functionAddress)())
ARITYn(jboolean, invokeZ__IJ, return ((jboolean (*) (jint))(intptr_t)__functionAddress)(param0), jint param0)
ARITYn(jboolean, invokePZ__JJ, return ((jboolean (*) (intptr_t))(intptr_t)__functionAddress)((intptr_t)param0), jlong param0)
ARITYn(jboolean, invokePZ__JIJ, return ((jboolean (*) (intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jint param1)
ARITYn(jboolean, invokePZ__JIIIJ, return ((jboolean (*) (intptr_t, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3), jlong param0, jint param1, jint param2, jint param3)
ARITYn(jboolean, invokePPZ__JJJ, return ((jboolean (*) (intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1), jlong param0, jlong param1)
ARITYn(jboolean, invokePPPZ__JJIJIJ, return ((jboolean (*) (intptr_t, intptr_t, jint, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, param4), jlong param0, jlong param1, jint param2, jlong param3, jint param4)
ARITYn(jboolean, invokePPPPZ__JJJBJJ, return ((jboolean (*) (intptr_t, intptr_t, intptr_t, jbyte, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3, (intptr_t)param4), jlong param0, jlong param1, jlong param2, jbyte param3, jlong param4)
ARITYn(jboolean, invokePPPZ__JJJIJ, return ((jboolean (*) (intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3), jlong param0, jlong param1, jlong param2, jint param3)
ARITYn(jboolean, invokePJPZ__JJJIJ, return ((jboolean (*) (intptr_t, jlong, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3), jlong param0, jlong param1, jlong param2, jint param3)
ARITYn(jboolean, invokePPPPZ__JJJJJ, return ((jboolean (*) (intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jlong param1, jlong param2, jlong param3)
ARITYn(jboolean, invokePPPPPZ__JJJJJIJ, return ((jboolean (*) (intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, param5), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jint param5)
ARITYn(jboolean, invokePPPPPZ__JJJJJZIJ, return ((jboolean (*) (intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, jboolean, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, param5, param6), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jboolean param5, jint param6)
ARITYn(jboolean, invokePPPZ__JJJZIJ, return ((jboolean (*) (intptr_t, intptr_t, intptr_t, jboolean, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3, param4), jlong param0, jlong param1, jlong param2, jboolean param3, jint param4)
ARITYn(jboolean, invokeJZ__SZSIJJ, return ((jboolean (*) (jshort, jboolean, jshort, jint, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jshort param0, jboolean param1, jshort param2, jint param3, jlong param4)
ARITY0(jfloat, callF__J, return ((jfloat (APIENTRY *) ())(intptr_t)__functionAddress)())
ARITYn(jfloat, callF__IIIJ, return ((jfloat (APIENTRY *) (jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jint param1, jint param2)
ARITYn(jfloat, callPF__IIJJ, return ((jfloat (APIENTRY *) (jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2), jint param0, jint param1, jlong param2)
ARITYn(jfloat, callPPPF__JJJJ, return ((jfloat (APIENTRY *) (intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2), jlong param0, jlong param1, jlong param2)
ARITY0(jint, callI__J, return ((jint (APIENTRY *) ())(intptr_t)__functionAddress)())
ARITYn(jint, callI__IJ, return ((jint (APIENTRY *) (jint))(intptr_t)__functionAddress)(param0), jint param0)
ARITYn(jint, callI__IFJ, return ((jint (APIENTRY *) (jint, jfloat))(intptr_t)__functionAddress)(param0, param1), jint param0, jfloat param1)
ARITYn(jint, callI__IIJ, return ((jint (APIENTRY *) (jint, jint))(intptr_t)__functionAddress)(param0, param1), jint param0, jint param1)
ARITYn(jint, callPI__IIFFJJ, return ((jint (APIENTRY *) (jint, jint, jfloat, jfloat, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, (intptr_t)param4), jint param0, jint param1, jfloat param2, jfloat param3, jlong param4)
ARITYn(jint, callI__IIIJ, return ((jint (APIENTRY *) (jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jint param1, jint param2)
ARITYn(jint, callPI__IIIIIJJ, return ((jint (APIENTRY *) (jint, jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, (intptr_t)param5), jint param0, jint param1, jint param2, jint param3, jint param4, jlong param5)
ARITYn(jint, callPI__IIIIJJ, return ((jint (APIENTRY *) (jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, (intptr_t)param4), jint param0, jint param1, jint param2, jint param3, jlong param4)
ARITYn(jint, callPI__IIIJJ, return ((jint (APIENTRY *) (jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3), jint param0, jint param1, jint param2, jlong param3)
ARITYn(jint, callPPI__IIIJIJJ, return ((jint (APIENTRY *) (jint, jint, jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, param4, (intptr_t)param5), jint param0, jint param1, jint param2, jlong param3, jint param4, jlong param5)
ARITYn(jint, callPI__IIJJ, return ((jint (APIENTRY *) (jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2), jint param0, jint param1, jlong param2)
ARITYn(jint, callPI__IIJIIIIFJ, return ((jint (APIENTRY *) (jint, jint, intptr_t, jint, jint, jint, jint, jfloat))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, param4, param5, param6, param7), jint param0, jint param1, jlong param2, jint param3, jint param4, jint param5, jint param6, jfloat param7)
ARITYn(jint, callPPI__IIJIJJ, return ((jint (APIENTRY *) (jint, jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, (intptr_t)param4), jint param0, jint param1, jlong param2, jint param3, jlong param4)
ARITYn(jint, callPPJI__IIJIJZJJ, return ((jint (APIENTRY *) (jint, jint, intptr_t, jint, intptr_t, jboolean, jlong))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, (intptr_t)param4, param5, param6), jint param0, jint param1, jlong param2, jint param3, jlong param4, jboolean param5, jlong param6)
ARITYn(jint, callPPI__IIJJJ, return ((jint (APIENTRY *) (jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3), jint param0, jint param1, jlong param2, jlong param3)
ARITYn(jint, callPPI__IIJJIIIIFJ, return ((jint (APIENTRY *) (jint, jint, intptr_t, intptr_t, jint, jint, jint, jint, jfloat))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, param4, param5, param6, param7, param8), jint param0, jint param1, jlong param2, jlong param3, jint param4, jint param5, jint param6, jint param7, jfloat param8)
ARITYn(jint, callJPPPPI__IIJJIJJJJ, return ((jint (APIENTRY *) (jint, jint, jlong, intptr_t, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7), jint param0, jint param1, jlong param2, jlong param3, jint param4, jlong param5, jlong param6, jlong param7)
ARITYn(jint, callPPPI__IIJJJJ, return ((jint (APIENTRY *) (jint, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4), jint param0, jint param1, jlong param2, jlong param3, jlong param4)
ARITYn(jint, callPPPPPI__IIJJJJJJ, return ((jint (APIENTRY *) (jint, jint, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6), jint param0, jint param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6)
ARITYn(jint, callPPPPPPI__IIJJJJJJJ, return ((jint (APIENTRY *) (jint, jint, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7), jint param0, jint param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7)
ARITYn(jint, callJI__IJJ, return ((jint (APIENTRY *) (jint, jlong))(intptr_t)__functionAddress)(param0, param1), jint param0, jlong param1)
ARITYn(jint, callPI__IJJ, return ((jint (APIENTRY *) (jint, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jint param0, jlong param1)
ARITYn(jint, callPI__IJIJ, return ((jint (APIENTRY *) (jint, intptr_t, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2), jint param0, jlong param1, jint param2)
ARITYn(jint, callPI__IJIIJ, return ((jint (APIENTRY *) (jint, intptr_t, jint, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, param3), jint param0, jlong param1, jint param2, jint param3)
ARITYn(jint, callPI__IJIIFIJ, return ((jint (APIENTRY *) (jint, intptr_t, jint, jint, jfloat, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, param3, param4, param5), jint param0, jlong param1, jint param2, jint param3, jfloat param4, jint param5)
ARITYn(jint, callPPI__IJJJ, return ((jint (APIENTRY *) (jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2), jint param0, jlong param1, jlong param2)
ARITYn(jint, callJJI__IJJJ, return ((jint (APIENTRY *) (jint, jlong, jlong))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jlong param1, jlong param2)
ARITYn(jint, callPPI__IJJIJ, return ((jint (APIENTRY *) (jint, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, param3), jint param0, jlong param1, jlong param2, jint param3)
ARITYn(jint, callPI__JJ, return ((jint (APIENTRY *) (intptr_t))(intptr_t)__functionAddress)((intptr_t)param0), jlong param0)
ARITYn(jint, callJI__JJ, return ((jint (APIENTRY *) (jlong))(intptr_t)__functionAddress)(param0), jlong param0)
ARITYn(jint, callJI__JFJ, return ((jint (APIENTRY *) (jlong, jfloat))(intptr_t)__functionAddress)(param0, param1), jlong param0, jfloat param1)
ARITYn(jint, callPI__JFJ, return ((jint (APIENTRY *) (intptr_t, jfloat))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jfloat param1)
ARITYn(jint, callJI__JFFJ, return ((jint (APIENTRY *) (jlong, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2), jlong param0, jfloat param1, jfloat param2)
ARITYn(jint, callJI__JFFFJ, return ((jint (APIENTRY *) (jlong, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3), jlong param0, jfloat param1, jfloat param2, jfloat param3)
ARITYn(jint, callJJI__JFFFFJJ, return ((jint (APIENTRY *) (jlong, jfloat, jfloat, jfloat, jfloat, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jlong param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jlong param5)
ARITYn(jint, callJI__JIJ, return ((jint (APIENTRY *) (jlong, jint))(intptr_t)__functionAddress)(param0, param1), jlong param0, jint param1)
ARITYn(jint, callPI__JIJ, return ((jint (APIENTRY *) (intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jint param1)
ARITYn(jint, callJPJI__JIFJIJJ, return ((jint (APIENTRY *) (jlong, jint, jfloat, intptr_t, jint, jlong))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, param4, param5), jlong param0, jint param1, jfloat param2, jlong param3, jint param4, jlong param5)
ARITYn(jint, callPI__JIIJ, return ((jint (APIENTRY *) (intptr_t, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jint param1, jint param2)
ARITYn(jint, callPI__JIIIIJ, return ((jint (APIENTRY *) (intptr_t, jint, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4), jlong param0, jint param1, jint param2, jint param3, jint param4)
ARITYn(jint, callPI__JIIIIIIJ, return ((jint (APIENTRY *) (intptr_t, jint, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, param6), jlong param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6)
ARITYn(jint, callPPI__JIIIIIIJJ, return ((jint (APIENTRY *) (intptr_t, jint, jint, jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7), jlong param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jlong param7)
ARITYn(jint, callPPI__JIIIIIIJIIIIIIIIIJ, return ((jint (APIENTRY *) (intptr_t, jint, jint, jint, jint, jint, jint, intptr_t, jint, jint, jint, jint, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7, param8, param9, param10, param11, param12, param13, param14, param15, param16), jlong param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jlong param7, jint param8, jint param9, jint param10, jint param11, jint param12, jint param13, jint param14, jint param15, jint param16)
ARITYn(jint, callPPI__JIIIIIJJ, return ((jint (APIENTRY *) (intptr_t, jint, jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, (intptr_t)param6), jlong param0, jint param1, jint param2, jint param3, jint param4, jint param5, jlong param6)
ARITYn(jint, callPPI__JIIIJJ, return ((jint (APIENTRY *) (intptr_t, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, (intptr_t)param4), jlong param0, jint param1, jint param2, jint param3, jlong param4)
ARITYn(jint, callPPPI__JIIIJJJ, return ((jint (APIENTRY *) (intptr_t, jint, jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jint param1, jint param2, jint param3, jlong param4, jlong param5)
ARITYn(jint, callPPI__JIIJJ, return ((jint (APIENTRY *) (intptr_t, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3), jlong param0, jint param1, jint param2, jlong param3)
ARITYn(jint, callPJI__JIIJJ, return ((jint (APIENTRY *) (intptr_t, jint, jint, jlong))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3), jlong param0, jint param1, jint param2, jlong param3)
ARITYn(jint, callJPJI__JIIJIJJ, return ((jint (APIENTRY *) (jlong, jint, jint, intptr_t, jint, jlong))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, param4, param5), jlong param0, jint param1, jint param2, jlong param3, jint param4, jlong param5)
ARITYn(jint, callJPPJI__JIIJIJJJ, return ((jint (APIENTRY *) (jlong, jint, jint, intptr_t, jint, intptr_t, jlong))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, param4, (intptr_t)param5, param6), jlong param0, jint param1, jint param2, jlong param3, jint param4, jlong param5, jlong param6)
ARITYn(jint, callJPPJI__JIIJIJZJJ, return ((jint (APIENTRY *) (jlong, jint, jint, intptr_t, jint, intptr_t, jboolean, jlong))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, param4, (intptr_t)param5, param6, param7), jlong param0, jint param1, jint param2, jlong param3, jint param4, jlong param5, jboolean param6, jlong param7)
ARITYn(jint, callPPPPI__JIIJJJJ, return ((jint (APIENTRY *) (intptr_t, jint, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jint param1, jint param2, jlong param3, jlong param4, jlong param5)
ARITYn(jint, callPJI__JIJJ, return ((jint (APIENTRY *) (intptr_t, jint, jlong))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jint param1, jlong param2)
ARITYn(jint, callJPI__JIJJ, return ((jint (APIENTRY *) (jlong, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2), jlong param0, jint param1, jlong param2)
ARITYn(jint, callPPI__JIJJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2), jlong param0, jint param1, jlong param2)
ARITYn(jint, callJPI__JIJFJ, return ((jint (APIENTRY *) (jlong, jint, intptr_t, jfloat))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3), jlong param0, jint param1, jlong param2, jfloat param3)
ARITYn(jint, callPPI__JIJIJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3), jlong param0, jint param1, jlong param2, jint param3)
ARITYn(jint, callPPPPI__JIJIIJJJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, param4, (intptr_t)param5, (intptr_t)param6), jlong param0, jint param1, jlong param2, jint param3, jint param4, jlong param5, jlong param6)
ARITYn(jint, callPPJI__JIJIJJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, jint, jlong))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, param4), jlong param0, jint param1, jlong param2, jint param3, jlong param4)
ARITYn(jint, callPPPI__JIJIJJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, (intptr_t)param4), jlong param0, jint param1, jlong param2, jint param3, jlong param4)
ARITYn(jint, callJPPI__JIJIJIJ, return ((jint (APIENTRY *) (jlong, jint, intptr_t, jint, intptr_t, jint))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, (intptr_t)param4, param5), jlong param0, jint param1, jlong param2, jint param3, jlong param4, jint param5)
ARITYn(jint, callPPPPPI__JIJIJIJJJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, jint, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, (intptr_t)param4, param5, (intptr_t)param6, (intptr_t)param7), jlong param0, jint param1, jlong param2, jint param3, jlong param4, jint param5, jlong param6, jlong param7)
ARITYn(jint, callPPPPI__JIJIJJJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jint param1, jlong param2, jint param3, jlong param4, jlong param5)
ARITYn(jint, callPPJI__JIJJJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, jlong))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3), jlong param0, jint param1, jlong param2, jlong param3)
ARITYn(jint, callJPPI__JIJJJ, return ((jint (APIENTRY *) (jlong, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jint param1, jlong param2, jlong param3)
ARITYn(jint, callPJPI__JIJJJ, return ((jint (APIENTRY *) (intptr_t, jint, jlong, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3), jlong param0, jint param1, jlong param2, jlong param3)
ARITYn(jint, callPPPI__JIJJJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jint param1, jlong param2, jlong param3)
ARITYn(jint, callJPPI__JIJJIJ, return ((jint (APIENTRY *) (jlong, jint, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, param4), jlong param0, jint param1, jlong param2, jlong param3, jint param4)
ARITYn(jint, callPPPI__JIJJIJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, param4), jlong param0, jint param1, jlong param2, jlong param3, jint param4)
ARITYn(jint, callPPJPPI__JIJJIJJJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, jlong, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, param4, (intptr_t)param5, (intptr_t)param6), jlong param0, jint param1, jlong param2, jlong param3, jint param4, jlong param5, jlong param6)
ARITYn(jint, callPPPPPPPI__JIJJIJJJJJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, intptr_t, jint, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7, (intptr_t)param8), jlong param0, jint param1, jlong param2, jlong param3, jint param4, jlong param5, jlong param6, jlong param7, jlong param8)
ARITYn(jint, callPPPPI__JIJJJJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jint param1, jlong param2, jlong param3, jlong param4)
ARITYn(jint, callJPPPI__JIJJJIJ, return ((jint (APIENTRY *) (jlong, jint, intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, param5), jlong param0, jint param1, jlong param2, jlong param3, jlong param4, jint param5)
ARITYn(jint, callPPPJPPI__JIJJJIJJJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, intptr_t, jlong, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, param4, param5, (intptr_t)param6, (intptr_t)param7), jlong param0, jint param1, jlong param2, jlong param3, jlong param4, jint param5, jlong param6, jlong param7)
ARITYn(jint, callPPPPPPI__JIJJJIJJJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, intptr_t, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, param5, (intptr_t)param6, (intptr_t)param7), jlong param0, jint param1, jlong param2, jlong param3, jlong param4, jint param5, jlong param6, jlong param7)
ARITYn(jint, callPJPPPPI__JIJJJIJJJ, return ((jint (APIENTRY *) (intptr_t, jint, jlong, intptr_t, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3, (intptr_t)param4, param5, (intptr_t)param6, (intptr_t)param7), jlong param0, jint param1, jlong param2, jlong param3, jlong param4, jint param5, jlong param6, jlong param7)
ARITYn(jint, callPPPPPI__JIJJJJJ, return ((jint (APIENTRY *) (intptr_t, jint, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jint param1, jlong param2, jlong param3, jlong param4, jlong param5)
ARITYn(jint, callJI__JIZJ, return ((jint (APIENTRY *) (jlong, jint, jboolean))(intptr_t)__functionAddress)(param0, param1, param2), jlong param0, jint param1, jboolean param2)
ARITYn(jint, callPJI__JJJ, return ((jint (APIENTRY *) (intptr_t, jlong))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jlong param1)
ARITYn(jint, callJPI__JJJ, return ((jint (APIENTRY *) (jlong, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jlong param0, jlong param1)
ARITYn(jint, callJJI__JJJ, return ((jint (APIENTRY *) (jlong, jlong))(intptr_t)__functionAddress)(param0, param1), jlong param0, jlong param1)
ARITYn(jint, callPPI__JJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1), jlong param0, jlong param1)
ARITYn(jint, callPPI__JJFJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jfloat))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jfloat param2)
ARITYn(jint, callPPI__JJIJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jint param2)
ARITYn(jint, callJPI__JJIJ, return ((jint (APIENTRY *) (jlong, intptr_t, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2), jlong param0, jlong param1, jint param2)
ARITYn(jint, callPJI__JJIJ, return ((jint (APIENTRY *) (intptr_t, jlong, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jlong param1, jint param2)
ARITYn(jint, callJPI__JJIIJ, return ((jint (APIENTRY *) (jlong, intptr_t, jint, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, param3), jlong param0, jlong param1, jint param2, jint param3)
ARITYn(jint, callPPI__JJIIJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3), jlong param0, jlong param1, jint param2, jint param3)
ARITYn(jint, callPPI__JJIIIJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, param4), jlong param0, jlong param1, jint param2, jint param3, jint param4)
ARITYn(jint, callJPI__JJIIIJ, return ((jint (APIENTRY *) (jlong, intptr_t, jint, jint, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, param3, param4), jlong param0, jlong param1, jint param2, jint param3, jint param4)
ARITYn(jint, callPPI__JJIIIIJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, param4, param5), jlong param0, jlong param1, jint param2, jint param3, jint param4, jint param5)
ARITYn(jint, callPPPI__JJIIIIJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, param4, param5, (intptr_t)param6), jlong param0, jlong param1, jint param2, jint param3, jint param4, jint param5, jlong param6)
ARITYn(jint, callPPPI__JJIIIJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, param4, (intptr_t)param5), jlong param0, jlong param1, jint param2, jint param3, jint param4, jlong param5)
ARITYn(jint, callPJPPI__JJIIJJJ, return ((jint (APIENTRY *) (intptr_t, jlong, jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jlong param1, jint param2, jint param3, jlong param4, jlong param5)
ARITYn(jint, callPPPPI__JJIIJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jlong param1, jint param2, jint param3, jlong param4, jlong param5)
ARITYn(jint, callPJPPJI__JJIIJJJIJ, return ((jint (APIENTRY *) (intptr_t, jlong, jint, jint, intptr_t, intptr_t, jlong, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5, param6, param7), jlong param0, jlong param1, jint param2, jint param3, jlong param4, jlong param5, jlong param6, jint param7)
ARITYn(jint, callPJPI__JJIJJ, return ((jint (APIENTRY *) (intptr_t, jlong, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3), jlong param0, jlong param1, jint param2, jlong param3)
ARITYn(jint, callPPJI__JJIJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, jlong))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3), jlong param0, jlong param1, jint param2, jlong param3)
ARITYn(jint, callJPJI__JJIJJ, return ((jint (APIENTRY *) (jlong, intptr_t, jint, jlong))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, param3), jlong param0, jlong param1, jint param2, jlong param3)
ARITYn(jint, callJPPI__JJIJJ, return ((jint (APIENTRY *) (jlong, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, (intptr_t)param3), jlong param0, jlong param1, jint param2, jlong param3)
ARITYn(jint, callPPPI__JJIJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3), jlong param0, jlong param1, jint param2, jlong param3)
ARITYn(jint, callPPJPPI__JJIJIJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, jlong, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, param4, (intptr_t)param5, (intptr_t)param6), jlong param0, jlong param1, jint param2, jlong param3, jint param4, jlong param5, jlong param6)
ARITYn(jint, callJJPPPI__JJIJIJJJ, return ((jint (APIENTRY *) (jlong, jlong, jint, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, param4, (intptr_t)param5, (intptr_t)param6), jlong param0, jlong param1, jint param2, jlong param3, jint param4, jlong param5, jlong param6)
ARITYn(jint, callPJPPI__JJIJJJ, return ((jint (APIENTRY *) (intptr_t, jlong, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jlong param1, jint param2, jlong param3, jlong param4)
ARITYn(jint, callJPPPI__JJIJJJ, return ((jint (APIENTRY *) (jlong, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jlong param1, jint param2, jlong param3, jlong param4)
ARITYn(jint, callPPPPI__JJIJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jlong param1, jint param2, jlong param3, jlong param4)
ARITYn(jint, callPJPPPI__JJIJJJJ, return ((jint (APIENTRY *) (intptr_t, jlong, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5)
ARITYn(jint, callPPPPPI__JJIJJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5)
ARITYn(jint, callPPPPPPPI__JJIJJJIJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, intptr_t, intptr_t, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, param6, (intptr_t)param7, (intptr_t)param8), jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jint param6, jlong param7, jlong param8)
ARITYn(jint, callPPPPPPPI__JJIJJJJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7), jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7)
ARITYn(jint, callPPPPPPPPPI__JJIJJJJJIJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7, param8, (intptr_t)param9, (intptr_t)param10), jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jint param8, jlong param9, jlong param10)
ARITYn(jint, callPPPPPPPPPPPPI__JJIJJJJJJJJIJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jint, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7, (intptr_t)param8, (intptr_t)param9, (intptr_t)param10, param11, (intptr_t)param12, (intptr_t)param13), jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jlong param9, jlong param10, jint param11, jlong param12, jlong param13)
ARITYn(jint, callJPPI__JJJJ, return ((jint (APIENTRY *) (jlong, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2), jlong param0, jlong param1, jlong param2)
ARITYn(jint, callPJPI__JJJJ, return ((jint (APIENTRY *) (intptr_t, jlong, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2), jlong param0, jlong param1, jlong param2)
ARITYn(jint, callPPJI__JJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jlong))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jlong param2)
ARITYn(jint, callPPPI__JJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2), jlong param0, jlong param1, jlong param2)
ARITYn(jint, callJJPI__JJJJ, return ((jint (APIENTRY *) (jlong, jlong, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2), jlong param0, jlong param1, jlong param2)
ARITYn(jint, callJJPI__JJJIJ, return ((jint (APIENTRY *) (jlong, jlong, intptr_t, jint))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3), jlong param0, jlong param1, jlong param2, jint param3)
ARITYn(jint, callJPPI__JJJIJ, return ((jint (APIENTRY *) (jlong, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, param3), jlong param0, jlong param1, jlong param2, jint param3)
ARITYn(jint, callPPPI__JJJIJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3), jlong param0, jlong param1, jlong param2, jint param3)
ARITYn(jint, callPPPPI__JJJIJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3, (intptr_t)param4), jlong param0, jlong param1, jlong param2, jint param3, jlong param4)
ARITYn(jint, callPPPPPI__JJJIJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jlong param1, jlong param2, jint param3, jlong param4, jlong param5)
ARITYn(jint, callPJJJI__JJJJJ, return ((jint (APIENTRY *) (intptr_t, jlong, jlong, jlong))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3), jlong param0, jlong param1, jlong param2, jlong param3)
ARITYn(jint, callPPPPI__JJJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jlong param1, jlong param2, jlong param3)
ARITYn(jint, callJPPPI__JJJJJ, return ((jint (APIENTRY *) (jlong, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jlong param1, jlong param2, jlong param3)
ARITYn(jint, callPJPPI__JJJJJ, return ((jint (APIENTRY *) (intptr_t, jlong, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jlong param1, jlong param2, jlong param3)
ARITYn(jint, callPJJJPI__JJJJIJJ, return ((jint (APIENTRY *) (intptr_t, jlong, jlong, jlong, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, (intptr_t)param5), jlong param0, jlong param1, jlong param2, jlong param3, jint param4, jlong param5)
ARITYn(jint, callPPPPPPPPI__JJJJIJJIJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, intptr_t, intptr_t, jint, intptr_t, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, param4, (intptr_t)param5, (intptr_t)param6, param7, (intptr_t)param8, (intptr_t)param9), jlong param0, jlong param1, jlong param2, jlong param3, jint param4, jlong param5, jlong param6, jint param7, jlong param8, jlong param9)
ARITYn(jint, callPPPPPPPI__JJJJIJJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, intptr_t, intptr_t, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7), jlong param0, jlong param1, jlong param2, jlong param3, jint param4, jlong param5, jlong param6, jlong param7)
ARITYn(jint, callPJPPPI__JJJJJJ, return ((jint (APIENTRY *) (intptr_t, jlong, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4)
ARITYn(jint, callPPPPPI__JJJJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4)
ARITYn(jint, callPPJPPI__JJJJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, jlong, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4)
ARITYn(jint, callPPPPPPPI__JJJJJIJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, param5, (intptr_t)param6, (intptr_t)param7), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jint param5, jlong param6, jlong param7)
ARITYn(jint, callPJJJJPI__JJJJJJJ, return ((jint (APIENTRY *) (intptr_t, jlong, jlong, jlong, jlong, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, (intptr_t)param5), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5)
ARITYn(jint, callPPPPPPI__JJJJJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5)
ARITYn(jint, callPPPPPPPPI__JJJJJJIJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, param6, (intptr_t)param7, (intptr_t)param8), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jint param6, jlong param7, jlong param8)
ARITYn(jint, callJPPPPPPPPI__JJJJJJJJJJ, return ((jint (APIENTRY *) (jlong, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7, (intptr_t)param8), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8)
ARITYn(jint, callPPPPPPPPPPPPI__JJJJJJJJJJIJJJ, return ((jint (APIENTRY *) (intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7, (intptr_t)param8, (intptr_t)param9, param10, (intptr_t)param11, (intptr_t)param12), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jlong param9, jint param10, jlong param11, jlong param12)
ARITYn(jint, callPI__JZJ, return ((jint (APIENTRY *) (intptr_t, jboolean))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jboolean param1)
ARITY0(jlong, callJ__J, return ((jlong (APIENTRY *) ())(intptr_t)__functionAddress)())
ARITYn(jlong, callJ__IJ, return ((jlong (APIENTRY *) (jint))(intptr_t)__functionAddress)(param0), jint param0)
ARITYn(jlong, callJ__IIJ, return ((jlong (APIENTRY *) (jint, jint))(intptr_t)__functionAddress)(param0, param1), jint param0, jint param1)
ARITYn(jlong, callPJ__IIJJ, return ((jlong (APIENTRY *) (jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2), jint param0, jint param1, jlong param2)
ARITYn(jlong, callJ__IIZIIJ, return ((jlong (APIENTRY *) (jint, jint, jboolean, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jint param1, jboolean param2, jint param3, jint param4)
ARITYn(jlong, callJJ__JJ, return ((jlong (APIENTRY *) (jlong))(intptr_t)__functionAddress)(param0), jlong param0)
ARITYn(jlong, callPJ__JJ, return ((jlong (APIENTRY *) (intptr_t))(intptr_t)__functionAddress)((intptr_t)param0), jlong param0)
ARITYn(jlong, callPPJ__JIJJ, return ((jlong (APIENTRY *) (intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2), jlong param0, jint param1, jlong param2)
ARITYn(jlong, callPPJ__JJJ, return ((jlong (APIENTRY *) (intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1), jlong param0, jlong param1)
ARITY0(jlong, callP__J, return (jlong)((intptr_t (APIENTRY *) ())(intptr_t)__functionAddress)())
ARITYn(jlong, callP__IJ, return (jlong)((intptr_t (APIENTRY *) (jint))(intptr_t)__functionAddress)(param0), jint param0)
ARITYn(jlong, callP__IFFFJ, return (jlong)((intptr_t (APIENTRY *) (jint, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jfloat param1, jfloat param2, jfloat param3)
ARITYn(jlong, callP__IIJ, return (jlong)((intptr_t (APIENTRY *) (jint, jint))(intptr_t)__functionAddress)(param0, param1), jint param0, jint param1)
ARITYn(jlong, callPPP__IIIJJJ, return (jlong)((intptr_t (APIENTRY *) (jint, jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, (intptr_t)param4), jint param0, jint param1, jint param2, jlong param3, jlong param4)
ARITYn(jlong, callPP__IJJ, return (jlong)((intptr_t (APIENTRY *) (jint, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jint param0, jlong param1)
ARITYn(jlong, callPP__IJIJ, return (jlong)((intptr_t (APIENTRY *) (jint, intptr_t, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2), jint param0, jlong param1, jint param2)
ARITYn(jlong, callPPP__IJJJ, return (jlong)((intptr_t (APIENTRY *) (jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2), jint param0, jlong param1, jlong param2)
ARITYn(jlong, callPPP__IJJIJ, return (jlong)((intptr_t (APIENTRY *) (jint, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, param3), jint param0, jlong param1, jlong param2, jint param3)
ARITYn(jlong, callPP__JJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t))(intptr_t)__functionAddress)((intptr_t)param0), jlong param0)
ARITYn(jlong, callPP__JIJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jint param1)
ARITYn(jlong, callPP__JIIJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jint param1, jint param2)
ARITYn(jlong, callPPP__JIIIJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, (intptr_t)param4), jlong param0, jint param1, jint param2, jint param3, jlong param4)
ARITYn(jlong, callPPP__JIJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2), jlong param0, jint param1, jlong param2)
ARITYn(jlong, callPPPP__JIJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jint param1, jlong param2, jlong param3)
ARITYn(jlong, callPPPPPPP__JIJJIJJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jint, intptr_t, intptr_t, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7), jlong param0, jint param1, jlong param2, jlong param3, jint param4, jlong param5, jlong param6, jlong param7)
ARITYn(jlong, callPPPPP__JIJJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jint param1, jlong param2, jlong param3, jlong param4)
ARITYn(jlong, callPPPPPP__JIJJJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jint, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jint param1, jlong param2, jlong param3, jlong param4, jlong param5)
ARITYn(jlong, callPPPPPPP__JIJJJJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jint, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6), jlong param0, jint param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6)
ARITYn(jlong, callPPP__JJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1), jlong param0, jlong param1)
ARITYn(jlong, callPPP__JJIJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jint param2)
ARITYn(jlong, callPPP__JJIIIJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, param4), jlong param0, jlong param1, jint param2, jint param3, jint param4)
ARITYn(jlong, callPJPP__JJIIIJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jlong, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, (intptr_t)param5), jlong param0, jlong param1, jint param2, jint param3, jint param4, jlong param5)
ARITYn(jlong, callPPPP__JJIIJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, (intptr_t)param4), jlong param0, jlong param1, jint param2, jint param3, jlong param4)
ARITYn(jlong, callPJPPP__JJIIJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jlong, jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jlong param1, jint param2, jint param3, jlong param4, jlong param5)
ARITYn(jlong, callPPPP__JJIJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3), jlong param0, jlong param1, jint param2, jlong param3)
ARITYn(jlong, callPJPP__JJIJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jlong, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3), jlong param0, jlong param1, jint param2, jlong param3)
ARITYn(jlong, callPPPP__JJIJIJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, jint, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, param4), jlong param0, jlong param1, jint param2, jlong param3, jint param4)
ARITYn(jlong, callPPPPP__JJIJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jlong param1, jint param2, jlong param3, jlong param4)
ARITYn(jlong, callPJPPP__JJIJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jlong, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jlong param1, jint param2, jlong param3, jlong param4)
ARITYn(jlong, callPPJPPPPPP__JJIJJJIJJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, jint, jlong, intptr_t, intptr_t, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, (intptr_t)param4, (intptr_t)param5, param6, (intptr_t)param7, (intptr_t)param8, (intptr_t)param9), jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jint param6, jlong param7, jlong param8, jlong param9)
ARITYn(jlong, callPPJPPPPPPPP__JJIJJJJJIJJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, jint, jlong, intptr_t, intptr_t, intptr_t, intptr_t, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7, param8, (intptr_t)param9, (intptr_t)param10, (intptr_t)param11), jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jint param8, jlong param9, jlong param10, jlong param11)
ARITYn(jlong, callPPPP__JJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2), jlong param0, jlong param1, jlong param2)
ARITYn(jlong, callPPPP__JJJIJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3), jlong param0, jlong param1, jlong param2, jint param3)
ARITYn(jlong, callPJPP__JJJIJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jlong, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3), jlong param0, jlong param1, jlong param2, jint param3)
ARITYn(jlong, callPJPPP__JJJIJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jlong, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, (intptr_t)param4), jlong param0, jlong param1, jlong param2, jint param3, jlong param4)
ARITYn(jlong, callPPPPP__JJJIJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3, (intptr_t)param4), jlong param0, jlong param1, jlong param2, jint param3, jlong param4)
ARITYn(jlong, callPPPPP__JJJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jlong param1, jlong param2, jlong param3)
ARITYn(jlong, callPPJPP__JJJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, jlong, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3), jlong param0, jlong param1, jlong param2, jlong param3)
ARITYn(jlong, callPPPPP__JJJJIJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, param4), jlong param0, jlong param1, jlong param2, jlong param3, jint param4)
ARITYn(jlong, callPJPPPP__JJJJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jlong, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4)
ARITYn(jlong, callPJPPPPP__JJJJJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jlong, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5)
ARITYn(jlong, callPPPJPPP__JJJJJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, intptr_t, intptr_t, jlong, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5)
ARITYn(jlong, callPJPPPPPPP__JJJJJJJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jlong, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7)
ARITYn(jlong, callPJPPPPPPPPP__JJJJJJJJJJJ, return (jlong)((intptr_t (APIENTRY *) (intptr_t, jlong, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7, (intptr_t)param8, (intptr_t)param9), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jlong param9)
ARITYn(jshort, callS__IJ, return ((jshort (APIENTRY *) (jint))(intptr_t)__functionAddress)(param0), jint param0)
ARITYn(jshort, callPS__JJ, return ((jshort (APIENTRY *) (intptr_t))(intptr_t)__functionAddress)((intptr_t)param0), jlong param0)
ARITYn(jshort, callPPS__JIJIJ, return ((jshort (APIENTRY *) (intptr_t, jint, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3), jlong param0, jint param1, jlong param2, jint param3)
ARITYn(jshort, callPPPS__JIJIJJ, return ((jshort (APIENTRY *) (intptr_t, jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, (intptr_t)param4), jlong param0, jint param1, jlong param2, jint param3, jlong param4)
ARITYn(jshort, callPPS__JJJ, return ((jshort (APIENTRY *) (intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1), jlong param0, jlong param1)
ARITYn(jshort, callPPS__JJIJ, return ((jshort (APIENTRY *) (intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jint param2)
ARITYn(jshort, callPPPPS__JJIJIJJ, return ((jshort (APIENTRY *) (intptr_t, intptr_t, jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, param4, (intptr_t)param5), jlong param0, jlong param1, jint param2, jlong param3, jint param4, jlong param5)
ARITYn(jshort, callPPPS__JJJJ, return ((jshort (APIENTRY *) (intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2), jlong param0, jlong param1, jlong param2)
ARITYn(jshort, callPPPPPS__JJJSJSJSJ, return ((jshort (APIENTRY *) (intptr_t, intptr_t, intptr_t, jshort, intptr_t, jshort, intptr_t, jshort))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3, (intptr_t)param4, param5, (intptr_t)param6, param7), jlong param0, jlong param1, jlong param2, jshort param3, jlong param4, jshort param5, jlong param6, jshort param7)
ARITYn(jshort, callPPS__JJSJ, return ((jshort (APIENTRY *) (intptr_t, intptr_t, jshort))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jshort param2)
ARITYn(jshort, callPPPS__JJSJJ, return ((jshort (APIENTRY *) (intptr_t, intptr_t, jshort, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3), jlong param0, jlong param1, jshort param2, jlong param3)
ARITYn(jshort, callPPPPS__JJSJSJJ, return ((jshort (APIENTRY *) (intptr_t, intptr_t, jshort, intptr_t, jshort, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, param4, (intptr_t)param5), jlong param0, jlong param1, jshort param2, jlong param3, jshort param4, jlong param5)
ARITYn(jshort, callPPPPS__JJSJSJSJ, return ((jshort (APIENTRY *) (intptr_t, intptr_t, jshort, intptr_t, jshort, intptr_t, jshort))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, param4, (intptr_t)param5, param6), jlong param0, jlong param1, jshort param2, jlong param3, jshort param4, jlong param5, jshort param6)
ARITYn(jshort, callPPPPPS__JJSJSJSJSJ, return ((jshort (APIENTRY *) (intptr_t, intptr_t, jshort, intptr_t, jshort, intptr_t, jshort, intptr_t, jshort))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, param4, (intptr_t)param5, param6, (intptr_t)param7, param8), jlong param0, jlong param1, jshort param2, jlong param3, jshort param4, jlong param5, jshort param6, jlong param7, jshort param8)
ARITYn(jshort, callPPPPPPPS__JJSJSJSJSJSJSJ, return ((jshort (APIENTRY *) (intptr_t, intptr_t, jshort, intptr_t, jshort, intptr_t, jshort, intptr_t, jshort, intptr_t, jshort, intptr_t, jshort))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, param4, (intptr_t)param5, param6, (intptr_t)param7, param8, (intptr_t)param9, param10, (intptr_t)param11, param12), jlong param0, jlong param1, jshort param2, jlong param3, jshort param4, jlong param5, jshort param6, jlong param7, jshort param8, jlong param9, jshort param10, jlong param11, jshort param12)
ARITYn(jshort, callPPPPS__JJSJSJSSSJ, return ((jshort (APIENTRY *) (intptr_t, intptr_t, jshort, intptr_t, jshort, intptr_t, jshort, jshort, jshort))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3, param4, (intptr_t)param5, param6, param7, param8), jlong param0, jlong param1, jshort param2, jlong param3, jshort param4, jlong param5, jshort param6, jshort param7, jshort param8)
ARITYn(jshort, callPJS__JJSSJ, return ((jshort (APIENTRY *) (intptr_t, jlong, jshort, jshort))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3), jlong param0, jlong param1, jshort param2, jshort param3)
ARITYn(jshort, callPS__JSJ, return ((jshort (APIENTRY *) (intptr_t, jshort))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jshort param1)
ARITYn(jshort, callPPS__JSJJ, return ((jshort (APIENTRY *) (intptr_t, jshort, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2), jlong param0, jshort param1, jlong param2)
ARITYn(jshort, callPPPPS__JSJJJJ, return ((jshort (APIENTRY *) (intptr_t, jshort, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jshort param1, jlong param2, jlong param3, jlong param4)
ARITYn(jshort, callPPPPPS__JSJJJJJ, return ((jshort (APIENTRY *) (intptr_t, jshort, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jshort param1, jlong param2, jlong param3, jlong param4, jlong param5)
ARITYn(jshort, callPPPS__JSJSJJ, return ((jshort (APIENTRY *) (intptr_t, jshort, intptr_t, jshort, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, (intptr_t)param4), jlong param0, jshort param1, jlong param2, jshort param3, jlong param4)
ARITYn(jshort, callPPPPPPPS__JSJSJJJJJJ, return ((jshort (APIENTRY *) (intptr_t, jshort, intptr_t, jshort, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7, (intptr_t)param8), jlong param0, jshort param1, jlong param2, jshort param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8)
ARITYn(jshort, callPPPPPPPPPS__JSJSJJJJJJJJ, return ((jshort (APIENTRY *) (intptr_t, jshort, intptr_t, jshort, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7, (intptr_t)param8, (intptr_t)param9, (intptr_t)param10), jlong param0, jshort param1, jlong param2, jshort param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jlong param9, jlong param10)
ARITYn(jshort, callPPPPPS__JSJSJJSJJ, return ((jshort (APIENTRY *) (intptr_t, jshort, intptr_t, jshort, intptr_t, intptr_t, jshort, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, (intptr_t)param4, (intptr_t)param5, param6, (intptr_t)param7), jlong param0, jshort param1, jlong param2, jshort param3, jlong param4, jlong param5, jshort param6, jlong param7)
ARITYn(jshort, callPPPPS__JSJSJSJSSSJ, return ((jshort (APIENTRY *) (intptr_t, jshort, intptr_t, jshort, intptr_t, jshort, intptr_t, jshort, jshort, jshort))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, (intptr_t)param4, param5, (intptr_t)param6, param7, param8, param9), jlong param0, jshort param1, jlong param2, jshort param3, jlong param4, jshort param5, jlong param6, jshort param7, jshort param8, jshort param9)
ARITYn(jshort, callPPS__JSSJIJ, return ((jshort (APIENTRY *) (intptr_t, jshort, jshort, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3, param4), jlong param0, jshort param1, jshort param2, jlong param3, jint param4)
ARITYn(jshort, callPPPS__JSSJIJJ, return ((jshort (APIENTRY *) (intptr_t, jshort, jshort, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3, param4, (intptr_t)param5), jlong param0, jshort param1, jshort param2, jlong param3, jint param4, jlong param5)
ARITYn(jshort, callPPPPS__JSSJJJJ, return ((jshort (APIENTRY *) (intptr_t, jshort, jshort, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5), jlong param0, jshort param1, jshort param2, jlong param3, jlong param4, jlong param5)
ARITYn(jshort, callPPPPS__JSSJSJJJ, return ((jshort (APIENTRY *) (intptr_t, jshort, jshort, intptr_t, jshort, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3, param4, (intptr_t)param5, (intptr_t)param6), jlong param0, jshort param1, jshort param2, jlong param3, jshort param4, jlong param5, jlong param6)
ARITYn(jshort, callPPPPPS__JSSSJSSJJJJ, return ((jshort (APIENTRY *) (intptr_t, jshort, jshort, jshort, intptr_t, jshort, jshort, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, (intptr_t)param4, param5, param6, (intptr_t)param7, (intptr_t)param8, (intptr_t)param9), jlong param0, jshort param1, jshort param2, jshort param3, jlong param4, jshort param5, jshort param6, jlong param7, jlong param8, jlong param9)
ARITYn(jshort, callPPPPPS__JSSSSJSJJJJ, return ((jshort (APIENTRY *) (intptr_t, jshort, jshort, jshort, jshort, intptr_t, jshort, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, (intptr_t)param5, param6, (intptr_t)param7, (intptr_t)param8, (intptr_t)param9), jlong param0, jshort param1, jshort param2, jshort param3, jshort param4, jlong param5, jshort param6, jlong param7, jlong param8, jlong param9)
ARITYn(jshort, callPS__SJJ, return ((jshort (APIENTRY *) (jshort, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jshort param0, jlong param1)
ARITYn(jshort, callPPS__SJJJ, return ((jshort (APIENTRY *) (jshort, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2), jshort param0, jlong param1, jlong param2)
ARITYn(jshort, callPS__SJSJ, return ((jshort (APIENTRY *) (jshort, intptr_t, jshort))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2), jshort param0, jlong param1, jshort param2)
ARITYn(jshort, callPPPPPS__SJSJJJSJJ, return ((jshort (APIENTRY *) (jshort, intptr_t, jshort, intptr_t, intptr_t, intptr_t, jshort, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, param6, (intptr_t)param7), jshort param0, jlong param1, jshort param2, jlong param3, jlong param4, jlong param5, jshort param6, jlong param7)
ARITYn(jshort, callPPPS__SJSSJSJJ, return ((jshort (APIENTRY *) (jshort, intptr_t, jshort, jshort, intptr_t, jshort, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, param3, (intptr_t)param4, param5, (intptr_t)param6), jshort param0, jlong param1, jshort param2, jshort param3, jlong param4, jshort param5, jlong param6)
ARITY0(void, callV__J, ((void (APIENTRY *) ())(intptr_t)__functionAddress)())
ARITYn(void, callV__BJ, ((void (APIENTRY *) (jbyte))(intptr_t)__functionAddress)(param0), jbyte param0)
ARITYn(void, callV__BBBJ, ((void (APIENTRY *) (jbyte, jbyte, jbyte))(intptr_t)__functionAddress)(param0, param1, param2), jbyte param0, jbyte param1, jbyte param2)
ARITYn(void, callV__BBBBJ, ((void (APIENTRY *) (jbyte, jbyte, jbyte, jbyte))(intptr_t)__functionAddress)(param0, param1, param2, param3), jbyte param0, jbyte param1, jbyte param2, jbyte param3)
ARITYn(void, callV__DJ, ((void (APIENTRY *) (jdouble))(intptr_t)__functionAddress)(param0), jdouble param0)
ARITYn(void, callV__DDJ, ((void (APIENTRY *) (jdouble, jdouble))(intptr_t)__functionAddress)(param0, param1), jdouble param0, jdouble param1)
ARITYn(void, callV__DDDJ, ((void (APIENTRY *) (jdouble, jdouble, jdouble))(intptr_t)__functionAddress)(param0, param1, param2), jdouble param0, jdouble param1, jdouble param2)
ARITYn(void, callV__DDDDJ, ((void (APIENTRY *) (jdouble, jdouble, jdouble, jdouble))(intptr_t)__functionAddress)(param0, param1, param2, param3), jdouble param0, jdouble param1, jdouble param2, jdouble param3)
ARITYn(void, callV__DDDDDDJ, ((void (APIENTRY *) (jdouble, jdouble, jdouble, jdouble, jdouble, jdouble))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jdouble param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5)
ARITYn(void, callV__FJ, ((void (APIENTRY *) (jfloat))(intptr_t)__functionAddress)(param0), jfloat param0)
ARITYn(void, callV__FFJ, ((void (APIENTRY *) (jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1), jfloat param0, jfloat param1)
ARITYn(void, callV__FFFJ, ((void (APIENTRY *) (jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2), jfloat param0, jfloat param1, jfloat param2)
ARITYn(void, callV__FFFFJ, ((void (APIENTRY *) (jfloat, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3), jfloat param0, jfloat param1, jfloat param2, jfloat param3)
ARITYn(void, callV__FFFFFFFFJ, ((void (APIENTRY *) (jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7), jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7)
ARITYn(void, callV__FFFFFZJ, ((void (APIENTRY *) (jfloat, jfloat, jfloat, jfloat, jfloat, jboolean))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jboolean param5)
ARITYn(void, callV__FZJ, ((void (APIENTRY *) (jfloat, jboolean))(intptr_t)__functionAddress)(param0, param1), jfloat param0, jboolean param1)
ARITYn(void, callV__IJ, ((void (APIENTRY *) (jint))(intptr_t)__functionAddress)(param0), jint param0)
ARITYn(void, callV__IBBBBJ, ((void (APIENTRY *) (jint, jbyte, jbyte, jbyte, jbyte))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jbyte param1, jbyte param2, jbyte param3, jbyte param4)
ARITYn(void, callV__IDJ, ((void (APIENTRY *) (jint, jdouble))(intptr_t)__functionAddress)(param0, param1), jint param0, jdouble param1)
ARITYn(void, callV__IDDJ, ((void (APIENTRY *) (jint, jdouble, jdouble))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jdouble param1, jdouble param2)
ARITYn(void, callV__IDDDJ, ((void (APIENTRY *) (jint, jdouble, jdouble, jdouble))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jdouble param1, jdouble param2, jdouble param3)
ARITYn(void, callV__IDDDDJ, ((void (APIENTRY *) (jint, jdouble, jdouble, jdouble, jdouble))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4)
ARITYn(void, callV__IDDDDDDJ, ((void (APIENTRY *) (jint, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6), jint param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5, jdouble param6)
ARITYn(void, callV__IDDIDDJ, ((void (APIENTRY *) (jint, jdouble, jdouble, jint, jdouble, jdouble))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jint param0, jdouble param1, jdouble param2, jint param3, jdouble param4, jdouble param5)
ARITYn(void, callPV__IDDIIDDIIJJ, ((void (APIENTRY *) (jint, jdouble, jdouble, jint, jint, jdouble, jdouble, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)param9), jint param0, jdouble param1, jdouble param2, jint param3, jint param4, jdouble param5, jdouble param6, jint param7, jint param8, jlong param9)
ARITYn(void, callPV__IDDIIJJ, ((void (APIENTRY *) (jint, jdouble, jdouble, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, (intptr_t)param5), jint param0, jdouble param1, jdouble param2, jint param3, jint param4, jlong param5)
ARITYn(void, callV__IFJ, ((void (APIENTRY *) (jint, jfloat))(intptr_t)__functionAddress)(param0, param1), jint param0, jfloat param1)
ARITYn(void, callV__IFFJ, ((void (APIENTRY *) (jint, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jfloat param1, jfloat param2)
ARITYn(void, callV__IFFFJ, ((void (APIENTRY *) (jint, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jfloat param1, jfloat param2, jfloat param3)
ARITYn(void, callV__IFFFFJ, ((void (APIENTRY *) (jint, jfloat, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4)
ARITYn(void, callV__IFFIFFJ, ((void (APIENTRY *) (jint, jfloat, jfloat, jint, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jint param0, jfloat param1, jfloat param2, jint param3, jfloat param4, jfloat param5)
ARITYn(void, callPV__IFFIIFFIIJJ, ((void (APIENTRY *) (jint, jfloat, jfloat, jint, jint, jfloat, jfloat, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)param9), jint param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jfloat param6, jint param7, jint param8, jlong param9)
ARITYn(void, callPV__IFFIIJJ, ((void (APIENTRY *) (jint, jfloat, jfloat, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, (intptr_t)param5), jint param0, jfloat param1, jfloat param2, jint param3, jint param4, jlong param5)
ARITYn(void, callPV__IFJIJ, ((void (APIENTRY *) (jint, jfloat, intptr_t, jint))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3), jint param0, jfloat param1, jlong param2, jint param3)
ARITYn(void, callV__IIJ, ((void (APIENTRY *) (jint, jint))(intptr_t)__functionAddress)(param0, param1), jint param0, jint param1)
ARITYn(void, callV__IIDJ, ((void (APIENTRY *) (jint, jint, jdouble))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jint param1, jdouble param2)
ARITYn(void, callV__IIDDJ, ((void (APIENTRY *) (jint, jint, jdouble, jdouble))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jint param1, jdouble param2, jdouble param3)
ARITYn(void, callV__IIDDDJ, ((void (APIENTRY *) (jint, jint, jdouble, jdouble, jdouble))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jint param1, jdouble param2, jdouble param3, jdouble param4)
ARITYn(void, callV__IIDDDDJ, ((void (APIENTRY *) (jint, jint, jdouble, jdouble, jdouble, jdouble))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jint param0, jint param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5)
ARITYn(void, callV__IIFJ, ((void (APIENTRY *) (jint, jint, jfloat))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jint param1, jfloat param2)
ARITYn(void, callV__IIFFJ, ((void (APIENTRY *) (jint, jint, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jint param1, jfloat param2, jfloat param3)
ARITYn(void, callV__IIFFFJ, ((void (APIENTRY *) (jint, jint, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jint param1, jfloat param2, jfloat param3, jfloat param4)
ARITYn(void, callV__IIFFFFJ, ((void (APIENTRY *) (jint, jint, jfloat, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jint param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5)
ARITYn(void, callV__IIFFFFFFFFFJ, ((void (APIENTRY *) (jint, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10), jint param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10)
ARITYn(void, callPV__IIFFFFJJ, ((void (APIENTRY *) (jint, jint, jfloat, jfloat, jfloat, jfloat, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, (intptr_t)param6), jint param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jlong param6)
ARITYn(void, callV__IIFIJ, ((void (APIENTRY *) (jint, jint, jfloat, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jint param1, jfloat param2, jint param3)
ARITYn(void, callV__IIIJ, ((void (APIENTRY *) (jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jint param1, jint param2)
ARITYn(void, callV__IIIDJ, ((void (APIENTRY *) (jint, jint, jint, jdouble))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jint param1, jint param2, jdouble param3)
ARITYn(void, callV__IIIDDDDJ, ((void (APIENTRY *) (jint, jint, jint, jdouble, jdouble, jdouble, jdouble))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6), jint param0, jint param1, jint param2, jdouble param3, jdouble param4, jdouble param5, jdouble param6)
ARITYn(void, callV__IIIFJ, ((void (APIENTRY *) (jint, jint, jint, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jint param1, jint param2, jfloat param3)
ARITYn(void, callV__IIIFFFFJ, ((void (APIENTRY *) (jint, jint, jint, jfloat, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6), jint param0, jint param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6)
ARITYn(void, callV__IIIFFFFFJ, ((void (APIENTRY *) (jint, jint, jint, jfloat, jfloat, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7), jint param0, jint param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7)
ARITYn(void, callV__IIIFIJ, ((void (APIENTRY *) (jint, jint, jint, jfloat, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jint param1, jint param2, jfloat param3, jint param4)
ARITYn(void, callV__IIIIJ, ((void (APIENTRY *) (jint, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jint param1, jint param2, jint param3)
ARITYn(void, callV__IIIIIJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jint param1, jint param2, jint param3, jint param4)
ARITYn(void, callV__IIIIIIJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5)
ARITYn(void, callV__IIIIIIIJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6)
ARITYn(void, callV__IIIIIIIIJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7)
ARITYn(void, callV__IIIIIIIIIJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8)
ARITYn(void, callV__IIIIIIIIIIJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9)
ARITYn(void, callV__IIIIIIIIIIIIJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jint param11)
ARITYn(void, callV__IIIIIIIIIIIIIIIJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jint param11, jint param12, jint param13, jint param14)
ARITYn(void, callV__IIIIIIIIIIIIIIIIIJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jint param11, jint param12, jint param13, jint param14, jint param15, jint param16)
ARITYn(void, callPV__IIIIIIIIIIIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, (intptr_t)param11), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jlong param11)
ARITYn(void, callPV__IIIIIIIIIIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)param10), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jlong param10)
ARITYn(void, callPV__IIIIIIIIIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)param9), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jlong param9)
ARITYn(void, callPV__IIIIIIIIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)param8), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jlong param8)
ARITYn(void, callV__IIIIIIIIZJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint, jint, jboolean))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jboolean param8)
ARITYn(void, callJV__IIIIIIIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jlong param7)
ARITYn(void, callPV__IIIIIIIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jlong param7)
ARITYn(void, callV__IIIIIIIZJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jint, jboolean))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jboolean param7)
ARITYn(void, callJV__IIIIIIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jlong param6)
ARITYn(void, callPV__IIIIIIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, (intptr_t)param6), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jlong param6)
ARITYn(void, callPPV__IIIIIIJJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, (intptr_t)param6, (intptr_t)param7), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jlong param6, jlong param7)
ARITYn(void, callV__IIIIIIZJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jboolean))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jboolean param6)
ARITYn(void, callJV__IIIIIIZIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jint, jboolean, jint, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8), jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jboolean param6, jint param7, jlong param8)
ARITYn(void, callJV__IIIIIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jint param0, jint param1, jint param2, jint param3, jint param4, jlong param5)
ARITYn(void, callPV__IIIIIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, (intptr_t)param5), jint param0, jint param1, jint param2, jint param3, jint param4, jlong param5)
ARITYn(void, callPV__IIIIIJIJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, intptr_t, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, (intptr_t)param5, param6), jint param0, jint param1, jint param2, jint param3, jint param4, jlong param5, jint param6)
ARITYn(void, callPPV__IIIIIJJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, (intptr_t)param5, (intptr_t)param6), jint param0, jint param1, jint param2, jint param3, jint param4, jlong param5, jlong param6)
ARITYn(void, callV__IIIIIZJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jboolean))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jint param0, jint param1, jint param2, jint param3, jint param4, jboolean param5)
ARITYn(void, callPV__IIIIIZIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jboolean, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7), jint param0, jint param1, jint param2, jint param3, jint param4, jboolean param5, jint param6, jlong param7)
ARITYn(void, callJV__IIIIIZIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, jint, jboolean, jint, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7), jint param0, jint param1, jint param2, jint param3, jint param4, jboolean param5, jint param6, jlong param7)
ARITYn(void, callPV__IIIIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, (intptr_t)param4), jint param0, jint param1, jint param2, jint param3, jlong param4)
ARITYn(void, callPPV__IIIIJIIJJ, ((void (APIENTRY *) (jint, jint, jint, jint, intptr_t, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, (intptr_t)param4, param5, param6, (intptr_t)param7), jint param0, jint param1, jint param2, jint param3, jlong param4, jint param5, jint param6, jlong param7)
ARITYn(void, callPPPV__IIIIJIJJJ, ((void (APIENTRY *) (jint, jint, jint, jint, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, (intptr_t)param4, param5, (intptr_t)param6, (intptr_t)param7), jint param0, jint param1, jint param2, jint param3, jlong param4, jint param5, jlong param6, jlong param7)
ARITYn(void, callPPV__IIIIJJJ, ((void (APIENTRY *) (jint, jint, jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5), jint param0, jint param1, jint param2, jint param3, jlong param4, jlong param5)
ARITYn(void, callPPPV__IIIIJJJJ, ((void (APIENTRY *) (jint, jint, jint, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6), jint param0, jint param1, jint param2, jint param3, jlong param4, jlong param5, jlong param6)
ARITYn(void, callPV__IIIIJZJ, ((void (APIENTRY *) (jint, jint, jint, jint, intptr_t, jboolean))(intptr_t)__functionAddress)(param0, param1, param2, param3, (intptr_t)param4, param5), jint param0, jint param1, jint param2, jint param3, jlong param4, jboolean param5)
ARITYn(void, callV__IIIIZIJ, ((void (APIENTRY *) (jint, jint, jint, jint, jboolean, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jint param0, jint param1, jint param2, jint param3, jboolean param4, jint param5)
ARITYn(void, callPV__IIIJJ, ((void (APIENTRY *) (jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3), jint param0, jint param1, jint param2, jlong param3)
ARITYn(void, callPV__IIIJIJ, ((void (APIENTRY *) (jint, jint, jint, intptr_t, jint))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, param4), jint param0, jint param1, jint param2, jlong param3, jint param4)
ARITYn(void, callPPV__IIIJIFFIJJ, ((void (APIENTRY *) (jint, jint, jint, intptr_t, jint, jfloat, jfloat, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, param4, param5, param6, param7, (intptr_t)param8), jint param0, jint param1, jint param2, jlong param3, jint param4, jfloat param5, jfloat param6, jint param7, jlong param8)
ARITYn(void, callPV__IIIJIIJ, ((void (APIENTRY *) (jint, jint, jint, intptr_t, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, param4, param5), jint param0, jint param1, jint param2, jlong param3, jint param4, jint param5)
ARITYn(void, callPV__IIIJIIIJ, ((void (APIENTRY *) (jint, jint, jint, intptr_t, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, param4, param5, param6), jint param0, jint param1, jint param2, jlong param3, jint param4, jint param5, jint param6)
ARITYn(void, callPPV__IIIJIIJJ, ((void (APIENTRY *) (jint, jint, jint, intptr_t, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, param4, param5, (intptr_t)param6), jint param0, jint param1, jint param2, jlong param3, jint param4, jint param5, jlong param6)
ARITYn(void, callPPPPPPPV__IIIJIJJJJJJJ, ((void (APIENTRY *) (jint, jint, jint, intptr_t, jint, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7, (intptr_t)param8, (intptr_t)param9, (intptr_t)param10), jint param0, jint param1, jint param2, jlong param3, jint param4, jlong param5, jlong param6, jlong param7, jlong param8, jlong param9, jlong param10)
ARITYn(void, callPPV__IIIJJJ, ((void (APIENTRY *) (jint, jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, (intptr_t)param4), jint param0, jint param1, jint param2, jlong param3, jlong param4)
ARITYn(void, callPPPV__IIIJJJJ, ((void (APIENTRY *) (jint, jint, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5), jint param0, jint param1, jint param2, jlong param3, jlong param4, jlong param5)
ARITYn(void, callPPPPV__IIIJJJJJ, ((void (APIENTRY *) (jint, jint, jint, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6), jint param0, jint param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6)
ARITYn(void, callPV__IIIJZJ, ((void (APIENTRY *) (jint, jint, jint, intptr_t, jboolean))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3, param4), jint param0, jint param1, jint param2, jlong param3, jboolean param4)
ARITYn(void, callV__IIIZJ, ((void (APIENTRY *) (jint, jint, jint, jboolean))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jint param1, jint param2, jboolean param3)
ARITYn(void, callV__IIIZIJ, ((void (APIENTRY *) (jint, jint, jint, jboolean, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jint param1, jint param2, jboolean param3, jint param4)
ARITYn(void, callV__IIIZIIIJ, ((void (APIENTRY *) (jint, jint, jint, jboolean, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6), jint param0, jint param1, jint param2, jboolean param3, jint param4, jint param5, jint param6)
ARITYn(void, callPV__IIIZIJJ, ((void (APIENTRY *) (jint, jint, jint, jboolean, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, (intptr_t)param5), jint param0, jint param1, jint param2, jboolean param3, jint param4, jlong param5)
ARITYn(void, callPV__IIIZJJ, ((void (APIENTRY *) (jint, jint, jint, jboolean, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, (intptr_t)param4), jint param0, jint param1, jint param2, jboolean param3, jlong param4)
ARITYn(void, callJV__IIJJ, ((void (APIENTRY *) (jint, jint, jlong))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jint param1, jlong param2)
ARITYn(void, callPV__IIJJ, ((void (APIENTRY *) (jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2), jint param0, jint param1, jlong param2)
ARITYn(void, callPV__IIJIJ, ((void (APIENTRY *) (jint, jint, intptr_t, jint))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3), jint param0, jint param1, jlong param2, jint param3)
ARITYn(void, callPV__IIJIIJ, ((void (APIENTRY *) (jint, jint, intptr_t, jint, jint))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, param4), jint param0, jint param1, jlong param2, jint param3, jint param4)
ARITYn(void, callPV__IIJIIIJ, ((void (APIENTRY *) (jint, jint, intptr_t, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, param4, param5), jint param0, jint param1, jlong param2, jint param3, jint param4, jint param5)
ARITYn(void, callPV__IIJIIIIJ, ((void (APIENTRY *) (jint, jint, intptr_t, jint, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, param4, param5, param6), jint param0, jint param1, jlong param2, jint param3, jint param4, jint param5, jint param6)
ARITYn(void, callPV__IIJIIIIIFJ, ((void (APIENTRY *) (jint, jint, intptr_t, jint, jint, jint, jint, jint, jfloat))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, param4, param5, param6, param7, param8), jint param0, jint param1, jlong param2, jint param3, jint param4, jint param5, jint param6, jint param7, jfloat param8)
ARITYn(void, callPPV__IIJIIIIIJJ, ((void (APIENTRY *) (jint, jint, intptr_t, jint, jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, param4, param5, param6, param7, (intptr_t)param8), jint param0, jint param1, jlong param2, jint param3, jint param4, jint param5, jint param6, jint param7, jlong param8)
ARITYn(void, callPPV__IIJIIIIJJ, ((void (APIENTRY *) (jint, jint, intptr_t, jint, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, param4, param5, param6, (intptr_t)param7), jint param0, jint param1, jlong param2, jint param3, jint param4, jint param5, jint param6, jlong param7)
ARITYn(void, callPPV__IIJIIIJJ, ((void (APIENTRY *) (jint, jint, intptr_t, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, param4, param5, (intptr_t)param6), jint param0, jint param1, jlong param2, jint param3, jint param4, jint param5, jlong param6)
ARITYn(void, callPPV__IIJIIIJIIFJ, ((void (APIENTRY *) (jint, jint, intptr_t, jint, jint, jint, intptr_t, jint, jint, jfloat))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, param4, param5, (intptr_t)param6, param7, param8, param9), jint param0, jint param1, jlong param2, jint param3, jint param4, jint param5, jlong param6, jint param7, jint param8, jfloat param9)
ARITYn(void, callPPV__IIJIIJJ, ((void (APIENTRY *) (jint, jint, intptr_t, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, param4, (intptr_t)param5), jint param0, jint param1, jlong param2, jint param3, jint param4, jlong param5)
ARITYn(void, callPPV__IIJIJJ, ((void (APIENTRY *) (jint, jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, (intptr_t)param4), jint param0, jint param1, jlong param2, jint param3, jlong param4)
ARITYn(void, callPPPV__IIJIJJJ, ((void (APIENTRY *) (jint, jint, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, (intptr_t)param4, (intptr_t)param5), jint param0, jint param1, jlong param2, jint param3, jlong param4, jlong param5)
ARITYn(void, callJJV__IIJJJ, ((void (APIENTRY *) (jint, jint, jlong, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jint param1, jlong param2, jlong param3)
ARITYn(void, callPPV__IIJJJ, ((void (APIENTRY *) (jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3), jint param0, jint param1, jlong param2, jlong param3)
ARITYn(void, callJPV__IIJJJ, ((void (APIENTRY *) (jint, jint, jlong, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3), jint param0, jint param1, jlong param2, jlong param3)
ARITYn(void, callPPV__IIJJIJ, ((void (APIENTRY *) (jint, jint, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, param4), jint param0, jint param1, jlong param2, jlong param3, jint param4)
ARITYn(void, callPPV__IIJJIIJ, ((void (APIENTRY *) (jint, jint, intptr_t, intptr_t, jint, jint))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, param4, param5), jint param0, jint param1, jlong param2, jlong param3, jint param4, jint param5)
ARITYn(void, callPPV__IIJJIIIJ, ((void (APIENTRY *) (jint, jint, intptr_t, intptr_t, jint, jint, jint))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, param4, param5, param6), jint param0, jint param1, jlong param2, jlong param3, jint param4, jint param5, jint param6)
ARITYn(void, callPPPV__IIJJIIJJ, ((void (APIENTRY *) (jint, jint, intptr_t, intptr_t, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, param4, param5, (intptr_t)param6), jint param0, jint param1, jlong param2, jlong param3, jint param4, jint param5, jlong param6)
ARITYn(void, callJJJV__IIJJJJ, ((void (APIENTRY *) (jint, jint, jlong, jlong, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jint param1, jlong param2, jlong param3, jlong param4)
ARITYn(void, callPPPV__IIJJJJ, ((void (APIENTRY *) (jint, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4), jint param0, jint param1, jlong param2, jlong param3, jlong param4)
ARITYn(void, callJJJJV__IIJJJJJ, ((void (APIENTRY *) (jint, jint, jlong, jlong, jlong, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5), jint param0, jint param1, jlong param2, jlong param3, jlong param4, jlong param5)
ARITYn(void, callPPPPV__IIJJJJIJ, ((void (APIENTRY *) (jint, jint, intptr_t, intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, param6), jint param0, jint param1, jlong param2, jlong param3, jlong param4, jlong param5, jint param6)
ARITYn(void, callPPPPPV__IIJJJJJJ, ((void (APIENTRY *) (jint, jint, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6), jint param0, jint param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6)
ARITYn(void, callV__IISJ, ((void (APIENTRY *) (jint, jint, jshort))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jint param1, jshort param2)
ARITYn(void, callV__IIZJ, ((void (APIENTRY *) (jint, jint, jboolean))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jint param1, jboolean param2)
ARITYn(void, callV__IIZIJ, ((void (APIENTRY *) (jint, jint, jboolean, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jint param1, jboolean param2, jint param3)
ARITYn(void, callPV__IIZJJ, ((void (APIENTRY *) (jint, jint, jboolean, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3), jint param0, jint param1, jboolean param2, jlong param3)
ARITYn(void, callPV__IJJ, ((void (APIENTRY *) (jint, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jint param0, jlong param1)
ARITYn(void, callJV__IJJ, ((void (APIENTRY *) (jint, jlong))(intptr_t)__functionAddress)(param0, param1), jint param0, jlong param1)
ARITYn(void, callPV__IJIJ, ((void (APIENTRY *) (jint, intptr_t, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2), jint param0, jlong param1, jint param2)
ARITYn(void, callPV__IJIIJ, ((void (APIENTRY *) (jint, intptr_t, jint, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, param3), jint param0, jlong param1, jint param2, jint param3)
ARITYn(void, callJV__IJIIJ, ((void (APIENTRY *) (jint, jlong, jint, jint))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jlong param1, jint param2, jint param3)
ARITYn(void, callPV__IJIIIJ, ((void (APIENTRY *) (jint, intptr_t, jint, jint, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, param3, param4), jint param0, jlong param1, jint param2, jint param3, jint param4)
ARITYn(void, callPJV__IJIJJ, ((void (APIENTRY *) (jint, intptr_t, jint, jlong))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, param3), jint param0, jlong param1, jint param2, jlong param3)
ARITYn(void, callPPV__IJIJJ, ((void (APIENTRY *) (jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, (intptr_t)param3), jint param0, jlong param1, jint param2, jlong param3)
ARITYn(void, callJPV__IJIJJ, ((void (APIENTRY *) (jint, jlong, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3), jint param0, jlong param1, jint param2, jlong param3)
ARITYn(void, callPPV__IJIJIJ, ((void (APIENTRY *) (jint, intptr_t, jint, intptr_t, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, (intptr_t)param3, param4), jint param0, jlong param1, jint param2, jlong param3, jint param4)
ARITYn(void, callPPPV__IJIJIJJ, ((void (APIENTRY *) (jint, intptr_t, jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, (intptr_t)param3, param4, (intptr_t)param5), jint param0, jlong param1, jint param2, jlong param3, jint param4, jlong param5)
ARITYn(void, callPPPV__IJIJJJ, ((void (APIENTRY *) (jint, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4), jint param0, jlong param1, jint param2, jlong param3, jlong param4)
ARITYn(void, callPPPPV__IJIJJJJ, ((void (APIENTRY *) (jint, intptr_t, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5), jint param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5)
ARITYn(void, callPPV__IJJJ, ((void (APIENTRY *) (jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2), jint param0, jlong param1, jlong param2)
ARITYn(void, callJJV__IJJJ, ((void (APIENTRY *) (jint, jlong, jlong))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jlong param1, jlong param2)
ARITYn(void, callPPV__IJJIJ, ((void (APIENTRY *) (jint, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, param3), jint param0, jlong param1, jlong param2, jint param3)
ARITYn(void, callPPV__IJJIIJ, ((void (APIENTRY *) (jint, intptr_t, intptr_t, jint, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, param3, param4), jint param0, jlong param1, jlong param2, jint param3, jint param4)
ARITYn(void, callPPV__IJJIIIJ, ((void (APIENTRY *) (jint, intptr_t, intptr_t, jint, jint, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, param3, param4, param5), jint param0, jlong param1, jlong param2, jint param3, jint param4, jint param5)
ARITYn(void, callPPPV__IJJIJJ, ((void (APIENTRY *) (jint, intptr_t, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, param3, (intptr_t)param4), jint param0, jlong param1, jlong param2, jint param3, jlong param4)
ARITYn(void, callJJJV__IJJJJ, ((void (APIENTRY *) (jint, jlong, jlong, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jlong param1, jlong param2, jlong param3)
ARITYn(void, callPPPV__IJJJJ, ((void (APIENTRY *) (jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3), jint param0, jlong param1, jlong param2, jlong param3)
ARITYn(void, callPPPV__IJJJIJ, ((void (APIENTRY *) (jint, intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, param4), jint param0, jlong param1, jlong param2, jlong param3, jint param4)
ARITYn(void, callJJJJV__IJJJJJ, ((void (APIENTRY *) (jint, jlong, jlong, jlong, jlong))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jlong param1, jlong param2, jlong param3, jlong param4)
ARITYn(void, callPPPPV__IJJJJJ, ((void (APIENTRY *) (jint, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4), jint param0, jlong param1, jlong param2, jlong param3, jlong param4)
ARITYn(void, callPPPPV__IJJJJIJ, ((void (APIENTRY *) (jint, intptr_t, intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, param5), jint param0, jlong param1, jlong param2, jlong param3, jlong param4, jint param5)
ARITYn(void, callPPV__IJJZJ, ((void (APIENTRY *) (jint, intptr_t, intptr_t, jboolean))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2, param3), jint param0, jlong param1, jlong param2, jboolean param3)
ARITYn(void, callV__ISJ, ((void (APIENTRY *) (jint, jshort))(intptr_t)__functionAddress)(param0, param1), jint param0, jshort param1)
ARITYn(void, callV__ISSJ, ((void (APIENTRY *) (jint, jshort, jshort))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jshort param1, jshort param2)
ARITYn(void, callV__ISSSJ, ((void (APIENTRY *) (jint, jshort, jshort, jshort))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jshort param1, jshort param2, jshort param3)
ARITYn(void, callV__ISSSSJ, ((void (APIENTRY *) (jint, jshort, jshort, jshort, jshort))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jshort param1, jshort param2, jshort param3, jshort param4)
ARITYn(void, callV__IZJ, ((void (APIENTRY *) (jint, jboolean))(intptr_t)__functionAddress)(param0, param1), jint param0, jboolean param1)
ARITYn(void, callPV__IZIIIJJ, ((void (APIENTRY *) (jint, jboolean, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, (intptr_t)param5), jint param0, jboolean param1, jint param2, jint param3, jint param4, jlong param5)
ARITYn(void, callPV__IZIIJJ, ((void (APIENTRY *) (jint, jboolean, jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, (intptr_t)param4), jint param0, jboolean param1, jint param2, jint param3, jlong param4)
ARITYn(void, callV__IZZZZJ, ((void (APIENTRY *) (jint, jboolean, jboolean, jboolean, jboolean))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4), jint param0, jboolean param1, jboolean param2, jboolean param3, jboolean param4)
ARITYn(void, callJV__JJ, ((void (APIENTRY *) (jlong))(intptr_t)__functionAddress)(param0), jlong param0)
ARITYn(void, callPV__JJ, ((void (APIENTRY *) (intptr_t))(intptr_t)__functionAddress)((intptr_t)param0), jlong param0)
ARITYn(void, callPV__JFJ, ((void (APIENTRY *) (intptr_t, jfloat))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jfloat param1)
ARITYn(void, callPV__JFFJ, ((void (APIENTRY *) (intptr_t, jfloat, jfloat))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jfloat param1, jfloat param2)
ARITYn(void, callPV__JFFFJ, ((void (APIENTRY *) (intptr_t, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3), jlong param0, jfloat param1, jfloat param2, jfloat param3)
ARITYn(void, callPV__JIJ, ((void (APIENTRY *) (intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jint param1)
ARITYn(void, callJV__JIJ, ((void (APIENTRY *) (jlong, jint))(intptr_t)__functionAddress)(param0, param1), jlong param0, jint param1)
ARITYn(void, callJV__JIFFFFFFFFFJ, ((void (APIENTRY *) (jlong, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10), jlong param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10)
ARITYn(void, callPPV__JIFJJ, ((void (APIENTRY *) (intptr_t, jint, jfloat, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3), jlong param0, jint param1, jfloat param2, jlong param3)
ARITYn(void, callPV__JIIJ, ((void (APIENTRY *) (intptr_t, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jint param1, jint param2)
ARITYn(void, callPV__JIIIJ, ((void (APIENTRY *) (intptr_t, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3), jlong param0, jint param1, jint param2, jint param3)
ARITYn(void, callPV__JIIIIJ, ((void (APIENTRY *) (intptr_t, jint, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4), jlong param0, jint param1, jint param2, jint param3, jint param4)
ARITYn(void, callPV__JIIIIIJ, ((void (APIENTRY *) (intptr_t, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5), jlong param0, jint param1, jint param2, jint param3, jint param4, jint param5)
ARITYn(void, callPV__JIIIIIIJ, ((void (APIENTRY *) (intptr_t, jint, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, param6), jlong param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6)
ARITYn(void, callPV__JIIIIIIIIIIJ, ((void (APIENTRY *) (intptr_t, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10), jlong param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10)
ARITYn(void, callPPPV__JIIIIIJJJ, ((void (APIENTRY *) (intptr_t, jint, jint, jint, jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, (intptr_t)param6, (intptr_t)param7), jlong param0, jint param1, jint param2, jint param3, jint param4, jint param5, jlong param6, jlong param7)
ARITYn(void, callPPPPV__JIIIIJIJIJJ, ((void (APIENTRY *) (intptr_t, jint, jint, jint, jint, intptr_t, jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, (intptr_t)param5, param6, (intptr_t)param7, param8, (intptr_t)param9), jlong param0, jint param1, jint param2, jint param3, jint param4, jlong param5, jint param6, jlong param7, jint param8, jlong param9)
ARITYn(void, callPPV__JIIIJJ, ((void (APIENTRY *) (intptr_t, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, (intptr_t)param4), jlong param0, jint param1, jint param2, jint param3, jlong param4)
ARITYn(void, callPPV__JIIJJ, ((void (APIENTRY *) (intptr_t, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3), jlong param0, jint param1, jint param2, jlong param3)
ARITYn(void, callPPPV__JIIJJJ, ((void (APIENTRY *) (intptr_t, jint, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jint param1, jint param2, jlong param3, jlong param4)
ARITYn(void, callPJJPJJJJV__JIIJJIJIIJJJJJ, ((void (APIENTRY *) (intptr_t, jint, jint, jlong, jlong, jint, intptr_t, jint, jint, jlong, jlong, jlong, jlong))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, (intptr_t)param6, param7, param8, param9, param10, param11, param12), jlong param0, jint param1, jint param2, jlong param3, jlong param4, jint param5, jlong param6, jint param7, jint param8, jlong param9, jlong param10, jlong param11, jlong param12)
ARITYn(void, callPJPPPV__JIIJJIJJJ, ((void (APIENTRY *) (intptr_t, jint, jint, jlong, intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, (intptr_t)param4, param5, (intptr_t)param6, (intptr_t)param7), jlong param0, jint param1, jint param2, jlong param3, jlong param4, jint param5, jlong param6, jlong param7)
ARITYn(void, callPPV__JIJJ, ((void (APIENTRY *) (intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2), jlong param0, jint param1, jlong param2)
ARITYn(void, callPJV__JIJJ, ((void (APIENTRY *) (intptr_t, jint, jlong))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jint param1, jlong param2)
ARITYn(void, callPJV__JIJIJ, ((void (APIENTRY *) (intptr_t, jint, jlong, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3), jlong param0, jint param1, jlong param2, jint param3)
ARITYn(void, callPPPPPV__JIJIIIJIJIJJ, ((void (APIENTRY *) (intptr_t, jint, intptr_t, jint, jint, jint, intptr_t, jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, param4, param5, (intptr_t)param6, param7, (intptr_t)param8, param9, (intptr_t)param10), jlong param0, jint param1, jlong param2, jint param3, jint param4, jint param5, jlong param6, jint param7, jlong param8, jint param9, jlong param10)
ARITYn(void, callPJPV__JIJIIJJ, ((void (APIENTRY *) (intptr_t, jint, jlong, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, (intptr_t)param5), jlong param0, jint param1, jlong param2, jint param3, jint param4, jlong param5)
ARITYn(void, callPJPPV__JIJIIJIJJ, ((void (APIENTRY *) (intptr_t, jint, jlong, jint, jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, (intptr_t)param5, param6, (intptr_t)param7), jlong param0, jint param1, jlong param2, jint param3, jint param4, jlong param5, jint param6, jlong param7)
ARITYn(void, callPPPV__JIJIJJ, ((void (APIENTRY *) (intptr_t, jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, param3, (intptr_t)param4), jlong param0, jint param1, jlong param2, jint param3, jlong param4)
ARITYn(void, callPPPV__JIJJJ, ((void (APIENTRY *) (intptr_t, jint, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jint param1, jlong param2, jlong param3)
ARITYn(void, callPJJV__JIJJIJ, ((void (APIENTRY *) (intptr_t, jint, jlong, jlong, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4), jlong param0, jint param1, jlong param2, jlong param3, jint param4)
ARITYn(void, callPPV__JJJ, ((void (APIENTRY *) (intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1), jlong param0, jlong param1)
ARITYn(void, callPJV__JJJ, ((void (APIENTRY *) (intptr_t, jlong))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jlong param1)
ARITYn(void, callJPV__JJJ, ((void (APIENTRY *) (jlong, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jlong param0, jlong param1)
ARITYn(void, callPPPV__JJFJJ, ((void (APIENTRY *) (intptr_t, intptr_t, jfloat, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3), jlong param0, jlong param1, jfloat param2, jlong param3)
ARITYn(void, callPPV__JJIJ, ((void (APIENTRY *) (intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jint param2)
ARITYn(void, callPJV__JJIJ, ((void (APIENTRY *) (intptr_t, jlong, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jlong param1, jint param2)
ARITYn(void, callPJV__JJIIJ, ((void (APIENTRY *) (intptr_t, jlong, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3), jlong param0, jlong param1, jint param2, jint param3)
ARITYn(void, callPPV__JJIIJ, ((void (APIENTRY *) (intptr_t, intptr_t, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3), jlong param0, jlong param1, jint param2, jint param3)
ARITYn(void, callPPPV__JJIIIIIIJIIIIIIIIIJ, ((void (APIENTRY *) (intptr_t, intptr_t, jint, jint, jint, jint, jint, jint, intptr_t, jint, jint, jint, jint, jint, jint, jint, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, param3, param4, param5, param6, param7, (intptr_t)param8, param9, param10, param11, param12, param13, param14, param15, param16, param17), jlong param0, jlong param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jlong param8, jint param9, jint param10, jint param11, jint param12, jint param13, jint param14, jint param15, jint param16, jint param17)
ARITYn(void, callPJPV__JJIIIJJ, ((void (APIENTRY *) (intptr_t, jlong, jint, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, (intptr_t)param5), jlong param0, jlong param1, jint param2, jint param3, jint param4, jlong param5)
ARITYn(void, callPJJJJV__JJIIJJJIJ, ((void (APIENTRY *) (intptr_t, jlong, jint, jint, jlong, jlong, jlong, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, param6, param7), jlong param0, jlong param1, jint param2, jint param3, jlong param4, jlong param5, jlong param6, jint param7)
ARITYn(void, callPJPV__JJIJJ, ((void (APIENTRY *) (intptr_t, jlong, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3), jlong param0, jlong param1, jint param2, jlong param3)
ARITYn(void, callPPPV__JJIJJ, ((void (APIENTRY *) (intptr_t, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3), jlong param0, jlong param1, jint param2, jlong param3)
ARITYn(void, callPJJV__JJIJIJ, ((void (APIENTRY *) (intptr_t, jlong, jint, jlong, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4), jlong param0, jlong param1, jint param2, jlong param3, jint param4)
ARITYn(void, callPJJPV__JJIJIIJJ, ((void (APIENTRY *) (intptr_t, jlong, jint, jlong, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, (intptr_t)param6), jlong param0, jlong param1, jint param2, jlong param3, jint param4, jint param5, jlong param6)
ARITYn(void, callPJJPV__JJIJIIJIJ, ((void (APIENTRY *) (intptr_t, jlong, jint, jlong, jint, jint, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, (intptr_t)param6, param7), jlong param0, jlong param1, jint param2, jlong param3, jint param4, jint param5, jlong param6, jint param7)
ARITYn(void, callPJPPV__JJIJIJJ, ((void (APIENTRY *) (intptr_t, jlong, jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3, param4, (intptr_t)param5), jlong param0, jlong param1, jint param2, jlong param3, jint param4, jlong param5)
ARITYn(void, callPJJPV__JJIJIJJ, ((void (APIENTRY *) (intptr_t, jlong, jint, jlong, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, (intptr_t)param5), jlong param0, jlong param1, jint param2, jlong param3, jint param4, jlong param5)
ARITYn(void, callPJPV__JJJJ, ((void (APIENTRY *) (intptr_t, jlong, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2), jlong param0, jlong param1, jlong param2)
ARITYn(void, callPPPV__JJJJ, ((void (APIENTRY *) (intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2), jlong param0, jlong param1, jlong param2)
ARITYn(void, callPJJV__JJJJ, ((void (APIENTRY *) (intptr_t, jlong, jlong))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2), jlong param0, jlong param1, jlong param2)
ARITYn(void, callPPPV__JJJIJ, ((void (APIENTRY *) (intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3), jlong param0, jlong param1, jlong param2, jint param3)
ARITYn(void, callPJJV__JJJIJ, ((void (APIENTRY *) (intptr_t, jlong, jlong, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3), jlong param0, jlong param1, jlong param2, jint param3)
ARITYn(void, callPJJV__JJJIIJ, ((void (APIENTRY *) (intptr_t, jlong, jlong, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4), jlong param0, jlong param1, jlong param2, jint param3, jint param4)
ARITYn(void, callPJJPV__JJJIIJJ, ((void (APIENTRY *) (intptr_t, jlong, jlong, jint, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, (intptr_t)param5), jlong param0, jlong param1, jlong param2, jint param3, jint param4, jlong param5)
ARITYn(void, callPPPPPPV__JJJIIJJJJ, ((void (APIENTRY *) (intptr_t, intptr_t, intptr_t, jint, jint, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3, param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7), jlong param0, jlong param1, jlong param2, jint param3, jint param4, jlong param5, jlong param6, jlong param7)
ARITYn(void, callPJJPV__JJJIJJ, ((void (APIENTRY *) (intptr_t, jlong, jlong, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, (intptr_t)param4), jlong param0, jlong param1, jlong param2, jint param3, jlong param4)
ARITYn(void, callPPPPV__JJJIJJ, ((void (APIENTRY *) (intptr_t, intptr_t, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, param3, (intptr_t)param4), jlong param0, jlong param1, jlong param2, jint param3, jlong param4)
ARITYn(void, callPJJPV__JJJJJ, ((void (APIENTRY *) (intptr_t, jlong, jlong, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, (intptr_t)param3), jlong param0, jlong param1, jlong param2, jlong param3)
ARITYn(void, callPJPPV__JJJJJ, ((void (APIENTRY *) (intptr_t, jlong, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jlong param1, jlong param2, jlong param3)
ARITYn(void, callPPPPV__JJJJJ, ((void (APIENTRY *) (intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3), jlong param0, jlong param1, jlong param2, jlong param3)
ARITYn(void, callPJJJV__JJJJIJ, ((void (APIENTRY *) (intptr_t, jlong, jlong, jlong, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4), jlong param0, jlong param1, jlong param2, jlong param3, jint param4)
ARITYn(void, callPPPPV__JJJJIJ, ((void (APIENTRY *) (intptr_t, intptr_t, intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, param4), jlong param0, jlong param1, jlong param2, jlong param3, jint param4)
ARITYn(void, callPJJJPV__JJJJJJ, ((void (APIENTRY *) (intptr_t, jlong, jlong, jlong, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, (intptr_t)param4), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4)
ARITYn(void, callPJJJJV__JJJJJIIJ, ((void (APIENTRY *) (intptr_t, jlong, jlong, jlong, jlong, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, param6), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jint param5, jint param6)
ARITYn(void, callPJJJJJJJJV__JJJJJJJJJIIJ, ((void (APIENTRY *) (intptr_t, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jint, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jint param9, jint param10)
ARITYn(void, callPPPV__JJZJJ, ((void (APIENTRY *) (intptr_t, intptr_t, jboolean, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2, (intptr_t)param3), jlong param0, jlong param1, jboolean param2, jlong param3)
ARITYn(void, callV__SJ, ((void (APIENTRY *) (jshort))(intptr_t)__functionAddress)(param0), jshort param0)
ARITYn(void, callV__SSJ, ((void (APIENTRY *) (jshort, jshort))(intptr_t)__functionAddress)(param0, param1), jshort param0, jshort param1)
ARITYn(void, callV__SSSJ, ((void (APIENTRY *) (jshort, jshort, jshort))(intptr_t)__functionAddress)(param0, param1, param2), jshort param0, jshort param1, jshort param2)
ARITYn(void, callV__SSSSJ, ((void (APIENTRY *) (jshort, jshort, jshort, jshort))(intptr_t)__functionAddress)(param0, param1, param2, param3), jshort param0, jshort param1, jshort param2, jshort param3)
ARITYn(void, callV__ZJ, ((void (APIENTRY *) (jboolean))(intptr_t)__functionAddress)(param0), jboolean param0)
ARITYn(void, callV__ZZZZJ, ((void (APIENTRY *) (jboolean, jboolean, jboolean, jboolean))(intptr_t)__functionAddress)(param0, param1, param2, param3), jboolean param0, jboolean param1, jboolean param2, jboolean param3)
ARITY0(jboolean, callZ__J, return ((jboolean (APIENTRY *) ())(intptr_t)__functionAddress)())
ARITYn(jboolean, callZ__IJ, return ((jboolean (APIENTRY *) (jint))(intptr_t)__functionAddress)(param0), jint param0)
ARITYn(jboolean, callZ__IFFJ, return ((jboolean (APIENTRY *) (jint, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jfloat param1, jfloat param2)
ARITYn(jboolean, callPZ__IFFJJ, return ((jboolean (APIENTRY *) (jint, jfloat, jfloat, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, (intptr_t)param3), jint param0, jfloat param1, jfloat param2, jlong param3)
ARITYn(jboolean, callZ__IIJ, return ((jboolean (APIENTRY *) (jint, jint))(intptr_t)__functionAddress)(param0, param1), jint param0, jint param1)
ARITYn(jboolean, callZ__IIFFJ, return ((jboolean (APIENTRY *) (jint, jint, jfloat, jfloat))(intptr_t)__functionAddress)(param0, param1, param2, param3), jint param0, jint param1, jfloat param2, jfloat param3)
ARITYn(jboolean, callPPPPZ__IIIFJJJJJ, return ((jboolean (APIENTRY *) (jint, jint, jint, jfloat, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7), jint param0, jint param1, jint param2, jfloat param3, jlong param4, jlong param5, jlong param6, jlong param7)
ARITYn(jboolean, callPZ__IIJJ, return ((jboolean (APIENTRY *) (jint, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2), jint param0, jint param1, jlong param2)
ARITYn(jboolean, callPPZ__IIJIJJ, return ((jboolean (APIENTRY *) (jint, jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)(param0, param1, (intptr_t)param2, param3, (intptr_t)param4), jint param0, jint param1, jlong param2, jint param3, jlong param4)
ARITYn(jboolean, callPZ__IJJ, return ((jboolean (APIENTRY *) (jint, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jint param0, jlong param1)
ARITYn(jboolean, callJZ__IJJ, return ((jboolean (APIENTRY *) (jint, jlong))(intptr_t)__functionAddress)(param0, param1), jint param0, jlong param1)
ARITYn(jboolean, callJZ__IJIJ, return ((jboolean (APIENTRY *) (jint, jlong, jint))(intptr_t)__functionAddress)(param0, param1, param2), jint param0, jlong param1, jint param2)
ARITYn(jboolean, callPZ__IJIJ, return ((jboolean (APIENTRY *) (jint, intptr_t, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2), jint param0, jlong param1, jint param2)
ARITYn(jboolean, callPPZ__IJIJJ, return ((jboolean (APIENTRY *) (jint, intptr_t, jint, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2, (intptr_t)param3), jint param0, jlong param1, jint param2, jlong param3)
ARITYn(jboolean, callPPZ__IJJJ, return ((jboolean (APIENTRY *) (jint, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2), jint param0, jlong param1, jlong param2)
ARITYn(jboolean, callPZ__JJ, return ((jboolean (APIENTRY *) (intptr_t))(intptr_t)__functionAddress)((intptr_t)param0), jlong param0)
ARITYn(jboolean, callJZ__JJ, return ((jboolean (APIENTRY *) (jlong))(intptr_t)__functionAddress)(param0), jlong param0)
ARITYn(jboolean, callPZ__JIJ, return ((jboolean (APIENTRY *) (intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, param1), jlong param0, jint param1)
ARITYn(jboolean, callPPZ__JIJJ, return ((jboolean (APIENTRY *) (intptr_t, jint, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, param1, (intptr_t)param2), jlong param0, jint param1, jlong param2)
ARITYn(jboolean, callPPZ__JJJ, return ((jboolean (APIENTRY *) (intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1), jlong param0, jlong param1)
ARITYn(jboolean, callPPZ__JJIJ, return ((jboolean (APIENTRY *) (intptr_t, intptr_t, jint))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, param2), jlong param0, jlong param1, jint param2)
ARITYn(jboolean, callJPZ__JJIJ, return ((jboolean (APIENTRY *) (jlong, intptr_t, jint))(intptr_t)__functionAddress)(param0, (intptr_t)param1, param2), jlong param0, jlong param1, jint param2)
ARITYn(jboolean, callJPPZ__JJJJ, return ((jboolean (APIENTRY *) (jlong, intptr_t, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1, (intptr_t)param2), jlong param0, jlong param1, jlong param2)
ARITYn(jboolean, callPPPZ__JJJJ, return ((jboolean (APIENTRY *) (intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2), jlong param0, jlong param1, jlong param2)
ARITYn(jboolean, callPPPPPZ__JJJJJJ, return ((jboolean (APIENTRY *) (intptr_t, intptr_t, intptr_t, intptr_t, intptr_t))(intptr_t)__functionAddress)((intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4), jlong param0, jlong param1, jlong param2, jlong param3, jlong param4)
ARITYn(jboolean, callZ__ZJ, return ((jboolean (APIENTRY *) (jboolean))(intptr_t)__functionAddress)(param0), jboolean param0)
ARITYn(jboolean, callPZ__ZJJ, return ((jboolean (APIENTRY *) (jboolean, intptr_t))(intptr_t)__functionAddress)(param0, (intptr_t)param1), jboolean param0, jlong param1)

JNIEXPORT jbyte JNICALL Java_org_lwjgl_system_JNI_invokePB__B_3IJ(JNIEnv *__env, jclass clazz, jbyte param0, jintArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jbyte __result = Java_org_lwjgl_system_JNI_invokePB__BJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jbyte JNICALL JavaCritical_org_lwjgl_system_JNI_invokePB__B_3IJ(jbyte param0, jint length1, jint* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_invokePB__BJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_invokePPI__I_3II_3IIZJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jint param2, jintArray param3, jint param4, jboolean param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_invokePPI__IJIJIZJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, (intptr_t)paramArray3, param4, param5, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPI__I_3II_3IIZJ(jint param0, jint length1, jint* param1, jint param2, jint length3, jint* param3, jint param4, jboolean param5, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_invokePPI__IJIJIZJ(NULL, NULL, param0, (intptr_t)param1, param2, (intptr_t)param3, param4, param5, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_invokePPI__I_3SI_3SIZJ(JNIEnv *__env, jclass clazz, jint param0, jshortArray param1, jint param2, jshortArray param3, jint param4, jboolean param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_invokePPI__IJIJIZJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, (intptr_t)paramArray3, param4, param5, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPI__I_3SI_3SIZJ(jint param0, jint length1, jshort* param1, jint param2, jint length3, jshort* param3, jint param4, jboolean param5, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_invokePPI__IJIJIZJ(NULL, NULL, param0, (intptr_t)param1, param2, (intptr_t)param3, param4, param5, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_invokePPPPPPPPI__JIIJ_3I_3I_3F_3I_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jint param2, jlong param3, jintArray param4, jintArray param5, jfloatArray param6, jintArray param7, jintArray param8, jintArray param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    void *paramArray8 = param8 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param8, 0);
    void *paramArray9 = param9 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param9, 0);
    jint __result = Java_org_lwjgl_system_JNI_invokePPPPPPPPI__JIIJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, (intptr_t)paramArray5, (intptr_t)paramArray6, (intptr_t)paramArray7, (intptr_t)paramArray8, (intptr_t)paramArray9, __functionAddress);
    if (param9 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param9, paramArray9, 0); }
    if (param8 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param8, paramArray8, 0); }
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPPPPPPI__JIIJ_3I_3I_3F_3I_3I_3IJ(jlong param0, jint param1, jint param2, jlong param3, jint length4, jint* param4, jint length5, jint* param5, jint length6, jfloat* param6, jint length7, jint* param7, jint length8, jint* param8, jint length9, jint* param9, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    UNUSED_PARAM(length6)
    UNUSED_PARAM(length7)
    UNUSED_PARAM(length8)
    UNUSED_PARAM(length9)
    return Java_org_lwjgl_system_JNI_invokePPPPPPPPI__JIIJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7, (intptr_t)param8, (intptr_t)param9, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_invokePPPPI__JJII_3F_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jint param3, jfloatArray param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_invokePPPPI__JJIIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPPI__JJII_3F_3IJ(jlong param0, jlong param1, jint param2, jint param3, jint length4, jfloat* param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_invokePPPPI__JJIIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_invokePPPPI__JJII_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jint param3, jintArray param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_invokePPPPI__JJIIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPPI__JJII_3I_3IJ(jlong param0, jlong param1, jint param2, jint param3, jint length4, jint* param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_invokePPPPI__JJIIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_invokePPPPI__JJJ_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlongArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_invokePPPPI__JJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPPI__JJJ_3JJ(jlong param0, jlong param1, jlong param2, jint length3, jlong* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_invokePPPPI__JJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_invokePPI__J_3FSJ(JNIEnv *__env, jclass clazz, jlong param0, jfloatArray param1, jshort param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jint __result = Java_org_lwjgl_system_JNI_invokePPI__JJSJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPI__J_3FSJ(jlong param0, jint length1, jfloat* param1, jshort param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_invokePPI__JJSJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_invokePI__S_3FBJ(JNIEnv *__env, jclass clazz, jshort param0, jfloatArray param1, jbyte param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jint __result = Java_org_lwjgl_system_JNI_invokePI__SJBJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_invokePI__S_3FBJ(jshort param0, jint length1, jfloat* param1, jbyte param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_invokePI__SJBJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_invokePI__S_3IJ(JNIEnv *__env, jclass clazz, jshort param0, jintArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jint __result = Java_org_lwjgl_system_JNI_invokePI__SJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_invokePI__S_3IJ(jshort param0, jint length1, jint* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_invokePI__SJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_invokePI__S_3IBJ(JNIEnv *__env, jclass clazz, jshort param0, jintArray param1, jbyte param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jint __result = Java_org_lwjgl_system_JNI_invokePI__SJBJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_invokePI__S_3IBJ(jshort param0, jint length1, jint* param1, jbyte param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_invokePI__SJBJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_invokePI__S_3SBJ(JNIEnv *__env, jclass clazz, jshort param0, jshortArray param1, jbyte param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jint __result = Java_org_lwjgl_system_JNI_invokePI__SJBJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_invokePI__S_3SBJ(jshort param0, jint length1, jshort* param1, jbyte param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_invokePI__SJBJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_invokePI___3FSJ(JNIEnv *__env, jclass clazz, jfloatArray param0, jshort param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    jint __result = Java_org_lwjgl_system_JNI_invokePI__JSJ(NULL, NULL, (intptr_t)paramArray0, param1, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_invokePI___3FSJ(jint length0, jfloat* param0, jshort param1, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    return Java_org_lwjgl_system_JNI_invokePI__JSJ(NULL, NULL, (intptr_t)param0, param1, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_invokePPP__J_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jlong __result = Java_org_lwjgl_system_JNI_invokePPP__JJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPP__J_3IJ(jlong param0, jint length1, jint* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_invokePPP__JJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_invokePP___3DIJ(JNIEnv *__env, jclass clazz, jdoubleArray param0, jint param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    jlong __result = Java_org_lwjgl_system_JNI_invokePP__JIJ(NULL, NULL, (intptr_t)paramArray0, param1, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_invokePP___3DIJ(jint length0, jdouble* param0, jint param1, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    return Java_org_lwjgl_system_JNI_invokePP__JIJ(NULL, NULL, (intptr_t)param0, param1, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_invokePP___3FIJ(JNIEnv *__env, jclass clazz, jfloatArray param0, jint param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    jlong __result = Java_org_lwjgl_system_JNI_invokePP__JIJ(NULL, NULL, (intptr_t)paramArray0, param1, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_invokePP___3FIJ(jint length0, jfloat* param0, jint param1, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    return Java_org_lwjgl_system_JNI_invokePP__JIJ(NULL, NULL, (intptr_t)param0, param1, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_invokePP___3IIJ(JNIEnv *__env, jclass clazz, jintArray param0, jint param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    jlong __result = Java_org_lwjgl_system_JNI_invokePP__JIJ(NULL, NULL, (intptr_t)paramArray0, param1, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_invokePP___3IIJ(jint length0, jint* param0, jint param1, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    return Java_org_lwjgl_system_JNI_invokePP__JIJ(NULL, NULL, (intptr_t)param0, param1, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_invokePP___3JIJ(JNIEnv *__env, jclass clazz, jlongArray param0, jint param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    jlong __result = Java_org_lwjgl_system_JNI_invokePP__JIJ(NULL, NULL, (intptr_t)paramArray0, param1, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_invokePP___3JIJ(jint length0, jlong* param0, jint param1, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    return Java_org_lwjgl_system_JNI_invokePP__JIJ(NULL, NULL, (intptr_t)param0, param1, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_invokePP___3SIJ(JNIEnv *__env, jclass clazz, jshortArray param0, jint param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    jlong __result = Java_org_lwjgl_system_JNI_invokePP__JIJ(NULL, NULL, (intptr_t)paramArray0, param1, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_invokePP___3SIJ(jint length0, jshort* param0, jint param1, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    return Java_org_lwjgl_system_JNI_invokePP__JIJ(NULL, NULL, (intptr_t)param0, param1, __functionAddress);
}
JNIEXPORT jshort JNICALL Java_org_lwjgl_system_JNI_invokePS__B_3SZJ(JNIEnv *__env, jclass clazz, jbyte param0, jshortArray param1, jboolean param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jshort __result = Java_org_lwjgl_system_JNI_invokePS__BJZJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jshort JNICALL JavaCritical_org_lwjgl_system_JNI_invokePS__B_3SZJ(jbyte param0, jint length1, jshort* param1, jboolean param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_invokePS__BJZJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT jshort JNICALL Java_org_lwjgl_system_JNI_invokePS__S_3SSJ(JNIEnv *__env, jclass clazz, jshort param0, jshortArray param1, jshort param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jshort __result = Java_org_lwjgl_system_JNI_invokePS__SJSJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jshort JNICALL JavaCritical_org_lwjgl_system_JNI_invokePS__S_3SSJ(jshort param0, jint length1, jshort* param1, jshort param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_invokePS__SJSJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT jshort JNICALL Java_org_lwjgl_system_JNI_invokePPPS___3SJJSFJ(JNIEnv *__env, jclass clazz, jshortArray param0, jlong param1, jlong param2, jshort param3, jfloat param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    jshort __result = Java_org_lwjgl_system_JNI_invokePPPS__JJJSFJ(NULL, NULL, (intptr_t)paramArray0, param1, param2, param3, param4, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
    return __result;
}
JNIEXPORT jshort JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPS___3SJJSFJ(jint length0, jshort* param0, jlong param1, jlong param2, jshort param3, jfloat param4, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    return Java_org_lwjgl_system_JNI_invokePPPS__JJJSFJ(NULL, NULL, (intptr_t)param0, param1, param2, param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__B_3FJ(JNIEnv *__env, jclass clazz, jbyte param0, jfloatArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_invokePV__BJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__B_3FJ(jbyte param0, jint length1, jfloat* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_invokePV__BJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__II_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jdoubleArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePV__IIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__II_3DJ(jint param0, jint param1, jint length2, jdouble* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePV__IIJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPV__II_3D_3D_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jdoubleArray param2, jdoubleArray param3, jdoubleArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_invokePPPV__IIJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPV__II_3D_3D_3DJ(jint param0, jint param1, jint length2, jdouble* param2, jint length3, jdouble* param3, jint length4, jdouble* param4, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_invokePPPV__IIJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__II_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jfloatArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePV__IIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__II_3FJ(jint param0, jint param1, jint length2, jfloat* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePV__IIJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__II_3FIIJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jfloatArray param2, jint param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePV__IIJIIJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, param4, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__II_3FIIJ(jint param0, jint param1, jint length2, jfloat* param2, jint param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePV__IIJIIJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPV__II_3F_3F_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jfloatArray param2, jfloatArray param3, jfloatArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_invokePPPV__IIJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPV__II_3F_3F_3FJ(jint param0, jint param1, jint length2, jfloat* param2, jint length3, jfloat* param3, jint length4, jfloat* param4, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_invokePPPV__IIJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__II_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePV__IIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__II_3IJ(jint param0, jint param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePV__IIJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__II_3IIIJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jint param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePV__IIJIIJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, param4, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__II_3IIIJ(jint param0, jint param1, jint length2, jint* param2, jint param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePV__IIJIIJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__II_3JJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlongArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePV__IIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__II_3JJ(jint param0, jint param1, jint length2, jlong* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePV__IIJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPV__II_3J_3J_3JJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlongArray param2, jlongArray param3, jlongArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_invokePPPV__IIJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPV__II_3J_3J_3JJ(jint param0, jint param1, jint length2, jlong* param2, jint length3, jlong* param3, jint length4, jlong* param4, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_invokePPPV__IIJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__II_3SIIJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jshortArray param2, jint param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePV__IIJIIJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, param4, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__II_3SIIJ(jint param0, jint param1, jint length2, jshort* param2, jint param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePV__IIJIIJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPPPV__IJI_3F_3FJIJIZJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jint param2, jfloatArray param3, jfloatArray param4, jlong param5, jint param6, jlong param7, jint param8, jboolean param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_invokePPPPPV__IJIJJJIJIZJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, param5, param6, param7, param8, param9, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPPPV__IJI_3F_3FJIJIZJ(jint param0, jlong param1, jint param2, jint length3, jfloat* param3, jint length4, jfloat* param4, jlong param5, jint param6, jlong param7, jint param8, jboolean param9, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_invokePPPPPV__IJIJJJIJIZJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, (intptr_t)param4, param5, param6, param7, param8, param9, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__I_3DJ(JNIEnv *__env, jclass clazz, jint param0, jdoubleArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_invokePV__IJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__I_3DJ(jint param0, jint length1, jdouble* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_invokePV__IJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__I_3FJ(JNIEnv *__env, jclass clazz, jint param0, jfloatArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_invokePV__IJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__I_3FJ(jint param0, jint length1, jfloat* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_invokePV__IJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPV__I_3F_3F_3FJ(JNIEnv *__env, jclass clazz, jint param0, jfloatArray param1, jfloatArray param2, jfloatArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_invokePPPV__IJJJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPV__I_3F_3F_3FJ(jint param0, jint length1, jfloat* param1, jint length2, jfloat* param2, jint length3, jfloat* param3, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_invokePPPV__IJJJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__I_3IJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_invokePV__IJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__I_3IJ(jint param0, jint length1, jint* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_invokePV__IJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPPPV__I_3II_3F_3FJI_3IIZJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jint param2, jfloatArray param3, jfloatArray param4, jlong param5, jint param6, jintArray param7, jint param8, jboolean param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    Java_org_lwjgl_system_JNI_invokePPPPPV__IJIJJJIJIZJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, param5, param6, (intptr_t)paramArray7, param8, param9, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPPPV__I_3II_3F_3FJI_3IIZJ(jint param0, jint length1, jint* param1, jint param2, jint length3, jfloat* param3, jint length4, jfloat* param4, jlong param5, jint param6, jint length7, jint* param7, jint param8, jboolean param9, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length7)
    Java_org_lwjgl_system_JNI_invokePPPPPV__IJIJJJIJIZJ(NULL, NULL, param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4, param5, param6, (intptr_t)param7, param8, param9, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPPPV__I_3SI_3F_3FJI_3SIZJ(JNIEnv *__env, jclass clazz, jint param0, jshortArray param1, jint param2, jfloatArray param3, jfloatArray param4, jlong param5, jint param6, jshortArray param7, jint param8, jboolean param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    Java_org_lwjgl_system_JNI_invokePPPPPV__IJIJJJIJIZJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, param5, param6, (intptr_t)paramArray7, param8, param9, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPPPV__I_3SI_3F_3FJI_3SIZJ(jint param0, jint length1, jshort* param1, jint param2, jint length3, jfloat* param3, jint length4, jfloat* param4, jlong param5, jint param6, jint length7, jshort* param7, jint param8, jboolean param9, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length7)
    Java_org_lwjgl_system_JNI_invokePPPPPV__IJIJJJIJIZJ(NULL, NULL, param0, (intptr_t)param1, param2, (intptr_t)param3, (intptr_t)param4, param5, param6, (intptr_t)param7, param8, param9, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPV__JII_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jint param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_invokePPV__JIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPV__JII_3IJ(jlong param0, jint param1, jint param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_invokePPV__JIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPPPV__JIJ_3IJJJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jintArray param3, jlong param4, jlong param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_invokePPPPPV__JIJJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, param4, param5, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPPPV__JIJ_3IJJJ(jlong param0, jint param1, jlong param2, jint length3, jint* param3, jlong param4, jlong param5, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_invokePPPPPV__JIJJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, param4, param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPV__JS_3DSJ(JNIEnv *__env, jclass clazz, jlong param0, jshort param1, jdoubleArray param2, jshort param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePPV__JSJSJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPV__JS_3DSJ(jlong param0, jshort param1, jint length2, jdouble* param2, jshort param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePPV__JSJSJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPV__JS_3FSJ(JNIEnv *__env, jclass clazz, jlong param0, jshort param1, jfloatArray param2, jshort param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePPV__JSJSJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPV__JS_3FSJ(jlong param0, jshort param1, jint length2, jfloat* param2, jshort param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePPV__JSJSJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPV__JS_3ISJ(JNIEnv *__env, jclass clazz, jlong param0, jshort param1, jintArray param2, jshort param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePPV__JSJSJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPV__JS_3ISJ(jlong param0, jshort param1, jint length2, jint* param2, jshort param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePPV__JSJSJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPV__JS_3JSJ(JNIEnv *__env, jclass clazz, jlong param0, jshort param1, jlongArray param2, jshort param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePPV__JSJSJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPV__JS_3JSJ(jlong param0, jshort param1, jint length2, jlong* param2, jshort param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePPV__JSJSJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPV__JS_3SSJ(JNIEnv *__env, jclass clazz, jlong param0, jshort param1, jshortArray param2, jshort param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePPV__JSJSJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPV__JS_3SSJ(jlong param0, jshort param1, jint length2, jshort* param2, jshort param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePPV__JSJSJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPV__J_3D_3DJ(JNIEnv *__env, jclass clazz, jlong param0, jdoubleArray param1, jdoubleArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePPPV__JJJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPV__J_3D_3DJ(jlong param0, jint length1, jdouble* param1, jint length2, jdouble* param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePPPV__JJJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPV__J_3FIJ(JNIEnv *__env, jclass clazz, jlong param0, jfloatArray param1, jint param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_invokePPV__JJIJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPV__J_3FIJ(jlong param0, jint length1, jfloat* param1, jint param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_invokePPV__JJIJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPV__J_3F_3FJ(JNIEnv *__env, jclass clazz, jlong param0, jfloatArray param1, jfloatArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePPPV__JJJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPV__J_3F_3FJ(jlong param0, jint length1, jfloat* param1, jint length2, jfloat* param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePPPV__JJJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPV__J_3IIJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jint param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_invokePPV__JJIJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPV__J_3IIJ(jlong param0, jint length1, jint* param1, jint param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_invokePPV__JJIJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPV__J_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePPPV__JJJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPV__J_3I_3IJ(jlong param0, jint length1, jint* param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePPPV__JJJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPPPV__J_3I_3I_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jintArray param2, jintArray param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_invokePPPPPV__JJJJJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPPPV__J_3I_3I_3I_3IJ(jlong param0, jint length1, jint* param1, jint length2, jint* param2, jint length3, jint* param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_invokePPPPPV__JJJJJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPV__J_3SIJ(JNIEnv *__env, jclass clazz, jlong param0, jshortArray param1, jint param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_invokePPV__JJIJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPV__J_3SIJ(jlong param0, jint length1, jshort* param1, jint param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_invokePPV__JJIJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__SS_3SJ(JNIEnv *__env, jclass clazz, jshort param0, jshort param1, jshortArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePV__SSJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__SS_3SJ(jshort param0, jshort param1, jint length2, jshort* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePV__SSJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__S_3DSJ(JNIEnv *__env, jclass clazz, jshort param0, jdoubleArray param1, jshort param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_invokePV__SJSJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__S_3DSJ(jshort param0, jint length1, jdouble* param1, jshort param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_invokePV__SJSJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__S_3FSJ(JNIEnv *__env, jclass clazz, jshort param0, jfloatArray param1, jshort param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_invokePV__SJSJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__S_3FSJ(jshort param0, jint length1, jfloat* param1, jshort param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_invokePV__SJSJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPV__S_3F_3FJ(JNIEnv *__env, jclass clazz, jshort param0, jfloatArray param1, jfloatArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePPV__SJJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPV__S_3F_3FJ(jshort param0, jint length1, jfloat* param1, jint length2, jfloat* param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePPV__SJJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPV__S_3F_3FB_3FJ(JNIEnv *__env, jclass clazz, jshort param0, jfloatArray param1, jfloatArray param2, jbyte param3, jfloatArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_invokePPPV__SJJBJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPV__S_3F_3FB_3FJ(jshort param0, jint length1, jfloat* param1, jint length2, jfloat* param2, jbyte param3, jint length4, jfloat* param4, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_invokePPPV__SJJBJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__S_3ISJ(JNIEnv *__env, jclass clazz, jshort param0, jintArray param1, jshort param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_invokePV__SJSJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__S_3ISJ(jshort param0, jint length1, jint* param1, jshort param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_invokePV__SJSJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__S_3JSJ(JNIEnv *__env, jclass clazz, jshort param0, jlongArray param1, jshort param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_invokePV__SJSJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__S_3JSJ(jshort param0, jint length1, jlong* param1, jshort param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_invokePV__SJSJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePV__S_3SSJ(JNIEnv *__env, jclass clazz, jshort param0, jshortArray param1, jshort param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_invokePV__SJSJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePV__S_3SSJ(jshort param0, jint length1, jshort* param1, jshort param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_invokePV__SJSJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPV___3FIJJIJ(JNIEnv *__env, jclass clazz, jfloatArray param0, jint param1, jlong param2, jlong param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    Java_org_lwjgl_system_JNI_invokePPPV__JIJJIJ(NULL, NULL, (intptr_t)paramArray0, param1, param2, param3, param4, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPV___3FIJJIJ(jint length0, jfloat* param0, jint param1, jlong param2, jlong param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    Java_org_lwjgl_system_JNI_invokePPPV__JIJJIJ(NULL, NULL, (intptr_t)param0, param1, param2, param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPV___3FZIJJIJ(JNIEnv *__env, jclass clazz, jfloatArray param0, jboolean param1, jint param2, jlong param3, jlong param4, jint param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    Java_org_lwjgl_system_JNI_invokePPPV__JZIJJIJ(NULL, NULL, (intptr_t)paramArray0, param1, param2, param3, param4, param5, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPV___3FZIJJIJ(jint length0, jfloat* param0, jboolean param1, jint param2, jlong param3, jlong param4, jint param5, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    Java_org_lwjgl_system_JNI_invokePPPV__JZIJJIJ(NULL, NULL, (intptr_t)param0, param1, param2, param3, param4, param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_invokePPPV___3I_3I_3IJ(JNIEnv *__env, jclass clazz, jintArray param0, jintArray param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_invokePPPV__JJJJ(NULL, NULL, (intptr_t)paramArray0, (intptr_t)paramArray1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPPV___3I_3I_3IJ(jint length0, jint* param0, jint length1, jint* param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_invokePPPV__JJJJ(NULL, NULL, (intptr_t)param0, (intptr_t)param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jboolean JNICALL Java_org_lwjgl_system_JNI_invokePPZ__J_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jboolean __result = Java_org_lwjgl_system_JNI_invokePPZ__JJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jboolean JNICALL JavaCritical_org_lwjgl_system_JNI_invokePPZ__J_3IJ(jlong param0, jint length1, jint* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_invokePPZ__JJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPI__IIII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jfloatArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPI__IIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPI__IIII_3FJ(jint param0, jint param1, jint param2, jint param3, jint length4, jfloat* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPI__IIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPI__IIII_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPI__IIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPI__IIII_3IJ(jint param0, jint param1, jint param2, jint param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPI__IIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPI__III_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPI__IIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPI__III_3IJ(jint param0, jint param1, jint param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPI__IIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPI__II_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPI__IIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPI__II_3IJ(jint param0, jint param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPI__IIJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPI__II_3I_3I_3I_3IJJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jintArray param3, jintArray param4, jintArray param5, jlong param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPI__IIJJJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, (intptr_t)paramArray4, (intptr_t)paramArray5, param6, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPI__II_3I_3I_3I_3IJJ(jint param0, jint param1, jint length2, jint* param2, jint length3, jint* param3, jint length4, jint* param4, jint length5, jint* param5, jlong param6, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPPPPPI__IIJJJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, param6, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPI__II_3I_3I_3I_3I_3IJJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jintArray param3, jintArray param4, jintArray param5, jintArray param6, jlong param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPI__IIJJJJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, (intptr_t)paramArray4, (intptr_t)paramArray5, (intptr_t)paramArray6, param7, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPI__II_3I_3I_3I_3I_3IJJ(jint param0, jint param1, jint length2, jint* param2, jint length3, jint* param3, jint length4, jint* param4, jint length5, jint* param5, jint length6, jint* param6, jlong param7, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    UNUSED_PARAM(length6)
    return Java_org_lwjgl_system_JNI_callPPPPPPI__IIJJJJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, param7, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPI__IJ_3IJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPI__IJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPI__IJ_3IJ(jint param0, jlong param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPI__IJJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPI__I_3IJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPI__IJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPI__I_3IJ(jint param0, jint length1, jint* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_callPI__IJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPI__I_3IIJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jint param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPI__IJIJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPI__I_3IIJ(jint param0, jint length1, jint* param1, jint param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_callPI__IJIJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__JIII_3I_3FJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jint param2, jint param3, jintArray param4, jfloatArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JIIIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__JIII_3I_3FJ(jlong param0, jint param1, jint param2, jint param3, jint length4, jint* param4, jint length5, jfloat* param5, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPPPI__JIIIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__JIII_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jint param2, jint param3, jintArray param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JIIIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__JIII_3I_3IJ(jlong param0, jint param1, jint param2, jint param3, jint length4, jint* param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPPPI__JIIIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPI__JIIJ_3IJJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jint param2, jlong param3, jintArray param4, jlong param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPI__JIIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, param5, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPI__JIIJ_3IJJ(jlong param0, jint param1, jint param2, jlong param3, jint length4, jint* param4, jlong param5, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPPI__JIIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, param5, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPI__JIIJ_3JJJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jint param2, jlong param3, jlongArray param4, jlong param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPI__JIIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, param5, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPI__JIIJ_3JJJ(jlong param0, jint param1, jint param2, jlong param3, jint length4, jlong* param4, jlong param5, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPPI__JIIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, param5, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPI__JII_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jint param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPI__JIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPI__JII_3IJ(jlong param0, jint param1, jint param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPI__JIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPI__JII_3J_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jint param2, jlongArray param3, jintArray param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPI__JIIJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPI__JII_3J_3I_3IJ(jlong param0, jint param1, jint param2, jint length3, jlong* param3, jint length4, jint* param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPPPPI__JIIJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPI__JIJIIJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jint param3, jint param4, jlong param5, jintArray param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPI__JIJIIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPI__JIJIIJ_3IJ(jlong param0, jint param1, jlong param2, jint param3, jint param4, jlong param5, jint length6, jint* param6, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    return Java_org_lwjgl_system_JNI_callPPPPI__JIJIIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPI__JIJJ_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jlong param3, jlongArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPI__JIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPI__JIJJ_3JJ(jlong param0, jint param1, jlong param2, jlong param3, jint length4, jlong* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPPI__JIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__JIJ_3DJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jdoubleArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__JIJ_3DJ(jlong param0, jint param1, jlong param2, jint length3, jdouble* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPI__JIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__JIJ_3FJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jfloatArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__JIJ_3FJ(jlong param0, jint param1, jlong param2, jint length3, jfloat* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPI__JIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__JIJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__JIJ_3IJ(jlong param0, jint param1, jlong param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPI__JIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPJPI__JIJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPJPI__JIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPI__JIJ_3IJ(jlong param0, jint param1, jlong param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPJPI__JIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPI__JIJ_3IJJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jintArray param3, jlong param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPI__JIJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, param4, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPI__JIJ_3IJJ(jlong param0, jint param1, jlong param2, jint length3, jint* param3, jlong param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPPI__JIJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__JIJ_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jlongArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__JIJ_3JJ(jlong param0, jint param1, jlong param2, jint length3, jlong* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPI__JIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPI__JIJ_3JJJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jlongArray param3, jlong param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPI__JIJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, param4, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPI__JIJ_3JJJ(jlong param0, jint param1, jlong param2, jint length3, jlong* param3, jlong param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPPI__JIJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__JIJ_3SJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jshortArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__JIJ_3SJ(jlong param0, jint param1, jlong param2, jint length3, jshort* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPI__JIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPI__JI_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPI__JIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPI__JI_3IJ(jlong param0, jint param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPI__JIJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__JI_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jintArray param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JIJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__JI_3I_3IJ(jlong param0, jint param1, jint length2, jint* param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPI__JIJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__JI_3I_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jintArray param2, jlongArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JIJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__JI_3I_3JJ(jlong param0, jint param1, jint length2, jint* param2, jint length3, jlong* param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPI__JIJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPI__JI_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlongArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPI__JIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPI__JI_3JJ(jlong param0, jint param1, jint length2, jlong* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPI__JIJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPJI__JI_3JIJJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlongArray param2, jint param3, jlong param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPJI__JIJIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, param4, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPJI__JI_3JIJJ(jlong param0, jint param1, jint length2, jlong* param2, jint param3, jlong param4, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPJI__JIJIJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPJPPI__JJIIJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jint param3, jlong param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPJPPI__JJIIJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPI__JJIIJ_3IJ(jlong param0, jlong param1, jint param2, jint param3, jlong param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPJPPI__JJIIJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPJPPJI__JJIIJ_3IJIJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jint param3, jlong param4, jintArray param5, jlong param6, jint param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPJPPJI__JJIIJJJIJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, param6, param7, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPJI__JJIIJ_3IJIJ(jlong param0, jlong param1, jint param2, jint param3, jlong param4, jint length5, jint* param5, jlong param6, jint param7, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPJPPJI__JJIIJJJIJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, param6, param7, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPJPPJI__JJIIJ_3JJIJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jint param3, jlong param4, jlongArray param5, jlong param6, jint param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPJPPJI__JJIIJJJIJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, param6, param7, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPJI__JJIIJ_3JJIJ(jlong param0, jlong param1, jint param2, jint param3, jlong param4, jint length5, jlong* param5, jlong param6, jint param7, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPJPPJI__JJIIJJJIJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, param6, param7, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJ_3DIJJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jlong param9, jdoubleArray param10, jint param11, jlong param12, jlong param13, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray10 = param10 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param10, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)paramArray10, param11, param12, param13, __functionAddress);
    if (param10 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param10, paramArray10, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJ_3DIJJJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jlong param9, jint length10, jdouble* param10, jint param11, jlong param12, jlong param13, jlong __functionAddress) {
    UNUSED_PARAM(length10)
    return Java_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)param10, param11, param12, param13, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJ_3FIJJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jlong param9, jfloatArray param10, jint param11, jlong param12, jlong param13, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray10 = param10 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param10, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)paramArray10, param11, param12, param13, __functionAddress);
    if (param10 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param10, paramArray10, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJ_3FIJJJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jlong param9, jint length10, jfloat* param10, jint param11, jlong param12, jlong param13, jlong __functionAddress) {
    UNUSED_PARAM(length10)
    return Java_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)param10, param11, param12, param13, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJ_3IIJJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jlong param9, jintArray param10, jint param11, jlong param12, jlong param13, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray10 = param10 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param10, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)paramArray10, param11, param12, param13, __functionAddress);
    if (param10 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param10, paramArray10, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJ_3IIJJJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jlong param9, jint length10, jint* param10, jint param11, jlong param12, jlong param13, jlong __functionAddress) {
    UNUSED_PARAM(length10)
    return Java_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)param10, param11, param12, param13, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJ_3SIJJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jlong param9, jshortArray param10, jint param11, jlong param12, jlong param13, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray10 = param10 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param10, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)paramArray10, param11, param12, param13, __functionAddress);
    if (param10 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param10, paramArray10, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJ_3SIJJJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jlong param9, jint length10, jshort* param10, jint param11, jlong param12, jlong param13, jlong __functionAddress) {
    UNUSED_PARAM(length10)
    return Java_org_lwjgl_system_JNI_callPPPPPPPPPPPPI__JJIJJJJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)param10, param11, param12, param13, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJ_3DIJJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jdoubleArray param7, jint param8, jlong param9, jlong param10, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)paramArray7, param8, param9, param10, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJ_3DIJJJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jint length7, jdouble* param7, jint param8, jlong param9, jlong param10, jlong __functionAddress) {
    UNUSED_PARAM(length7)
    return Java_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7, param8, param9, param10, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJ_3FIJJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jfloatArray param7, jint param8, jlong param9, jlong param10, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)paramArray7, param8, param9, param10, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJ_3FIJJJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jint length7, jfloat* param7, jint param8, jlong param9, jlong param10, jlong __functionAddress) {
    UNUSED_PARAM(length7)
    return Java_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7, param8, param9, param10, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJ_3IIJJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jintArray param7, jint param8, jlong param9, jlong param10, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)paramArray7, param8, param9, param10, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJ_3IIJJJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jint length7, jint* param7, jint param8, jlong param9, jlong param10, jlong __functionAddress) {
    UNUSED_PARAM(length7)
    return Java_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7, param8, param9, param10, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJ_3SIJJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jshortArray param7, jint param8, jlong param9, jlong param10, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)paramArray7, param8, param9, param10, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJ_3SIJJJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jint length7, jshort* param7, jint param8, jlong param9, jlong param10, jlong __functionAddress) {
    UNUSED_PARAM(length7)
    return Java_org_lwjgl_system_JNI_callPPPPPPPPPI__JJIJJJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7, param8, param9, param10, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJ_3DIJJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jdoubleArray param5, jint param6, jlong param7, jlong param8, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, param6, param7, param8, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJ_3DIJJJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jint length5, jdouble* param5, jint param6, jlong param7, jlong param8, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, param6, param7, param8, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJ_3FIJJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jfloatArray param5, jint param6, jlong param7, jlong param8, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, param6, param7, param8, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJ_3FIJJJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jint length5, jfloat* param5, jint param6, jlong param7, jlong param8, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, param6, param7, param8, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJ_3IIJJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jintArray param5, jint param6, jlong param7, jlong param8, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, param6, param7, param8, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJ_3IIJJJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jint length5, jint* param5, jint param6, jlong param7, jlong param8, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, param6, param7, param8, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPJPPPI__JJIJJ_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlongArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPJPPPI__JJIJJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPI__JJIJJ_3JJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jint length5, jlong* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPJPPPI__JJIJJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJ_3SIJJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jshortArray param5, jint param6, jlong param7, jlong param8, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, param6, param7, param8, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJ_3SIJJJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jint length5, jshort* param5, jint param6, jlong param7, jlong param8, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPPPPPPPI__JJIJJJIJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, param6, param7, param8, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPJPPI__JJIJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPJPPI__JJIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPI__JJIJ_3IJ(jlong param0, jlong param1, jint param2, jlong param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPJPPI__JJIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPI__JJIJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPI__JJIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPI__JJIJ_3IJ(jlong param0, jlong param1, jint param2, jlong param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPPI__JJIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPI__JJIJ_3IJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jintArray param4, jlong param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPI__JJIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, param5, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPI__JJIJ_3IJJ(jlong param0, jlong param1, jint param2, jlong param3, jint length4, jint* param4, jlong param5, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPPPI__JJIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, param5, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPI__JJIJ_3JJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlongArray param4, jlong param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPI__JJIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, param5, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPI__JJIJ_3JJJ(jlong param0, jlong param1, jint param2, jlong param3, jint length4, jlong* param4, jlong param5, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPPPI__JJIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, param5, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__JJI_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JJIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__JJI_3IJ(jlong param0, jlong param1, jint param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPI__JJIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPJPPI__JJI_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jintArray param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPJPPI__JJIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPI__JJI_3I_3IJ(jlong param0, jlong param1, jint param2, jint length3, jint* param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPJPPI__JJIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__JJI_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlongArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JJIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__JJI_3JJ(jlong param0, jlong param1, jint param2, jint length3, jlong* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPI__JJIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPJPI__JJI_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlongArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPJPI__JJIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPI__JJI_3JJ(jlong param0, jlong param1, jint param2, jint length3, jlong* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPJPI__JJIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPI__JJJI_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jint param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPI__JJJIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPI__JJJI_3IJ(jlong param0, jlong param1, jlong param2, jint param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPPI__JJJIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPI__JJJJIJ_3IJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jint param4, jlong param5, jintArray param6, jlong param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPI__JJJJIJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, param7, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPI__JJJJIJ_3IJJ(jlong param0, jlong param1, jlong param2, jlong param3, jint param4, jlong param5, jint length6, jint* param6, jlong param7, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    return Java_org_lwjgl_system_JNI_callPPPPPPPI__JJJJIJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, param7, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPJJJJPI__JJJJJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPJJJJPI__JJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPJJJJPI__JJJJJ_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPJJJJPI__JJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPJPPPI__JJJJ_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jlongArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPJPPPI__JJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPI__JJJJ_3JJ(jlong param0, jlong param1, jlong param2, jlong param3, jint length4, jlong* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPJPPPI__JJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPI__JJJ_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlongArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPI__JJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPI__JJJ_3JJ(jlong param0, jlong param1, jlong param2, jint length3, jlong* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPPI__JJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPI__JJ_3FJJIJJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jfloatArray param2, jlong param3, jlong param4, jint param5, jlong param6, jlong param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPI__JJJJJIJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, param4, param5, param6, param7, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPI__JJ_3FJJIJJJ(jlong param0, jlong param1, jint length2, jfloat* param2, jlong param3, jlong param4, jint param5, jlong param6, jlong param7, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPPPPPPI__JJJJJIJJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, param4, param5, param6, param7, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPJPI__JJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPJPI__JJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPI__JJ_3IJ(jlong param0, jlong param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPJPI__JJJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__JJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__JJ_3IJ(jlong param0, jlong param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPPI__JJJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__JJ_3IIJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JJJIJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__JJ_3IIJ(jlong param0, jlong param1, jint length2, jint* param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPPI__JJJIJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPI__JJ_3IJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPI__JJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPI__JJ_3IJJ(jlong param0, jlong param1, jint length2, jint* param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPPPI__JJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPJPPI__JJ_3IJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPJPPI__JJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPI__JJ_3IJJ(jlong param0, jlong param1, jint length2, jint* param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPJPPI__JJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPI__JJ_3IJJIJJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jlong param3, jlong param4, jint param5, jlong param6, jlong param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPPI__JJJJJIJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, param4, param5, param6, param7, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPI__JJ_3IJJIJJJ(jlong param0, jlong param1, jint length2, jint* param2, jlong param3, jlong param4, jint param5, jlong param6, jlong param7, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPPPPPPI__JJJJJIJJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, param4, param5, param6, param7, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPJPPI__JJ_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPJPPI__JJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPI__JJ_3I_3IJ(jlong param0, jlong param1, jint length2, jint* param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPJPPI__JJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPI__JJ_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPI__JJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPI__JJ_3I_3IJ(jlong param0, jlong param1, jint length2, jint* param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPPI__JJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPI__JJ_3I_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jintArray param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPI__JJJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPI__JJ_3I_3I_3IJ(jlong param0, jlong param1, jint length2, jint* param2, jint length3, jint* param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPPPI__JJJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPI__JJ_3I_3I_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jintArray param3, jlongArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPI__JJJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPI__JJ_3I_3I_3JJ(jlong param0, jlong param1, jint length2, jint* param2, jint length3, jint* param3, jint length4, jlong* param4, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPPPI__JJJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPJPPI__JJ_3I_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jlongArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPJPPI__JJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPI__JJ_3I_3JJ(jlong param0, jlong param1, jint length2, jint* param2, jint length3, jlong* param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPJPPI__JJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__JJ_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlongArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__JJ_3JJ(jlong param0, jlong param1, jint length2, jlong* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPPI__JJJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPI__J_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPI__JJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPI__J_3IJ(jlong param0, jint length1, jint* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_callPPI__JJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__J_3IJJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jlong param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JJJJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__J_3IJJ(jlong param0, jint length1, jint* param1, jlong param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_callPPPI__JJJJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPI__J_3IJI_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jlong param2, jint param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPI__JJJIJJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPI__J_3IJI_3IJ(jlong param0, jint length1, jint* param1, jlong param2, jint param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPPI__JJJIJJ(NULL, NULL, param0, (intptr_t)param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPI__J_3I_3FI_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jfloatArray param2, jint param3, jintArray param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPI__JJJIJJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, param3, (intptr_t)paramArray4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPI__J_3I_3FI_3I_3IJ(jlong param0, jint length1, jint* param1, jint length2, jfloat* param2, jint param3, jint length4, jint* param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPPPPPI__JJJIJJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, param3, (intptr_t)param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__J_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JJJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__J_3I_3IJ(jlong param0, jint length1, jint* param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPPI__JJJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPI__J_3I_3I_3IJJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jintArray param2, jintArray param3, jlong param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPI__JJJJJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, (intptr_t)paramArray3, param4, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPI__J_3I_3I_3IJJ(jlong param0, jint length1, jint* param1, jint length2, jint* param2, jint length3, jint* param3, jlong param4, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPPPI__JJJJJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPPPI__J_3I_3I_3I_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jintArray param2, jintArray param3, jintArray param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPPPI__JJJJJJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, (intptr_t)paramArray3, (intptr_t)paramArray4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPI__J_3I_3I_3I_3I_3IJ(jlong param0, jint length1, jint* param1, jint length2, jint* param2, jint length3, jint* param3, jint length4, jint* param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPPPPPPI__JJJJJJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPI__J_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jlongArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPI__JJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPI__J_3JJ(jlong param0, jint length1, jlong* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_callPPI__JJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPPI__J_3JIJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlongArray param1, jint param2, jlong param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPPI__JJIJJJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPI__J_3JIJ_3IJ(jlong param0, jint length1, jlong* param1, jint param2, jlong param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPPI__JJIJJJ(NULL, NULL, param0, (intptr_t)param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI__J_3J_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jlongArray param1, jlongArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JJJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI__J_3J_3JJ(jlong param0, jint length1, jlong* param1, jint length2, jlong* param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPPI__JJJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPI___3IJ(JNIEnv *__env, jclass clazz, jintArray param0, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPI__JJ(NULL, NULL, (intptr_t)paramArray0, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPI___3IJ(jint length0, jint* param0, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    return Java_org_lwjgl_system_JNI_callPI__JJ(NULL, NULL, (intptr_t)param0, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPI___3IIJ(JNIEnv *__env, jclass clazz, jintArray param0, jint param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPI__JIJ(NULL, NULL, (intptr_t)paramArray0, param1, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPI___3IIJ(jint length0, jint* param0, jint param1, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    return Java_org_lwjgl_system_JNI_callPI__JIJ(NULL, NULL, (intptr_t)param0, param1, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPI___3IJJ(JNIEnv *__env, jclass clazz, jintArray param0, jlong param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPI__JJJ(NULL, NULL, (intptr_t)paramArray0, param1, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPI___3IJJ(jint length0, jint* param0, jlong param1, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    return Java_org_lwjgl_system_JNI_callPPI__JJJ(NULL, NULL, (intptr_t)param0, param1, __functionAddress);
}
JNIEXPORT jint JNICALL Java_org_lwjgl_system_JNI_callPPPI___3IJ_3IJ(JNIEnv *__env, jclass clazz, jintArray param0, jlong param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jint __result = Java_org_lwjgl_system_JNI_callPPPI__JJJJ(NULL, NULL, (intptr_t)paramArray0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
    return __result;
}
JNIEXPORT jint JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPI___3IJ_3IJ(jint length0, jint* param0, jlong param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPPI__JJJJ(NULL, NULL, (intptr_t)param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPP__III_3I_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jintArray param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPP__IIIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPP__III_3I_3IJ(jint param0, jint param1, jint param2, jint length3, jint* param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPP__IIIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPP__IJ_3IJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPP__IJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPP__IJ_3IJ(jint param0, jlong param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPP__IJJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPP__JIII_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jint param2, jint param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPP__JIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPP__JIII_3IJ(jlong param0, jint param1, jint param2, jint param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPP__JIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPPPPP__JIJJJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jlong param3, jlong param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPPPPP__JIJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPP__JIJJJ_3IJ(jlong param0, jint param1, jlong param2, jlong param3, jlong param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPPPPPP__JIJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPPPPPP__JIJJJ_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jlong param3, jlong param4, jintArray param5, jintArray param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPPPPPP__JIJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, (intptr_t)paramArray6, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPP__JIJJJ_3I_3IJ(jlong param0, jint param1, jlong param2, jlong param3, jlong param4, jint length5, jint* param5, jint length6, jint* param6, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    UNUSED_PARAM(length6)
    return Java_org_lwjgl_system_JNI_callPPPPPPP__JIJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, (intptr_t)param6, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPPPP__JIJJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jlong param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPPPP__JIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPP__JIJJ_3IJ(jlong param0, jint param1, jlong param2, jlong param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPPP__JIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPP__JI_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPP__JIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPP__JI_3IJ(jlong param0, jint param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPP__JIJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPPP__JI_3IJJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jintArray param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPPP__JIJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPP__JI_3IJJ(jlong param0, jint param1, jint length2, jint* param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPPP__JIJJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPP__JJIII_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jint param3, jint param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPP__JJIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPP__JJIII_3IJ(jlong param0, jlong param1, jint param2, jint param3, jint param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPJPP__JJIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPPP__JJII_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jint param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPPP__JJIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPP__JJII_3IJ(jlong param0, jlong param1, jint param2, jint param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPP__JJIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPP__JJII_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jint param3, jintArray param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPP__JJIIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPP__JJII_3I_3IJ(jlong param0, jlong param1, jint param2, jint param3, jint length4, jint* param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPJPPP__JJIIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPJPPPPPP__JJIJJJIJJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jint param6, jlong param7, jlong param8, jintArray param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray9 = param9 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param9, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPJPPPPPP__JJIJJJIJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)paramArray9, __functionAddress);
    if (param9 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param9, paramArray9, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPJPPPPPP__JJIJJJIJJ_3IJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jint param6, jlong param7, jlong param8, jint length9, jint* param9, jlong __functionAddress) {
    UNUSED_PARAM(length9)
    return Java_org_lwjgl_system_JNI_callPPJPPPPPP__JJIJJJIJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)param9, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPJPPPPPPPP__JJIJJJJJIJJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jint param8, jlong param9, jlong param10, jintArray param11, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray11 = param11 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param11, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPJPPPPPPPP__JJIJJJJJIJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, (intptr_t)paramArray11, __functionAddress);
    if (param11 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param11, paramArray11, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPJPPPPPPPP__JJIJJJJJIJJ_3IJ(jlong param0, jlong param1, jint param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jint param8, jlong param9, jlong param10, jint length11, jint* param11, jlong __functionAddress) {
    UNUSED_PARAM(length11)
    return Java_org_lwjgl_system_JNI_callPPJPPPPPPPP__JJIJJJJJIJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, (intptr_t)param11, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPP__JJIJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPP__JJIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPP__JJIJ_3IJ(jlong param0, jlong param1, jint param2, jlong param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPJPPP__JJIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPPPP__JJIJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jlong param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPPPP__JJIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPP__JJIJ_3IJ(jlong param0, jlong param1, jint param2, jlong param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPPP__JJIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPPP__JJI_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPPP__JJIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPP__JJI_3IJ(jlong param0, jlong param1, jint param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPP__JJIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPP__JJI_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPP__JJIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPP__JJI_3IJ(jlong param0, jlong param1, jint param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPJPP__JJIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPPPP__JJJI_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jint param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPPPP__JJJIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPP__JJJI_3IJ(jlong param0, jlong param1, jlong param2, jint param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPPPPP__JJJIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jintArray param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray9 = param9 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param9, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)paramArray9, __functionAddress);
    if (param9 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param9, paramArray9, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJJ_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jlong param8, jint length9, jint* param9, jlong __functionAddress) {
    UNUSED_PARAM(length9)
    return Java_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)param9, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJ_3F_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jfloatArray param8, jintArray param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray8 = param8 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param8, 0);
    void *paramArray9 = param9 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param9, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)paramArray8, (intptr_t)paramArray9, __functionAddress);
    if (param9 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param9, paramArray9, 0); }
    if (param8 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param8, paramArray8, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJ_3F_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jint length8, jfloat* param8, jint length9, jint* param9, jlong __functionAddress) {
    UNUSED_PARAM(length8)
    UNUSED_PARAM(length9)
    return Java_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)param8, (intptr_t)param9, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJ_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jintArray param8, jintArray param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray8 = param8 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param8, 0);
    void *paramArray9 = param9 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param9, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)paramArray8, (intptr_t)paramArray9, __functionAddress);
    if (param9 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param9, paramArray9, 0); }
    if (param8 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param8, paramArray8, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJ_3I_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jint length8, jint* param8, jint length9, jint* param9, jlong __functionAddress) {
    UNUSED_PARAM(length8)
    UNUSED_PARAM(length9)
    return Java_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)param8, (intptr_t)param9, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJ_3S_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jshortArray param8, jintArray param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray8 = param8 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param8, 0);
    void *paramArray9 = param9 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param9, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)paramArray8, (intptr_t)paramArray9, __functionAddress);
    if (param9 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param9, paramArray9, 0); }
    if (param8 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param8, paramArray8, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJ_3S_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jlong param7, jint length8, jshort* param8, jint length9, jint* param9, jlong __functionAddress) {
    UNUSED_PARAM(length8)
    UNUSED_PARAM(length9)
    return Java_org_lwjgl_system_JNI_callPJPPPPPPPPP__JJJJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)param8, (intptr_t)param9, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jintArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJJ_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jlong param6, jint length7, jint* param7, jlong __functionAddress) {
    UNUSED_PARAM(length7)
    return Java_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJ_3F_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jfloatArray param6, jintArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJ_3F_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jint length6, jfloat* param6, jint length7, jint* param7, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    UNUSED_PARAM(length7)
    return Java_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, (intptr_t)param7, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJ_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jintArray param6, jintArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJ_3I_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jint length6, jint* param6, jint length7, jint* param7, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    UNUSED_PARAM(length7)
    return Java_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, (intptr_t)param7, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJ_3S_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jshortArray param6, jintArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJ_3S_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5, jint length6, jshort* param6, jint length7, jint* param7, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    UNUSED_PARAM(length7)
    return Java_org_lwjgl_system_JNI_callPJPPPPPPP__JJJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, (intptr_t)param7, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPPJPPP__JJJJJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPPJPPP__JJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPJPPP__JJJJJ_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPPPJPPP__JJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPPP__JJJJJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPPP__JJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPPP__JJJJJ_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jlong param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPJPPPPP__JJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPPP__JJJJ_3F_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jfloatArray param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPPP__JJJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPPP__JJJJ_3F_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jint length4, jfloat* param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPJPPPPP__JJJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPP__JJJJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPP__JJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPP__JJJJ_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPJPPPP__JJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPPP__JJJJ_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jintArray param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPPP__JJJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPPP__JJJJ_3I_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jint length4, jint* param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPJPPPPP__JJJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPPP__JJJJ_3S_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jshortArray param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPPP__JJJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
#ifdef LWJGL_WINDOWS
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPPP__JJJJ_3S_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jint length4, jshort* param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    return Java_org_lwjgl_system_JNI_callPJPPPPP__JJJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPP__JJJ_3D_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jdoubleArray param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPP__JJJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPP__JJJ_3D_3IJ(jlong param0, jlong param1, jlong param2, jint length3, jdouble* param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPJPPPP__JJJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPP__JJJ_3F_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jfloatArray param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPP__JJJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPP__JJJ_3F_3IJ(jlong param0, jlong param1, jlong param2, jint length3, jfloat* param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPJPPPP__JJJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPJPP__JJJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPJPP__JJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPJPP__JJJ_3IJ(jlong param0, jlong param1, jlong param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPJPP__JJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPPPP__JJJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPPPP__JJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPP__JJJ_3IJ(jlong param0, jlong param1, jlong param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPPP__JJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPP__JJJ_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jintArray param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPP__JJJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPP__JJJ_3I_3IJ(jlong param0, jlong param1, jlong param2, jint length3, jint* param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPJPPPP__JJJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPPP__JJJ_3S_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jshortArray param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPPP__JJJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPPP__JJJ_3S_3IJ(jlong param0, jlong param1, jlong param2, jint length3, jshort* param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPJPPPP__JJJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPPP__JJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPPP__JJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPP__JJ_3IJ(jlong param0, jlong param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPPP__JJJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPJPPP__JJ_3II_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jint param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPJPPP__JJJIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPP__JJ_3II_3IJ(jlong param0, jlong param1, jint length2, jint* param2, jint param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length4)
    return Java_org_lwjgl_system_JNI_callPJPPP__JJJIJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPPPP__JJ_3J_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlongArray param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPPPP__JJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPP__JJ_3J_3IJ(jlong param0, jlong param1, jint length2, jlong* param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    return Java_org_lwjgl_system_JNI_callPPPPP__JJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPP__J_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPP__JJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPP__J_3IJ(jlong param0, jint length1, jint* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_callPPP__JJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPPPP__J_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPPPP__JJJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPP__J_3I_3IJ(jlong param0, jint length1, jint* param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    return Java_org_lwjgl_system_JNI_callPPPP__JJJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT jlong JNICALL Java_org_lwjgl_system_JNI_callPP___3IJ(JNIEnv *__env, jclass clazz, jintArray param0, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    jlong __result = Java_org_lwjgl_system_JNI_callPP__JJ(NULL, NULL, (intptr_t)paramArray0, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
    return __result;
}
JNIEXPORT jlong JNICALL JavaCritical_org_lwjgl_system_JNI_callPP___3IJ(jint length0, jint* param0, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    return Java_org_lwjgl_system_JNI_callPP__JJ(NULL, NULL, (intptr_t)param0, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IDDIIDDII_3DJ(JNIEnv *__env, jclass clazz, jint param0, jdouble param1, jdouble param2, jint param3, jint param4, jdouble param5, jdouble param6, jint param7, jint param8, jdoubleArray param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray9 = param9 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param9, 0);
    Java_org_lwjgl_system_JNI_callPV__IDDIIDDIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)paramArray9, __functionAddress);
    if (param9 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param9, paramArray9, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IDDIIDDII_3DJ(jint param0, jdouble param1, jdouble param2, jint param3, jint param4, jdouble param5, jdouble param6, jint param7, jint param8, jint length9, jdouble* param9, jlong __functionAddress) {
    UNUSED_PARAM(length9)
    Java_org_lwjgl_system_JNI_callPV__IDDIIDDIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)param9, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IDDII_3DJ(JNIEnv *__env, jclass clazz, jint param0, jdouble param1, jdouble param2, jint param3, jint param4, jdoubleArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPV__IDDIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IDDII_3DJ(jint param0, jdouble param1, jdouble param2, jint param3, jint param4, jint length5, jdouble* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPV__IDDIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IFFIIFFII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jfloat param6, jint param7, jint param8, jfloatArray param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray9 = param9 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param9, 0);
    Java_org_lwjgl_system_JNI_callPV__IFFIIFFIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)paramArray9, __functionAddress);
    if (param9 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param9, paramArray9, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IFFIIFFII_3FJ(jint param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jfloat param6, jint param7, jint param8, jint length9, jfloat* param9, jlong __functionAddress) {
    UNUSED_PARAM(length9)
    Java_org_lwjgl_system_JNI_callPV__IFFIIFFIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)param9, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IFFII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloatArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPV__IFFIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IFFII_3FJ(jint param0, jfloat param1, jfloat param2, jint param3, jint param4, jint length5, jfloat* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPV__IFFIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIII_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jdoubleArray param11, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray11 = param11 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param11, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, (intptr_t)paramArray11, __functionAddress);
    if (param11 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param11, paramArray11, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIIIIII_3DJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jint length11, jdouble* param11, jlong __functionAddress) {
    UNUSED_PARAM(length11)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, (intptr_t)param11, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jfloatArray param11, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray11 = param11 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param11, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, (intptr_t)paramArray11, __functionAddress);
    if (param11 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param11, paramArray11, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIIIIII_3FJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jint length11, jfloat* param11, jlong __functionAddress) {
    UNUSED_PARAM(length11)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, (intptr_t)param11, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIII_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jintArray param11, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray11 = param11 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param11, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, (intptr_t)paramArray11, __functionAddress);
    if (param11 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param11, paramArray11, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIIIIII_3IJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jint length11, jint* param11, jlong __functionAddress) {
    UNUSED_PARAM(length11)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, (intptr_t)param11, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIII_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jshortArray param11, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray11 = param11 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param11, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, (intptr_t)paramArray11, __functionAddress);
    if (param11 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param11, paramArray11, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIIIIII_3SJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jint length11, jshort* param11, jlong __functionAddress) {
    UNUSED_PARAM(length11)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, (intptr_t)param11, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIIIII_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jdoubleArray param10, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray10 = param10 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param10, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)paramArray10, __functionAddress);
    if (param10 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param10, paramArray10, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIIIII_3DJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint length10, jdouble* param10, jlong __functionAddress) {
    UNUSED_PARAM(length10)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)param10, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIIIII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jfloatArray param10, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray10 = param10 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param10, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)paramArray10, __functionAddress);
    if (param10 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param10, paramArray10, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIIIII_3FJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint length10, jfloat* param10, jlong __functionAddress) {
    UNUSED_PARAM(length10)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)param10, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIIIII_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jintArray param10, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray10 = param10 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param10, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)paramArray10, __functionAddress);
    if (param10 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param10, paramArray10, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIIIII_3IJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint length10, jint* param10, jlong __functionAddress) {
    UNUSED_PARAM(length10)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)param10, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIIIII_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jshortArray param10, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray10 = param10 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param10, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)paramArray10, __functionAddress);
    if (param10 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param10, paramArray10, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIIIII_3SJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint length10, jshort* param10, jlong __functionAddress) {
    UNUSED_PARAM(length10)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, param9, (intptr_t)param10, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIIII_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jdoubleArray param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray9 = param9 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param9, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)paramArray9, __functionAddress);
    if (param9 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param9, paramArray9, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIIII_3DJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint length9, jdouble* param9, jlong __functionAddress) {
    UNUSED_PARAM(length9)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)param9, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIIII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jfloatArray param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray9 = param9 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param9, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)paramArray9, __functionAddress);
    if (param9 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param9, paramArray9, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIIII_3FJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint length9, jfloat* param9, jlong __functionAddress) {
    UNUSED_PARAM(length9)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)param9, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIIII_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jintArray param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray9 = param9 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param9, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)paramArray9, __functionAddress);
    if (param9 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param9, paramArray9, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIIII_3IJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint length9, jint* param9, jlong __functionAddress) {
    UNUSED_PARAM(length9)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)param9, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIIII_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jshortArray param9, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray9 = param9 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param9, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)paramArray9, __functionAddress);
    if (param9 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param9, paramArray9, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIIII_3SJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint length9, jshort* param9, jlong __functionAddress) {
    UNUSED_PARAM(length9)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, param8, (intptr_t)param9, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIII_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jdoubleArray param8, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray8 = param8 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param8, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)paramArray8, __functionAddress);
    if (param8 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param8, paramArray8, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIII_3DJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint length8, jdouble* param8, jlong __functionAddress) {
    UNUSED_PARAM(length8)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)param8, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jfloatArray param8, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray8 = param8 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param8, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)paramArray8, __functionAddress);
    if (param8 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param8, paramArray8, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIII_3FJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint length8, jfloat* param8, jlong __functionAddress) {
    UNUSED_PARAM(length8)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)param8, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIII_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jintArray param8, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray8 = param8 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param8, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)paramArray8, __functionAddress);
    if (param8 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param8, paramArray8, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIII_3IJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint length8, jint* param8, jlong __functionAddress) {
    UNUSED_PARAM(length8)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)param8, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIIII_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jshortArray param8, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray8 = param8 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param8, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)paramArray8, __functionAddress);
    if (param8 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param8, paramArray8, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIIII_3SJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint length8, jshort* param8, jlong __functionAddress) {
    UNUSED_PARAM(length8)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)param8, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIII_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jdoubleArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIII_3DJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint length7, jdouble* param7, jlong __functionAddress) {
    UNUSED_PARAM(length7)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jfloatArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIII_3FJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint length7, jfloat* param7, jlong __functionAddress) {
    UNUSED_PARAM(length7)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIII_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jintArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIII_3IJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint length7, jint* param7, jlong __functionAddress) {
    UNUSED_PARAM(length7)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIIII_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jshortArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIIII_3SJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint length7, jshort* param7, jlong __functionAddress) {
    UNUSED_PARAM(length7)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIII_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jdoubleArray param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIII_3DJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint length6, jdouble* param6, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jfloatArray param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIII_3FJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint length6, jfloat* param6, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIII_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jintArray param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIII_3IJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint length6, jint* param6, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIIII_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jshortArray param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIIII_3SJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint length6, jshort* param6, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    Java_org_lwjgl_system_JNI_callPV__IIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIII_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jdoubleArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIII_3DJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint length5, jdouble* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPV__IIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jfloatArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIII_3FJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint length5, jfloat* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPV__IIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIII_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIII_3IJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPV__IIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIII_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jint param4, jshortArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIII_3SJ(jint param0, jint param1, jint param2, jint param3, jint param4, jint length5, jshort* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPV__IIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IIIIJII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jlong param4, jint param5, jint param6, jfloatArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIIIJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IIIIJII_3FJ(jint param0, jint param1, jint param2, jint param3, jlong param4, jint param5, jint param6, jint length7, jfloat* param7, jlong __functionAddress) {
    UNUSED_PARAM(length7)
    Java_org_lwjgl_system_JNI_callPPV__IIIIJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IIIIJII_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jlong param4, jint param5, jint param6, jshortArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIIIJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IIIIJII_3SJ(jint param0, jint param1, jint param2, jint param3, jlong param4, jint param5, jint param6, jint length7, jshort* param7, jlong __functionAddress) {
    UNUSED_PARAM(length7)
    Java_org_lwjgl_system_JNI_callPPV__IIIIJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIII_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jdoubleArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIII_3DJ(jint param0, jint param1, jint param2, jint param3, jint length4, jdouble* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPV__IIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jfloatArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIII_3FJ(jint param0, jint param1, jint param2, jint param3, jint length4, jfloat* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPV__IIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIII_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIII_3IJ(jint param0, jint param1, jint param2, jint param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPV__IIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IIII_3II_3I_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jintArray param4, jint param5, jintArray param6, jfloatArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IIIIJIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, param5, (intptr_t)paramArray6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IIII_3II_3I_3FJ(jint param0, jint param1, jint param2, jint param3, jint length4, jint* param4, jint param5, jint length6, jint* param6, jint length7, jfloat* param7, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length6)
    UNUSED_PARAM(length7)
    Java_org_lwjgl_system_JNI_callPPPV__IIIIJIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, param5, (intptr_t)param6, (intptr_t)param7, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IIII_3II_3I_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jintArray param4, jint param5, jintArray param6, jintArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IIIIJIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, param5, (intptr_t)paramArray6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IIII_3II_3I_3IJ(jint param0, jint param1, jint param2, jint param3, jint length4, jint* param4, jint param5, jint length6, jint* param6, jint length7, jint* param7, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length6)
    UNUSED_PARAM(length7)
    Java_org_lwjgl_system_JNI_callPPPV__IIIIJIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, param5, (intptr_t)param6, (intptr_t)param7, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IIII_3IJJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jintArray param4, jlong param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIIIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, param5, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IIII_3IJJ(jint param0, jint param1, jint param2, jint param3, jint length4, jint* param4, jlong param5, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPV__IIIIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIII_3IZJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jintArray param4, jboolean param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIJZJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, param5, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIII_3IZJ(jint param0, jint param1, jint param2, jint param3, jint length4, jint* param4, jboolean param5, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPV__IIIIJZJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, param5, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIII_3JJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jlongArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIII_3JJ(jint param0, jint param1, jint param2, jint param3, jint length4, jlong* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPV__IIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIII_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jint param3, jshortArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIII_3SJ(jint param0, jint param1, jint param2, jint param3, jint length4, jshort* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPV__IIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IIIJIFFI_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jlong param3, jint param4, jfloat param5, jfloat param6, jint param7, jfloatArray param8, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray8 = param8 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param8, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIIJIFFIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)paramArray8, __functionAddress);
    if (param8 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param8, paramArray8, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IIIJIFFI_3FJ(jint param0, jint param1, jint param2, jlong param3, jint param4, jfloat param5, jfloat param6, jint param7, jint length8, jfloat* param8, jlong __functionAddress) {
    UNUSED_PARAM(length8)
    Java_org_lwjgl_system_JNI_callPPV__IIIJIFFIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)param8, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IIIJII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jlong param3, jint param4, jint param5, jfloatArray param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIIJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IIIJII_3FJ(jint param0, jint param1, jint param2, jlong param3, jint param4, jint param5, jint length6, jfloat* param6, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    Java_org_lwjgl_system_JNI_callPPV__IIIJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPPPPPV__IIIJIJ_3I_3I_3I_3I_3JJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jlong param3, jint param4, jlong param5, jintArray param6, jintArray param7, jintArray param8, jintArray param9, jlongArray param10, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    void *paramArray8 = param8 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param8, 0);
    void *paramArray9 = param9 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param9, 0);
    void *paramArray10 = param10 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param10, 0);
    Java_org_lwjgl_system_JNI_callPPPPPPPV__IIIJIJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, (intptr_t)paramArray7, (intptr_t)paramArray8, (intptr_t)paramArray9, (intptr_t)paramArray10, __functionAddress);
    if (param10 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param10, paramArray10, 0); }
    if (param9 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param9, paramArray9, 0); }
    if (param8 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param8, paramArray8, 0); }
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPPPV__IIIJIJ_3I_3I_3I_3I_3JJ(jint param0, jint param1, jint param2, jlong param3, jint param4, jlong param5, jint length6, jint* param6, jint length7, jint* param7, jint length8, jint* param8, jint length9, jint* param9, jint length10, jlong* param10, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    UNUSED_PARAM(length7)
    UNUSED_PARAM(length8)
    UNUSED_PARAM(length9)
    UNUSED_PARAM(length10)
    Java_org_lwjgl_system_JNI_callPPPPPPPV__IIIJIJJJJJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, (intptr_t)param7, (intptr_t)param8, (intptr_t)param9, (intptr_t)param10, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IIIJ_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jlong param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IIIJ_3IJ(jint param0, jint param1, jint param2, jlong param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPV__IIIJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIZI_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jboolean param3, jint param4, jfloatArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIZIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIZI_3FJ(jint param0, jint param1, jint param2, jboolean param3, jint param4, jint length5, jfloat* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPV__IIIZIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIZI_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jboolean param3, jint param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIZIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIZI_3IJ(jint param0, jint param1, jint param2, jboolean param3, jint param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPV__IIIZIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIZI_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jboolean param3, jint param4, jshortArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIZIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIZI_3SJ(jint param0, jint param1, jint param2, jboolean param3, jint param4, jint length5, jshort* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPV__IIIZIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIZ_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jboolean param3, jdoubleArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIZJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIZ_3DJ(jint param0, jint param1, jint param2, jboolean param3, jint length4, jdouble* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPV__IIIZJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIIZ_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jboolean param3, jfloatArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIZJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIIZ_3FJ(jint param0, jint param1, jint param2, jboolean param3, jint length4, jfloat* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPV__IIIZJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__III_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jdoubleArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__III_3DJ(jint param0, jint param1, jint param2, jint length3, jdouble* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPV__IIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__III_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jfloatArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__III_3FJ(jint param0, jint param1, jint param2, jint length3, jfloat* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPV__IIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__III_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__III_3IJ(jint param0, jint param1, jint param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPV__IIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__III_3IJJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jintArray param3, jlong param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, param4, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__III_3IJJ(jint param0, jint param1, jint param2, jint length3, jint* param3, jlong param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPV__IIIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__III_3IJJJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jintArray param3, jlong param4, jlong param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IIIJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, param4, param5, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__III_3IJJJ(jint param0, jint param1, jint param2, jint length3, jint* param3, jlong param4, jlong param5, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPPV__IIIJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, param4, param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__III_3IJ_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jintArray param3, jlong param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IIIJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__III_3IJ_3IJ(jint param0, jint param1, jint param2, jint length3, jint* param3, jlong param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPPPV__IIIJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__III_3IZJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jintArray param3, jboolean param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIJZJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, param4, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__III_3IZJ(jint param0, jint param1, jint param2, jint length3, jint* param3, jboolean param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPV__IIIJZJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__III_3I_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jintArray param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__III_3I_3IJ(jint param0, jint param1, jint param2, jint length3, jint* param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPV__IIIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPPV__III_3I_3I_3IJJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jintArray param3, jintArray param4, jintArray param5, jlong param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPPPPV__IIIJJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, (intptr_t)paramArray5, param6, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPV__III_3I_3I_3IJJ(jint param0, jint param1, jint param2, jint length3, jint* param3, jint length4, jint* param4, jint length5, jint* param5, jlong param6, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPPPPV__IIIJJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, param6, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__III_3JJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jlongArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__III_3JJ(jint param0, jint param1, jint param2, jint length3, jlong* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPV__IIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__III_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jshortArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPV__IIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__III_3SJ(jint param0, jint param1, jint param2, jint length3, jshort* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPV__IIIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IIJIIIII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jint param3, jint param4, jint param5, jint param6, jint param7, jfloatArray param8, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray8 = param8 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param8, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIJIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)paramArray8, __functionAddress);
    if (param8 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param8, paramArray8, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IIJIIIII_3FJ(jint param0, jint param1, jlong param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint length8, jfloat* param8, jlong __functionAddress) {
    UNUSED_PARAM(length8)
    Java_org_lwjgl_system_JNI_callPPV__IIJIIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, param7, (intptr_t)param8, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IIJIIII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jint param3, jint param4, jint param5, jint param6, jfloatArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIJIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IIJIIII_3FJ(jint param0, jint param1, jlong param2, jint param3, jint param4, jint param5, jint param6, jint length7, jfloat* param7, jlong __functionAddress) {
    UNUSED_PARAM(length7)
    Java_org_lwjgl_system_JNI_callPPV__IIJIIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, param6, (intptr_t)param7, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IIJIII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jint param3, jint param4, jint param5, jfloatArray param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIJIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IIJIII_3FJ(jint param0, jint param1, jlong param2, jint param3, jint param4, jint param5, jint length6, jfloat* param6, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    Java_org_lwjgl_system_JNI_callPPV__IIJIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IIJII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jint param3, jint param4, jfloatArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IIJII_3FJ(jint param0, jint param1, jlong param2, jint param3, jint param4, jint length5, jfloat* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPPV__IIJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IIJII_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jint param3, jint param4, jshortArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IIJII_3SJ(jint param0, jint param1, jlong param2, jint param3, jint param4, jint length5, jshort* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPPV__IIJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IIJJII_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jlong param3, jint param4, jint param5, jfloatArray param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IIJJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IIJJII_3FJ(jint param0, jint param1, jlong param2, jlong param3, jint param4, jint param5, jint length6, jfloat* param6, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    Java_org_lwjgl_system_JNI_callPPPV__IIJJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IIJJII_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jlong param3, jint param4, jint param5, jintArray param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IIJJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IIJJII_3IJ(jint param0, jint param1, jlong param2, jlong param3, jint param4, jint param5, jint length6, jint* param6, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    Java_org_lwjgl_system_JNI_callPPPV__IIJJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IIJJII_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jlong param3, jint param4, jint param5, jshortArray param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IIJJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IIJJII_3SJ(jint param0, jint param1, jlong param2, jlong param3, jint param4, jint param5, jint length6, jshort* param6, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    Java_org_lwjgl_system_JNI_callPPPV__IIJJIIJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IIJJ_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jlong param3, jdoubleArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IIJJ_3DJ(jint param0, jint param1, jlong param2, jlong param3, jint length4, jdouble* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPPV__IIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IIJJ_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jlong param3, jfloatArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IIJJ_3FJ(jint param0, jint param1, jlong param2, jlong param3, jint length4, jfloat* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPPV__IIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IIJJ_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jlong param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IIJJ_3IJ(jint param0, jint param1, jlong param2, jlong param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPPV__IIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPPV__IIJJ_3I_3IIJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jlong param3, jintArray param4, jintArray param5, jint param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPPPPV__IIJJJJIJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, (intptr_t)paramArray5, param6, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPV__IIJJ_3I_3IIJ(jint param0, jint param1, jlong param2, jlong param3, jint length4, jint* param4, jint length5, jint* param5, jint param6, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPPPPV__IIJJJJIJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5, param6, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IIJJ_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jlong param3, jshortArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IIJJ_3SJ(jint param0, jint param1, jlong param2, jlong param3, jint length4, jshort* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPPV__IIJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IIJ_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IIJ_3IJ(jint param0, jint param1, jlong param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPV__IIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IIJ_3IIJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jintArray param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIJJIJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, param4, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IIJ_3IIJ(jint param0, jint param1, jlong param2, jint length3, jint* param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPV__IIJJIJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPPPV__IIJ_3I_3I_3I_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlong param2, jintArray param3, jintArray param4, jintArray param5, jintArray param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    Java_org_lwjgl_system_JNI_callPPPPPV__IIJJJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, (intptr_t)paramArray5, (intptr_t)paramArray6, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPV__IIJ_3I_3I_3I_3IJ(jint param0, jint param1, jlong param2, jint length3, jint* param3, jint length4, jint* param4, jint length5, jint* param5, jint length6, jint* param6, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    UNUSED_PARAM(length6)
    Java_org_lwjgl_system_JNI_callPPPPPV__IIJJJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIZ_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jboolean param2, jdoubleArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPV__IIZJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIZ_3DJ(jint param0, jint param1, jboolean param2, jint length3, jdouble* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPV__IIZJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIZ_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jboolean param2, jfloatArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPV__IIZJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIZ_3FJ(jint param0, jint param1, jboolean param2, jint length3, jfloat* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPV__IIZJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IIZ_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jboolean param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPV__IIZJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IIZ_3IJ(jint param0, jint param1, jboolean param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPV__IIZJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__II_3DJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jdoubleArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPV__IIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__II_3DJ(jint param0, jint param1, jint length2, jdouble* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPV__IIJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__II_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jfloatArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPV__IIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__II_3FJ(jint param0, jint param1, jint length2, jfloat* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPV__IIJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__II_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPV__IIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__II_3IJ(jint param0, jint param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPV__IIJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__II_3IIJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPV__IIJIJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__II_3IIJ(jint param0, jint param1, jint length2, jint* param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPV__IIJIJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__II_3IIIJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jint param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPV__IIJIIJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, param4, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__II_3IIIJ(jint param0, jint param1, jint length2, jint* param2, jint param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPV__IIJIIJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__II_3IIIIIJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jint param3, jint param4, jint param5, jint param6, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPV__IIJIIIIJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, param4, param5, param6, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__II_3IIIIIJ(jint param0, jint param1, jint length2, jint* param2, jint param3, jint param4, jint param5, jint param6, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPV__IIJIIIIJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, param4, param5, param6, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__II_3II_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jint param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIJIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__II_3II_3IJ(jint param0, jint param1, jint length2, jint* param2, jint param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPV__IIJIJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__II_3II_3I_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jint param3, jintArray param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IIJIJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, (intptr_t)paramArray4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__II_3II_3I_3IJ(jint param0, jint param1, jint length2, jint* param2, jint param3, jint length4, jint* param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPPPV__IIJIJJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, (intptr_t)param4, (intptr_t)param5, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__II_3IJJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__II_3IJJ(jint param0, jint param1, jint length2, jint* param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPV__IIJJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__II_3IJIIJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jlong param3, jint param4, jint param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIJJIIJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, param4, param5, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__II_3IJIIJ(jint param0, jint param1, jint length2, jint* param2, jlong param3, jint param4, jint param5, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPV__IIJJIIJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, param4, param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__II_3IJ_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jlong param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IIJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__II_3IJ_3IJ(jint param0, jint param1, jint length2, jint* param2, jlong param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPPV__IIJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__II_3I_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jfloatArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__II_3I_3FJ(jint param0, jint param1, jint length2, jint* param2, jint length3, jfloat* param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPV__IIJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__II_3I_3IJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPV__IIJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__II_3I_3IJ(jint param0, jint param1, jint length2, jint* param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPV__IIJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__II_3I_3IJJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jintArray param2, jintArray param3, jlong param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IIJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, param4, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__II_3I_3IJJ(jint param0, jint param1, jint length2, jint* param2, jint length3, jint* param3, jlong param4, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPPV__IIJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__II_3JJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jlongArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPV__IIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__II_3JJ(jint param0, jint param1, jint length2, jlong* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPV__IIJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__II_3SJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jshortArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPV__IIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__II_3SJ(jint param0, jint param1, jint length2, jshort* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPV__IIJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IJI_3IJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jint param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPV__IJIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IJI_3IJ(jint param0, jlong param1, jint param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPV__IJIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IJI_3IJJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jint param2, jintArray param3, jlong param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IJIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, param4, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IJI_3IJJ(jint param0, jlong param1, jint param2, jint length3, jint* param3, jlong param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPPV__IJIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IJI_3I_3IJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jint param2, jintArray param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IJIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IJI_3I_3IJ(jint param0, jlong param1, jint param2, jint length3, jint* param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPPV__IJIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IJJ_3DJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jlong param2, jdoubleArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IJJ_3DJ(jint param0, jlong param1, jlong param2, jint length3, jdouble* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPPV__IJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IJJ_3FJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jlong param2, jfloatArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IJJ_3FJ(jint param0, jlong param1, jlong param2, jint length3, jfloat* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPPV__IJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IJJ_3IJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jlong param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IJJ_3IJ(jint param0, jlong param1, jlong param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPPV__IJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IJJ_3JJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jlong param2, jlongArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IJJ_3JJ(jint param0, jlong param1, jlong param2, jint length3, jlong* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPPV__IJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__IJJ_3SJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jlong param2, jshortArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__IJJ_3SJ(jint param0, jlong param1, jlong param2, jint length3, jshort* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPPV__IJJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IJ_3DIJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jdoubleArray param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPV__IJJIJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IJ_3DIJ(jint param0, jlong param1, jint length2, jdouble* param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPV__IJJIJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IJ_3FIJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jfloatArray param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPV__IJJIJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IJ_3FIJ(jint param0, jlong param1, jint length2, jfloat* param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPV__IJJIJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IJ_3IJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPV__IJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IJ_3IJ(jint param0, jlong param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPV__IJJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IJ_3IIJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jintArray param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPV__IJJIJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IJ_3IIJ(jint param0, jlong param1, jint length2, jint* param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPV__IJJIJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPPV__IJ_3I_3I_3IIJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jintArray param2, jintArray param3, jintArray param4, jint param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPPPV__IJJJJIJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, (intptr_t)paramArray3, (intptr_t)paramArray4, param5, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPV__IJ_3I_3I_3IIJ(jint param0, jlong param1, jint length2, jint* param2, jint length3, jint* param3, jint length4, jint* param4, jint param5, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPPPV__IJJJJIJ(NULL, NULL, param0, param1, (intptr_t)param2, (intptr_t)param3, (intptr_t)param4, param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IJ_3JIJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jlongArray param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPV__IJJIJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IJ_3JIJ(jint param0, jlong param1, jint length2, jlong* param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPV__IJJIJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__IJ_3SIJ(JNIEnv *__env, jclass clazz, jint param0, jlong param1, jshortArray param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPV__IJJIJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__IJ_3SIJ(jint param0, jlong param1, jint length2, jshort* param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPV__IJJIJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__IZII_3IJ(JNIEnv *__env, jclass clazz, jint param0, jboolean param1, jint param2, jint param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPV__IZIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__IZII_3IJ(jint param0, jboolean param1, jint param2, jint param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPV__IZIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__I_3DJ(JNIEnv *__env, jclass clazz, jint param0, jdoubleArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPV__IJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__I_3DJ(jint param0, jint length1, jdouble* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPV__IJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__I_3FJ(JNIEnv *__env, jclass clazz, jint param0, jfloatArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPV__IJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__I_3FJ(jint param0, jint length1, jfloat* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPV__IJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__I_3IJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPV__IJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__I_3IJ(jint param0, jint length1, jint* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPV__IJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__I_3IIJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jint param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPV__IJIJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__I_3IIJ(jint param0, jint length1, jint* param1, jint param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPV__IJIJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__I_3IIIJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jint param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPV__IJIIJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, param3, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__I_3IIIJ(jint param0, jint length1, jint* param1, jint param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPV__IJIIJ(NULL, NULL, param0, (intptr_t)param1, param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__I_3IIJIJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jint param2, jlong param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPPV__IJIJIJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, param3, param4, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__I_3IIJIJ(jint param0, jint length1, jint* param1, jint param2, jlong param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPPV__IJIJIJ(NULL, NULL, param0, (intptr_t)param1, param2, param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__I_3IIJI_3IJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jint param2, jlong param3, jint param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IJIJIJJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__I_3IIJI_3IJ(jint param0, jint length1, jint* param1, jint param2, jlong param3, jint param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPPPV__IJIJIJJ(NULL, NULL, param0, (intptr_t)param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__I_3II_3IIJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jint param2, jintArray param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPV__IJIJIJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, (intptr_t)paramArray3, param4, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__I_3II_3IIJ(jint param0, jint length1, jint* param1, jint param2, jint length3, jint* param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPV__IJIJIJ(NULL, NULL, param0, (intptr_t)param1, param2, (intptr_t)param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__I_3IJIIJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jlong param2, jint param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPPV__IJJIIJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, param3, param4, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__I_3IJIIJ(jint param0, jint length1, jint* param1, jlong param2, jint param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPPV__IJJIIJ(NULL, NULL, param0, (intptr_t)param1, param2, param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__I_3I_3FJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jfloatArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPV__IJJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__I_3I_3FJ(jint param0, jint length1, jint* param1, jint length2, jfloat* param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPV__IJJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__I_3I_3IJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPV__IJJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__I_3I_3IJ(jint param0, jint length1, jint* param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPV__IJJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__I_3I_3IIJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jintArray param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPV__IJJIJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__I_3I_3IIJ(jint param0, jint length1, jint* param1, jint length2, jint* param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPV__IJJIJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__I_3I_3II_3IJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jintArray param2, jint param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPPV__IJJIJJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__I_3I_3II_3IJ(jint param0, jint length1, jint* param1, jint length2, jint* param2, jint param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPPV__IJJIJJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__I_3JJ(JNIEnv *__env, jclass clazz, jint param0, jlongArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPV__IJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__I_3JJ(jint param0, jint length1, jlong* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPV__IJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__I_3J_3IIJ(JNIEnv *__env, jclass clazz, jint param0, jlongArray param1, jintArray param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPV__IJJIJ(NULL, NULL, param0, (intptr_t)paramArray1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__I_3J_3IIJ(jint param0, jint length1, jlong* param1, jint length2, jint* param2, jint param3, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPV__IJJIJ(NULL, NULL, param0, (intptr_t)param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV__I_3SJ(JNIEnv *__env, jclass clazz, jint param0, jshortArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPV__IJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV__I_3SJ(jint param0, jint length1, jshort* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPV__IJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__JIIIII_3IJJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jint param2, jint param3, jint param4, jint param5, jintArray param6, jlong param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    Java_org_lwjgl_system_JNI_callPPPV__JIIIIIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)paramArray6, param7, __functionAddress);
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__JIIIII_3IJJ(jlong param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint length6, jint* param6, jlong param7, jlong __functionAddress) {
    UNUSED_PARAM(length6)
    Java_org_lwjgl_system_JNI_callPPPV__JIIIIIJJJ(NULL, NULL, param0, param1, param2, param3, param4, param5, (intptr_t)param6, param7, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__JIII_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jint param2, jint param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPV__JIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__JIII_3IJ(jlong param0, jint param1, jint param2, jint param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPV__JIIIJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__JII_3I_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jint param2, jintArray param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPPV__JIIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__JII_3I_3IJ(jlong param0, jint param1, jint param2, jint length3, jint* param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPPV__JIIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__JII_3J_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jint param2, jlongArray param3, jlongArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPPPV__JIIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__JII_3J_3JJ(jlong param0, jint param1, jint param2, jint length3, jlong* param3, jint length4, jlong* param4, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPPPV__JIIJJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPJPPV__JIJII_3JI_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlong param2, jint param3, jint param4, jlongArray param5, jint param6, jintArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    Java_org_lwjgl_system_JNI_callPJPPV__JIJIIJIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, param6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPV__JIJII_3JI_3IJ(jlong param0, jint param1, jlong param2, jint param3, jint param4, jint length5, jlong* param5, jint param6, jint length7, jint* param7, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    UNUSED_PARAM(length7)
    Java_org_lwjgl_system_JNI_callPJPPV__JIJIIJIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, param6, (intptr_t)param7, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__JI_3IJJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jintArray param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPPV__JIJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__JI_3IJJ(jlong param0, jint param1, jint length2, jint* param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPPV__JIJJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPPPV__JI_3JIIIJIJIJJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlongArray param2, jint param3, jint param4, jint param5, jlong param6, jint param7, jlong param8, jint param9, jlong param10, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPPPPV__JIJIIIJIJIJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, param4, param5, param6, param7, param8, param9, param10, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPPV__JI_3JIIIJIJIJJ(jlong param0, jint param1, jint length2, jlong* param2, jint param3, jint param4, jint param5, jlong param6, jint param7, jlong param8, jint param9, jlong param10, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPPPPV__JIJIIIJIJIJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, param4, param5, param6, param7, param8, param9, param10, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__JI_3JJJ(JNIEnv *__env, jclass clazz, jlong param0, jint param1, jlongArray param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPPV__JIJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__JI_3JJJ(jlong param0, jint param1, jint length2, jlong* param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPPV__JIJJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPJPV__JJIII_3DJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jint param3, jint param4, jdoubleArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPJPV__JJIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPV__JJIII_3DJ(jlong param0, jlong param1, jint param2, jint param3, jint param4, jint length5, jdouble* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPJPV__JJIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPJPV__JJIII_3FJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jint param3, jint param4, jfloatArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPJPV__JJIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPV__JJIII_3FJ(jlong param0, jlong param1, jint param2, jint param3, jint param4, jint length5, jfloat* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPJPV__JJIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPJPV__JJIII_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jint param3, jint param4, jintArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPJPV__JJIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPV__JJIII_3IJ(jlong param0, jlong param1, jint param2, jint param3, jint param4, jint length5, jint* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPJPV__JJIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPJPV__JJIII_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jint param3, jint param4, jlongArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPJPV__JJIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPV__JJIII_3JJ(jlong param0, jlong param1, jint param2, jint param3, jint param4, jint length5, jlong* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPJPV__JJIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPJPV__JJIII_3SJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jint param3, jint param4, jshortArray param5, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    Java_org_lwjgl_system_JNI_callPJPV__JJIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)paramArray5, __functionAddress);
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
}
#ifdef LWJGL_WINDOWS
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPV__JJIII_3SJ(jlong param0, jlong param1, jint param2, jint param3, jint param4, jint length5, jshort* param5, jlong __functionAddress) {
    UNUSED_PARAM(length5)
    Java_org_lwjgl_system_JNI_callPJPV__JJIIIJJ(NULL, NULL, param0, param1, param2, param3, param4, (intptr_t)param5, __functionAddress);
}
#endif
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__JJI_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jint param2, jintArray param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPPV__JJIJJ(NULL, NULL, param0, param1, param2, (intptr_t)paramArray3, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__JJI_3IJ(jlong param0, jlong param1, jint param2, jint length3, jint* param3, jlong __functionAddress) {
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPPV__JJIJJ(NULL, NULL, param0, param1, param2, (intptr_t)param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPJJJPV__JJJJ_3DJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jdoubleArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPJJJPV__JJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPJJJPV__JJJJ_3DJ(jlong param0, jlong param1, jlong param2, jlong param3, jint length4, jdouble* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPJJJPV__JJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPJJJPV__JJJJ_3FJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jfloatArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPJJJPV__JJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPJJJPV__JJJJ_3FJ(jlong param0, jlong param1, jlong param2, jlong param3, jint length4, jfloat* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPJJJPV__JJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPJJJPV__JJJJ_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jintArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPJJJPV__JJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPJJJPV__JJJJ_3IJ(jlong param0, jlong param1, jlong param2, jlong param3, jint length4, jint* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPJJJPV__JJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPJJJPV__JJJJ_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jlongArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPJJJPV__JJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPJJJPV__JJJJ_3JJ(jlong param0, jlong param1, jlong param2, jlong param3, jint length4, jlong* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPJJJPV__JJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPJJJPV__JJJJ_3SJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlong param2, jlong param3, jshortArray param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    Java_org_lwjgl_system_JNI_callPJJJPV__JJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, __functionAddress);
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPJJJPV__JJJJ_3SJ(jlong param0, jlong param1, jlong param2, jlong param3, jint length4, jshort* param4, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    Java_org_lwjgl_system_JNI_callPJJJPV__JJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPPV__JJ_3IJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPPPV__JJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPV__JJ_3IJJ(jlong param0, jlong param1, jint length2, jint* param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPPPV__JJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPJPPV__JJ_3IJJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jintArray param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPJPPV__JJJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, param3, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPPV__JJ_3IJJ(jlong param0, jlong param1, jint length2, jint* param2, jlong param3, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPJPPV__JJJJJ(NULL, NULL, param0, param1, (intptr_t)param2, param3, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPJPV__JJ_3JJ(JNIEnv *__env, jclass clazz, jlong param0, jlong param1, jlongArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPJPV__JJJJ(NULL, NULL, param0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPJPV__JJ_3JJ(jlong param0, jlong param1, jint length2, jlong* param2, jlong __functionAddress) {
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPJPV__JJJJ(NULL, NULL, param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__J_3FJ(JNIEnv *__env, jclass clazz, jlong param0, jfloatArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPPV__JJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__J_3FJ(jlong param0, jint length1, jfloat* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPPV__JJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV__J_3IJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPPV__JJJ(NULL, NULL, param0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV__J_3IJ(jlong param0, jint length1, jint* param1, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPPV__JJJ(NULL, NULL, param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPV__J_3IJJ(JNIEnv *__env, jclass clazz, jlong param0, jintArray param1, jlong param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPPPV__JJJJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPV__J_3IJJ(jlong param0, jint length1, jint* param1, jlong param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPPPV__JJJJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV___3DJ(JNIEnv *__env, jclass clazz, jdoubleArray param0, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    Java_org_lwjgl_system_JNI_callPV__JJ(NULL, NULL, (intptr_t)paramArray0, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV___3DJ(jint length0, jdouble* param0, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    Java_org_lwjgl_system_JNI_callPV__JJ(NULL, NULL, (intptr_t)param0, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV___3D_3DJ(JNIEnv *__env, jclass clazz, jdoubleArray param0, jdoubleArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPPV__JJJ(NULL, NULL, (intptr_t)paramArray0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV___3D_3DJ(jint length0, jdouble* param0, jint length1, jdouble* param1, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPPV__JJJ(NULL, NULL, (intptr_t)param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV___3FJ(JNIEnv *__env, jclass clazz, jfloatArray param0, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    Java_org_lwjgl_system_JNI_callPV__JJ(NULL, NULL, (intptr_t)paramArray0, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV___3FJ(jint length0, jfloat* param0, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    Java_org_lwjgl_system_JNI_callPV__JJ(NULL, NULL, (intptr_t)param0, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV___3F_3FJ(JNIEnv *__env, jclass clazz, jfloatArray param0, jfloatArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPPV__JJJ(NULL, NULL, (intptr_t)paramArray0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV___3F_3FJ(jint length0, jfloat* param0, jint length1, jfloat* param1, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPPV__JJJ(NULL, NULL, (intptr_t)param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV___3IJ(JNIEnv *__env, jclass clazz, jintArray param0, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    Java_org_lwjgl_system_JNI_callPV__JJ(NULL, NULL, (intptr_t)paramArray0, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV___3IJ(jint length0, jint* param0, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    Java_org_lwjgl_system_JNI_callPV__JJ(NULL, NULL, (intptr_t)param0, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV___3II_3IJ(JNIEnv *__env, jclass clazz, jintArray param0, jint param1, jintArray param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    Java_org_lwjgl_system_JNI_callPPV__JIJJ(NULL, NULL, (intptr_t)paramArray0, param1, (intptr_t)paramArray2, __functionAddress);
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV___3II_3IJ(jint length0, jint* param0, jint param1, jint length2, jint* param2, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    UNUSED_PARAM(length2)
    Java_org_lwjgl_system_JNI_callPPV__JIJJ(NULL, NULL, (intptr_t)param0, param1, (intptr_t)param2, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV___3I_3IJ(JNIEnv *__env, jclass clazz, jintArray param0, jintArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPPV__JJJ(NULL, NULL, (intptr_t)paramArray0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV___3I_3IJ(jint length0, jint* param0, jint length1, jint* param1, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPPV__JJJ(NULL, NULL, (intptr_t)param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPPPV___3J_3I_3I_3IIJ(JNIEnv *__env, jclass clazz, jlongArray param0, jintArray param1, jintArray param2, jintArray param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    void *paramArray2 = param2 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param2, 0);
    void *paramArray3 = param3 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param3, 0);
    Java_org_lwjgl_system_JNI_callPPPPV__JJJJIJ(NULL, NULL, (intptr_t)paramArray0, (intptr_t)paramArray1, (intptr_t)paramArray2, (intptr_t)paramArray3, param4, __functionAddress);
    if (param3 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param3, paramArray3, 0); }
    if (param2 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param2, paramArray2, 0); }
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPV___3J_3I_3I_3IIJ(jint length0, jlong* param0, jint length1, jint* param1, jint length2, jint* param2, jint length3, jint* param3, jint param4, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    UNUSED_PARAM(length1)
    UNUSED_PARAM(length2)
    UNUSED_PARAM(length3)
    Java_org_lwjgl_system_JNI_callPPPPV__JJJJIJ(NULL, NULL, (intptr_t)param0, (intptr_t)param1, (intptr_t)param2, (intptr_t)param3, param4, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPV___3SJ(JNIEnv *__env, jclass clazz, jshortArray param0, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    Java_org_lwjgl_system_JNI_callPV__JJ(NULL, NULL, (intptr_t)paramArray0, __functionAddress);
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPV___3SJ(jint length0, jshort* param0, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    Java_org_lwjgl_system_JNI_callPV__JJ(NULL, NULL, (intptr_t)param0, __functionAddress);
}
JNIEXPORT void JNICALL Java_org_lwjgl_system_JNI_callPPV___3S_3SJ(JNIEnv *__env, jclass clazz, jshortArray param0, jshortArray param1, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray0 = param0 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param0, 0);
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    Java_org_lwjgl_system_JNI_callPPV__JJJ(NULL, NULL, (intptr_t)paramArray0, (intptr_t)paramArray1, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    if (param0 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param0, paramArray0, 0); }
}
JNIEXPORT void JNICALL JavaCritical_org_lwjgl_system_JNI_callPPV___3S_3SJ(jint length0, jshort* param0, jint length1, jshort* param1, jlong __functionAddress) {
    UNUSED_PARAM(length0)
    UNUSED_PARAM(length1)
    Java_org_lwjgl_system_JNI_callPPV__JJJ(NULL, NULL, (intptr_t)param0, (intptr_t)param1, __functionAddress);
}
JNIEXPORT jboolean JNICALL Java_org_lwjgl_system_JNI_callPPPPZ__IIIF_3F_3F_3F_3FJ(JNIEnv *__env, jclass clazz, jint param0, jint param1, jint param2, jfloat param3, jfloatArray param4, jfloatArray param5, jfloatArray param6, jfloatArray param7, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray4 = param4 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param4, 0);
    void *paramArray5 = param5 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param5, 0);
    void *paramArray6 = param6 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param6, 0);
    void *paramArray7 = param7 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param7, 0);
    jboolean __result = Java_org_lwjgl_system_JNI_callPPPPZ__IIIFJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)paramArray4, (intptr_t)paramArray5, (intptr_t)paramArray6, (intptr_t)paramArray7, __functionAddress);
    if (param7 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param7, paramArray7, 0); }
    if (param6 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param6, paramArray6, 0); }
    if (param5 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param5, paramArray5, 0); }
    if (param4 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param4, paramArray4, 0); }
    return __result;
}
JNIEXPORT jboolean JNICALL JavaCritical_org_lwjgl_system_JNI_callPPPPZ__IIIF_3F_3F_3F_3FJ(jint param0, jint param1, jint param2, jfloat param3, jint length4, jfloat* param4, jint length5, jfloat* param5, jint length6, jfloat* param6, jint length7, jfloat* param7, jlong __functionAddress) {
    UNUSED_PARAM(length4)
    UNUSED_PARAM(length5)
    UNUSED_PARAM(length6)
    UNUSED_PARAM(length7)
    return Java_org_lwjgl_system_JNI_callPPPPZ__IIIFJJJJJ(NULL, NULL, param0, param1, param2, param3, (intptr_t)param4, (intptr_t)param5, (intptr_t)param6, (intptr_t)param7, __functionAddress);
}
JNIEXPORT jboolean JNICALL Java_org_lwjgl_system_JNI_callPPZ__I_3IJJ(JNIEnv *__env, jclass clazz, jint param0, jintArray param1, jlong param2, jlong __functionAddress) {
    UNUSED_PARAMS(__env, clazz)
    void *paramArray1 = param1 == NULL ? NULL : (*__env)->GetPrimitiveArrayCritical(__env, param1, 0);
    jboolean __result = Java_org_lwjgl_system_JNI_callPPZ__IJJJ(NULL, NULL, param0, (intptr_t)paramArray1, param2, __functionAddress);
    if (param1 != NULL) { (*__env)->ReleasePrimitiveArrayCritical(__env, param1, paramArray1, 0); }
    return __result;
}
JNIEXPORT jboolean JNICALL JavaCritical_org_lwjgl_system_JNI_callPPZ__I_3IJJ(jint param0, jint length1, jint* param1, jlong param2, jlong __functionAddress) {
    UNUSED_PARAM(length1)
    return Java_org_lwjgl_system_JNI_callPPZ__IJJJ(NULL, NULL, param0, (intptr_t)param1, param2, __functionAddress);
}

EXTERN_C_EXIT
