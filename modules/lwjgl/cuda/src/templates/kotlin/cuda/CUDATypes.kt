/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 */
package cuda

import org.lwjgl.generator.*

val CUDA_BINDING = simpleBinding(Module.CUDA, libraryExpression = "Configuration.CUDA_LIBRARY_NAME, \"nvcuda\"")
val CUDA_BINDING_DELEGATE = CUDA_BINDING.delegate("CUDA.getLibrary()")

fun config() {
    packageInfo(
        Module.CUDA,
        "Contains bindings to <a href=\"https://developer.nvidia.com/cuda-zone\">CUDA</a>."
    )
}

val CUdevice = typedef(int, "CUdevice")

val cuuint32_t = typedef(uint32_t, "cuuint32_t")
val cuuint64_t = typedef(uint64_t, "cuuint64_t")

val CUcontext = "CUcontext".handle
val CUmodule = "CUmodule".handle
val CUdeviceptr = "CUdeviceptr".handle
val CUtexref = "CUtexref".handle
val CUsurfref = "CUsurfref".handle
val CUlinkState = "CUlinkState".handle
val CUevent = "CUevent".handle
val CUarray = "CUarray".handle
val CUstream = "CUstream".handle
val CUmipmappedArray = "CUmipmappedArray".handle
val CUgraph = "CUgraph".handle
val CUexternalMemory = "CUexternalMemory".handle
val CUexternalSemaphore = "CUexternalSemaphore".handle
val CUgraphExec = "CUgraphExec".handle
val CUgraphNode = "CUgraphNode".handle
val CUgraphicsResource = "CUgraphicsResource".handle

val CUtexObject = typedef(unsigned_long_long, "CUtexObject")
val CUsurfObject = typedef(unsigned_long_long, "CUsurfObject")

val CUresult = "CUresult".enumType
val CUdevice_attribute = "CUdevice_attribute".enumType
val CUlimit = "CUlimit".enumType
val CUfunc_cache = "CUfunc_cache".enumType
val CUsharedconfig = "CUsharedconfig".enumType
val CUjit_option = "CUjit_option".enumType
val CUfunction = "CUfunction".enumType
val CUjitInputType = "CUjitInputType".enumType
val CUmemorytype = "CUmemorytype".enumType
val CUarray_format = "CUarray_format".enumType
val CUpointer_attribute = "CUpointer_attribute".enumType
val CUmem_advise = "CUmem_advise".enumType
val CUmem_range_attribute = "CUmem_range_attribute".enumType
val CUstreamCaptureStatus = "CUstreamCaptureStatus".enumType
val CUexternalMemoryHandleType = "CUexternalMemoryHandleType".enumType
val CUexternalSemaphoreHandleType = "CUexternalSemaphoreHandleType".enumType
val CUstreamBatchMemOpType = "CUstreamBatchMemOpType".enumType
val CUfunction_attribute = "CUfunction_attribute".enumType
val CUgraphNodeType = "CUgraphNodeType".enumType
val CUaddress_mode = "CUaddress_mode".enumType
val CUfilter_mode = "CUfilter_mode".enumType
val CUresourcetype = "CUresourcetype".enumType
val CUresourceViewFormat = "CUresourceViewFormat".enumType
val CUdevice_P2PAttribute = "CUdevice_P2PAttribute".enumType

/**
 * CUDA stream callback
 * \param hStream The stream the callback was added to, as passed to ::cuStreamAddCallback.  May be NULL.
 * \param status ::CUDA_SUCCESS or any persistent error on the stream.
 * \param userData User parameter provided at registration.
 */
//typedef void (CUDA_CB *CUstreamCallback)(CUstream hStream, CUresult status, void *userData);
val CUstreamCallback = "CUstreamCallback".handle // TODO:

/**
 * CUDA host function
 * \param userData Argument value passed to the function
 */
//typedef void (CUDA_CB *CUhostFn)(void *userData);
val CUhostFn = "CUhostFn".handle

/**
 * Block size to per-block dynamic shared memory mapping for a certain
 * kernel \param blockSize Block size of the kernel.
 *
 * \return The dynamic shared memory needed by a block.
 */
//typedef size_t (CUDA_CB *CUoccupancyB2DSize)(int blockSize);
val CUoccupancyB2DSize = "CUoccupancyB2DSize".handle

val CUuuid = struct(Module.CUDA, "CUUUID", nativeName = "CUuuid", mutable = false) {
    documentation = "CUDA definition of UUID"
    charASCII.array("bytes", "", size = 16)
}

// TODO: replace with refs
const val CU_IPC_HANDLE_SIZE = 64
val CUipcEventHandle = struct(Module.CUDA, "CUIPCEventHandle", nativeName = "CUipcEventHandle") {
    char.array("reserved", "", size = CU_IPC_HANDLE_SIZE)
}

val CUipcMemHandle = struct(Module.CUDA, "CUIPCMemHandle", nativeName = "CUipcMemHandle") {
    char.array("reserved", "", size = CU_IPC_HANDLE_SIZE)
}

val CUDA_MEMCPY2D = struct(Module.CUDA, "CUDA_MEMCPY2D") {
    documentation = "2D memory copy parameters."

    size_t.member("srcXInBytes", "Source X in bytes")
    size_t.member("srcY", "Source Y")
    CUmemorytype.member("srcMemoryType", "Source memory type (host, device, array)")
    void.const.p.member("srcHost", "Source host pointer")
    CUdeviceptr.member("srcDevice", "Source device pointer")
    CUarray.member("srcArray", "Source array reference")
    size_t.member("srcPitch", "Source pitch (ignored when src is array)")
    size_t.member("dstXInBytes", "Destination X in bytes")
    size_t.member("dstY", "Destination Y")
    CUmemorytype.member("dstMemoryType", "Destination memory type (host, device, array)")
    void.p.member("dstHost", "Destination host pointer")
    CUdeviceptr.member("dstDevice", "Destination device pointer")
    CUarray.member("dstArray", "Destination array reference")
    size_t.member("dstPitch", "Destination pitch (ignored when dst is array)")
    size_t.member("WidthInBytes", "Width of 2D memory copy in bytes")
    size_t.member("Height", "Height of 2D memory copy")
}

val CUDA_MEMCPY3D = struct(Module.CUDA, "CUDA_MEMCPY3D") {
    documentation = "3D memory copy parameters."

    size_t.member("srcXInBytes", "Source X in bytes")
    size_t.member("srcY", "Source Y")
    size_t.member("srcZ", "Source Z")
    size_t.member("srcLOD", "Source LOD")
    CUmemorytype.member("srcMemoryType", "Source memory type (host, device, array)")
    void.const.p.member("srcHost", "Source host pointer")
    CUdeviceptr.member("srcDevice", "Source device pointer")
    CUarray.member("srcArray", "Source array reference")
    void.p.member("reserved0", "Must be #NULL")
    size_t.member("srcPitch", "Source pitch (ignored when src is array)")
    size_t.member("srcHeight", "Source height (ignored when src is array; may be 0 if Depth==1)")
    size_t.member("dstXInBytes", "Destination X in bytes")
    size_t.member("dstY", "Destination Y")
    size_t.member("dstZ", "Destination Z")
    size_t.member("dstLOD", "Destination LOD")
    CUmemorytype.member("dstMemoryType", "Destination memory type (host, device, array)")
    void.p.member("dstHost", "Destination host pointer")
    CUdeviceptr.member("dstDevice", "Destination device pointer")
    CUarray.member("dstArray", "Destination array reference")
    void.p.member("reserved1", "Must be NULL")
    size_t.member("dstPitch", "Destination pitch (ignored when dst is array)")
    size_t.member("dstHeight", "Destination height (ignored when dst is array; may be 0 if Depth==1)")
    size_t.member("WidthInBytes", "Width of 3D memory copy in bytes")
    size_t.member("Height", "Height of 3D memory copy")
    size_t.member("Depth", "Depth of 3D memory copy")
}

val CUDA_MEMCPY3D_PEER = struct(Module.CUDA, "CUDA_MEMCPY3D_PEER") {
    documentation = "3D memory cross-context copy parameters."

    size_t.member("srcXInBytes", "Source X in bytes")
    size_t.member("srcY", "Source Y")
    size_t.member("srcZ", "Source Z")
    size_t.member("srcLOD", "Source LOD")
    CUmemorytype.member("srcMemoryType", "Source memory type (host, device, array)")
    void.const.p.member("srcHost", "Source host pointer")
    CUdeviceptr.member("srcDevice", "Source device pointer")
    CUarray.member("srcArray", "Source array reference")
    CUcontext.member("srcContext", "Source context (ignored with srcMemoryType is ::CU_MEMORYTYPE_ARRAY)")
    size_t.member("srcPitch", "Source pitch (ignored when src is array)")
    size_t.member("srcHeight", "Source height (ignored when src is array; may be 0 if Depth==1)")
    size_t.member("dstXInBytes", "Destination X in bytes")
    size_t.member("dstY", "Destination Y")
    size_t.member("dstZ", "Destination Z")
    size_t.member("dstLOD", "Destination LOD")
    CUmemorytype.member("dstMemoryType", "Destination memory type (host, device, array)")
    void.p.member("dstHost", "Destination host pointer")
    CUdeviceptr.member("dstDevice", "Destination device pointer")
    CUarray.member("dstArray", "Destination array reference")
    CUcontext.member("dstContext", "Destination context (ignored with dstMemoryType is ::CU_MEMORYTYPE_ARRAY)")
    size_t.member("dstPitch", "Destination pitch (ignored when dst is array)")
    size_t.member("dstHeight", "Destination height (ignored when dst is array; may be 0 if Depth==1)")
    size_t.member("WidthInBytes", "Width of 3D memory copy in bytes")
    size_t.member("Height", "Height of 3D memory copy")
    size_t.member("Depth", "Depth of 3D memory copy")
}

val CUDA_ARRAY_DESCRIPTOR = struct(Module.CUDA, "CUDA_ARRAY_DESCRIPTOR") {
    documentation = "Array descriptor."

    size_t.member("Width", "Width of array")
    size_t.member("Height", "Height of array")
    CUarray_format.member("Format", "Array format")
    unsigned_int.member("NumChannels", "Channels per array element")
}

val CUDA_ARRAY3D_DESCRIPTOR = struct(Module.CUDA, "CUDA_ARRAY3D_DESCRIPTOR") {
    documentation = "3D array descriptor."

    size_t.member("Width", "Width of 3D array")
    size_t.member("Height", "Height of 3D array")
    size_t.member("Depth", "Depth of 3D array")
    CUarray_format.member("Format", "Array format")
    unsigned_int.member("NumChannels", "Channels per array element")
    unsigned_int.member("Flags", "Flags")
}

val CUDA_EXTERNAL_MEMORY_HANDLE_DESC = struct(Module.CUDA, "CUDA_EXTERNAL_MEMORY_HANDLE_DESC") {
    documentation = "External memory handle descriptor."

    CUexternalMemoryHandleType.member("type", "Type of the handle")
    union("handle", "") {
        int.member("fd", "File descriptor referencing the memory object. Valid when type is ::CU_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD")
        struct(
            "win32",
            """
            Win32 handle referencing the semaphore object. Valid when type is one of the following:
             - ::CU_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32
             - ::CU_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT
             - ::CU_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP
             - ::CU_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE
             Exactly one of 'handle' and 'name' must be non-NULL. If type is ::CU_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT then 'name' must be #NULL.
            """
        ) {
            nullable..opaque_p.member("handle", "Valid NT handle. Must be NULL if 'name' is non-NULL")
            nullable..opaque_const_p.member("name", "Name of a valid memory object. Must be NULL if 'handle' is non-NULL.")
        }
    }
    unsigned_long_long.member("size", "Size of the memory allocation")
    unsigned_int.member("flags", "Flags must either be zero or ::CUDA_EXTERNAL_MEMORY_DEDICATED")
    unsigned_int.array("reserved", "", size = 16)
}

val CUDA_EXTERNAL_MEMORY_BUFFER_DESC = struct(Module.CUDA, "CUDA_EXTERNAL_MEMORY_BUFFER_DESC") {
    documentation = "External memory buffer descriptor."

    unsigned_long_long.member("offset", "Offset into the memory object where the buffer's base is")
    unsigned_long_long.member("size", "Size of the buffer")
    unsigned_int.member("flags", "Flags reserved for future use. Must be zero.")
    unsigned_int.array("reserved", "", size = 16)
}

val CUDA_EXTERNAL_MEMORY_MIPMAPPED_ARRAY_DESC = struct(Module.CUDA, "CUDA_EXTERNAL_MEMORY_MIPMAPPED_ARRAY_DESC") {
    documentation = "External memory mipmap descriptor."

    unsigned_long_long.member("offset", "Offset into the memory object where the base level of the mipmap chain is.")
    CUDA_ARRAY3D_DESCRIPTOR.member("arrayDesc", "Format, dimension and type of base level of the mipmap chain")
    unsigned_int.member("numLevels", "Total number of levels in the mipmap chain")
    unsigned_int.array("reserved", "", size = 16)
}

/**
 * External semaphore handle descriptor
 */
val CUDA_EXTERNAL_SEMAPHORE_HANDLE_DESC = struct(Module.CUDA, "CUDA_EXTERNAL_SEMAPHORE_HANDLE_DESC"){
    /**
     * Type of the handle
     */
    CUexternalSemaphoreHandleType.member("type", "")
    union("handle", "") {
        int.member("fd", "File descriptor referencing the semaphore object. Valid when type is ::CU_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD")
        struct(
            "win32",
            """
            Win32 handle referencing the semaphore object. Valid when type is one of the following:
             - ::CU_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32
             - ::CU_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT
             - ::CU_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE
             Exactly one of 'handle' and 'name' must be non-NULL. If type is ::CU_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT then 'name' must be NULL.
            """
        ) {
            nullable..opaque_p.member("handle", "Valid NT handle. Must be NULL if 'name' is non-NULL")
            nullable..opaque_const_p.member("name", "Name of a valid synchronization primitive. Must be NULL if 'handle' is non-NULL.")
        }
    }
    unsigned_int.member("flags", "Flags reserved for the future. Must be zero.")
    unsigned_int.array("reserved", "", size = 16)
}

val CUDA_EXTERNAL_SEMAPHORE_SIGNAL_PARAMS = struct(Module.CUDA, "CUDA_EXTERNAL_SEMAPHORE_SIGNAL_PARAMS") {
    documentation = "External semaphore signal parameters."

    struct("params", "Parameters for fence objects") {
        struct("fence", "Value of fence to be signaled") {
            unsigned_long_long.member("value", "")
        }
        unsigned_int.array("reserved", "", size = 16)
    }
    unsigned_int.member("flags", "Flags reserved for the future. Must be zero.")
    unsigned_int.array("reserved", "", size = 16)
}

val CUDA_EXTERNAL_SEMAPHORE_WAIT_PARAMS = struct(Module.CUDA, "CUDA_EXTERNAL_SEMAPHORE_WAIT_PARAMS") {
    documentation = "External semaphore wait parameters"

    struct("params", "Parameters for fence objects") {
        struct("fence", "Value of fence to be waited on") {
            unsigned_long_long.member("value", "")
        }
        unsigned_int.array("reserved", "", size = 16)
    }
    unsigned_int.member("flags", "Flags reserved for the future. Must be zero.")
    unsigned_int.array("reserved", "", size = 16)
}

val CUstreamBatchMemOpParams = union(Module.CUDA, "CUstreamBatchMemOpParams") {
    documentation = "Per-operation parameters for ::cuStreamBatchMemOp."

    CUstreamBatchMemOpType.member("operation", "")
    struct("waitValue", "") {
        CUstreamBatchMemOpType.member("operation", "")
        CUdeviceptr.member("address", "")
        union {
            cuuint32_t.member("value", "")
            cuuint64_t.member("value64", "")
        }
        unsigned_int.member("flags", "")
        CUdeviceptr.member("alias", "For driver internal use. Initial value is unimportant.")
    }
    struct("writeValue", "") {
        CUstreamBatchMemOpType.member("operation", "")
        CUdeviceptr.member("address", "")
        union {
            cuuint32_t.member("value", "")
            cuuint64_t.member("value64", "")
        }
        unsigned_int.member("flags", "")
        CUdeviceptr.member("alias", "For driver internal use. Initial value is unimportant.")
    }
    struct("flushRemoteWrites", "") {
        CUstreamBatchMemOpType.member("operation", "")
        unsigned_int.member("flags", "")
    }
    cuuint64_t.array("pad", "", size = 6)
}

val CUDA_LAUNCH_PARAMS = struct(Module.CUDA, "CUDA_LAUNCH_PARAMS") {
    documentation = "Kernel launch parameters."

    CUfunction.member("function", "Kernel to launch")
    unsigned_int.member("gridDimX", "Width of grid in blocks")
    unsigned_int.member("gridDimY", "Height of grid in blocks")
    unsigned_int.member("gridDimZ", "Depth of grid in blocks")
    unsigned_int.member("blockDimX", "X dimension of each thread block")
    unsigned_int.member("blockDimY", "Y dimension of each thread block")
    unsigned_int.member("blockDimZ", "Z dimension of each thread block")
    unsigned_int.member("sharedMemBytes", "Dynamic shared-memory size per thread block in bytes")
    CUstream.member("hStream", "Stream identifier")
    void.p.p.member("kernelParams", "Array of pointers to kernel parameters")
}

val CUDA_KERNEL_NODE_PARAMS = struct(Module.CUDA, "CUDA_KERNEL_NODE_PARAMS") {
    documentation = "GPU kernel node parameter."
    
    CUfunction.member("func", "Kernel to launch")
    unsigned_int.member("gridDimX", "Width of grid in blocks")
    unsigned_int.member("gridDimY", "Height of grid in blocks")
    unsigned_int.member("gridDimZ", "Depth of grid in blocks")
    unsigned_int.member("blockDimX", "X dimension of each thread block")
    unsigned_int.member("blockDimY", "Y dimension of each thread block")
    unsigned_int.member("blockDimZ", "Z dimension of each thread block")
    unsigned_int.member("sharedMemBytes", "Dynamic shared-memory size per thread block in bytes")
    void.p.p.member("kernelParams", "Array of pointers to kernel parameters")
    void.p.p.member("extra", "Extra options")
}

val CUDA_MEMSET_NODE_PARAMS = struct(Module.CUDA, "CUDA_MEMSET_NODE_PARAMS") {
    documentation = "Memset node parameters."
    
    CUdeviceptr.member("dst", "Destination device pointer")
    size_t.member("pitch", "Pitch of destination device pointer. Unused if height is 1")
    unsigned_int.member("value", "Value to be set")
    unsigned_int.member("elementSize", "Size of each element in bytes. Must be 1, 2, or 4.")
    size_t.member("width", "Width in bytes, of the row")
    size_t.member("height", "Number of rows")
}

val CUDA_HOST_NODE_PARAMS = struct(Module.CUDA, "CUDA_HOST_NODE_PARAMS") {
    documentation = "Host node parameters."
    
    CUhostFn.member("fn", "The function to call when the node executes")
    opaque_p.member("userData", "Argument to pass to the function")
}

val CUDA_RESOURCE_DESC = struct(Module.CUDA, "CUDA_RESOURCE_DESC") {
    documentation = "CUDA Resource descriptor."

    CUresourcetype.member("resType", "Resource type")
    union("res", "") {
        struct("array", "") {
            CUarray.member("hArray", "CUDA array")
        }
        struct("mipmap", "") {
            CUmipmappedArray.member("hMipmappedArray", "CUDA mipmapped array")
        }
        struct("linear", "") {
            CUdeviceptr.member("devPtr", "Device pointer")
            CUarray_format.member("format", "Array format")
            unsigned_int.member("numChannels", "Channels per array element")
            size_t.member("sizeInBytes", "Size in bytes")
        }
        struct("pitch2D", "") {
            CUdeviceptr.member("devPtr", "Device pointer")
            CUarray_format.member("format", "Array format")
            unsigned_int.member("numChannels", "Channels per array element")
            size_t.member("width", "Width of the array in elements")
            size_t.member("height", "Height of the array in elements")
            size_t.member("pitchInBytes", "Pitch between two rows in bytes")
        }
        struct("reserved", "") {
            int.array("reserved", "", size = 32)
        }
    }

    unsigned_int.member("flags", "Flags (must be zero)")
}

val CUDA_TEXTURE_DESC = struct(Module.CUDA, "CUDA_TEXTURE_DESC") {
    documentation = "Texture descriptor."

    CUaddress_mode.array("addressMode", "Address modes", size = 3)
    CUfilter_mode.member("filterMode", "Filter mode")
    unsigned_int.member("flags", "Flags")
    unsigned_int.member("maxAnisotropy", "Maximum anisotropy ratio")
    CUfilter_mode.member("mipmapFilterMode", "Mipmap filter mode")
    float.member("mipmapLevelBias", "Mipmap level bias")
    float.member("minMipmapLevelClamp", "Mipmap minimum level clamp")
    float.member("maxMipmapLevelClamp", "Mipmap maximum level clamp")
    float.array("borderColor", "Border Color", size = 4)
    int.array("reserved", "", size = 12)
}

val CUDA_RESOURCE_VIEW_DESC = struct(Module.CUDA, "CUDA_RESOURCE_VIEW_DESC") {
    documentation = "Resource view descriptor."

    CUresourceViewFormat.member("format", "Resource view format")
    size_t.member("width", "Width of the resource view")
    size_t.member("height", "Height of the resource view")
    size_t.member("depth", "Depth of the resource view")
    unsigned_int.member("firstMipmapLevel", "First defined mipmap level")
    unsigned_int.member("lastMipmapLevel", "Last defined mipmap level")
    unsigned_int.member("firstLayer", "First layer index")
    unsigned_int.member("lastLayer", "Last layer index")
    unsigned_int.array("reserved", "", size = 16)
}