/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 */
package cuda.templates

import org.lwjgl.generator.*
import cuda.*


val CUDA = "CUDA".nativeClass(Module.CUDA, prefix = "CU_", prefixMethod = "cu", binding = CUDA_BINDING) {
    documentation = "Contains bindings to <a href=\"https://developer.nvidia.com/cuda-zone\">CUDA</a>."

    CUresult(
        "GetErrorString",
        "",

        CUresult.IN("error", ""),
        Check(1)..charASCII.const.p.p.IN("pStr", "")
    )

    CUresult(
        "GetErrorName",
        "",

        CUresult.IN("error", ""),
        Check(1)..charASCII.const.p.p.IN("pStr", "")
    )

    CUresult(
        "Init",
        "",

        unsigned_int.IN("Flags", "")
    )

    CUresult(
        "DriverGetVersion",
        "",

        Check(1)..int.p.OUT("driverVersion", "")
    )

    CUresult(
        "DeviceGet",
        "",

        Check(1)..CUdevice.p.OUT("device", ""),
        int.IN("ordinal", "")
    )

    CUresult(
        "DeviceGetCount",
        "",

        Check(1)..int.p.OUT("count", "")
    )

    CUresult(
        "DeviceGetName",
        "",

        charASCII.p.OUT("name", ""),
        AutoSize("name")..int.IN("len", ""),
        CUdevice.IN("dev", "")
    )

    CUresult(
        "DeviceGetUuid",
        "",

        CUuuid.p.OUT("uuid", ""),
        CUdevice.IN("dev", "")
    )

    CUresult(
        "DeviceGetLuid",
        "",

        Check(8)..char.p.OUT("luid", ""), // TODO: 8?
        Check(1)..unsigned_int.p.OUT("deviceNodeMask", ""),
        CUdevice.IN("dev", "")
    )

    CUresult(
        "DeviceTotalMem",
        "",

        Check(1)..size_t.p.OUT("bytes", ""),
        CUdevice.IN("dev", "")
    )

    CUresult(
        "DeviceGetAttribute",
        "",

        Check(1)..int.p.OUT("pi", ""),
        CUdevice_attribute.IN("attrib", ""),
        CUdevice.IN("dev", "")
    )

    CUresult(
        "DevicePrimaryCtxRetain",
        "",

        Check(1)..CUcontext.p.OUT("pctx", ""),
        CUdevice.IN("dev", "")
    )

    CUresult(
        "DevicePrimaryCtxRelease",
        "",

        CUdevice.IN("dev", "")
    )

    CUresult(
        "DevicePrimaryCtxSetFlags",
        "",

        CUdevice.IN("dev", ""),
        unsigned_int.IN("flags", "")
    )

    CUresult(
        "DevicePrimaryCtxGetState",
        "",

        CUdevice.IN("dev", ""),
        Check(1)..unsigned_int.p.OUT("flags", ""),
        Check(1)..int.p.OUT("active", "")
    )

    CUresult(
        "DevicePrimaryCtxReset",
        "",

        CUdevice.IN("dev", "")
    )

    CUresult(
        "CtxCreate",
        "",

        Check(1)..CUcontext.p.OUT("pctx", ""),
        unsigned_int.IN("flags", ""),
        CUdevice.IN("dev", "")
    )

    CUresult(
        "CtxDestroy",
        "",

        CUcontext.IN("ctx", "")
    )

    CUresult(
        "CtxPushCurrent",
        "",

        CUcontext.IN("ctx", "")
    )

    CUresult(
        "CtxPopCurrent",
        "",

        Check(1)..CUcontext.p.OUT("pctx", "")
    )

    CUresult(
        "CtxSetCurrent",
        "",

        CUcontext.IN("ctx", "")
    )

    CUresult(
        "CtxGetCurrent",
        "",

        Check(1)..CUcontext.p.OUT("pctx", "")
    )

    CUresult(
        "CtxGetDevice",
        "",

        Check(1)..CUdevice.p.OUT("device", "")
    )

    CUresult(
        "CtxGetFlags",
        "",

        Check(1)..unsigned_int.p.OUT("flags", "")
    )

    CUresult(
        "CtxSynchronize",
        ""
    )

    CUresult(
        "CtxSetLimit",
        "",

        CUlimit.IN("limit", ""),
        size_t.IN("value", "")
    )

    CUresult(
        "CtxGetLimit",
        "",

        Check(1)..size_t.p.OUT("pvalue", ""),
        CUlimit.IN("limit", "")
    )

    CUresult(
        "CtxGetCacheConfig",
        "",

        Check(1)..CUfunc_cache.p.OUT("pconfig", "")
    )

    CUresult(
        "CtxSetCacheConfig",
        "",

        CUfunc_cache.IN("config", "")
    )

    CUresult(
        "CtxGetSharedMemConfig",
        "",

        Check(1)..CUsharedconfig.p.OUT("pConfig", "")
    )

    CUresult(
        "CtxSetSharedMemConfig",
        "",

        CUsharedconfig.IN("config", "")
    )

    CUresult(
        "CtxGetApiVersion",
        "",

        nullable..CUcontext.IN("ctx", ""),
        Check(1)..unsigned_int.p.OUT("version", "")
    )

    CUresult(
        "CtxGetStreamPriorityRange",
        "",

        Check(1)..int.p.OUT("leastPriority", ""),
        Check(1)..int.p.OUT("greatestPriority", "")
    )

    CUresult(
        "ModuleLoad",
        "",

        Check(1)..CUmodule.p.OUT("module", ""),
        charASCII.const.p.IN("fname", "")
    )

    CUresult(
        "ModuleLoadData",
        "",

        Check(1)..CUmodule.p.OUT("module", ""),
        Unsafe..void.const.p.IN("image", "")
    )

    CUresult(
        "ModuleLoadDataEx",
        "",

        Check(1)..CUmodule.p.OUT("module", ""),
        Unsafe..void.const.p.IN("image", ""),
        AutoSize("options", "optionValues")..unsigned_int.IN("numOptions", ""),
        nullable..CUjit_option.p.IN("options", ""),
        nullable..void.p.p.IN("optionValues", "")
    )

    CUresult(
        "ModuleLoadFatBinary",
        "",

        Check(1)..CUmodule.p.OUT("module", ""),
        Unsafe..void.const.p.IN("fatCubin", "")
    )

    CUresult(
        "ModuleUnload",
        "",

        CUmodule.IN("hmod", "")
    )

    CUresult(
        "ModuleGetFunction",
        "",

        Check(1)..CUfunction.p.OUT("hfunc", ""),
        CUmodule.IN("hmod", ""),
        charASCII.const.p.IN("name", "")
    )

    CUresult(
        "ModuleGetGlobal",
        "",

        Check(1)..CUdeviceptr.p.OUT("dptr", ""),
        Check(1)..size_t.p.OUT("bytes", ""),
        CUmodule.IN("hmod", ""),
        charASCII.const.p.IN("name", "")
    )

    CUresult(
        "ModuleGetTexRef",
        "",

        Check(1)..CUtexref.p.OUT("pTexRef", ""),
        CUmodule.IN("hmod", ""),
        charASCII.const.p.IN("name", "")
    )

    CUresult(
        "ModuleGetSurfRef",
        "",

        Check(1)..CUsurfref.p.OUT("pSurfRef", ""),
        CUmodule.IN("hmod", ""),
        charASCII.const.p.IN("name", "")
    )

    CUresult(
        "LinkCreate",
        "",

        AutoSize("options", "optionValues")..unsigned_int.IN("numOptions", ""),
        nullable..CUjit_option.p.IN("options", ""),
        nullable..void.p.p.IN("optionValues", ""),
        Check(1)..CUlinkState.p.OUT("stateOut", "")
    )

    CUresult(
        "LinkAddData",
        "",

        CUlinkState.IN("state", ""),
        CUjitInputType.IN("type", ""),
        void.p.IN("data", ""),
        AutoSize("data")..size_t.IN("size", ""),
        charASCII.const.p.IN("name", ""),
        AutoSize("options", "optionValues")..unsigned_int.IN("numOptions", ""),
        nullable..CUjit_option.p.IN("options", ""),
        nullable..void.p.p.IN("optionValues", "")
    )

    CUresult(
        "LinkAddFile",
        "",

        CUlinkState.IN("state", ""),
        CUjitInputType.IN("type", ""),
        charASCII.const.p.IN("path", ""),
        AutoSize("options", "optionValues")..unsigned_int.IN("numOptions", ""),
        nullable..CUjit_option.p.IN("options", ""),
        nullable..void.p.p.IN("optionValues", "")
    )

    CUresult(
        "LinkComplete",
        "",

        CUlinkState.IN("state", ""),
        Check(1)..void.p.p.OUT("cubinOut", ""),
        Check(1)..size_t.p.OUT("sizeOut", "")
    )

    CUresult(
        "LinkDestroy",
        "",

        CUlinkState.IN("state", "")
    )

    CUresult(
        "MemGetInfo",
        "",

        Check(1)..size_t.p.OUT("free", ""),
        Check(1)..size_t.p.OUT("total", "")
    )

    CUresult(
        "MemAlloc",
        "",

        Check(1)..CUdeviceptr.p.OUT("dptr", ""),
        size_t.IN("bytesize", "")
    )

    CUresult(
        "MemAllocPitch",
        "",

        Check(1)..CUdeviceptr.p.OUT("dptr", ""),
        Check(1)..size_t.p.OUT("pPitch", ""),
        size_t.IN("WidthInBytes", ""),
        size_t.IN("Height", ""),
        unsigned_int.IN("ElementSizeBytes", "")
    )

    CUresult(
        "MemFree",
        "",

        CUdeviceptr.IN("dptr", "")
    )

    CUresult(
        "MemGetAddressRange",
        "",

        Check(1)..CUdeviceptr.p.OUT("pbase", ""),
        Check(1)..size_t.p.OUT("psize", ""),
        CUdeviceptr.IN("dptr", "")
    )

    CUresult(
        "MemAllocHost",
        "",

        Check(1)..void.p.p.OUT("pp", ""),
        size_t.IN("bytesize", "")
    )

    CUresult(
        "MemFreeHost",
        "",

        Unsafe..void.p.IN("p", "")
    )

    CUresult(
        "MemHostAlloc",
        "",

        Check(1)..void.p.p.OUT("pp", ""),
        size_t.IN("bytesize", ""),
        unsigned_int.IN("Flags", "")
    )

    CUresult(
        "MemHostGetDevicePointer",
        "",

        Check(1)..CUdeviceptr.p.OUT("pdptr", ""),
        Unsafe..void.p.IN("p", ""),
        unsigned_int.IN("Flags", "")
    )

    CUresult(
        "MemHostGetFlags",
        "",

        Check(1)..unsigned_int.p.OUT("pFlags", ""),
        Unsafe..void.p.IN("p", "")
    )

    CUresult(
        "MemAllocManaged",
        "",

        Check(1)..CUdeviceptr.p.OUT("dptr", ""),
        size_t.IN("bytesize", ""),
        unsigned_int.IN("flags", "")
    )

    CUresult(
        "DeviceGetByPCIBusId",
        "",

        Check(1)..CUdevice.p.OUT("dev", ""),
        charASCII.const.p.IN("pciBusId", "")
    )

    CUresult(
        "DeviceGetPCIBusId",
        "",

        charASCII.p.OUT("pciBusId", ""),
        AutoSize("pciBusId")..int.IN("len", ""),
        CUdevice.IN("dev", "")
    )

    CUresult(
        "IpcGetEventHandle",
        "",

        Check(1)..CUipcEventHandle.p.OUT("pHandle", ""),
        CUevent.IN("event", "")
    )

    CUresult(
        "IpcOpenEventHandle",
        "",

        Check(1)..CUevent.p.OUT("phEvent", ""),
        CUipcEventHandle.IN("handle", "")
    )

    CUresult(
        "IpcGetMemHandle",
        "",

        Check(1)..CUipcMemHandle.p.OUT("pHandle", ""),
        CUdeviceptr.IN("dptr", "")
    )

    CUresult(
        "IpcOpenMemHandle",
        "",

        Check(1)..CUdeviceptr.p.OUT("pdptr", ""),
        CUipcMemHandle.IN("handle", ""),
        unsigned_int.IN("Flags", "")
    )

    CUresult(
        "IpcCloseMemHandle",
        "",

        CUdeviceptr.IN("dptr", "")
    )

    CUresult(
        "MemHostRegister",
        "",

        void.p.OUT("p", ""),
        AutoSize("p")..size_t.IN("bytesize", ""),
        unsigned_int.IN("Flags", "")
    )

    CUresult(
        "MemHostUnregister",
        "",

        Unsafe..void.p.IN("p", "")
    )

    CUresult(
        "Memcpy",
        "",

        CUdeviceptr.IN("dst", ""),
        CUdeviceptr.IN("src", ""),
        size_t.IN("ByteCount", "")
    )

    CUresult(
        "MemcpyPeer",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        CUcontext.IN("dstContext", ""),
        CUdeviceptr.IN("srcDevice", ""),
        CUcontext.IN("srcContext", ""),
        size_t.IN("ByteCount", "")
    )

    CUresult(
        "MemcpyHtoD",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        void.const.p.IN("srcHost", ""),
        AutoSize("srcHost")..size_t.IN("ByteCount", "")
    )

    CUresult(
        "MemcpyDtoH",
        "",

        void.p.OUT("dstHost", ""),
        CUdeviceptr.IN("srcDevice", ""),
        AutoSize("dstHost")..size_t.IN("ByteCount", "")
    )

    CUresult(
        "MemcpyDtoD",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        CUdeviceptr.IN("srcDevice", ""),
        size_t.IN("ByteCount", "")
    )

    CUresult(
        "MemcpyDtoA",
        "",

        CUarray.IN("dstArray", ""),
        size_t.IN("dstOffset", ""),
        CUdeviceptr.IN("srcDevice", ""),
        size_t.IN("ByteCount", "")
    )

    CUresult(
        "MemcpyAtoD",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        CUarray.IN("srcArray", ""),
        size_t.IN("srcOffset", ""),
        size_t.IN("ByteCount", "")
    )

    CUresult(
        "MemcpyHtoA",
        "",

        CUarray.IN("dstArray", ""),
        size_t.IN("dstOffset", ""),
        void.const.p.IN("srcHost", ""),
        AutoSize("srcHost")..size_t.IN("ByteCount", "")
    )

    CUresult(
        "MemcpyAtoH",
        "",

        void.p.OUT("dstHost", ""),
        CUarray.IN("srcArray", ""),
        size_t.IN("srcOffset", ""),
        AutoSize("dstHost")..size_t.IN("ByteCount", "")
    )

    CUresult(
        "MemcpyAtoA",
        "",

        CUarray.IN("dstArray", ""),
        size_t.IN("dstOffset", ""),
        CUarray.IN("srcArray", ""),
        size_t.IN("srcOffset", ""),
        size_t.IN("ByteCount", "")
    )

    CUresult(
        "Memcpy2D",
        "",

        CUDA_MEMCPY2D.const.p.IN("pCopy", "")
    )

    CUresult(
        "Memcpy2DUnaligned",
        "",

        CUDA_MEMCPY2D.const.p.IN("pCopy", "")
    )

    CUresult(
        "Memcpy3D",
        "",

        CUDA_MEMCPY3D.const.p.IN("pCopy", "")
    )

    CUresult(
        "Memcpy3DPeer",
        "",

        CUDA_MEMCPY3D_PEER.const.p.IN("pCopy", "")
    )

    CUresult(
        "MemcpyAsync",
        "",

        CUdeviceptr.IN("dst", ""),
        CUdeviceptr.IN("src", ""),
        size_t.IN("ByteCount", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "MemcpyPeerAsync",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        CUcontext.IN("dstContext", ""),
        CUdeviceptr.IN("srcDevice", ""),
        CUcontext.IN("srcContext", ""),
        size_t.IN("ByteCount", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "MemcpyHtoDAsync",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        void.const.p.IN("srcHost", ""),
        AutoSize("srcHost")..size_t.IN("ByteCount", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "MemcpyDtoHAsync",
        "",

        void.p.OUT("dstHost", ""),
        CUdeviceptr.IN("srcDevice", ""),
        AutoSize("dstHost")..size_t.IN("ByteCount", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "MemcpyDtoDAsync",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        CUdeviceptr.IN("srcDevice", ""),
        size_t.IN("ByteCount", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "MemcpyHtoAAsync",
        "",

        CUarray.IN("dstArray", ""),
        size_t.IN("dstOffset", ""),
        void.const.p.IN("srcHost", ""),
        AutoSize("srcHost")..size_t.IN("ByteCount", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "MemcpyAtoHAsync",
        "",

        void.p.OUT("dstHost", ""),
        CUarray.IN("srcArray", ""),
        size_t.IN("srcOffset", ""),
        AutoSize("dstHost")..size_t.IN("ByteCount", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "Memcpy2DAsync",
        "",

        CUDA_MEMCPY2D.const.p.IN("pCopy", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "Memcpy3DAsync",
        "",

        CUDA_MEMCPY3D.const.p.IN("pCopy", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "Memcpy3DPeerAsync",
        "",

        CUDA_MEMCPY3D_PEER.const.p.IN("pCopy", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "MemsetD8",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        unsigned_char.IN("uc", ""),
        size_t.IN("N", "")
    )

    CUresult(
        "MemsetD16",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        unsigned_short.IN("us", ""),
        size_t.IN("N", "")
    )

    CUresult(
        "MemsetD32",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        unsigned_int.IN("ui", ""),
        size_t.IN("N", "")
    )

    CUresult(
        "MemsetD2D8",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        size_t.IN("dstPitch", ""),
        unsigned_char.IN("uc", ""),
        size_t.IN("Width", ""),
        size_t.IN("Height", "")
    )

    CUresult(
        "MemsetD2D16",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        size_t.IN("dstPitch", ""),
        unsigned_short.IN("us", ""),
        size_t.IN("Width", ""),
        size_t.IN("Height", "")
    )

    CUresult(
        "MemsetD2D32",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        size_t.IN("dstPitch", ""),
        unsigned_int.IN("ui", ""),
        size_t.IN("Width", ""),
        size_t.IN("Height", "")
    )

    CUresult(
        "MemsetD8Async",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        unsigned_char.IN("uc", ""),
        size_t.IN("N", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "MemsetD16Async",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        unsigned_short.IN("us", ""),
        size_t.IN("N", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "MemsetD32Async",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        unsigned_int.IN("ui", ""),
        size_t.IN("N", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "MemsetD2D8Async",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        size_t.IN("dstPitch", ""),
        unsigned_char.IN("uc", ""),
        size_t.IN("Width", ""),
        size_t.IN("Height", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "MemsetD2D16Async",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        size_t.IN("dstPitch", ""),
        unsigned_short.IN("us", ""),
        size_t.IN("Width", ""),
        size_t.IN("Height", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "MemsetD2D32Async",
        "",

        CUdeviceptr.IN("dstDevice", ""),
        size_t.IN("dstPitch", ""),
        unsigned_int.IN("ui", ""),
        size_t.IN("Width", ""),
        size_t.IN("Height", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "ArrayCreate",
        "",

        Check(1)..CUarray.p.OUT("pHandle", ""),
        CUDA_ARRAY_DESCRIPTOR.const.p.IN("pAllocateArray", "")
    )

    CUresult(
        "ArrayGetDescriptor",
        "",

        CUDA_ARRAY_DESCRIPTOR.p.OUT("pArrayDescriptor", ""),
        CUarray.IN("hArray", "")
    )

    CUresult(
        "ArrayDestroy",
        "",

        CUarray.IN("hArray", "")
    )

    CUresult(
        "Array3DCreate",
        "",

        Check(1)..CUarray.p.OUT("pHandle", ""),
        CUDA_ARRAY3D_DESCRIPTOR.const.p.IN("pAllocateArray", "")
    )

    CUresult(
        "Array3DGetDescriptor",
        "",

        CUDA_ARRAY3D_DESCRIPTOR.p.OUT("pArrayDescriptor", ""),
        CUarray.IN("hArray", "")
    )

    CUresult(
        "MipmappedArrayCreate",
        "",

        Check(1)..CUmipmappedArray.p.OUT("pHandle", ""),
        CUDA_ARRAY3D_DESCRIPTOR.const.p.IN("pMipmappedArrayDesc", ""),
        unsigned_int.IN("numMipmapLevels", "")
    )

    CUresult(
        "MipmappedArrayGetLevel",
        "",

        Check(1)..CUarray.p.OUT("pLevelArray", ""),
        CUmipmappedArray.IN("hMipmappedArray", ""),
        unsigned_int.IN("level", "")
    )

    CUresult(
        "MipmappedArrayDestroy",
        "",

        CUmipmappedArray.IN("hMipmappedArray", "")
    )

    CUresult(
        "PointerGetAttribute",
        "",

        Unsafe..void.p.OUT("data", ""),
        CUpointer_attribute.IN("attribute", ""),
        CUdeviceptr.IN("ptr", "")
    )

    CUresult(
        "MemPrefetchAsync",
        "",

        CUdeviceptr.IN("devPtr", ""),
        size_t.IN("count", ""),
        CUdevice.IN("dstDevice", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "MemAdvise",
        "",

        CUdeviceptr.IN("devPtr", ""),
        size_t.IN("count", ""),
        CUmem_advise.IN("advice", ""),
        CUdevice.IN("device", "")
    )

    CUresult(
        "MemRangeGetAttribute",
        "",

        void.p.OUT("data", ""),
        AutoSize("data")..size_t.IN("dataSize", ""),
        CUmem_range_attribute.IN("attribute", ""),
        CUdeviceptr.IN("devPtr", ""),
        size_t.IN("count", "")
    )

    CUresult(
        "MemRangeGetAttributes",
        "",

        void.p.p.OUT("data", ""),
        size_t.p.OUT("dataSizes", ""),
        CUmem_range_attribute.p.IN("attributes", ""),
        AutoSize("attributes", "data", "dataSizes")..size_t.IN("numAttributes", ""),
        CUdeviceptr.IN("devPtr", ""),
        size_t.IN("count", "")
    )

    CUresult(
        "PointerSetAttribute",
        "",

        Unsafe..void.const.p.IN("value", ""),
        CUpointer_attribute.IN("attribute", ""),
        CUdeviceptr.IN("ptr", "")
    )

    CUresult(
        "PointerGetAttributes",
        "",

        AutoSize("attributes", "data")..unsigned_int.IN("numAttributes", ""),
        CUpointer_attribute.p.IN("attributes", ""),
        void.p.p.OUT("data", ""),
        CUdeviceptr.IN("ptr", "")
    )

    CUresult(
        "StreamCreate",
        "",

        Check(1)..CUstream.p.OUT("phStream", ""),
        unsigned_int.IN("Flags", "")
    )

    CUresult(
        "StreamCreateWithPriority",
        "",

        Check(1)..CUstream.p.OUT("phStream", ""),
        unsigned_int.IN("flags", ""),
        int.IN("priority", "")
    )

    CUresult(
        "StreamGetPriority",
        "",

        CUstream.IN("hStream", ""),
        Check(1)..int.p.OUT("priority", "")
    )

    CUresult(
        "StreamGetFlags",
        "",

        CUstream.IN("hStream", ""),
        Check(1)..unsigned_int.p.OUT("flags", "")
    )

    CUresult(
        "StreamGetCtx",
        "",

        CUstream.IN("hStream", ""),
        Check(1)..CUcontext.p.OUT("pctx", "")
    )

    CUresult(
        "StreamWaitEvent",
        "",

        CUstream.IN("hStream", ""),
        CUevent.IN("hEvent", ""),
        unsigned_int.IN("Flags", "")
    )

    CUresult(
        "StreamAddCallback",
        "",

        CUstream.IN("hStream", ""),
        CUstreamCallback.IN("callback", ""),
        opaque_p.IN("userData", ""),
        unsigned_int.IN("flags", "")
    )

    CUresult(
        "StreamBeginCapture",
        "",

        CUstream.IN("hStream", "")
    )

    CUresult(
        "StreamEndCapture",
        "",

        CUstream.IN("hStream", ""),
        Check(1)..CUgraph.p.OUT("phGraph", "")
    )

    CUresult(
        "StreamIsCapturing",
        "",

        CUstream.IN("hStream", ""),
        Check(1)..CUstreamCaptureStatus.p.OUT("captureStatus", "")
    )

    CUresult(
        "StreamAttachMemAsync",
        "",

        CUstream.IN("hStream", ""),
        CUdeviceptr.IN("dptr", ""),
        size_t.IN("length", ""),
        unsigned_int.IN("flags", "")
    )

    CUresult(
        "StreamQuery",
        "",

        CUstream.IN("hStream", "")
    )

    CUresult(
        "StreamSynchronize",
        "",

        CUstream.IN("hStream", "")
    )

    CUresult(
        "StreamDestroy",
        "",

        CUstream.IN("hStream", "")
    )

    CUresult(
        "EventCreate",
        "",

        Check(1)..CUevent.p.OUT("phEvent", ""),
        unsigned_int.IN("Flags", "")
    )

    CUresult(
        "EventRecord",
        "",

        CUevent.IN("hEvent", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "EventQuery",
        "",

        CUevent.IN("hEvent", "")
    )

    CUresult(
        "EventSynchronize",
        "",

        CUevent.IN("hEvent", "")
    )

    CUresult(
        "EventDestroy",
        "",

        CUevent.IN("hEvent", "")
    )

    CUresult(
        "EventElapsedTime",
        "",

        Check(1)..float.p.OUT("pMilliseconds", ""),
        CUevent.IN("hStart", ""),
        CUevent.IN("hEnd", "")
    )

    CUresult(
        "ImportExternalMemory",
        "",

        Check(1)..CUexternalMemory.p.OUT("extMem_out", ""),
        CUDA_EXTERNAL_MEMORY_HANDLE_DESC.const.p.IN("memHandleDesc", "")
    )

    CUresult(
        "ExternalMemoryGetMappedBuffer",
        "",

        Check(1)..CUdeviceptr.p.OUT("devPtr", ""),
        CUexternalMemory.IN("extMem", ""),
        CUDA_EXTERNAL_MEMORY_BUFFER_DESC.const.p.IN("bufferDesc", "")
    )

    CUresult(
        "ExternalMemoryGetMappedMipmappedArray",
        "",

        Check(1)..CUmipmappedArray.p.OUT("mipmap", ""),
        CUexternalMemory.IN("extMem", ""),
        CUDA_EXTERNAL_MEMORY_MIPMAPPED_ARRAY_DESC.const.p.IN("mipmapDesc", "")
    )

    CUresult(
        "DestroyExternalMemory",
        "",

        CUexternalMemory.IN("extMem", "")
    )

    CUresult(
        "ImportExternalSemaphore",
        "",

        Check(1)..CUexternalSemaphore.p.OUT("extSem_out", ""),
        CUDA_EXTERNAL_SEMAPHORE_HANDLE_DESC.const.p.IN("semHandleDesc", "")
    )

    CUresult(
        "SignalExternalSemaphoresAsync",
        "",

        CUexternalSemaphore.const.p.IN("extSemArray", ""),
        nullable..CUDA_EXTERNAL_SEMAPHORE_SIGNAL_PARAMS.const.p.IN("paramsArray", ""),
        AutoSize("extSemArray", "paramsArray")..unsigned_int.IN("numExtSems", ""),
        CUstream.IN("stream", "")
    )

    CUresult(
        "WaitExternalSemaphoresAsync",
        "",

        CUexternalSemaphore.const.p.IN("extSemArray", ""),
        nullable..CUDA_EXTERNAL_SEMAPHORE_WAIT_PARAMS.const.p.IN("paramsArray", ""),
        AutoSize("extSemArray", "paramsArray")..unsigned_int.IN("numExtSems", ""),
        CUstream.IN("stream", "")
    )

    CUresult(
        "DestroyExternalSemaphore",
        "",

        CUexternalSemaphore.IN("extSem", "")
    )

    CUresult(
        "StreamWaitValue32",
        "",

        CUstream.IN("stream", ""),
        CUdeviceptr.IN("addr", ""),
        cuuint32_t.IN("value", ""),
        unsigned_int.IN("flags", "")
    )

    CUresult(
        "StreamWaitValue64",
        "",

        CUstream.IN("stream", ""),
        CUdeviceptr.IN("addr", ""),
        cuuint64_t.IN("value", ""),
        unsigned_int.IN("flags", "")
    )

    CUresult(
        "StreamWriteValue32",
        "",

        CUstream.IN("stream", ""),
        CUdeviceptr.IN("addr", ""),
        cuuint32_t.IN("value", ""),
        unsigned_int.IN("flags", "")
    )

    CUresult(
        "StreamWriteValue64",
        "",

        CUstream.IN("stream", ""),
        CUdeviceptr.IN("addr", ""),
        cuuint64_t.IN("value", ""),
        unsigned_int.IN("flags", "")
    )

    CUresult(
        "StreamBatchMemOp",
        "",

        CUstream.IN("stream", ""),
        AutoSize("paramArray")..unsigned_int.IN("count", ""),
        CUstreamBatchMemOpParams.p.IN("paramArray", ""),
        unsigned_int.IN("flags", "")
    )

    CUresult(
        "FuncGetAttribute",
        "",

        Check(1)..int.p.OUT("pi", ""),
        CUfunction_attribute.IN("attrib", ""),
        CUfunction.IN("hfunc", "")
    )

    CUresult(
        "FuncSetAttribute",
        "",

        CUfunction.IN("hfunc", ""),
        CUfunction_attribute.IN("attrib", ""),
        int.IN("value", "")
    )

    CUresult(
        "FuncSetCacheConfig",
        "",

        CUfunction.IN("hfunc", ""),
        CUfunc_cache.IN("config", "")
    )

    CUresult(
        "FuncSetSharedMemConfig",
        "",

        CUfunction.IN("hfunc", ""),
        CUsharedconfig.IN("config", "")
    )

    CUresult(
        "LaunchKernel",
        "",

        CUfunction.IN("f", ""),
        unsigned_int.IN("gridDimX", ""),
        unsigned_int.IN("gridDimY", ""),
        unsigned_int.IN("gridDimZ", ""),
        unsigned_int.IN("blockDimX", ""),
        unsigned_int.IN("blockDimY", ""),
        unsigned_int.IN("blockDimZ", ""),
        unsigned_int.IN("sharedMemBytes", ""),
        CUstream.IN("hStream", ""),
        Unsafe..nullable..void.p.p.IN("kernelParams", ""),
        Unsafe..nullable..void.p.p.IN("extra", "")
    )

    CUresult(
        "LaunchCooperativeKernel",
        "",

        CUfunction.IN("f", ""),
        unsigned_int.IN("gridDimX", ""),
        unsigned_int.IN("gridDimY", ""),
        unsigned_int.IN("gridDimZ", ""),
        unsigned_int.IN("blockDimX", ""),
        unsigned_int.IN("blockDimY", ""),
        unsigned_int.IN("blockDimZ", ""),
        unsigned_int.IN("sharedMemBytes", ""),
        CUstream.IN("hStream", ""),
        Unsafe..nullable..void.p.p.IN("kernelParams", "")
    )

    CUresult(
        "LaunchCooperativeKernelMultiDevice",
        "",

        CUDA_LAUNCH_PARAMS.p.IN("launchParamsList", ""),
        AutoSize("launchParamsList")..unsigned_int.IN("numDevices", ""),
        unsigned_int.IN("flags", "")
    )

    CUresult(
        "LaunchHostFunc",
        "",

        CUstream.IN("hStream", ""),
        CUhostFn.IN("fn", ""),
        opaque_p.IN("userData", "")
    )

    CUresult(
        "GraphCreate",
        "",

        Check(1)..CUgraph.p.OUT("phGraph", ""),
        unsigned_int.IN("flags", "")
    )

    CUresult(
        "GraphAddKernelNode",
        "",

        Check(1)..CUgraphNode.p.OUT("phGraphNode", ""),
        CUgraph.IN("hGraph", ""),
        nullable..CUgraphNode.p.IN("dependencies", ""),
        AutoSize("dependencies")..size_t.IN("numDependencies", ""),
        CUDA_KERNEL_NODE_PARAMS.const.p.IN("nodeParams", "")
    )

    CUresult(
        "GraphKernelNodeGetParams",
        "",

        CUgraphNode.IN("hNode", ""),
        CUDA_KERNEL_NODE_PARAMS.p.OUT("nodeParams", "")
    )

    CUresult(
        "GraphKernelNodeSetParams",
        "",

        CUgraphNode.IN("hNode", ""),
        CUDA_KERNEL_NODE_PARAMS.const.p.IN("nodeParams", "")
    )

    CUresult(
        "GraphAddMemcpyNode",
        "",

        Check(1)..CUgraphNode.p.OUT("phGraphNode", ""),
        CUgraph.IN("hGraph", ""),
        nullable..CUgraphNode.p.IN("dependencies", ""),
        AutoSize("dependencies")..size_t.IN("numDependencies", ""),
        CUDA_MEMCPY3D.const.p.IN("copyParams", ""),
        CUcontext.IN("ctx", "")
    )

    CUresult(
        "GraphMemcpyNodeGetParams",
        "",

        CUgraphNode.IN("hNode", ""),
        CUDA_MEMCPY3D.p.OUT("nodeParams", "")
    )

    CUresult(
        "GraphMemcpyNodeSetParams",
        "",

        CUgraphNode.IN("hNode", ""),
        CUDA_MEMCPY3D.const.p.IN("nodeParams", "")
    )

    CUresult(
        "GraphAddMemsetNode",
        "",

        Check(1)..CUgraphNode.p.OUT("phGraphNode", ""),
        CUgraph.IN("hGraph", ""),
        nullable..CUgraphNode.p.IN("dependencies", ""),
        AutoSize("dependencies")..size_t.IN("numDependencies", ""),
        CUDA_MEMSET_NODE_PARAMS.const.p.IN("memsetParams", ""),
        CUcontext.IN("ctx", "")
    )

    CUresult(
        "GraphMemsetNodeGetParams",
        "",

        CUgraphNode.IN("hNode", ""),
        CUDA_MEMSET_NODE_PARAMS.p.OUT("nodeParams", "")
    )

    CUresult(
        "GraphMemsetNodeSetParams",
        "",

        CUgraphNode.IN("hNode", ""),
        CUDA_MEMSET_NODE_PARAMS.const.p.IN("nodeParams", "")
    )

    CUresult(
        "GraphAddHostNode",
        "",

        Check(1)..CUgraphNode.p.OUT("phGraphNode", ""),
        CUgraph.IN("hGraph", ""),
        nullable..CUgraphNode.p.IN("dependencies", ""),
        AutoSize("dependencies")..size_t.IN("numDependencies", ""),
        CUDA_HOST_NODE_PARAMS.const.p.IN("nodeParams", "")
    )

    CUresult(
        "GraphHostNodeGetParams",
        "",

        CUgraphNode.IN("hNode", ""),
        CUDA_HOST_NODE_PARAMS.p.OUT("nodeParams", "")
    )

    CUresult(
        "GraphHostNodeSetParams",
        "",

        CUgraphNode.IN("hNode", ""),
        CUDA_HOST_NODE_PARAMS.const.p.IN("nodeParams", "")
    )

    CUresult(
        "GraphAddChildGraphNode",
        "",

        Check(1)..CUgraphNode.p.OUT("phGraphNode", ""),
        CUgraph.IN("hGraph", ""),
        nullable..CUgraphNode.p.IN("dependencies", ""),
        AutoSize("dependencies")..size_t.IN("numDependencies", ""),
        CUgraph.IN("childGraph", "")
    )

    CUresult(
        "GraphChildGraphNodeGetGraph",
        "",

        CUgraphNode.IN("hNode", ""),
        Check(1)..CUgraph.p.OUT("phGraph", "")
    )

    CUresult(
        "GraphAddEmptyNode",
        "",

        Check(1)..CUgraphNode.p.OUT("phGraphNode", ""),
        CUgraph.IN("hGraph", ""),
        nullable..CUgraphNode.p.IN("dependencies", ""),
        AutoSize("dependencies")..size_t.IN("numDependencies", "")
    )

    CUresult(
        "GraphClone",
        "",

        Check(1)..CUgraph.p.OUT("phGraphClone", ""),
        CUgraph.IN("originalGraph", "")
    )

    CUresult(
        "GraphNodeFindInClone",
        "",

        Check(1)..CUgraphNode.p.OUT("phNode", ""),
        CUgraphNode.IN("hOriginalNode", ""),
        CUgraph.IN("hClonedGraph", "")
    )

    CUresult(
        "GraphNodeGetType",
        "",

        CUgraphNode.IN("hNode", ""),
        Check(1)..CUgraphNodeType.p.OUT("type", "")
    )

    CUresult(
        "GraphGetNodes",
        "",

        CUgraph.IN("hGraph", ""),
        nullable..CUgraphNode.p.OUT("nodes", ""),
        AutoSize("nodes")..Check(1)..size_t.p.INOUT("numNodes", "")
    )

    CUresult(
        "GraphGetRootNodes",
        "",

        CUgraph.IN("hGraph", ""),
        nullable..CUgraphNode.p.OUT("rootNodes", ""),
        AutoSize("rootNodes")..Check(1)..size_t.p.INOUT("numRootNodes", "")
    )

    CUresult(
        "GraphGetEdges",
        "",

        CUgraph.IN("hGraph", ""),
        nullable..CUgraphNode.p.OUT("from", ""),
        nullable..CUgraphNode.p.OUT("to", ""),
        AutoSize("from", "to")..Check(1)..size_t.p.INOUT("numEdges", "")
    )

    CUresult(
        "GraphNodeGetDependencies",
        "",

        CUgraphNode.IN("hNode", ""),
        nullable..CUgraphNode.p.OUT("dependencies", ""),
        AutoSize("dependencies")..Check(1)..size_t.p.INOUT("numDependencies", "")
    )

    CUresult(
        "GraphNodeGetDependentNodes",
        "",

        CUgraphNode.IN("hNode", ""),
        nullable..CUgraphNode.p.OUT("dependentNodes", ""),
        AutoSize("dependentNodes")..Check(1)..size_t.p.INOUT("numDependentNodes", "")
    )

    CUresult(
        "GraphAddDependencies",
        "",

        CUgraph.IN("hGraph", ""),
        CUgraphNode.p.IN("from", ""),
        CUgraphNode.p.IN("to", ""),
        AutoSize("from", "to")..size_t.IN("numDependencies", "")
    )

    CUresult(
        "GraphRemoveDependencies",
        "",

        CUgraph.IN("hGraph", ""),
        CUgraphNode.p.IN("from", ""),
        CUgraphNode.p.IN("to", ""),
        AutoSize("from", "to")..size_t.IN("numDependencies", "")
    )

    CUresult(
        "GraphDestroyNode",
        "",

        CUgraphNode.IN("hNode", "")
    )

    CUresult(
        "GraphInstantiate",
        "",

        Check(1)..CUgraphExec.p.OUT("phGraphExec", ""),
        CUgraph.IN("hGraph", ""),
        Check(1)..CUgraphNode.p.OUT("phErrorNode", ""),
        charASCII.p.OUT("logBuffer", ""),
        AutoSize("logBuffer")..size_t.IN("bufferSize", "")
    )

    CUresult(
        "GraphLaunch",
        "",

        CUgraphExec.IN("hGraphExec", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "GraphExecDestroy",
        "",

        CUgraphExec.IN("hGraphExec", "")
    )

    CUresult(
        "GraphDestroy",
        "",

        CUgraph.IN("hGraph", "")
    )

    CUresult(
        "OccupancyMaxActiveBlocksPerMultiprocessor",
        "",

        Check(1)..int.p.OUT("numBlocks", ""),
        CUfunction.IN("func", ""),
        int.IN("blockSize", ""),
        size_t.IN("dynamicSMemSize", "")
    )

    CUresult(
        "OccupancyMaxActiveBlocksPerMultiprocessorWithFlags",
        "",

        Check(1)..int.p.OUT("numBlocks", ""),
        CUfunction.IN("func", ""),
        int.IN("blockSize", ""),
        size_t.IN("dynamicSMemSize", ""),
        unsigned_int.IN("flags", "")
    )

    CUresult(
        "OccupancyMaxPotentialBlockSize",
        "",

        Check(1)..int.p.OUT("minGridSize", ""),
        Check(1)..int.p.OUT("blockSize", ""),
        CUfunction.IN("func", ""),
        CUoccupancyB2DSize.IN("blockSizeToDynamicSMemSize", ""),
        size_t.IN("dynamicSMemSize", ""),
        int.IN("blockSizeLimit", "")
    )

    CUresult(
        "OccupancyMaxPotentialBlockSizeWithFlags",
        "",

        Check(1)..int.p.OUT("minGridSize", ""),
        Check(1)..int.p.OUT("blockSize", ""),
        CUfunction.IN("func", ""),
        CUoccupancyB2DSize.IN("blockSizeToDynamicSMemSize", ""),
        size_t.IN("dynamicSMemSize", ""),
        int.IN("blockSizeLimit", ""),
        unsigned_int.IN("flags", "")
    )

    CUresult(
        "TexRefSetArray",
        "",

        CUtexref.IN("hTexRef", ""),
        CUarray.IN("hArray", ""),
        unsigned_int.IN("Flags", "")
    )

    CUresult(
        "TexRefSetMipmappedArray",
        "",

        CUtexref.IN("hTexRef", ""),
        CUmipmappedArray.IN("hMipmappedArray", ""),
        unsigned_int.IN("Flags", "")
    )

    CUresult(
        "TexRefSetAddress",
        "",

        Check(1)..size_t.p.OUT("ByteOffset", ""),
        CUtexref.IN("hTexRef", ""),
        CUdeviceptr.IN("dptr", ""),
        size_t.IN("bytes", "")
    )

    CUresult(
        "TexRefSetAddress2D",
        "",

        CUtexref.IN("hTexRef", ""),
        CUDA_ARRAY_DESCRIPTOR.const.p.IN("desc", ""),
        CUdeviceptr.IN("dptr", ""),
        size_t.IN("Pitch", "")
    )

    CUresult(
        "TexRefSetFormat",
        "",

        CUtexref.IN("hTexRef", ""),
        CUarray_format.IN("fmt", ""),
        int.IN("NumPackedComponents", "")
    )

    CUresult(
        "TexRefSetAddressMode",
        "",

        CUtexref.IN("hTexRef", ""),
        int.IN("dim", ""),
        CUaddress_mode.IN("am", "")
    )

    CUresult(
        "TexRefSetFilterMode",
        "",

        CUtexref.IN("hTexRef", ""),
        CUfilter_mode.IN("fm", "")
    )

    CUresult(
        "TexRefSetMipmapFilterMode",
        "",

        CUtexref.IN("hTexRef", ""),
        CUfilter_mode.IN("fm", "")
    )

    CUresult(
        "TexRefSetMipmapLevelBias",
        "",

        CUtexref.IN("hTexRef", ""),
        float.IN("bias", "")
    )

    CUresult(
        "TexRefSetMipmapLevelClamp",
        "",

        CUtexref.IN("hTexRef", ""),
        float.IN("minMipmapLevelClamp", ""),
        float.IN("maxMipmapLevelClamp", "")
    )

    CUresult(
        "TexRefSetMaxAnisotropy",
        "",

        CUtexref.IN("hTexRef", ""),
        unsigned_int.IN("maxAniso", "")
    )

    CUresult(
        "TexRefSetBorderColor",
        "",

        CUtexref.IN("hTexRef", ""),
        Check(4)..float.p.IN("pBorderColor", "")
    )

    CUresult(
        "TexRefSetFlags",
        "",

        CUtexref.IN("hTexRef", ""),
        unsigned_int.IN("Flags", "")
    )

    CUresult(
        "TexRefGetAddress",
        "",

        Check(1)..CUdeviceptr.p.OUT("pdptr", ""),
        CUtexref.IN("hTexRef", "")
    )

    CUresult(
        "TexRefGetArray",
        "",

        Check(1)..CUarray.p.OUT("phArray", ""),
        CUtexref.IN("hTexRef", "")
    )

    CUresult(
        "TexRefGetMipmappedArray",
        "",

        Check(1)..CUmipmappedArray.p.OUT("phMipmappedArray", ""),
        CUtexref.IN("hTexRef", "")
    )

    CUresult(
        "TexRefGetAddressMode",
        "",

        Check(1)..CUaddress_mode.p.OUT("pam", ""),
        CUtexref.IN("hTexRef", ""),
        int.IN("dim", "")
    )

    CUresult(
        "TexRefGetFilterMode",
        "",

        Check(1)..CUfilter_mode.p.OUT("pfm", ""),
        CUtexref.IN("hTexRef", "")
    )

    CUresult(
        "TexRefGetFormat",
        "",

        Check(1)..CUarray_format.p.OUT("pFormat", ""),
        Check(1)..int.p.OUT("pNumChannels", ""),
        CUtexref.IN("hTexRef", "")
    )

    CUresult(
        "TexRefGetMipmapFilterMode",
        "",

        Check(1)..CUfilter_mode.p.OUT("pfm", ""),
        CUtexref.IN("hTexRef", "")
    )

    CUresult(
        "TexRefGetMipmapLevelBias",
        "",

        Check(1)..float.p.OUT("pbias", ""),
        CUtexref.IN("hTexRef", "")
    )

    CUresult(
        "TexRefGetMipmapLevelClamp",
        "",

        Check(1)..float.p.OUT("pminMipmapLevelClamp", ""),
        Check(1)..float.p.OUT("pmaxMipmapLevelClamp", ""),
        CUtexref.IN("hTexRef", "")
    )

    CUresult(
        "TexRefGetMaxAnisotropy",
        "",

        Check(1)..int.p.OUT("pmaxAniso", ""),
        CUtexref.IN("hTexRef", "")
    )

    CUresult(
        "TexRefGetBorderColor",
        "",

        Check(4)..float.p.OUT("pBorderColor", ""),
        CUtexref.IN("hTexRef", "")
    )

    CUresult(
        "TexRefGetFlags",
        "",

        Check(1)..unsigned_int.p.OUT("pFlags", ""),
        CUtexref.IN("hTexRef", "")
    )

    CUresult(
        "SurfRefSetArray",
        "",

        CUsurfref.IN("hSurfRef", ""),
        CUarray.IN("hArray", ""),
        unsigned_int.IN("Flags", "")
    )

    CUresult(
        "SurfRefGetArray",
        "",

        Check(1)..CUarray.p.OUT("phArray", ""),
        CUsurfref.IN("hSurfRef", "")
    )

    CUresult(
        "TexObjectCreate",
        "",

        Check(1)..CUtexObject.p.OUT("pTexObject", ""),
        CUDA_RESOURCE_DESC.const.p.IN("pResDesc", ""),
        CUDA_TEXTURE_DESC.const.p.IN("pTexDesc", ""),
        CUDA_RESOURCE_VIEW_DESC.const.p.IN("pResViewDesc", "")
    )

    CUresult(
        "TexObjectDestroy",
        "",

        CUtexObject.IN("texObject", "")
    )

    CUresult(
        "TexObjectGetResourceDesc",
        "",

        CUDA_RESOURCE_DESC.p.OUT("pResDesc", ""),
        CUtexObject.IN("texObject", "")
    )

    CUresult(
        "TexObjectGetTextureDesc",
        "",

        CUDA_TEXTURE_DESC.p.OUT("pTexDesc", ""),
        CUtexObject.IN("texObject", "")
    )

    CUresult(
        "TexObjectGetResourceViewDesc",
        "",

        CUDA_RESOURCE_VIEW_DESC.p.OUT("pResViewDesc", ""),
        CUtexObject.IN("texObject", "")
    )

    CUresult(
        "SurfObjectCreate",
        "",

        Check(1)..CUsurfObject.p.OUT("pSurfObject", ""),
        CUDA_RESOURCE_DESC.const.p.IN("pResDesc", "")
    )

    CUresult(
        "SurfObjectDestroy",
        "",

        CUsurfObject.IN("surfObject", "")
    )

    CUresult(
        "SurfObjectGetResourceDesc",
        "",

        CUDA_RESOURCE_DESC.p.OUT("pResDesc", ""),
        CUsurfObject.IN("surfObject", "")
    )

    CUresult(
        "DeviceCanAccessPeer",
        "",

        Check(1)..int.p.OUT("canAccessPeer", ""),
        CUdevice.IN("dev", ""),
        CUdevice.IN("peerDev", "")
    )

    CUresult(
        "CtxEnablePeerAccess",
        "",

        CUcontext.IN("peerContext", ""),
        unsigned_int.IN("Flags", "")
    )

    CUresult(
        "CtxDisablePeerAccess",
        "",

        CUcontext.IN("peerContext", "")
    )

    CUresult(
        "DeviceGetP2PAttribute",
        "",

        Check(1)..int.p.OUT("value", ""),
        CUdevice_P2PAttribute.IN("attrib", ""),
        CUdevice.IN("srcDevice", ""),
        CUdevice.IN("dstDevice", "")
    )

    CUresult(
        "GraphicsUnregisterResource",
        "",

        CUgraphicsResource.IN("resource", "")
    )

    CUresult(
        "GraphicsSubResourceGetMappedArray",
        "",

        Check(1)..CUarray.p.OUT("pArray", ""),
        CUgraphicsResource.IN("resource", ""),
        unsigned_int.IN("arrayIndex", ""),
        unsigned_int.IN("mipLevel", "")
    )

    CUresult(
        "GraphicsResourceGetMappedMipmappedArray",
        "",

        Check(1)..CUmipmappedArray.p.OUT("pMipmappedArray", ""),
        CUgraphicsResource.IN("resource", "")
    )

    CUresult(
        "GraphicsResourceGetMappedPointer",
        "",

        Check(1)..CUdeviceptr.p.OUT("pDevPtr", ""),
        Check(1)..size_t.p.OUT("pSize", ""),
        CUgraphicsResource.IN("resource", "")
    )

    CUresult(
        "GraphicsResourceSetMapFlags",
        "",

        CUgraphicsResource.IN("resource", ""),
        unsigned_int.IN("flags", "")
    )

    CUresult(
        "GraphicsMapResources",
        "",

        AutoSize("resources")..unsigned_int.IN("count", ""),
        CUgraphicsResource.p.IN("resources", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "GraphicsUnmapResources",
        "",

        AutoSize("resources")..unsigned_int.IN("count", ""),
        CUgraphicsResource.p.IN("resources", ""),
        CUstream.IN("hStream", "")
    )

    CUresult(
        "GetExportTable",
        "",

        Unsafe..void.const.p.p.IN("ppExportTable", ""),
        CUuuid.const.p.IN("pExportTableId", "")
    )
}