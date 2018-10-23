/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
package org.lwjgl.cuda;

import javax.annotation.*;

import java.nio.*;

import org.lwjgl.*;

import org.lwjgl.system.*;

import static org.lwjgl.system.APIUtil.*;
import static org.lwjgl.system.Checks.*;
import static org.lwjgl.system.JNI.*;
import static org.lwjgl.system.MemoryStack.*;
import static org.lwjgl.system.MemoryUtil.*;

/** Contains bindings to <a href="https://developer.nvidia.com/cuda-zone">CUDA</a>. */
public class CUDA {

    protected CUDA() {
        throw new UnsupportedOperationException();
    }

    private static final SharedLibrary CUDA = Library.loadNative(CUDA.class, Configuration.CUDA_LIBRARY_NAME, "nvcuda");

    /** Contains the function pointers loaded from the cuda {@link SharedLibrary}. */
    public static final class Functions {

        private Functions() {}

        /** Function address. */
        public static final long
            GetErrorString                                     = apiGetFunctionAddress(CUDA, "cuGetErrorString"),
            GetErrorName                                       = apiGetFunctionAddress(CUDA, "cuGetErrorName"),
            Init                                               = apiGetFunctionAddress(CUDA, "cuInit"),
            DriverGetVersion                                   = apiGetFunctionAddress(CUDA, "cuDriverGetVersion"),
            DeviceGet                                          = apiGetFunctionAddress(CUDA, "cuDeviceGet"),
            DeviceGetCount                                     = apiGetFunctionAddress(CUDA, "cuDeviceGetCount"),
            DeviceGetName                                      = apiGetFunctionAddress(CUDA, "cuDeviceGetName"),
            DeviceGetUuid                                      = apiGetFunctionAddress(CUDA, "cuDeviceGetUuid"),
            DeviceGetLuid                                      = apiGetFunctionAddress(CUDA, "cuDeviceGetLuid"),
            DeviceTotalMem                                     = apiGetFunctionAddress(CUDA, "cuDeviceTotalMem"),
            DeviceGetAttribute                                 = apiGetFunctionAddress(CUDA, "cuDeviceGetAttribute"),
            DevicePrimaryCtxRetain                             = apiGetFunctionAddress(CUDA, "cuDevicePrimaryCtxRetain"),
            DevicePrimaryCtxRelease                            = apiGetFunctionAddress(CUDA, "cuDevicePrimaryCtxRelease"),
            DevicePrimaryCtxSetFlags                           = apiGetFunctionAddress(CUDA, "cuDevicePrimaryCtxSetFlags"),
            DevicePrimaryCtxGetState                           = apiGetFunctionAddress(CUDA, "cuDevicePrimaryCtxGetState"),
            DevicePrimaryCtxReset                              = apiGetFunctionAddress(CUDA, "cuDevicePrimaryCtxReset"),
            CtxCreate                                          = apiGetFunctionAddress(CUDA, "cuCtxCreate"),
            CtxDestroy                                         = apiGetFunctionAddress(CUDA, "cuCtxDestroy"),
            CtxPushCurrent                                     = apiGetFunctionAddress(CUDA, "cuCtxPushCurrent"),
            CtxPopCurrent                                      = apiGetFunctionAddress(CUDA, "cuCtxPopCurrent"),
            CtxSetCurrent                                      = apiGetFunctionAddress(CUDA, "cuCtxSetCurrent"),
            CtxGetCurrent                                      = apiGetFunctionAddress(CUDA, "cuCtxGetCurrent"),
            CtxGetDevice                                       = apiGetFunctionAddress(CUDA, "cuCtxGetDevice"),
            CtxGetFlags                                        = apiGetFunctionAddress(CUDA, "cuCtxGetFlags"),
            CtxSynchronize                                     = apiGetFunctionAddress(CUDA, "cuCtxSynchronize"),
            CtxSetLimit                                        = apiGetFunctionAddress(CUDA, "cuCtxSetLimit"),
            CtxGetLimit                                        = apiGetFunctionAddress(CUDA, "cuCtxGetLimit"),
            CtxGetCacheConfig                                  = apiGetFunctionAddress(CUDA, "cuCtxGetCacheConfig"),
            CtxSetCacheConfig                                  = apiGetFunctionAddress(CUDA, "cuCtxSetCacheConfig"),
            CtxGetSharedMemConfig                              = apiGetFunctionAddress(CUDA, "cuCtxGetSharedMemConfig"),
            CtxSetSharedMemConfig                              = apiGetFunctionAddress(CUDA, "cuCtxSetSharedMemConfig"),
            CtxGetApiVersion                                   = apiGetFunctionAddress(CUDA, "cuCtxGetApiVersion"),
            CtxGetStreamPriorityRange                          = apiGetFunctionAddress(CUDA, "cuCtxGetStreamPriorityRange"),
            ModuleLoad                                         = apiGetFunctionAddress(CUDA, "cuModuleLoad"),
            ModuleLoadData                                     = apiGetFunctionAddress(CUDA, "cuModuleLoadData"),
            ModuleLoadDataEx                                   = apiGetFunctionAddress(CUDA, "cuModuleLoadDataEx"),
            ModuleLoadFatBinary                                = apiGetFunctionAddress(CUDA, "cuModuleLoadFatBinary"),
            ModuleUnload                                       = apiGetFunctionAddress(CUDA, "cuModuleUnload"),
            ModuleGetFunction                                  = apiGetFunctionAddress(CUDA, "cuModuleGetFunction"),
            ModuleGetGlobal                                    = apiGetFunctionAddress(CUDA, "cuModuleGetGlobal"),
            ModuleGetTexRef                                    = apiGetFunctionAddress(CUDA, "cuModuleGetTexRef"),
            ModuleGetSurfRef                                   = apiGetFunctionAddress(CUDA, "cuModuleGetSurfRef"),
            LinkCreate                                         = apiGetFunctionAddress(CUDA, "cuLinkCreate"),
            LinkAddData                                        = apiGetFunctionAddress(CUDA, "cuLinkAddData"),
            LinkAddFile                                        = apiGetFunctionAddress(CUDA, "cuLinkAddFile"),
            LinkComplete                                       = apiGetFunctionAddress(CUDA, "cuLinkComplete"),
            LinkDestroy                                        = apiGetFunctionAddress(CUDA, "cuLinkDestroy"),
            MemGetInfo                                         = apiGetFunctionAddress(CUDA, "cuMemGetInfo"),
            MemAlloc                                           = apiGetFunctionAddress(CUDA, "cuMemAlloc"),
            MemAllocPitch                                      = apiGetFunctionAddress(CUDA, "cuMemAllocPitch"),
            MemFree                                            = apiGetFunctionAddress(CUDA, "cuMemFree"),
            MemGetAddressRange                                 = apiGetFunctionAddress(CUDA, "cuMemGetAddressRange"),
            MemAllocHost                                       = apiGetFunctionAddress(CUDA, "cuMemAllocHost"),
            MemFreeHost                                        = apiGetFunctionAddress(CUDA, "cuMemFreeHost"),
            MemHostAlloc                                       = apiGetFunctionAddress(CUDA, "cuMemHostAlloc"),
            MemHostGetDevicePointer                            = apiGetFunctionAddress(CUDA, "cuMemHostGetDevicePointer"),
            MemHostGetFlags                                    = apiGetFunctionAddress(CUDA, "cuMemHostGetFlags"),
            MemAllocManaged                                    = apiGetFunctionAddress(CUDA, "cuMemAllocManaged"),
            DeviceGetByPCIBusId                                = apiGetFunctionAddress(CUDA, "cuDeviceGetByPCIBusId"),
            DeviceGetPCIBusId                                  = apiGetFunctionAddress(CUDA, "cuDeviceGetPCIBusId"),
            IpcGetEventHandle                                  = apiGetFunctionAddress(CUDA, "cuIpcGetEventHandle"),
            IpcOpenEventHandle                                 = apiGetFunctionAddress(CUDA, "cuIpcOpenEventHandle"),
            IpcGetMemHandle                                    = apiGetFunctionAddress(CUDA, "cuIpcGetMemHandle"),
            IpcOpenMemHandle                                   = apiGetFunctionAddress(CUDA, "cuIpcOpenMemHandle"),
            IpcCloseMemHandle                                  = apiGetFunctionAddress(CUDA, "cuIpcCloseMemHandle"),
            MemHostRegister                                    = apiGetFunctionAddress(CUDA, "cuMemHostRegister"),
            MemHostUnregister                                  = apiGetFunctionAddress(CUDA, "cuMemHostUnregister"),
            Memcpy                                             = apiGetFunctionAddress(CUDA, "cuMemcpy"),
            MemcpyPeer                                         = apiGetFunctionAddress(CUDA, "cuMemcpyPeer"),
            MemcpyHtoD                                         = apiGetFunctionAddress(CUDA, "cuMemcpyHtoD"),
            MemcpyDtoH                                         = apiGetFunctionAddress(CUDA, "cuMemcpyDtoH"),
            MemcpyDtoD                                         = apiGetFunctionAddress(CUDA, "cuMemcpyDtoD"),
            MemcpyDtoA                                         = apiGetFunctionAddress(CUDA, "cuMemcpyDtoA"),
            MemcpyAtoD                                         = apiGetFunctionAddress(CUDA, "cuMemcpyAtoD"),
            MemcpyHtoA                                         = apiGetFunctionAddress(CUDA, "cuMemcpyHtoA"),
            MemcpyAtoH                                         = apiGetFunctionAddress(CUDA, "cuMemcpyAtoH"),
            MemcpyAtoA                                         = apiGetFunctionAddress(CUDA, "cuMemcpyAtoA"),
            Memcpy2D                                           = apiGetFunctionAddress(CUDA, "cuMemcpy2D"),
            Memcpy2DUnaligned                                  = apiGetFunctionAddress(CUDA, "cuMemcpy2DUnaligned"),
            Memcpy3D                                           = apiGetFunctionAddress(CUDA, "cuMemcpy3D"),
            Memcpy3DPeer                                       = apiGetFunctionAddress(CUDA, "cuMemcpy3DPeer"),
            MemcpyAsync                                        = apiGetFunctionAddress(CUDA, "cuMemcpyAsync"),
            MemcpyPeerAsync                                    = apiGetFunctionAddress(CUDA, "cuMemcpyPeerAsync"),
            MemcpyHtoDAsync                                    = apiGetFunctionAddress(CUDA, "cuMemcpyHtoDAsync"),
            MemcpyDtoHAsync                                    = apiGetFunctionAddress(CUDA, "cuMemcpyDtoHAsync"),
            MemcpyDtoDAsync                                    = apiGetFunctionAddress(CUDA, "cuMemcpyDtoDAsync"),
            MemcpyHtoAAsync                                    = apiGetFunctionAddress(CUDA, "cuMemcpyHtoAAsync"),
            MemcpyAtoHAsync                                    = apiGetFunctionAddress(CUDA, "cuMemcpyAtoHAsync"),
            Memcpy2DAsync                                      = apiGetFunctionAddress(CUDA, "cuMemcpy2DAsync"),
            Memcpy3DAsync                                      = apiGetFunctionAddress(CUDA, "cuMemcpy3DAsync"),
            Memcpy3DPeerAsync                                  = apiGetFunctionAddress(CUDA, "cuMemcpy3DPeerAsync"),
            MemsetD8                                           = apiGetFunctionAddress(CUDA, "cuMemsetD8"),
            MemsetD16                                          = apiGetFunctionAddress(CUDA, "cuMemsetD16"),
            MemsetD32                                          = apiGetFunctionAddress(CUDA, "cuMemsetD32"),
            MemsetD2D8                                         = apiGetFunctionAddress(CUDA, "cuMemsetD2D8"),
            MemsetD2D16                                        = apiGetFunctionAddress(CUDA, "cuMemsetD2D16"),
            MemsetD2D32                                        = apiGetFunctionAddress(CUDA, "cuMemsetD2D32"),
            MemsetD8Async                                      = apiGetFunctionAddress(CUDA, "cuMemsetD8Async"),
            MemsetD16Async                                     = apiGetFunctionAddress(CUDA, "cuMemsetD16Async"),
            MemsetD32Async                                     = apiGetFunctionAddress(CUDA, "cuMemsetD32Async"),
            MemsetD2D8Async                                    = apiGetFunctionAddress(CUDA, "cuMemsetD2D8Async"),
            MemsetD2D16Async                                   = apiGetFunctionAddress(CUDA, "cuMemsetD2D16Async"),
            MemsetD2D32Async                                   = apiGetFunctionAddress(CUDA, "cuMemsetD2D32Async"),
            ArrayCreate                                        = apiGetFunctionAddress(CUDA, "cuArrayCreate"),
            ArrayGetDescriptor                                 = apiGetFunctionAddress(CUDA, "cuArrayGetDescriptor"),
            ArrayDestroy                                       = apiGetFunctionAddress(CUDA, "cuArrayDestroy"),
            Array3DCreate                                      = apiGetFunctionAddress(CUDA, "cuArray3DCreate"),
            Array3DGetDescriptor                               = apiGetFunctionAddress(CUDA, "cuArray3DGetDescriptor"),
            MipmappedArrayCreate                               = apiGetFunctionAddress(CUDA, "cuMipmappedArrayCreate"),
            MipmappedArrayGetLevel                             = apiGetFunctionAddress(CUDA, "cuMipmappedArrayGetLevel"),
            MipmappedArrayDestroy                              = apiGetFunctionAddress(CUDA, "cuMipmappedArrayDestroy"),
            PointerGetAttribute                                = apiGetFunctionAddress(CUDA, "cuPointerGetAttribute"),
            MemPrefetchAsync                                   = apiGetFunctionAddress(CUDA, "cuMemPrefetchAsync"),
            MemAdvise                                          = apiGetFunctionAddress(CUDA, "cuMemAdvise"),
            MemRangeGetAttribute                               = apiGetFunctionAddress(CUDA, "cuMemRangeGetAttribute"),
            MemRangeGetAttributes                              = apiGetFunctionAddress(CUDA, "cuMemRangeGetAttributes"),
            PointerSetAttribute                                = apiGetFunctionAddress(CUDA, "cuPointerSetAttribute"),
            PointerGetAttributes                               = apiGetFunctionAddress(CUDA, "cuPointerGetAttributes"),
            StreamCreate                                       = apiGetFunctionAddress(CUDA, "cuStreamCreate"),
            StreamCreateWithPriority                           = apiGetFunctionAddress(CUDA, "cuStreamCreateWithPriority"),
            StreamGetPriority                                  = apiGetFunctionAddress(CUDA, "cuStreamGetPriority"),
            StreamGetFlags                                     = apiGetFunctionAddress(CUDA, "cuStreamGetFlags"),
            StreamGetCtx                                       = apiGetFunctionAddress(CUDA, "cuStreamGetCtx"),
            StreamWaitEvent                                    = apiGetFunctionAddress(CUDA, "cuStreamWaitEvent"),
            StreamAddCallback                                  = apiGetFunctionAddress(CUDA, "cuStreamAddCallback"),
            StreamBeginCapture                                 = apiGetFunctionAddress(CUDA, "cuStreamBeginCapture"),
            StreamEndCapture                                   = apiGetFunctionAddress(CUDA, "cuStreamEndCapture"),
            StreamIsCapturing                                  = apiGetFunctionAddress(CUDA, "cuStreamIsCapturing"),
            StreamAttachMemAsync                               = apiGetFunctionAddress(CUDA, "cuStreamAttachMemAsync"),
            StreamQuery                                        = apiGetFunctionAddress(CUDA, "cuStreamQuery"),
            StreamSynchronize                                  = apiGetFunctionAddress(CUDA, "cuStreamSynchronize"),
            StreamDestroy                                      = apiGetFunctionAddress(CUDA, "cuStreamDestroy"),
            EventCreate                                        = apiGetFunctionAddress(CUDA, "cuEventCreate"),
            EventRecord                                        = apiGetFunctionAddress(CUDA, "cuEventRecord"),
            EventQuery                                         = apiGetFunctionAddress(CUDA, "cuEventQuery"),
            EventSynchronize                                   = apiGetFunctionAddress(CUDA, "cuEventSynchronize"),
            EventDestroy                                       = apiGetFunctionAddress(CUDA, "cuEventDestroy"),
            EventElapsedTime                                   = apiGetFunctionAddress(CUDA, "cuEventElapsedTime"),
            ImportExternalMemory                               = apiGetFunctionAddress(CUDA, "cuImportExternalMemory"),
            ExternalMemoryGetMappedBuffer                      = apiGetFunctionAddress(CUDA, "cuExternalMemoryGetMappedBuffer"),
            ExternalMemoryGetMappedMipmappedArray              = apiGetFunctionAddress(CUDA, "cuExternalMemoryGetMappedMipmappedArray"),
            DestroyExternalMemory                              = apiGetFunctionAddress(CUDA, "cuDestroyExternalMemory"),
            ImportExternalSemaphore                            = apiGetFunctionAddress(CUDA, "cuImportExternalSemaphore"),
            SignalExternalSemaphoresAsync                      = apiGetFunctionAddress(CUDA, "cuSignalExternalSemaphoresAsync"),
            WaitExternalSemaphoresAsync                        = apiGetFunctionAddress(CUDA, "cuWaitExternalSemaphoresAsync"),
            DestroyExternalSemaphore                           = apiGetFunctionAddress(CUDA, "cuDestroyExternalSemaphore"),
            StreamWaitValue32                                  = apiGetFunctionAddress(CUDA, "cuStreamWaitValue32"),
            StreamWaitValue64                                  = apiGetFunctionAddress(CUDA, "cuStreamWaitValue64"),
            StreamWriteValue32                                 = apiGetFunctionAddress(CUDA, "cuStreamWriteValue32"),
            StreamWriteValue64                                 = apiGetFunctionAddress(CUDA, "cuStreamWriteValue64"),
            StreamBatchMemOp                                   = apiGetFunctionAddress(CUDA, "cuStreamBatchMemOp"),
            FuncGetAttribute                                   = apiGetFunctionAddress(CUDA, "cuFuncGetAttribute"),
            FuncSetAttribute                                   = apiGetFunctionAddress(CUDA, "cuFuncSetAttribute"),
            FuncSetCacheConfig                                 = apiGetFunctionAddress(CUDA, "cuFuncSetCacheConfig"),
            FuncSetSharedMemConfig                             = apiGetFunctionAddress(CUDA, "cuFuncSetSharedMemConfig"),
            LaunchKernel                                       = apiGetFunctionAddress(CUDA, "cuLaunchKernel"),
            LaunchCooperativeKernel                            = apiGetFunctionAddress(CUDA, "cuLaunchCooperativeKernel"),
            LaunchCooperativeKernelMultiDevice                 = apiGetFunctionAddress(CUDA, "cuLaunchCooperativeKernelMultiDevice"),
            LaunchHostFunc                                     = apiGetFunctionAddress(CUDA, "cuLaunchHostFunc"),
            GraphCreate                                        = apiGetFunctionAddress(CUDA, "cuGraphCreate"),
            GraphAddKernelNode                                 = apiGetFunctionAddress(CUDA, "cuGraphAddKernelNode"),
            GraphKernelNodeGetParams                           = apiGetFunctionAddress(CUDA, "cuGraphKernelNodeGetParams"),
            GraphKernelNodeSetParams                           = apiGetFunctionAddress(CUDA, "cuGraphKernelNodeSetParams"),
            GraphAddMemcpyNode                                 = apiGetFunctionAddress(CUDA, "cuGraphAddMemcpyNode"),
            GraphMemcpyNodeGetParams                           = apiGetFunctionAddress(CUDA, "cuGraphMemcpyNodeGetParams"),
            GraphMemcpyNodeSetParams                           = apiGetFunctionAddress(CUDA, "cuGraphMemcpyNodeSetParams"),
            GraphAddMemsetNode                                 = apiGetFunctionAddress(CUDA, "cuGraphAddMemsetNode"),
            GraphMemsetNodeGetParams                           = apiGetFunctionAddress(CUDA, "cuGraphMemsetNodeGetParams"),
            GraphMemsetNodeSetParams                           = apiGetFunctionAddress(CUDA, "cuGraphMemsetNodeSetParams"),
            GraphAddHostNode                                   = apiGetFunctionAddress(CUDA, "cuGraphAddHostNode"),
            GraphHostNodeGetParams                             = apiGetFunctionAddress(CUDA, "cuGraphHostNodeGetParams"),
            GraphHostNodeSetParams                             = apiGetFunctionAddress(CUDA, "cuGraphHostNodeSetParams"),
            GraphAddChildGraphNode                             = apiGetFunctionAddress(CUDA, "cuGraphAddChildGraphNode"),
            GraphChildGraphNodeGetGraph                        = apiGetFunctionAddress(CUDA, "cuGraphChildGraphNodeGetGraph"),
            GraphAddEmptyNode                                  = apiGetFunctionAddress(CUDA, "cuGraphAddEmptyNode"),
            GraphClone                                         = apiGetFunctionAddress(CUDA, "cuGraphClone"),
            GraphNodeFindInClone                               = apiGetFunctionAddress(CUDA, "cuGraphNodeFindInClone"),
            GraphNodeGetType                                   = apiGetFunctionAddress(CUDA, "cuGraphNodeGetType"),
            GraphGetNodes                                      = apiGetFunctionAddress(CUDA, "cuGraphGetNodes"),
            GraphGetRootNodes                                  = apiGetFunctionAddress(CUDA, "cuGraphGetRootNodes"),
            GraphGetEdges                                      = apiGetFunctionAddress(CUDA, "cuGraphGetEdges"),
            GraphNodeGetDependencies                           = apiGetFunctionAddress(CUDA, "cuGraphNodeGetDependencies"),
            GraphNodeGetDependentNodes                         = apiGetFunctionAddress(CUDA, "cuGraphNodeGetDependentNodes"),
            GraphAddDependencies                               = apiGetFunctionAddress(CUDA, "cuGraphAddDependencies"),
            GraphRemoveDependencies                            = apiGetFunctionAddress(CUDA, "cuGraphRemoveDependencies"),
            GraphDestroyNode                                   = apiGetFunctionAddress(CUDA, "cuGraphDestroyNode"),
            GraphInstantiate                                   = apiGetFunctionAddress(CUDA, "cuGraphInstantiate"),
            GraphLaunch                                        = apiGetFunctionAddress(CUDA, "cuGraphLaunch"),
            GraphExecDestroy                                   = apiGetFunctionAddress(CUDA, "cuGraphExecDestroy"),
            GraphDestroy                                       = apiGetFunctionAddress(CUDA, "cuGraphDestroy"),
            OccupancyMaxActiveBlocksPerMultiprocessor          = apiGetFunctionAddress(CUDA, "cuOccupancyMaxActiveBlocksPerMultiprocessor"),
            OccupancyMaxActiveBlocksPerMultiprocessorWithFlags = apiGetFunctionAddress(CUDA, "cuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags"),
            OccupancyMaxPotentialBlockSize                     = apiGetFunctionAddress(CUDA, "cuOccupancyMaxPotentialBlockSize"),
            OccupancyMaxPotentialBlockSizeWithFlags            = apiGetFunctionAddress(CUDA, "cuOccupancyMaxPotentialBlockSizeWithFlags"),
            TexRefSetArray                                     = apiGetFunctionAddress(CUDA, "cuTexRefSetArray"),
            TexRefSetMipmappedArray                            = apiGetFunctionAddress(CUDA, "cuTexRefSetMipmappedArray"),
            TexRefSetAddress                                   = apiGetFunctionAddress(CUDA, "cuTexRefSetAddress"),
            TexRefSetAddress2D                                 = apiGetFunctionAddress(CUDA, "cuTexRefSetAddress2D"),
            TexRefSetFormat                                    = apiGetFunctionAddress(CUDA, "cuTexRefSetFormat"),
            TexRefSetAddressMode                               = apiGetFunctionAddress(CUDA, "cuTexRefSetAddressMode"),
            TexRefSetFilterMode                                = apiGetFunctionAddress(CUDA, "cuTexRefSetFilterMode"),
            TexRefSetMipmapFilterMode                          = apiGetFunctionAddress(CUDA, "cuTexRefSetMipmapFilterMode"),
            TexRefSetMipmapLevelBias                           = apiGetFunctionAddress(CUDA, "cuTexRefSetMipmapLevelBias"),
            TexRefSetMipmapLevelClamp                          = apiGetFunctionAddress(CUDA, "cuTexRefSetMipmapLevelClamp"),
            TexRefSetMaxAnisotropy                             = apiGetFunctionAddress(CUDA, "cuTexRefSetMaxAnisotropy"),
            TexRefSetBorderColor                               = apiGetFunctionAddress(CUDA, "cuTexRefSetBorderColor"),
            TexRefSetFlags                                     = apiGetFunctionAddress(CUDA, "cuTexRefSetFlags"),
            TexRefGetAddress                                   = apiGetFunctionAddress(CUDA, "cuTexRefGetAddress"),
            TexRefGetArray                                     = apiGetFunctionAddress(CUDA, "cuTexRefGetArray"),
            TexRefGetMipmappedArray                            = apiGetFunctionAddress(CUDA, "cuTexRefGetMipmappedArray"),
            TexRefGetAddressMode                               = apiGetFunctionAddress(CUDA, "cuTexRefGetAddressMode"),
            TexRefGetFilterMode                                = apiGetFunctionAddress(CUDA, "cuTexRefGetFilterMode"),
            TexRefGetFormat                                    = apiGetFunctionAddress(CUDA, "cuTexRefGetFormat"),
            TexRefGetMipmapFilterMode                          = apiGetFunctionAddress(CUDA, "cuTexRefGetMipmapFilterMode"),
            TexRefGetMipmapLevelBias                           = apiGetFunctionAddress(CUDA, "cuTexRefGetMipmapLevelBias"),
            TexRefGetMipmapLevelClamp                          = apiGetFunctionAddress(CUDA, "cuTexRefGetMipmapLevelClamp"),
            TexRefGetMaxAnisotropy                             = apiGetFunctionAddress(CUDA, "cuTexRefGetMaxAnisotropy"),
            TexRefGetBorderColor                               = apiGetFunctionAddress(CUDA, "cuTexRefGetBorderColor"),
            TexRefGetFlags                                     = apiGetFunctionAddress(CUDA, "cuTexRefGetFlags"),
            SurfRefSetArray                                    = apiGetFunctionAddress(CUDA, "cuSurfRefSetArray"),
            SurfRefGetArray                                    = apiGetFunctionAddress(CUDA, "cuSurfRefGetArray"),
            TexObjectCreate                                    = apiGetFunctionAddress(CUDA, "cuTexObjectCreate"),
            TexObjectDestroy                                   = apiGetFunctionAddress(CUDA, "cuTexObjectDestroy"),
            TexObjectGetResourceDesc                           = apiGetFunctionAddress(CUDA, "cuTexObjectGetResourceDesc"),
            TexObjectGetTextureDesc                            = apiGetFunctionAddress(CUDA, "cuTexObjectGetTextureDesc"),
            TexObjectGetResourceViewDesc                       = apiGetFunctionAddress(CUDA, "cuTexObjectGetResourceViewDesc"),
            SurfObjectCreate                                   = apiGetFunctionAddress(CUDA, "cuSurfObjectCreate"),
            SurfObjectDestroy                                  = apiGetFunctionAddress(CUDA, "cuSurfObjectDestroy"),
            SurfObjectGetResourceDesc                          = apiGetFunctionAddress(CUDA, "cuSurfObjectGetResourceDesc"),
            DeviceCanAccessPeer                                = apiGetFunctionAddress(CUDA, "cuDeviceCanAccessPeer"),
            CtxEnablePeerAccess                                = apiGetFunctionAddress(CUDA, "cuCtxEnablePeerAccess"),
            CtxDisablePeerAccess                               = apiGetFunctionAddress(CUDA, "cuCtxDisablePeerAccess"),
            DeviceGetP2PAttribute                              = apiGetFunctionAddress(CUDA, "cuDeviceGetP2PAttribute"),
            GraphicsUnregisterResource                         = apiGetFunctionAddress(CUDA, "cuGraphicsUnregisterResource"),
            GraphicsSubResourceGetMappedArray                  = apiGetFunctionAddress(CUDA, "cuGraphicsSubResourceGetMappedArray"),
            GraphicsResourceGetMappedMipmappedArray            = apiGetFunctionAddress(CUDA, "cuGraphicsResourceGetMappedMipmappedArray"),
            GraphicsResourceGetMappedPointer                   = apiGetFunctionAddress(CUDA, "cuGraphicsResourceGetMappedPointer"),
            GraphicsResourceSetMapFlags                        = apiGetFunctionAddress(CUDA, "cuGraphicsResourceSetMapFlags"),
            GraphicsMapResources                               = apiGetFunctionAddress(CUDA, "cuGraphicsMapResources"),
            GraphicsUnmapResources                             = apiGetFunctionAddress(CUDA, "cuGraphicsUnmapResources"),
            GetExportTable                                     = apiGetFunctionAddress(CUDA, "cuGetExportTable");

    }

    /** Returns the cuda {@link SharedLibrary}. */
    public static SharedLibrary getLibrary() {
        return CUDA;
    }

    // --- [ cuGetErrorString ] ---

    public static int ncuGetErrorString(int error, long pStr) {
        long __functionAddress = Functions.GetErrorString;
        return invokePI(__functionAddress, error, pStr);
    }

    @NativeType("CUresult")
    public static int cuGetErrorString(@NativeType("CUresult") int error, @NativeType("char const **") PointerBuffer pStr) {
        if (CHECKS) {
            check(pStr, 1);
        }
        return ncuGetErrorString(error, memAddress(pStr));
    }

    // --- [ cuGetErrorName ] ---

    public static int ncuGetErrorName(int error, long pStr) {
        long __functionAddress = Functions.GetErrorName;
        return invokePI(__functionAddress, error, pStr);
    }

    @NativeType("CUresult")
    public static int cuGetErrorName(@NativeType("CUresult") int error, @NativeType("char const **") PointerBuffer pStr) {
        if (CHECKS) {
            check(pStr, 1);
        }
        return ncuGetErrorName(error, memAddress(pStr));
    }

    // --- [ cuInit ] ---

    @NativeType("CUresult")
    public static int cuInit(@NativeType("unsigned int") int Flags) {
        long __functionAddress = Functions.Init;
        return invokeI(__functionAddress, Flags);
    }

    // --- [ cuDriverGetVersion ] ---

    public static int ncuDriverGetVersion(long driverVersion) {
        long __functionAddress = Functions.DriverGetVersion;
        return invokePI(__functionAddress, driverVersion);
    }

    @NativeType("CUresult")
    public static int cuDriverGetVersion(@NativeType("int *") IntBuffer driverVersion) {
        if (CHECKS) {
            check(driverVersion, 1);
        }
        return ncuDriverGetVersion(memAddress(driverVersion));
    }

    // --- [ cuDeviceGet ] ---

    public static int ncuDeviceGet(long device, int ordinal) {
        long __functionAddress = Functions.DeviceGet;
        return invokePI(__functionAddress, device, ordinal);
    }

    @NativeType("CUresult")
    public static int cuDeviceGet(@NativeType("CUdevice *") IntBuffer device, int ordinal) {
        if (CHECKS) {
            check(device, 1);
        }
        return ncuDeviceGet(memAddress(device), ordinal);
    }

    // --- [ cuDeviceGetCount ] ---

    public static int ncuDeviceGetCount(long count) {
        long __functionAddress = Functions.DeviceGetCount;
        return invokePI(__functionAddress, count);
    }

    @NativeType("CUresult")
    public static int cuDeviceGetCount(@NativeType("int *") IntBuffer count) {
        if (CHECKS) {
            check(count, 1);
        }
        return ncuDeviceGetCount(memAddress(count));
    }

    // --- [ cuDeviceGetName ] ---

    public static int ncuDeviceGetName(long name, int len, int dev) {
        long __functionAddress = Functions.DeviceGetName;
        return invokePI(__functionAddress, name, len, dev);
    }

    @NativeType("CUresult")
    public static int cuDeviceGetName(@NativeType("char *") ByteBuffer name, @NativeType("CUdevice") int dev) {
        return ncuDeviceGetName(memAddress(name), name.remaining(), dev);
    }

    // --- [ cuDeviceGetUuid ] ---

    public static int ncuDeviceGetUuid(long uuid, int dev) {
        long __functionAddress = Functions.DeviceGetUuid;
        return invokePI(__functionAddress, uuid, dev);
    }

    @NativeType("CUresult")
    public static int cuDeviceGetUuid(@NativeType("CUuuid *") CUUUID uuid, @NativeType("CUdevice") int dev) {
        return ncuDeviceGetUuid(uuid.address(), dev);
    }

    // --- [ cuDeviceGetLuid ] ---

    public static int ncuDeviceGetLuid(long luid, long deviceNodeMask, int dev) {
        long __functionAddress = Functions.DeviceGetLuid;
        return invokePPI(__functionAddress, luid, deviceNodeMask, dev);
    }

    @NativeType("CUresult")
    public static int cuDeviceGetLuid(@NativeType("char *") ByteBuffer luid, @NativeType("unsigned int *") IntBuffer deviceNodeMask, @NativeType("CUdevice") int dev) {
        if (CHECKS) {
            check(luid, 8);
            check(deviceNodeMask, 1);
        }
        return ncuDeviceGetLuid(memAddress(luid), memAddress(deviceNodeMask), dev);
    }

    // --- [ cuDeviceTotalMem ] ---

    public static int ncuDeviceTotalMem(long bytes, int dev) {
        long __functionAddress = Functions.DeviceTotalMem;
        return invokePI(__functionAddress, bytes, dev);
    }

    @NativeType("CUresult")
    public static int cuDeviceTotalMem(@NativeType("size_t *") PointerBuffer bytes, @NativeType("CUdevice") int dev) {
        if (CHECKS) {
            check(bytes, 1);
        }
        return ncuDeviceTotalMem(memAddress(bytes), dev);
    }

    // --- [ cuDeviceGetAttribute ] ---

    public static int ncuDeviceGetAttribute(long pi, int attrib, int dev) {
        long __functionAddress = Functions.DeviceGetAttribute;
        return invokePI(__functionAddress, pi, attrib, dev);
    }

    @NativeType("CUresult")
    public static int cuDeviceGetAttribute(@NativeType("int *") IntBuffer pi, @NativeType("CUdevice_attribute") int attrib, @NativeType("CUdevice") int dev) {
        if (CHECKS) {
            check(pi, 1);
        }
        return ncuDeviceGetAttribute(memAddress(pi), attrib, dev);
    }

    // --- [ cuDevicePrimaryCtxRetain ] ---

    public static int ncuDevicePrimaryCtxRetain(long pctx, int dev) {
        long __functionAddress = Functions.DevicePrimaryCtxRetain;
        return invokePI(__functionAddress, pctx, dev);
    }

    @NativeType("CUresult")
    public static int cuDevicePrimaryCtxRetain(@NativeType("CUcontext *") PointerBuffer pctx, @NativeType("CUdevice") int dev) {
        if (CHECKS) {
            check(pctx, 1);
        }
        return ncuDevicePrimaryCtxRetain(memAddress(pctx), dev);
    }

    // --- [ cuDevicePrimaryCtxRelease ] ---

    @NativeType("CUresult")
    public static int cuDevicePrimaryCtxRelease(@NativeType("CUdevice") int dev) {
        long __functionAddress = Functions.DevicePrimaryCtxRelease;
        return invokeI(__functionAddress, dev);
    }

    // --- [ cuDevicePrimaryCtxSetFlags ] ---

    @NativeType("CUresult")
    public static int cuDevicePrimaryCtxSetFlags(@NativeType("CUdevice") int dev, @NativeType("unsigned int") int flags) {
        long __functionAddress = Functions.DevicePrimaryCtxSetFlags;
        return invokeI(__functionAddress, dev, flags);
    }

    // --- [ cuDevicePrimaryCtxGetState ] ---

    public static int ncuDevicePrimaryCtxGetState(int dev, long flags, long active) {
        long __functionAddress = Functions.DevicePrimaryCtxGetState;
        return invokePPI(__functionAddress, dev, flags, active);
    }

    @NativeType("CUresult")
    public static int cuDevicePrimaryCtxGetState(@NativeType("CUdevice") int dev, @NativeType("unsigned int *") IntBuffer flags, @NativeType("int *") IntBuffer active) {
        if (CHECKS) {
            check(flags, 1);
            check(active, 1);
        }
        return ncuDevicePrimaryCtxGetState(dev, memAddress(flags), memAddress(active));
    }

    // --- [ cuDevicePrimaryCtxReset ] ---

    @NativeType("CUresult")
    public static int cuDevicePrimaryCtxReset(@NativeType("CUdevice") int dev) {
        long __functionAddress = Functions.DevicePrimaryCtxReset;
        return invokeI(__functionAddress, dev);
    }

    // --- [ cuCtxCreate ] ---

    public static int ncuCtxCreate(long pctx, int flags, int dev) {
        long __functionAddress = Functions.CtxCreate;
        return invokePI(__functionAddress, pctx, flags, dev);
    }

    @NativeType("CUresult")
    public static int cuCtxCreate(@NativeType("CUcontext *") PointerBuffer pctx, @NativeType("unsigned int") int flags, @NativeType("CUdevice") int dev) {
        if (CHECKS) {
            check(pctx, 1);
        }
        return ncuCtxCreate(memAddress(pctx), flags, dev);
    }

    // --- [ cuCtxDestroy ] ---

    @NativeType("CUresult")
    public static int cuCtxDestroy(@NativeType("CUcontext") long ctx) {
        long __functionAddress = Functions.CtxDestroy;
        if (CHECKS) {
            check(ctx);
        }
        return invokePI(__functionAddress, ctx);
    }

    // --- [ cuCtxPushCurrent ] ---

    @NativeType("CUresult")
    public static int cuCtxPushCurrent(@NativeType("CUcontext") long ctx) {
        long __functionAddress = Functions.CtxPushCurrent;
        if (CHECKS) {
            check(ctx);
        }
        return invokePI(__functionAddress, ctx);
    }

    // --- [ cuCtxPopCurrent ] ---

    public static int ncuCtxPopCurrent(long pctx) {
        long __functionAddress = Functions.CtxPopCurrent;
        return invokePI(__functionAddress, pctx);
    }

    @NativeType("CUresult")
    public static int cuCtxPopCurrent(@NativeType("CUcontext *") PointerBuffer pctx) {
        if (CHECKS) {
            check(pctx, 1);
        }
        return ncuCtxPopCurrent(memAddress(pctx));
    }

    // --- [ cuCtxSetCurrent ] ---

    @NativeType("CUresult")
    public static int cuCtxSetCurrent(@NativeType("CUcontext") long ctx) {
        long __functionAddress = Functions.CtxSetCurrent;
        if (CHECKS) {
            check(ctx);
        }
        return invokePI(__functionAddress, ctx);
    }

    // --- [ cuCtxGetCurrent ] ---

    public static int ncuCtxGetCurrent(long pctx) {
        long __functionAddress = Functions.CtxGetCurrent;
        return invokePI(__functionAddress, pctx);
    }

    @NativeType("CUresult")
    public static int cuCtxGetCurrent(@NativeType("CUcontext *") PointerBuffer pctx) {
        if (CHECKS) {
            check(pctx, 1);
        }
        return ncuCtxGetCurrent(memAddress(pctx));
    }

    // --- [ cuCtxGetDevice ] ---

    public static int ncuCtxGetDevice(long device) {
        long __functionAddress = Functions.CtxGetDevice;
        return invokePI(__functionAddress, device);
    }

    @NativeType("CUresult")
    public static int cuCtxGetDevice(@NativeType("CUdevice *") IntBuffer device) {
        if (CHECKS) {
            check(device, 1);
        }
        return ncuCtxGetDevice(memAddress(device));
    }

    // --- [ cuCtxGetFlags ] ---

    public static int ncuCtxGetFlags(long flags) {
        long __functionAddress = Functions.CtxGetFlags;
        return invokePI(__functionAddress, flags);
    }

    @NativeType("CUresult")
    public static int cuCtxGetFlags(@NativeType("unsigned int *") IntBuffer flags) {
        if (CHECKS) {
            check(flags, 1);
        }
        return ncuCtxGetFlags(memAddress(flags));
    }

    // --- [ cuCtxSynchronize ] ---

    @NativeType("CUresult")
    public static int cuCtxSynchronize() {
        long __functionAddress = Functions.CtxSynchronize;
        return invokeI(__functionAddress);
    }

    // --- [ cuCtxSetLimit ] ---

    @NativeType("CUresult")
    public static int cuCtxSetLimit(@NativeType("CUlimit") int limit, @NativeType("size_t") long value) {
        long __functionAddress = Functions.CtxSetLimit;
        return invokePI(__functionAddress, limit, value);
    }

    // --- [ cuCtxGetLimit ] ---

    public static int ncuCtxGetLimit(long pvalue, int limit) {
        long __functionAddress = Functions.CtxGetLimit;
        return invokePI(__functionAddress, pvalue, limit);
    }

    @NativeType("CUresult")
    public static int cuCtxGetLimit(@NativeType("size_t *") PointerBuffer pvalue, @NativeType("CUlimit") int limit) {
        if (CHECKS) {
            check(pvalue, 1);
        }
        return ncuCtxGetLimit(memAddress(pvalue), limit);
    }

    // --- [ cuCtxGetCacheConfig ] ---

    public static int ncuCtxGetCacheConfig(long pconfig) {
        long __functionAddress = Functions.CtxGetCacheConfig;
        return invokePI(__functionAddress, pconfig);
    }

    @NativeType("CUresult")
    public static int cuCtxGetCacheConfig(@NativeType("CUfunc_cache *") IntBuffer pconfig) {
        if (CHECKS) {
            check(pconfig, 1);
        }
        return ncuCtxGetCacheConfig(memAddress(pconfig));
    }

    // --- [ cuCtxSetCacheConfig ] ---

    @NativeType("CUresult")
    public static int cuCtxSetCacheConfig(@NativeType("CUfunc_cache") int config) {
        long __functionAddress = Functions.CtxSetCacheConfig;
        return invokeI(__functionAddress, config);
    }

    // --- [ cuCtxGetSharedMemConfig ] ---

    public static int ncuCtxGetSharedMemConfig(long pConfig) {
        long __functionAddress = Functions.CtxGetSharedMemConfig;
        return invokePI(__functionAddress, pConfig);
    }

    @NativeType("CUresult")
    public static int cuCtxGetSharedMemConfig(@NativeType("CUsharedconfig *") IntBuffer pConfig) {
        if (CHECKS) {
            check(pConfig, 1);
        }
        return ncuCtxGetSharedMemConfig(memAddress(pConfig));
    }

    // --- [ cuCtxSetSharedMemConfig ] ---

    @NativeType("CUresult")
    public static int cuCtxSetSharedMemConfig(@NativeType("CUsharedconfig") int config) {
        long __functionAddress = Functions.CtxSetSharedMemConfig;
        return invokeI(__functionAddress, config);
    }

    // --- [ cuCtxGetApiVersion ] ---

    public static int ncuCtxGetApiVersion(long ctx, long version) {
        long __functionAddress = Functions.CtxGetApiVersion;
        return invokePPI(__functionAddress, ctx, version);
    }

    @NativeType("CUresult")
    public static int cuCtxGetApiVersion(@NativeType("CUcontext") long ctx, @NativeType("unsigned int *") IntBuffer version) {
        if (CHECKS) {
            check(version, 1);
        }
        return ncuCtxGetApiVersion(ctx, memAddress(version));
    }

    // --- [ cuCtxGetStreamPriorityRange ] ---

    public static int ncuCtxGetStreamPriorityRange(long leastPriority, long greatestPriority) {
        long __functionAddress = Functions.CtxGetStreamPriorityRange;
        return invokePPI(__functionAddress, leastPriority, greatestPriority);
    }

    @NativeType("CUresult")
    public static int cuCtxGetStreamPriorityRange(@NativeType("int *") IntBuffer leastPriority, @NativeType("int *") IntBuffer greatestPriority) {
        if (CHECKS) {
            check(leastPriority, 1);
            check(greatestPriority, 1);
        }
        return ncuCtxGetStreamPriorityRange(memAddress(leastPriority), memAddress(greatestPriority));
    }

    // --- [ cuModuleLoad ] ---

    public static int ncuModuleLoad(long module, long fname) {
        long __functionAddress = Functions.ModuleLoad;
        return invokePPI(__functionAddress, module, fname);
    }

    @NativeType("CUresult")
    public static int cuModuleLoad(@NativeType("CUmodule *") PointerBuffer module, @NativeType("char const *") ByteBuffer fname) {
        if (CHECKS) {
            check(module, 1);
            checkNT1(fname);
        }
        return ncuModuleLoad(memAddress(module), memAddress(fname));
    }

    @NativeType("CUresult")
    public static int cuModuleLoad(@NativeType("CUmodule *") PointerBuffer module, @NativeType("char const *") CharSequence fname) {
        if (CHECKS) {
            check(module, 1);
        }
        MemoryStack stack = stackGet(); int stackPointer = stack.getPointer();
        try {
            ByteBuffer fnameEncoded = stack.ASCII(fname);
            return ncuModuleLoad(memAddress(module), memAddress(fnameEncoded));
        } finally {
            stack.setPointer(stackPointer);
        }
    }

    // --- [ cuModuleLoadData ] ---

    public static int ncuModuleLoadData(long module, long image) {
        long __functionAddress = Functions.ModuleLoadData;
        return invokePPI(__functionAddress, module, image);
    }

    @NativeType("CUresult")
    public static int cuModuleLoadData(@NativeType("CUmodule *") PointerBuffer module, @NativeType("void const *") ByteBuffer image) {
        if (CHECKS) {
            check(module, 1);
        }
        return ncuModuleLoadData(memAddress(module), memAddress(image));
    }

    // --- [ cuModuleLoadDataEx ] ---

    public static int ncuModuleLoadDataEx(long module, long image, int numOptions, long options, long optionValues) {
        long __functionAddress = Functions.ModuleLoadDataEx;
        return invokePPPPI(__functionAddress, module, image, numOptions, options, optionValues);
    }

    @NativeType("CUresult")
    public static int cuModuleLoadDataEx(@NativeType("CUmodule *") PointerBuffer module, @NativeType("void const *") ByteBuffer image, @Nullable @NativeType("CUjit_option *") IntBuffer options, @Nullable @NativeType("void **") PointerBuffer optionValues) {
        if (CHECKS) {
            check(module, 1);
            checkSafe(optionValues, remainingSafe(options));
        }
        return ncuModuleLoadDataEx(memAddress(module), memAddress(image), remainingSafe(options), memAddressSafe(options), memAddressSafe(optionValues));
    }

    // --- [ cuModuleLoadFatBinary ] ---

    public static int ncuModuleLoadFatBinary(long module, long fatCubin) {
        long __functionAddress = Functions.ModuleLoadFatBinary;
        return invokePPI(__functionAddress, module, fatCubin);
    }

    @NativeType("CUresult")
    public static int cuModuleLoadFatBinary(@NativeType("CUmodule *") PointerBuffer module, @NativeType("void const *") ByteBuffer fatCubin) {
        if (CHECKS) {
            check(module, 1);
        }
        return ncuModuleLoadFatBinary(memAddress(module), memAddress(fatCubin));
    }

    // --- [ cuModuleUnload ] ---

    @NativeType("CUresult")
    public static int cuModuleUnload(@NativeType("CUmodule") long hmod) {
        long __functionAddress = Functions.ModuleUnload;
        if (CHECKS) {
            check(hmod);
        }
        return invokePI(__functionAddress, hmod);
    }

    // --- [ cuModuleGetFunction ] ---

    public static int ncuModuleGetFunction(long hfunc, long hmod, long name) {
        long __functionAddress = Functions.ModuleGetFunction;
        if (CHECKS) {
            check(hmod);
        }
        return invokePPPI(__functionAddress, hfunc, hmod, name);
    }

    @NativeType("CUresult")
    public static int cuModuleGetFunction(@NativeType("CUfunction *") IntBuffer hfunc, @NativeType("CUmodule") long hmod, @NativeType("char const *") ByteBuffer name) {
        if (CHECKS) {
            check(hfunc, 1);
            checkNT1(name);
        }
        return ncuModuleGetFunction(memAddress(hfunc), hmod, memAddress(name));
    }

    @NativeType("CUresult")
    public static int cuModuleGetFunction(@NativeType("CUfunction *") IntBuffer hfunc, @NativeType("CUmodule") long hmod, @NativeType("char const *") CharSequence name) {
        if (CHECKS) {
            check(hfunc, 1);
        }
        MemoryStack stack = stackGet(); int stackPointer = stack.getPointer();
        try {
            ByteBuffer nameEncoded = stack.ASCII(name);
            return ncuModuleGetFunction(memAddress(hfunc), hmod, memAddress(nameEncoded));
        } finally {
            stack.setPointer(stackPointer);
        }
    }

    // --- [ cuModuleGetGlobal ] ---

    public static int ncuModuleGetGlobal(long dptr, long bytes, long hmod, long name) {
        long __functionAddress = Functions.ModuleGetGlobal;
        if (CHECKS) {
            check(hmod);
        }
        return invokePPPPI(__functionAddress, dptr, bytes, hmod, name);
    }

    @NativeType("CUresult")
    public static int cuModuleGetGlobal(@NativeType("CUdeviceptr *") PointerBuffer dptr, @NativeType("size_t *") PointerBuffer bytes, @NativeType("CUmodule") long hmod, @NativeType("char const *") ByteBuffer name) {
        if (CHECKS) {
            check(dptr, 1);
            check(bytes, 1);
            checkNT1(name);
        }
        return ncuModuleGetGlobal(memAddress(dptr), memAddress(bytes), hmod, memAddress(name));
    }

    @NativeType("CUresult")
    public static int cuModuleGetGlobal(@NativeType("CUdeviceptr *") PointerBuffer dptr, @NativeType("size_t *") PointerBuffer bytes, @NativeType("CUmodule") long hmod, @NativeType("char const *") CharSequence name) {
        if (CHECKS) {
            check(dptr, 1);
            check(bytes, 1);
        }
        MemoryStack stack = stackGet(); int stackPointer = stack.getPointer();
        try {
            ByteBuffer nameEncoded = stack.ASCII(name);
            return ncuModuleGetGlobal(memAddress(dptr), memAddress(bytes), hmod, memAddress(nameEncoded));
        } finally {
            stack.setPointer(stackPointer);
        }
    }

    // --- [ cuModuleGetTexRef ] ---

    public static int ncuModuleGetTexRef(long pTexRef, long hmod, long name) {
        long __functionAddress = Functions.ModuleGetTexRef;
        if (CHECKS) {
            check(hmod);
        }
        return invokePPPI(__functionAddress, pTexRef, hmod, name);
    }

    @NativeType("CUresult")
    public static int cuModuleGetTexRef(@NativeType("CUtexref *") PointerBuffer pTexRef, @NativeType("CUmodule") long hmod, @NativeType("char const *") ByteBuffer name) {
        if (CHECKS) {
            check(pTexRef, 1);
            checkNT1(name);
        }
        return ncuModuleGetTexRef(memAddress(pTexRef), hmod, memAddress(name));
    }

    @NativeType("CUresult")
    public static int cuModuleGetTexRef(@NativeType("CUtexref *") PointerBuffer pTexRef, @NativeType("CUmodule") long hmod, @NativeType("char const *") CharSequence name) {
        if (CHECKS) {
            check(pTexRef, 1);
        }
        MemoryStack stack = stackGet(); int stackPointer = stack.getPointer();
        try {
            ByteBuffer nameEncoded = stack.ASCII(name);
            return ncuModuleGetTexRef(memAddress(pTexRef), hmod, memAddress(nameEncoded));
        } finally {
            stack.setPointer(stackPointer);
        }
    }

    // --- [ cuModuleGetSurfRef ] ---

    public static int ncuModuleGetSurfRef(long pSurfRef, long hmod, long name) {
        long __functionAddress = Functions.ModuleGetSurfRef;
        if (CHECKS) {
            check(hmod);
        }
        return invokePPPI(__functionAddress, pSurfRef, hmod, name);
    }

    @NativeType("CUresult")
    public static int cuModuleGetSurfRef(@NativeType("CUsurfref *") PointerBuffer pSurfRef, @NativeType("CUmodule") long hmod, @NativeType("char const *") ByteBuffer name) {
        if (CHECKS) {
            check(pSurfRef, 1);
            checkNT1(name);
        }
        return ncuModuleGetSurfRef(memAddress(pSurfRef), hmod, memAddress(name));
    }

    @NativeType("CUresult")
    public static int cuModuleGetSurfRef(@NativeType("CUsurfref *") PointerBuffer pSurfRef, @NativeType("CUmodule") long hmod, @NativeType("char const *") CharSequence name) {
        if (CHECKS) {
            check(pSurfRef, 1);
        }
        MemoryStack stack = stackGet(); int stackPointer = stack.getPointer();
        try {
            ByteBuffer nameEncoded = stack.ASCII(name);
            return ncuModuleGetSurfRef(memAddress(pSurfRef), hmod, memAddress(nameEncoded));
        } finally {
            stack.setPointer(stackPointer);
        }
    }

    // --- [ cuLinkCreate ] ---

    public static int ncuLinkCreate(int numOptions, long options, long optionValues, long stateOut) {
        long __functionAddress = Functions.LinkCreate;
        return invokePPPI(__functionAddress, numOptions, options, optionValues, stateOut);
    }

    @NativeType("CUresult")
    public static int cuLinkCreate(@Nullable @NativeType("CUjit_option *") IntBuffer options, @Nullable @NativeType("void **") PointerBuffer optionValues, @NativeType("CUlinkState *") PointerBuffer stateOut) {
        if (CHECKS) {
            checkSafe(optionValues, remainingSafe(options));
            check(stateOut, 1);
        }
        return ncuLinkCreate(remainingSafe(options), memAddressSafe(options), memAddressSafe(optionValues), memAddress(stateOut));
    }

    // --- [ cuLinkAddData ] ---

    public static int ncuLinkAddData(long state, int type, long data, long size, long name, int numOptions, long options, long optionValues) {
        long __functionAddress = Functions.LinkAddData;
        if (CHECKS) {
            check(state);
        }
        return invokePPPPPPI(__functionAddress, state, type, data, size, name, numOptions, options, optionValues);
    }

    @NativeType("CUresult")
    public static int cuLinkAddData(@NativeType("CUlinkState") long state, @NativeType("CUjitInputType") int type, @NativeType("void *") ByteBuffer data, @NativeType("char const *") ByteBuffer name, @Nullable @NativeType("CUjit_option *") IntBuffer options, @Nullable @NativeType("void **") PointerBuffer optionValues) {
        if (CHECKS) {
            checkNT1(name);
            checkSafe(optionValues, remainingSafe(options));
        }
        return ncuLinkAddData(state, type, memAddress(data), data.remaining(), memAddress(name), remainingSafe(options), memAddressSafe(options), memAddressSafe(optionValues));
    }

    @NativeType("CUresult")
    public static int cuLinkAddData(@NativeType("CUlinkState") long state, @NativeType("CUjitInputType") int type, @NativeType("void *") ByteBuffer data, @NativeType("char const *") CharSequence name, @Nullable @NativeType("CUjit_option *") IntBuffer options, @Nullable @NativeType("void **") PointerBuffer optionValues) {
        if (CHECKS) {
            checkSafe(optionValues, remainingSafe(options));
        }
        MemoryStack stack = stackGet(); int stackPointer = stack.getPointer();
        try {
            ByteBuffer nameEncoded = stack.ASCII(name);
            return ncuLinkAddData(state, type, memAddress(data), data.remaining(), memAddress(nameEncoded), remainingSafe(options), memAddressSafe(options), memAddressSafe(optionValues));
        } finally {
            stack.setPointer(stackPointer);
        }
    }

    // --- [ cuLinkAddFile ] ---

    public static int ncuLinkAddFile(long state, int type, long path, int numOptions, long options, long optionValues) {
        long __functionAddress = Functions.LinkAddFile;
        if (CHECKS) {
            check(state);
        }
        return invokePPPPI(__functionAddress, state, type, path, numOptions, options, optionValues);
    }

    @NativeType("CUresult")
    public static int cuLinkAddFile(@NativeType("CUlinkState") long state, @NativeType("CUjitInputType") int type, @NativeType("char const *") ByteBuffer path, @Nullable @NativeType("CUjit_option *") IntBuffer options, @Nullable @NativeType("void **") PointerBuffer optionValues) {
        if (CHECKS) {
            checkNT1(path);
            checkSafe(optionValues, remainingSafe(options));
        }
        return ncuLinkAddFile(state, type, memAddress(path), remainingSafe(options), memAddressSafe(options), memAddressSafe(optionValues));
    }

    @NativeType("CUresult")
    public static int cuLinkAddFile(@NativeType("CUlinkState") long state, @NativeType("CUjitInputType") int type, @NativeType("char const *") CharSequence path, @Nullable @NativeType("CUjit_option *") IntBuffer options, @Nullable @NativeType("void **") PointerBuffer optionValues) {
        if (CHECKS) {
            checkSafe(optionValues, remainingSafe(options));
        }
        MemoryStack stack = stackGet(); int stackPointer = stack.getPointer();
        try {
            ByteBuffer pathEncoded = stack.ASCII(path);
            return ncuLinkAddFile(state, type, memAddress(pathEncoded), remainingSafe(options), memAddressSafe(options), memAddressSafe(optionValues));
        } finally {
            stack.setPointer(stackPointer);
        }
    }

    // --- [ cuLinkComplete ] ---

    public static int ncuLinkComplete(long state, long cubinOut, long sizeOut) {
        long __functionAddress = Functions.LinkComplete;
        if (CHECKS) {
            check(state);
        }
        return invokePPPI(__functionAddress, state, cubinOut, sizeOut);
    }

    @NativeType("CUresult")
    public static int cuLinkComplete(@NativeType("CUlinkState") long state, @NativeType("void **") PointerBuffer cubinOut, @NativeType("size_t *") PointerBuffer sizeOut) {
        if (CHECKS) {
            check(cubinOut, 1);
            check(sizeOut, 1);
        }
        return ncuLinkComplete(state, memAddress(cubinOut), memAddress(sizeOut));
    }

    // --- [ cuLinkDestroy ] ---

    @NativeType("CUresult")
    public static int cuLinkDestroy(@NativeType("CUlinkState") long state) {
        long __functionAddress = Functions.LinkDestroy;
        if (CHECKS) {
            check(state);
        }
        return invokePI(__functionAddress, state);
    }

    // --- [ cuMemGetInfo ] ---

    public static int ncuMemGetInfo(long free, long total) {
        long __functionAddress = Functions.MemGetInfo;
        return invokePPI(__functionAddress, free, total);
    }

    @NativeType("CUresult")
    public static int cuMemGetInfo(@NativeType("size_t *") PointerBuffer free, @NativeType("size_t *") PointerBuffer total) {
        if (CHECKS) {
            check(free, 1);
            check(total, 1);
        }
        return ncuMemGetInfo(memAddress(free), memAddress(total));
    }

    // --- [ cuMemAlloc ] ---

    public static int ncuMemAlloc(long dptr, long bytesize) {
        long __functionAddress = Functions.MemAlloc;
        return invokePPI(__functionAddress, dptr, bytesize);
    }

    @NativeType("CUresult")
    public static int cuMemAlloc(@NativeType("CUdeviceptr *") PointerBuffer dptr, @NativeType("size_t") long bytesize) {
        if (CHECKS) {
            check(dptr, 1);
        }
        return ncuMemAlloc(memAddress(dptr), bytesize);
    }

    // --- [ cuMemAllocPitch ] ---

    public static int ncuMemAllocPitch(long dptr, long pPitch, long WidthInBytes, long Height, int ElementSizeBytes) {
        long __functionAddress = Functions.MemAllocPitch;
        return invokePPPPI(__functionAddress, dptr, pPitch, WidthInBytes, Height, ElementSizeBytes);
    }

    @NativeType("CUresult")
    public static int cuMemAllocPitch(@NativeType("CUdeviceptr *") PointerBuffer dptr, @NativeType("size_t *") PointerBuffer pPitch, @NativeType("size_t") long WidthInBytes, @NativeType("size_t") long Height, @NativeType("unsigned int") int ElementSizeBytes) {
        if (CHECKS) {
            check(dptr, 1);
            check(pPitch, 1);
        }
        return ncuMemAllocPitch(memAddress(dptr), memAddress(pPitch), WidthInBytes, Height, ElementSizeBytes);
    }

    // --- [ cuMemFree ] ---

    @NativeType("CUresult")
    public static int cuMemFree(@NativeType("CUdeviceptr") long dptr) {
        long __functionAddress = Functions.MemFree;
        if (CHECKS) {
            check(dptr);
        }
        return invokePI(__functionAddress, dptr);
    }

    // --- [ cuMemGetAddressRange ] ---

    public static int ncuMemGetAddressRange(long pbase, long psize, long dptr) {
        long __functionAddress = Functions.MemGetAddressRange;
        if (CHECKS) {
            check(dptr);
        }
        return invokePPPI(__functionAddress, pbase, psize, dptr);
    }

    @NativeType("CUresult")
    public static int cuMemGetAddressRange(@NativeType("CUdeviceptr *") PointerBuffer pbase, @NativeType("size_t *") PointerBuffer psize, @NativeType("CUdeviceptr") long dptr) {
        if (CHECKS) {
            check(pbase, 1);
            check(psize, 1);
        }
        return ncuMemGetAddressRange(memAddress(pbase), memAddress(psize), dptr);
    }

    // --- [ cuMemAllocHost ] ---

    public static int ncuMemAllocHost(long pp, long bytesize) {
        long __functionAddress = Functions.MemAllocHost;
        return invokePPI(__functionAddress, pp, bytesize);
    }

    @NativeType("CUresult")
    public static int cuMemAllocHost(@NativeType("void **") PointerBuffer pp, @NativeType("size_t") long bytesize) {
        if (CHECKS) {
            check(pp, 1);
        }
        return ncuMemAllocHost(memAddress(pp), bytesize);
    }

    // --- [ cuMemFreeHost ] ---

    public static int ncuMemFreeHost(long p) {
        long __functionAddress = Functions.MemFreeHost;
        return invokePI(__functionAddress, p);
    }

    @NativeType("CUresult")
    public static int cuMemFreeHost(@NativeType("void *") ByteBuffer p) {
        return ncuMemFreeHost(memAddress(p));
    }

    // --- [ cuMemHostAlloc ] ---

    public static int ncuMemHostAlloc(long pp, long bytesize, int Flags) {
        long __functionAddress = Functions.MemHostAlloc;
        return invokePPI(__functionAddress, pp, bytesize, Flags);
    }

    @NativeType("CUresult")
    public static int cuMemHostAlloc(@NativeType("void **") PointerBuffer pp, @NativeType("size_t") long bytesize, @NativeType("unsigned int") int Flags) {
        if (CHECKS) {
            check(pp, 1);
        }
        return ncuMemHostAlloc(memAddress(pp), bytesize, Flags);
    }

    // --- [ cuMemHostGetDevicePointer ] ---

    public static int ncuMemHostGetDevicePointer(long pdptr, long p, int Flags) {
        long __functionAddress = Functions.MemHostGetDevicePointer;
        return invokePPI(__functionAddress, pdptr, p, Flags);
    }

    @NativeType("CUresult")
    public static int cuMemHostGetDevicePointer(@NativeType("CUdeviceptr *") PointerBuffer pdptr, @NativeType("void *") ByteBuffer p, @NativeType("unsigned int") int Flags) {
        if (CHECKS) {
            check(pdptr, 1);
        }
        return ncuMemHostGetDevicePointer(memAddress(pdptr), memAddress(p), Flags);
    }

    // --- [ cuMemHostGetFlags ] ---

    public static int ncuMemHostGetFlags(long pFlags, long p) {
        long __functionAddress = Functions.MemHostGetFlags;
        return invokePPI(__functionAddress, pFlags, p);
    }

    @NativeType("CUresult")
    public static int cuMemHostGetFlags(@NativeType("unsigned int *") IntBuffer pFlags, @NativeType("void *") ByteBuffer p) {
        if (CHECKS) {
            check(pFlags, 1);
        }
        return ncuMemHostGetFlags(memAddress(pFlags), memAddress(p));
    }

    // --- [ cuMemAllocManaged ] ---

    public static int ncuMemAllocManaged(long dptr, long bytesize, int flags) {
        long __functionAddress = Functions.MemAllocManaged;
        return invokePPI(__functionAddress, dptr, bytesize, flags);
    }

    @NativeType("CUresult")
    public static int cuMemAllocManaged(@NativeType("CUdeviceptr *") PointerBuffer dptr, @NativeType("size_t") long bytesize, @NativeType("unsigned int") int flags) {
        if (CHECKS) {
            check(dptr, 1);
        }
        return ncuMemAllocManaged(memAddress(dptr), bytesize, flags);
    }

    // --- [ cuDeviceGetByPCIBusId ] ---

    public static int ncuDeviceGetByPCIBusId(long dev, long pciBusId) {
        long __functionAddress = Functions.DeviceGetByPCIBusId;
        return invokePPI(__functionAddress, dev, pciBusId);
    }

    @NativeType("CUresult")
    public static int cuDeviceGetByPCIBusId(@NativeType("CUdevice *") IntBuffer dev, @NativeType("char const *") ByteBuffer pciBusId) {
        if (CHECKS) {
            check(dev, 1);
            checkNT1(pciBusId);
        }
        return ncuDeviceGetByPCIBusId(memAddress(dev), memAddress(pciBusId));
    }

    @NativeType("CUresult")
    public static int cuDeviceGetByPCIBusId(@NativeType("CUdevice *") IntBuffer dev, @NativeType("char const *") CharSequence pciBusId) {
        if (CHECKS) {
            check(dev, 1);
        }
        MemoryStack stack = stackGet(); int stackPointer = stack.getPointer();
        try {
            ByteBuffer pciBusIdEncoded = stack.ASCII(pciBusId);
            return ncuDeviceGetByPCIBusId(memAddress(dev), memAddress(pciBusIdEncoded));
        } finally {
            stack.setPointer(stackPointer);
        }
    }

    // --- [ cuDeviceGetPCIBusId ] ---

    public static int ncuDeviceGetPCIBusId(long pciBusId, int len, int dev) {
        long __functionAddress = Functions.DeviceGetPCIBusId;
        return invokePI(__functionAddress, pciBusId, len, dev);
    }

    @NativeType("CUresult")
    public static int cuDeviceGetPCIBusId(@NativeType("char *") ByteBuffer pciBusId, @NativeType("CUdevice") int dev) {
        return ncuDeviceGetPCIBusId(memAddress(pciBusId), pciBusId.remaining(), dev);
    }

    // --- [ cuIpcGetEventHandle ] ---

    public static int ncuIpcGetEventHandle(long pHandle, long event) {
        long __functionAddress = Functions.IpcGetEventHandle;
        if (CHECKS) {
            check(event);
        }
        return invokePPI(__functionAddress, pHandle, event);
    }

    @NativeType("CUresult")
    public static int cuIpcGetEventHandle(@NativeType("CUipcEventHandle *") CUIPCEventHandle.Buffer pHandle, @NativeType("CUevent") long event) {
        if (CHECKS) {
            check(pHandle, 1);
        }
        return ncuIpcGetEventHandle(pHandle.address(), event);
    }

    // --- [ cuIpcOpenEventHandle ] ---

    public static int ncuIpcOpenEventHandle(long phEvent, long handle) {
        long __functionAddress = Functions.IpcOpenEventHandle;
        return invokePPI(__functionAddress, phEvent, handle);
    }

    @NativeType("CUresult")
    public static int cuIpcOpenEventHandle(@NativeType("CUevent *") PointerBuffer phEvent, @NativeType("CUipcEventHandle") CUIPCEventHandle handle) {
        if (CHECKS) {
            check(phEvent, 1);
        }
        return ncuIpcOpenEventHandle(memAddress(phEvent), handle.address());
    }

    // --- [ cuIpcGetMemHandle ] ---

    public static int ncuIpcGetMemHandle(long pHandle, long dptr) {
        long __functionAddress = Functions.IpcGetMemHandle;
        if (CHECKS) {
            check(dptr);
        }
        return invokePPI(__functionAddress, pHandle, dptr);
    }

    @NativeType("CUresult")
    public static int cuIpcGetMemHandle(@NativeType("CUipcMemHandle *") CUIPCMemHandle.Buffer pHandle, @NativeType("CUdeviceptr") long dptr) {
        if (CHECKS) {
            check(pHandle, 1);
        }
        return ncuIpcGetMemHandle(pHandle.address(), dptr);
    }

    // --- [ cuIpcOpenMemHandle ] ---

    public static int ncuIpcOpenMemHandle(long pdptr, long handle, int Flags) {
        long __functionAddress = Functions.IpcOpenMemHandle;
        return invokePPI(__functionAddress, pdptr, handle, Flags);
    }

    @NativeType("CUresult")
    public static int cuIpcOpenMemHandle(@NativeType("CUdeviceptr *") PointerBuffer pdptr, @NativeType("CUipcMemHandle") CUIPCMemHandle handle, @NativeType("unsigned int") int Flags) {
        if (CHECKS) {
            check(pdptr, 1);
        }
        return ncuIpcOpenMemHandle(memAddress(pdptr), handle.address(), Flags);
    }

    // --- [ cuIpcCloseMemHandle ] ---

    @NativeType("CUresult")
    public static int cuIpcCloseMemHandle(@NativeType("CUdeviceptr") long dptr) {
        long __functionAddress = Functions.IpcCloseMemHandle;
        if (CHECKS) {
            check(dptr);
        }
        return invokePI(__functionAddress, dptr);
    }

    // --- [ cuMemHostRegister ] ---

    public static int ncuMemHostRegister(long p, long bytesize, int Flags) {
        long __functionAddress = Functions.MemHostRegister;
        return invokePPI(__functionAddress, p, bytesize, Flags);
    }

    @NativeType("CUresult")
    public static int cuMemHostRegister(@NativeType("void *") ByteBuffer p, @NativeType("unsigned int") int Flags) {
        return ncuMemHostRegister(memAddress(p), p.remaining(), Flags);
    }

    // --- [ cuMemHostUnregister ] ---

    public static int ncuMemHostUnregister(long p) {
        long __functionAddress = Functions.MemHostUnregister;
        return invokePI(__functionAddress, p);
    }

    @NativeType("CUresult")
    public static int cuMemHostUnregister(@NativeType("void *") ByteBuffer p) {
        return ncuMemHostUnregister(memAddress(p));
    }

    // --- [ cuMemcpy ] ---

    @NativeType("CUresult")
    public static int cuMemcpy(@NativeType("CUdeviceptr") long dst, @NativeType("CUdeviceptr") long src, @NativeType("size_t") long ByteCount) {
        long __functionAddress = Functions.Memcpy;
        if (CHECKS) {
            check(dst);
            check(src);
        }
        return invokePPPI(__functionAddress, dst, src, ByteCount);
    }

    // --- [ cuMemcpyPeer ] ---

    @NativeType("CUresult")
    public static int cuMemcpyPeer(@NativeType("CUdeviceptr") long dstDevice, @NativeType("CUcontext") long dstContext, @NativeType("CUdeviceptr") long srcDevice, @NativeType("CUcontext") long srcContext, @NativeType("size_t") long ByteCount) {
        long __functionAddress = Functions.MemcpyPeer;
        if (CHECKS) {
            check(dstDevice);
            check(dstContext);
            check(srcDevice);
            check(srcContext);
        }
        return invokePPPPPI(__functionAddress, dstDevice, dstContext, srcDevice, srcContext, ByteCount);
    }

    // --- [ cuMemcpyHtoD ] ---

    public static int ncuMemcpyHtoD(long dstDevice, long srcHost, long ByteCount) {
        long __functionAddress = Functions.MemcpyHtoD;
        if (CHECKS) {
            check(dstDevice);
        }
        return invokePPPI(__functionAddress, dstDevice, srcHost, ByteCount);
    }

    @NativeType("CUresult")
    public static int cuMemcpyHtoD(@NativeType("CUdeviceptr") long dstDevice, @NativeType("void const *") ByteBuffer srcHost) {
        return ncuMemcpyHtoD(dstDevice, memAddress(srcHost), srcHost.remaining());
    }

    // --- [ cuMemcpyDtoH ] ---

    public static int ncuMemcpyDtoH(long dstHost, long srcDevice, long ByteCount) {
        long __functionAddress = Functions.MemcpyDtoH;
        if (CHECKS) {
            check(srcDevice);
        }
        return invokePPPI(__functionAddress, dstHost, srcDevice, ByteCount);
    }

    @NativeType("CUresult")
    public static int cuMemcpyDtoH(@NativeType("void *") ByteBuffer dstHost, @NativeType("CUdeviceptr") long srcDevice) {
        return ncuMemcpyDtoH(memAddress(dstHost), srcDevice, dstHost.remaining());
    }

    // --- [ cuMemcpyDtoD ] ---

    @NativeType("CUresult")
    public static int cuMemcpyDtoD(@NativeType("CUdeviceptr") long dstDevice, @NativeType("CUdeviceptr") long srcDevice, @NativeType("size_t") long ByteCount) {
        long __functionAddress = Functions.MemcpyDtoD;
        if (CHECKS) {
            check(dstDevice);
            check(srcDevice);
        }
        return invokePPPI(__functionAddress, dstDevice, srcDevice, ByteCount);
    }

    // --- [ cuMemcpyDtoA ] ---

    @NativeType("CUresult")
    public static int cuMemcpyDtoA(@NativeType("CUarray") long dstArray, @NativeType("size_t") long dstOffset, @NativeType("CUdeviceptr") long srcDevice, @NativeType("size_t") long ByteCount) {
        long __functionAddress = Functions.MemcpyDtoA;
        if (CHECKS) {
            check(dstArray);
            check(srcDevice);
        }
        return invokePPPPI(__functionAddress, dstArray, dstOffset, srcDevice, ByteCount);
    }

    // --- [ cuMemcpyAtoD ] ---

    @NativeType("CUresult")
    public static int cuMemcpyAtoD(@NativeType("CUdeviceptr") long dstDevice, @NativeType("CUarray") long srcArray, @NativeType("size_t") long srcOffset, @NativeType("size_t") long ByteCount) {
        long __functionAddress = Functions.MemcpyAtoD;
        if (CHECKS) {
            check(dstDevice);
            check(srcArray);
        }
        return invokePPPPI(__functionAddress, dstDevice, srcArray, srcOffset, ByteCount);
    }

    // --- [ cuMemcpyHtoA ] ---

    public static int ncuMemcpyHtoA(long dstArray, long dstOffset, long srcHost, long ByteCount) {
        long __functionAddress = Functions.MemcpyHtoA;
        if (CHECKS) {
            check(dstArray);
        }
        return invokePPPPI(__functionAddress, dstArray, dstOffset, srcHost, ByteCount);
    }

    @NativeType("CUresult")
    public static int cuMemcpyHtoA(@NativeType("CUarray") long dstArray, @NativeType("size_t") long dstOffset, @NativeType("void const *") ByteBuffer srcHost) {
        return ncuMemcpyHtoA(dstArray, dstOffset, memAddress(srcHost), srcHost.remaining());
    }

    // --- [ cuMemcpyAtoH ] ---

    public static int ncuMemcpyAtoH(long dstHost, long srcArray, long srcOffset, long ByteCount) {
        long __functionAddress = Functions.MemcpyAtoH;
        if (CHECKS) {
            check(srcArray);
        }
        return invokePPPPI(__functionAddress, dstHost, srcArray, srcOffset, ByteCount);
    }

    @NativeType("CUresult")
    public static int cuMemcpyAtoH(@NativeType("void *") ByteBuffer dstHost, @NativeType("CUarray") long srcArray, @NativeType("size_t") long srcOffset) {
        return ncuMemcpyAtoH(memAddress(dstHost), srcArray, srcOffset, dstHost.remaining());
    }

    // --- [ cuMemcpyAtoA ] ---

    @NativeType("CUresult")
    public static int cuMemcpyAtoA(@NativeType("CUarray") long dstArray, @NativeType("size_t") long dstOffset, @NativeType("CUarray") long srcArray, @NativeType("size_t") long srcOffset, @NativeType("size_t") long ByteCount) {
        long __functionAddress = Functions.MemcpyAtoA;
        if (CHECKS) {
            check(dstArray);
            check(srcArray);
        }
        return invokePPPPPI(__functionAddress, dstArray, dstOffset, srcArray, srcOffset, ByteCount);
    }

    // --- [ cuMemcpy2D ] ---

    public static int ncuMemcpy2D(long pCopy) {
        long __functionAddress = Functions.Memcpy2D;
        if (CHECKS) {
            CUDA_MEMCPY2D.validate(pCopy);
        }
        return invokePI(__functionAddress, pCopy);
    }

    @NativeType("CUresult")
    public static int cuMemcpy2D(@NativeType("CUDA_MEMCPY2D const *") CUDA_MEMCPY2D pCopy) {
        return ncuMemcpy2D(pCopy.address());
    }

    // --- [ cuMemcpy2DUnaligned ] ---

    public static int ncuMemcpy2DUnaligned(long pCopy) {
        long __functionAddress = Functions.Memcpy2DUnaligned;
        if (CHECKS) {
            CUDA_MEMCPY2D.validate(pCopy);
        }
        return invokePI(__functionAddress, pCopy);
    }

    @NativeType("CUresult")
    public static int cuMemcpy2DUnaligned(@NativeType("CUDA_MEMCPY2D const *") CUDA_MEMCPY2D pCopy) {
        return ncuMemcpy2DUnaligned(pCopy.address());
    }

    // --- [ cuMemcpy3D ] ---

    public static int ncuMemcpy3D(long pCopy) {
        long __functionAddress = Functions.Memcpy3D;
        if (CHECKS) {
            CUDA_MEMCPY3D.validate(pCopy);
        }
        return invokePI(__functionAddress, pCopy);
    }

    @NativeType("CUresult")
    public static int cuMemcpy3D(@NativeType("CUDA_MEMCPY3D const *") CUDA_MEMCPY3D pCopy) {
        return ncuMemcpy3D(pCopy.address());
    }

    // --- [ cuMemcpy3DPeer ] ---

    public static int ncuMemcpy3DPeer(long pCopy) {
        long __functionAddress = Functions.Memcpy3DPeer;
        if (CHECKS) {
            CUDA_MEMCPY3D_PEER.validate(pCopy);
        }
        return invokePI(__functionAddress, pCopy);
    }

    @NativeType("CUresult")
    public static int cuMemcpy3DPeer(@NativeType("CUDA_MEMCPY3D_PEER const *") CUDA_MEMCPY3D_PEER pCopy) {
        return ncuMemcpy3DPeer(pCopy.address());
    }

    // --- [ cuMemcpyAsync ] ---

    @NativeType("CUresult")
    public static int cuMemcpyAsync(@NativeType("CUdeviceptr") long dst, @NativeType("CUdeviceptr") long src, @NativeType("size_t") long ByteCount, @NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.MemcpyAsync;
        if (CHECKS) {
            check(dst);
            check(src);
            check(hStream);
        }
        return invokePPPPI(__functionAddress, dst, src, ByteCount, hStream);
    }

    // --- [ cuMemcpyPeerAsync ] ---

    @NativeType("CUresult")
    public static int cuMemcpyPeerAsync(@NativeType("CUdeviceptr") long dstDevice, @NativeType("CUcontext") long dstContext, @NativeType("CUdeviceptr") long srcDevice, @NativeType("CUcontext") long srcContext, @NativeType("size_t") long ByteCount, @NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.MemcpyPeerAsync;
        if (CHECKS) {
            check(dstDevice);
            check(dstContext);
            check(srcDevice);
            check(srcContext);
            check(hStream);
        }
        return invokePPPPPPI(__functionAddress, dstDevice, dstContext, srcDevice, srcContext, ByteCount, hStream);
    }

    // --- [ cuMemcpyHtoDAsync ] ---

    public static int ncuMemcpyHtoDAsync(long dstDevice, long srcHost, long ByteCount, long hStream) {
        long __functionAddress = Functions.MemcpyHtoDAsync;
        if (CHECKS) {
            check(dstDevice);
            check(hStream);
        }
        return invokePPPPI(__functionAddress, dstDevice, srcHost, ByteCount, hStream);
    }

    @NativeType("CUresult")
    public static int cuMemcpyHtoDAsync(@NativeType("CUdeviceptr") long dstDevice, @NativeType("void const *") ByteBuffer srcHost, @NativeType("CUstream") long hStream) {
        return ncuMemcpyHtoDAsync(dstDevice, memAddress(srcHost), srcHost.remaining(), hStream);
    }

    // --- [ cuMemcpyDtoHAsync ] ---

    public static int ncuMemcpyDtoHAsync(long dstHost, long srcDevice, long ByteCount, long hStream) {
        long __functionAddress = Functions.MemcpyDtoHAsync;
        if (CHECKS) {
            check(srcDevice);
            check(hStream);
        }
        return invokePPPPI(__functionAddress, dstHost, srcDevice, ByteCount, hStream);
    }

    @NativeType("CUresult")
    public static int cuMemcpyDtoHAsync(@NativeType("void *") ByteBuffer dstHost, @NativeType("CUdeviceptr") long srcDevice, @NativeType("CUstream") long hStream) {
        return ncuMemcpyDtoHAsync(memAddress(dstHost), srcDevice, dstHost.remaining(), hStream);
    }

    // --- [ cuMemcpyDtoDAsync ] ---

    @NativeType("CUresult")
    public static int cuMemcpyDtoDAsync(@NativeType("CUdeviceptr") long dstDevice, @NativeType("CUdeviceptr") long srcDevice, @NativeType("size_t") long ByteCount, @NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.MemcpyDtoDAsync;
        if (CHECKS) {
            check(dstDevice);
            check(srcDevice);
            check(hStream);
        }
        return invokePPPPI(__functionAddress, dstDevice, srcDevice, ByteCount, hStream);
    }

    // --- [ cuMemcpyHtoAAsync ] ---

    public static int ncuMemcpyHtoAAsync(long dstArray, long dstOffset, long srcHost, long ByteCount, long hStream) {
        long __functionAddress = Functions.MemcpyHtoAAsync;
        if (CHECKS) {
            check(dstArray);
            check(hStream);
        }
        return invokePPPPPI(__functionAddress, dstArray, dstOffset, srcHost, ByteCount, hStream);
    }

    @NativeType("CUresult")
    public static int cuMemcpyHtoAAsync(@NativeType("CUarray") long dstArray, @NativeType("size_t") long dstOffset, @NativeType("void const *") ByteBuffer srcHost, @NativeType("CUstream") long hStream) {
        return ncuMemcpyHtoAAsync(dstArray, dstOffset, memAddress(srcHost), srcHost.remaining(), hStream);
    }

    // --- [ cuMemcpyAtoHAsync ] ---

    public static int ncuMemcpyAtoHAsync(long dstHost, long srcArray, long srcOffset, long ByteCount, long hStream) {
        long __functionAddress = Functions.MemcpyAtoHAsync;
        if (CHECKS) {
            check(srcArray);
            check(hStream);
        }
        return invokePPPPPI(__functionAddress, dstHost, srcArray, srcOffset, ByteCount, hStream);
    }

    @NativeType("CUresult")
    public static int cuMemcpyAtoHAsync(@NativeType("void *") ByteBuffer dstHost, @NativeType("CUarray") long srcArray, @NativeType("size_t") long srcOffset, @NativeType("CUstream") long hStream) {
        return ncuMemcpyAtoHAsync(memAddress(dstHost), srcArray, srcOffset, dstHost.remaining(), hStream);
    }

    // --- [ cuMemcpy2DAsync ] ---

    public static int ncuMemcpy2DAsync(long pCopy, long hStream) {
        long __functionAddress = Functions.Memcpy2DAsync;
        if (CHECKS) {
            CUDA_MEMCPY2D.validate(pCopy);
            check(hStream);
        }
        return invokePPI(__functionAddress, pCopy, hStream);
    }

    @NativeType("CUresult")
    public static int cuMemcpy2DAsync(@NativeType("CUDA_MEMCPY2D const *") CUDA_MEMCPY2D pCopy, @NativeType("CUstream") long hStream) {
        return ncuMemcpy2DAsync(pCopy.address(), hStream);
    }

    // --- [ cuMemcpy3DAsync ] ---

    public static int ncuMemcpy3DAsync(long pCopy, long hStream) {
        long __functionAddress = Functions.Memcpy3DAsync;
        if (CHECKS) {
            CUDA_MEMCPY3D.validate(pCopy);
            check(hStream);
        }
        return invokePPI(__functionAddress, pCopy, hStream);
    }

    @NativeType("CUresult")
    public static int cuMemcpy3DAsync(@NativeType("CUDA_MEMCPY3D const *") CUDA_MEMCPY3D pCopy, @NativeType("CUstream") long hStream) {
        return ncuMemcpy3DAsync(pCopy.address(), hStream);
    }

    // --- [ cuMemcpy3DPeerAsync ] ---

    public static int ncuMemcpy3DPeerAsync(long pCopy, long hStream) {
        long __functionAddress = Functions.Memcpy3DPeerAsync;
        if (CHECKS) {
            CUDA_MEMCPY3D_PEER.validate(pCopy);
            check(hStream);
        }
        return invokePPI(__functionAddress, pCopy, hStream);
    }

    @NativeType("CUresult")
    public static int cuMemcpy3DPeerAsync(@NativeType("CUDA_MEMCPY3D_PEER const *") CUDA_MEMCPY3D_PEER pCopy, @NativeType("CUstream") long hStream) {
        return ncuMemcpy3DPeerAsync(pCopy.address(), hStream);
    }

    // --- [ cuMemsetD8 ] ---

    @NativeType("CUresult")
    public static int cuMemsetD8(@NativeType("CUdeviceptr") long dstDevice, @NativeType("unsigned char") byte uc, @NativeType("size_t") long N) {
        long __functionAddress = Functions.MemsetD8;
        if (CHECKS) {
            check(dstDevice);
        }
        return invokePPI(__functionAddress, dstDevice, uc, N);
    }

    // --- [ cuMemsetD16 ] ---

    @NativeType("CUresult")
    public static int cuMemsetD16(@NativeType("CUdeviceptr") long dstDevice, @NativeType("unsigned short") short us, @NativeType("size_t") long N) {
        long __functionAddress = Functions.MemsetD16;
        if (CHECKS) {
            check(dstDevice);
        }
        return invokePPI(__functionAddress, dstDevice, us, N);
    }

    // --- [ cuMemsetD32 ] ---

    @NativeType("CUresult")
    public static int cuMemsetD32(@NativeType("CUdeviceptr") long dstDevice, @NativeType("unsigned int") int ui, @NativeType("size_t") long N) {
        long __functionAddress = Functions.MemsetD32;
        if (CHECKS) {
            check(dstDevice);
        }
        return invokePPI(__functionAddress, dstDevice, ui, N);
    }

    // --- [ cuMemsetD2D8 ] ---

    @NativeType("CUresult")
    public static int cuMemsetD2D8(@NativeType("CUdeviceptr") long dstDevice, @NativeType("size_t") long dstPitch, @NativeType("unsigned char") byte uc, @NativeType("size_t") long Width, @NativeType("size_t") long Height) {
        long __functionAddress = Functions.MemsetD2D8;
        if (CHECKS) {
            check(dstDevice);
        }
        return invokePPPPI(__functionAddress, dstDevice, dstPitch, uc, Width, Height);
    }

    // --- [ cuMemsetD2D16 ] ---

    @NativeType("CUresult")
    public static int cuMemsetD2D16(@NativeType("CUdeviceptr") long dstDevice, @NativeType("size_t") long dstPitch, @NativeType("unsigned short") short us, @NativeType("size_t") long Width, @NativeType("size_t") long Height) {
        long __functionAddress = Functions.MemsetD2D16;
        if (CHECKS) {
            check(dstDevice);
        }
        return invokePPPPI(__functionAddress, dstDevice, dstPitch, us, Width, Height);
    }

    // --- [ cuMemsetD2D32 ] ---

    @NativeType("CUresult")
    public static int cuMemsetD2D32(@NativeType("CUdeviceptr") long dstDevice, @NativeType("size_t") long dstPitch, @NativeType("unsigned int") int ui, @NativeType("size_t") long Width, @NativeType("size_t") long Height) {
        long __functionAddress = Functions.MemsetD2D32;
        if (CHECKS) {
            check(dstDevice);
        }
        return invokePPPPI(__functionAddress, dstDevice, dstPitch, ui, Width, Height);
    }

    // --- [ cuMemsetD8Async ] ---

    @NativeType("CUresult")
    public static int cuMemsetD8Async(@NativeType("CUdeviceptr") long dstDevice, @NativeType("unsigned char") byte uc, @NativeType("size_t") long N, @NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.MemsetD8Async;
        if (CHECKS) {
            check(dstDevice);
            check(hStream);
        }
        return invokePPPI(__functionAddress, dstDevice, uc, N, hStream);
    }

    // --- [ cuMemsetD16Async ] ---

    @NativeType("CUresult")
    public static int cuMemsetD16Async(@NativeType("CUdeviceptr") long dstDevice, @NativeType("unsigned short") short us, @NativeType("size_t") long N, @NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.MemsetD16Async;
        if (CHECKS) {
            check(dstDevice);
            check(hStream);
        }
        return invokePPPI(__functionAddress, dstDevice, us, N, hStream);
    }

    // --- [ cuMemsetD32Async ] ---

    @NativeType("CUresult")
    public static int cuMemsetD32Async(@NativeType("CUdeviceptr") long dstDevice, @NativeType("unsigned int") int ui, @NativeType("size_t") long N, @NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.MemsetD32Async;
        if (CHECKS) {
            check(dstDevice);
            check(hStream);
        }
        return invokePPPI(__functionAddress, dstDevice, ui, N, hStream);
    }

    // --- [ cuMemsetD2D8Async ] ---

    @NativeType("CUresult")
    public static int cuMemsetD2D8Async(@NativeType("CUdeviceptr") long dstDevice, @NativeType("size_t") long dstPitch, @NativeType("unsigned char") byte uc, @NativeType("size_t") long Width, @NativeType("size_t") long Height, @NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.MemsetD2D8Async;
        if (CHECKS) {
            check(dstDevice);
            check(hStream);
        }
        return invokePPPPPI(__functionAddress, dstDevice, dstPitch, uc, Width, Height, hStream);
    }

    // --- [ cuMemsetD2D16Async ] ---

    @NativeType("CUresult")
    public static int cuMemsetD2D16Async(@NativeType("CUdeviceptr") long dstDevice, @NativeType("size_t") long dstPitch, @NativeType("unsigned short") short us, @NativeType("size_t") long Width, @NativeType("size_t") long Height, @NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.MemsetD2D16Async;
        if (CHECKS) {
            check(dstDevice);
            check(hStream);
        }
        return invokePPPPPI(__functionAddress, dstDevice, dstPitch, us, Width, Height, hStream);
    }

    // --- [ cuMemsetD2D32Async ] ---

    @NativeType("CUresult")
    public static int cuMemsetD2D32Async(@NativeType("CUdeviceptr") long dstDevice, @NativeType("size_t") long dstPitch, @NativeType("unsigned int") int ui, @NativeType("size_t") long Width, @NativeType("size_t") long Height, @NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.MemsetD2D32Async;
        if (CHECKS) {
            check(dstDevice);
            check(hStream);
        }
        return invokePPPPPI(__functionAddress, dstDevice, dstPitch, ui, Width, Height, hStream);
    }

    // --- [ cuArrayCreate ] ---

    public static int ncuArrayCreate(long pHandle, long pAllocateArray) {
        long __functionAddress = Functions.ArrayCreate;
        return invokePPI(__functionAddress, pHandle, pAllocateArray);
    }

    @NativeType("CUresult")
    public static int cuArrayCreate(@NativeType("CUarray *") PointerBuffer pHandle, @NativeType("CUDA_ARRAY_DESCRIPTOR const *") CUDA_ARRAY_DESCRIPTOR pAllocateArray) {
        if (CHECKS) {
            check(pHandle, 1);
        }
        return ncuArrayCreate(memAddress(pHandle), pAllocateArray.address());
    }

    // --- [ cuArrayGetDescriptor ] ---

    public static int ncuArrayGetDescriptor(long pArrayDescriptor, long hArray) {
        long __functionAddress = Functions.ArrayGetDescriptor;
        if (CHECKS) {
            check(hArray);
        }
        return invokePPI(__functionAddress, pArrayDescriptor, hArray);
    }

    @NativeType("CUresult")
    public static int cuArrayGetDescriptor(@NativeType("CUDA_ARRAY_DESCRIPTOR *") CUDA_ARRAY_DESCRIPTOR pArrayDescriptor, @NativeType("CUarray") long hArray) {
        return ncuArrayGetDescriptor(pArrayDescriptor.address(), hArray);
    }

    // --- [ cuArrayDestroy ] ---

    @NativeType("CUresult")
    public static int cuArrayDestroy(@NativeType("CUarray") long hArray) {
        long __functionAddress = Functions.ArrayDestroy;
        if (CHECKS) {
            check(hArray);
        }
        return invokePI(__functionAddress, hArray);
    }

    // --- [ cuArray3DCreate ] ---

    public static int ncuArray3DCreate(long pHandle, long pAllocateArray) {
        long __functionAddress = Functions.Array3DCreate;
        return invokePPI(__functionAddress, pHandle, pAllocateArray);
    }

    @NativeType("CUresult")
    public static int cuArray3DCreate(@NativeType("CUarray *") PointerBuffer pHandle, @NativeType("CUDA_ARRAY3D_DESCRIPTOR const *") CUDA_ARRAY3D_DESCRIPTOR pAllocateArray) {
        if (CHECKS) {
            check(pHandle, 1);
        }
        return ncuArray3DCreate(memAddress(pHandle), pAllocateArray.address());
    }

    // --- [ cuArray3DGetDescriptor ] ---

    public static int ncuArray3DGetDescriptor(long pArrayDescriptor, long hArray) {
        long __functionAddress = Functions.Array3DGetDescriptor;
        if (CHECKS) {
            check(hArray);
        }
        return invokePPI(__functionAddress, pArrayDescriptor, hArray);
    }

    @NativeType("CUresult")
    public static int cuArray3DGetDescriptor(@NativeType("CUDA_ARRAY3D_DESCRIPTOR *") CUDA_ARRAY3D_DESCRIPTOR pArrayDescriptor, @NativeType("CUarray") long hArray) {
        return ncuArray3DGetDescriptor(pArrayDescriptor.address(), hArray);
    }

    // --- [ cuMipmappedArrayCreate ] ---

    public static int ncuMipmappedArrayCreate(long pHandle, long pMipmappedArrayDesc, int numMipmapLevels) {
        long __functionAddress = Functions.MipmappedArrayCreate;
        return invokePPI(__functionAddress, pHandle, pMipmappedArrayDesc, numMipmapLevels);
    }

    @NativeType("CUresult")
    public static int cuMipmappedArrayCreate(@NativeType("CUmipmappedArray *") PointerBuffer pHandle, @NativeType("CUDA_ARRAY3D_DESCRIPTOR const *") CUDA_ARRAY3D_DESCRIPTOR pMipmappedArrayDesc, @NativeType("unsigned int") int numMipmapLevels) {
        if (CHECKS) {
            check(pHandle, 1);
        }
        return ncuMipmappedArrayCreate(memAddress(pHandle), pMipmappedArrayDesc.address(), numMipmapLevels);
    }

    // --- [ cuMipmappedArrayGetLevel ] ---

    public static int ncuMipmappedArrayGetLevel(long pLevelArray, long hMipmappedArray, int level) {
        long __functionAddress = Functions.MipmappedArrayGetLevel;
        if (CHECKS) {
            check(hMipmappedArray);
        }
        return invokePPI(__functionAddress, pLevelArray, hMipmappedArray, level);
    }

    @NativeType("CUresult")
    public static int cuMipmappedArrayGetLevel(@NativeType("CUarray *") PointerBuffer pLevelArray, @NativeType("CUmipmappedArray") long hMipmappedArray, @NativeType("unsigned int") int level) {
        if (CHECKS) {
            check(pLevelArray, 1);
        }
        return ncuMipmappedArrayGetLevel(memAddress(pLevelArray), hMipmappedArray, level);
    }

    // --- [ cuMipmappedArrayDestroy ] ---

    @NativeType("CUresult")
    public static int cuMipmappedArrayDestroy(@NativeType("CUmipmappedArray") long hMipmappedArray) {
        long __functionAddress = Functions.MipmappedArrayDestroy;
        if (CHECKS) {
            check(hMipmappedArray);
        }
        return invokePI(__functionAddress, hMipmappedArray);
    }

    // --- [ cuPointerGetAttribute ] ---

    public static int ncuPointerGetAttribute(long data, int attribute, long ptr) {
        long __functionAddress = Functions.PointerGetAttribute;
        if (CHECKS) {
            check(ptr);
        }
        return invokePPI(__functionAddress, data, attribute, ptr);
    }

    @NativeType("CUresult")
    public static int cuPointerGetAttribute(@NativeType("void *") ByteBuffer data, @NativeType("CUpointer_attribute") int attribute, @NativeType("CUdeviceptr") long ptr) {
        return ncuPointerGetAttribute(memAddress(data), attribute, ptr);
    }

    // --- [ cuMemPrefetchAsync ] ---

    @NativeType("CUresult")
    public static int cuMemPrefetchAsync(@NativeType("CUdeviceptr") long devPtr, @NativeType("size_t") long count, @NativeType("CUdevice") int dstDevice, @NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.MemPrefetchAsync;
        if (CHECKS) {
            check(devPtr);
            check(hStream);
        }
        return invokePPPI(__functionAddress, devPtr, count, dstDevice, hStream);
    }

    // --- [ cuMemAdvise ] ---

    @NativeType("CUresult")
    public static int cuMemAdvise(@NativeType("CUdeviceptr") long devPtr, @NativeType("size_t") long count, @NativeType("CUmem_advise") int advice, @NativeType("CUdevice") int device) {
        long __functionAddress = Functions.MemAdvise;
        if (CHECKS) {
            check(devPtr);
        }
        return invokePPI(__functionAddress, devPtr, count, advice, device);
    }

    // --- [ cuMemRangeGetAttribute ] ---

    public static int ncuMemRangeGetAttribute(long data, long dataSize, int attribute, long devPtr, long count) {
        long __functionAddress = Functions.MemRangeGetAttribute;
        if (CHECKS) {
            check(devPtr);
        }
        return invokePPPPI(__functionAddress, data, dataSize, attribute, devPtr, count);
    }

    @NativeType("CUresult")
    public static int cuMemRangeGetAttribute(@NativeType("void *") ByteBuffer data, @NativeType("CUmem_range_attribute") int attribute, @NativeType("CUdeviceptr") long devPtr, @NativeType("size_t") long count) {
        return ncuMemRangeGetAttribute(memAddress(data), data.remaining(), attribute, devPtr, count);
    }

    // --- [ cuMemRangeGetAttributes ] ---

    public static int ncuMemRangeGetAttributes(long data, long dataSizes, long attributes, long numAttributes, long devPtr, long count) {
        long __functionAddress = Functions.MemRangeGetAttributes;
        if (CHECKS) {
            check(devPtr);
        }
        return invokePPPPPPI(__functionAddress, data, dataSizes, attributes, numAttributes, devPtr, count);
    }

    @NativeType("CUresult")
    public static int cuMemRangeGetAttributes(@NativeType("void **") PointerBuffer data, @NativeType("size_t *") PointerBuffer dataSizes, @NativeType("CUmem_range_attribute *") IntBuffer attributes, @NativeType("CUdeviceptr") long devPtr, @NativeType("size_t") long count) {
        if (CHECKS) {
            check(data, attributes.remaining());
            check(dataSizes, attributes.remaining());
        }
        return ncuMemRangeGetAttributes(memAddress(data), memAddress(dataSizes), memAddress(attributes), attributes.remaining(), devPtr, count);
    }

    // --- [ cuPointerSetAttribute ] ---

    public static int ncuPointerSetAttribute(long value, int attribute, long ptr) {
        long __functionAddress = Functions.PointerSetAttribute;
        if (CHECKS) {
            check(ptr);
        }
        return invokePPI(__functionAddress, value, attribute, ptr);
    }

    @NativeType("CUresult")
    public static int cuPointerSetAttribute(@NativeType("void const *") ByteBuffer value, @NativeType("CUpointer_attribute") int attribute, @NativeType("CUdeviceptr") long ptr) {
        return ncuPointerSetAttribute(memAddress(value), attribute, ptr);
    }

    // --- [ cuPointerGetAttributes ] ---

    public static int ncuPointerGetAttributes(int numAttributes, long attributes, long data, long ptr) {
        long __functionAddress = Functions.PointerGetAttributes;
        if (CHECKS) {
            check(ptr);
        }
        return invokePPPI(__functionAddress, numAttributes, attributes, data, ptr);
    }

    @NativeType("CUresult")
    public static int cuPointerGetAttributes(@NativeType("CUpointer_attribute *") IntBuffer attributes, @NativeType("void **") PointerBuffer data, @NativeType("CUdeviceptr") long ptr) {
        if (CHECKS) {
            check(data, attributes.remaining());
        }
        return ncuPointerGetAttributes(attributes.remaining(), memAddress(attributes), memAddress(data), ptr);
    }

    // --- [ cuStreamCreate ] ---

    public static int ncuStreamCreate(long phStream, int Flags) {
        long __functionAddress = Functions.StreamCreate;
        return invokePI(__functionAddress, phStream, Flags);
    }

    @NativeType("CUresult")
    public static int cuStreamCreate(@NativeType("CUstream *") PointerBuffer phStream, @NativeType("unsigned int") int Flags) {
        if (CHECKS) {
            check(phStream, 1);
        }
        return ncuStreamCreate(memAddress(phStream), Flags);
    }

    // --- [ cuStreamCreateWithPriority ] ---

    public static int ncuStreamCreateWithPriority(long phStream, int flags, int priority) {
        long __functionAddress = Functions.StreamCreateWithPriority;
        return invokePI(__functionAddress, phStream, flags, priority);
    }

    @NativeType("CUresult")
    public static int cuStreamCreateWithPriority(@NativeType("CUstream *") PointerBuffer phStream, @NativeType("unsigned int") int flags, int priority) {
        if (CHECKS) {
            check(phStream, 1);
        }
        return ncuStreamCreateWithPriority(memAddress(phStream), flags, priority);
    }

    // --- [ cuStreamGetPriority ] ---

    public static int ncuStreamGetPriority(long hStream, long priority) {
        long __functionAddress = Functions.StreamGetPriority;
        if (CHECKS) {
            check(hStream);
        }
        return invokePPI(__functionAddress, hStream, priority);
    }

    @NativeType("CUresult")
    public static int cuStreamGetPriority(@NativeType("CUstream") long hStream, @NativeType("int *") IntBuffer priority) {
        if (CHECKS) {
            check(priority, 1);
        }
        return ncuStreamGetPriority(hStream, memAddress(priority));
    }

    // --- [ cuStreamGetFlags ] ---

    public static int ncuStreamGetFlags(long hStream, long flags) {
        long __functionAddress = Functions.StreamGetFlags;
        if (CHECKS) {
            check(hStream);
        }
        return invokePPI(__functionAddress, hStream, flags);
    }

    @NativeType("CUresult")
    public static int cuStreamGetFlags(@NativeType("CUstream") long hStream, @NativeType("unsigned int *") IntBuffer flags) {
        if (CHECKS) {
            check(flags, 1);
        }
        return ncuStreamGetFlags(hStream, memAddress(flags));
    }

    // --- [ cuStreamGetCtx ] ---

    public static int ncuStreamGetCtx(long hStream, long pctx) {
        long __functionAddress = Functions.StreamGetCtx;
        if (CHECKS) {
            check(hStream);
        }
        return invokePPI(__functionAddress, hStream, pctx);
    }

    @NativeType("CUresult")
    public static int cuStreamGetCtx(@NativeType("CUstream") long hStream, @NativeType("CUcontext *") PointerBuffer pctx) {
        if (CHECKS) {
            check(pctx, 1);
        }
        return ncuStreamGetCtx(hStream, memAddress(pctx));
    }

    // --- [ cuStreamWaitEvent ] ---

    @NativeType("CUresult")
    public static int cuStreamWaitEvent(@NativeType("CUstream") long hStream, @NativeType("CUevent") long hEvent, @NativeType("unsigned int") int Flags) {
        long __functionAddress = Functions.StreamWaitEvent;
        if (CHECKS) {
            check(hStream);
            check(hEvent);
        }
        return invokePPI(__functionAddress, hStream, hEvent, Flags);
    }

    // --- [ cuStreamAddCallback ] ---

    @NativeType("CUresult")
    public static int cuStreamAddCallback(@NativeType("CUstream") long hStream, @NativeType("CUstreamCallback") long callback, @NativeType("void *") long userData, @NativeType("unsigned int") int flags) {
        long __functionAddress = Functions.StreamAddCallback;
        if (CHECKS) {
            check(hStream);
            check(callback);
            check(userData);
        }
        return invokePPPI(__functionAddress, hStream, callback, userData, flags);
    }

    // --- [ cuStreamBeginCapture ] ---

    @NativeType("CUresult")
    public static int cuStreamBeginCapture(@NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.StreamBeginCapture;
        if (CHECKS) {
            check(hStream);
        }
        return invokePI(__functionAddress, hStream);
    }

    // --- [ cuStreamEndCapture ] ---

    public static int ncuStreamEndCapture(long hStream, long phGraph) {
        long __functionAddress = Functions.StreamEndCapture;
        if (CHECKS) {
            check(hStream);
        }
        return invokePPI(__functionAddress, hStream, phGraph);
    }

    @NativeType("CUresult")
    public static int cuStreamEndCapture(@NativeType("CUstream") long hStream, @NativeType("CUgraph *") PointerBuffer phGraph) {
        if (CHECKS) {
            check(phGraph, 1);
        }
        return ncuStreamEndCapture(hStream, memAddress(phGraph));
    }

    // --- [ cuStreamIsCapturing ] ---

    public static int ncuStreamIsCapturing(long hStream, long captureStatus) {
        long __functionAddress = Functions.StreamIsCapturing;
        if (CHECKS) {
            check(hStream);
        }
        return invokePPI(__functionAddress, hStream, captureStatus);
    }

    @NativeType("CUresult")
    public static int cuStreamIsCapturing(@NativeType("CUstream") long hStream, @NativeType("CUstreamCaptureStatus *") IntBuffer captureStatus) {
        if (CHECKS) {
            check(captureStatus, 1);
        }
        return ncuStreamIsCapturing(hStream, memAddress(captureStatus));
    }

    // --- [ cuStreamAttachMemAsync ] ---

    @NativeType("CUresult")
    public static int cuStreamAttachMemAsync(@NativeType("CUstream") long hStream, @NativeType("CUdeviceptr") long dptr, @NativeType("size_t") long length, @NativeType("unsigned int") int flags) {
        long __functionAddress = Functions.StreamAttachMemAsync;
        if (CHECKS) {
            check(hStream);
            check(dptr);
        }
        return invokePPPI(__functionAddress, hStream, dptr, length, flags);
    }

    // --- [ cuStreamQuery ] ---

    @NativeType("CUresult")
    public static int cuStreamQuery(@NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.StreamQuery;
        if (CHECKS) {
            check(hStream);
        }
        return invokePI(__functionAddress, hStream);
    }

    // --- [ cuStreamSynchronize ] ---

    @NativeType("CUresult")
    public static int cuStreamSynchronize(@NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.StreamSynchronize;
        if (CHECKS) {
            check(hStream);
        }
        return invokePI(__functionAddress, hStream);
    }

    // --- [ cuStreamDestroy ] ---

    @NativeType("CUresult")
    public static int cuStreamDestroy(@NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.StreamDestroy;
        if (CHECKS) {
            check(hStream);
        }
        return invokePI(__functionAddress, hStream);
    }

    // --- [ cuEventCreate ] ---

    public static int ncuEventCreate(long phEvent, int Flags) {
        long __functionAddress = Functions.EventCreate;
        return invokePI(__functionAddress, phEvent, Flags);
    }

    @NativeType("CUresult")
    public static int cuEventCreate(@NativeType("CUevent *") PointerBuffer phEvent, @NativeType("unsigned int") int Flags) {
        if (CHECKS) {
            check(phEvent, 1);
        }
        return ncuEventCreate(memAddress(phEvent), Flags);
    }

    // --- [ cuEventRecord ] ---

    @NativeType("CUresult")
    public static int cuEventRecord(@NativeType("CUevent") long hEvent, @NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.EventRecord;
        if (CHECKS) {
            check(hEvent);
            check(hStream);
        }
        return invokePPI(__functionAddress, hEvent, hStream);
    }

    // --- [ cuEventQuery ] ---

    @NativeType("CUresult")
    public static int cuEventQuery(@NativeType("CUevent") long hEvent) {
        long __functionAddress = Functions.EventQuery;
        if (CHECKS) {
            check(hEvent);
        }
        return invokePI(__functionAddress, hEvent);
    }

    // --- [ cuEventSynchronize ] ---

    @NativeType("CUresult")
    public static int cuEventSynchronize(@NativeType("CUevent") long hEvent) {
        long __functionAddress = Functions.EventSynchronize;
        if (CHECKS) {
            check(hEvent);
        }
        return invokePI(__functionAddress, hEvent);
    }

    // --- [ cuEventDestroy ] ---

    @NativeType("CUresult")
    public static int cuEventDestroy(@NativeType("CUevent") long hEvent) {
        long __functionAddress = Functions.EventDestroy;
        if (CHECKS) {
            check(hEvent);
        }
        return invokePI(__functionAddress, hEvent);
    }

    // --- [ cuEventElapsedTime ] ---

    public static int ncuEventElapsedTime(long pMilliseconds, long hStart, long hEnd) {
        long __functionAddress = Functions.EventElapsedTime;
        if (CHECKS) {
            check(hStart);
            check(hEnd);
        }
        return invokePPPI(__functionAddress, pMilliseconds, hStart, hEnd);
    }

    @NativeType("CUresult")
    public static int cuEventElapsedTime(@NativeType("float *") FloatBuffer pMilliseconds, @NativeType("CUevent") long hStart, @NativeType("CUevent") long hEnd) {
        if (CHECKS) {
            check(pMilliseconds, 1);
        }
        return ncuEventElapsedTime(memAddress(pMilliseconds), hStart, hEnd);
    }

    // --- [ cuImportExternalMemory ] ---

    public static int ncuImportExternalMemory(long extMem_out, long memHandleDesc) {
        long __functionAddress = Functions.ImportExternalMemory;
        return invokePPI(__functionAddress, extMem_out, memHandleDesc);
    }

    @NativeType("CUresult")
    public static int cuImportExternalMemory(@NativeType("CUexternalMemory *") PointerBuffer extMem_out, @NativeType("CUDA_EXTERNAL_MEMORY_HANDLE_DESC const *") CUDA_EXTERNAL_MEMORY_HANDLE_DESC memHandleDesc) {
        if (CHECKS) {
            check(extMem_out, 1);
        }
        return ncuImportExternalMemory(memAddress(extMem_out), memHandleDesc.address());
    }

    // --- [ cuExternalMemoryGetMappedBuffer ] ---

    public static int ncuExternalMemoryGetMappedBuffer(long devPtr, long extMem, long bufferDesc) {
        long __functionAddress = Functions.ExternalMemoryGetMappedBuffer;
        if (CHECKS) {
            check(extMem);
        }
        return invokePPPI(__functionAddress, devPtr, extMem, bufferDesc);
    }

    @NativeType("CUresult")
    public static int cuExternalMemoryGetMappedBuffer(@NativeType("CUdeviceptr *") PointerBuffer devPtr, @NativeType("CUexternalMemory") long extMem, @NativeType("CUDA_EXTERNAL_MEMORY_BUFFER_DESC const *") CUDA_EXTERNAL_MEMORY_BUFFER_DESC bufferDesc) {
        if (CHECKS) {
            check(devPtr, 1);
        }
        return ncuExternalMemoryGetMappedBuffer(memAddress(devPtr), extMem, bufferDesc.address());
    }

    // --- [ cuExternalMemoryGetMappedMipmappedArray ] ---

    public static int ncuExternalMemoryGetMappedMipmappedArray(long mipmap, long extMem, long mipmapDesc) {
        long __functionAddress = Functions.ExternalMemoryGetMappedMipmappedArray;
        if (CHECKS) {
            check(extMem);
        }
        return invokePPPI(__functionAddress, mipmap, extMem, mipmapDesc);
    }

    @NativeType("CUresult")
    public static int cuExternalMemoryGetMappedMipmappedArray(@NativeType("CUmipmappedArray *") PointerBuffer mipmap, @NativeType("CUexternalMemory") long extMem, @NativeType("CUDA_EXTERNAL_MEMORY_MIPMAPPED_ARRAY_DESC const *") CUDA_EXTERNAL_MEMORY_MIPMAPPED_ARRAY_DESC mipmapDesc) {
        if (CHECKS) {
            check(mipmap, 1);
        }
        return ncuExternalMemoryGetMappedMipmappedArray(memAddress(mipmap), extMem, mipmapDesc.address());
    }

    // --- [ cuDestroyExternalMemory ] ---

    @NativeType("CUresult")
    public static int cuDestroyExternalMemory(@NativeType("CUexternalMemory") long extMem) {
        long __functionAddress = Functions.DestroyExternalMemory;
        if (CHECKS) {
            check(extMem);
        }
        return invokePI(__functionAddress, extMem);
    }

    // --- [ cuImportExternalSemaphore ] ---

    public static int ncuImportExternalSemaphore(long extSem_out, long semHandleDesc) {
        long __functionAddress = Functions.ImportExternalSemaphore;
        return invokePPI(__functionAddress, extSem_out, semHandleDesc);
    }

    @NativeType("CUresult")
    public static int cuImportExternalSemaphore(@NativeType("CUexternalSemaphore *") PointerBuffer extSem_out, @NativeType("CUDA_EXTERNAL_SEMAPHORE_HANDLE_DESC const *") CUDA_EXTERNAL_SEMAPHORE_HANDLE_DESC semHandleDesc) {
        if (CHECKS) {
            check(extSem_out, 1);
        }
        return ncuImportExternalSemaphore(memAddress(extSem_out), semHandleDesc.address());
    }

    // --- [ cuSignalExternalSemaphoresAsync ] ---

    public static int ncuSignalExternalSemaphoresAsync(long extSemArray, long paramsArray, int numExtSems, long stream) {
        long __functionAddress = Functions.SignalExternalSemaphoresAsync;
        if (CHECKS) {
            check(stream);
        }
        return invokePPPI(__functionAddress, extSemArray, paramsArray, numExtSems, stream);
    }

    @NativeType("CUresult")
    public static int cuSignalExternalSemaphoresAsync(@NativeType("CUexternalSemaphore const *") PointerBuffer extSemArray, @Nullable @NativeType("CUDA_EXTERNAL_SEMAPHORE_SIGNAL_PARAMS const *") CUDA_EXTERNAL_SEMAPHORE_SIGNAL_PARAMS.Buffer paramsArray, @NativeType("CUstream") long stream) {
        if (CHECKS) {
            checkSafe(paramsArray, extSemArray.remaining());
        }
        return ncuSignalExternalSemaphoresAsync(memAddress(extSemArray), memAddressSafe(paramsArray), extSemArray.remaining(), stream);
    }

    // --- [ cuWaitExternalSemaphoresAsync ] ---

    public static int ncuWaitExternalSemaphoresAsync(long extSemArray, long paramsArray, int numExtSems, long stream) {
        long __functionAddress = Functions.WaitExternalSemaphoresAsync;
        if (CHECKS) {
            check(stream);
        }
        return invokePPPI(__functionAddress, extSemArray, paramsArray, numExtSems, stream);
    }

    @NativeType("CUresult")
    public static int cuWaitExternalSemaphoresAsync(@NativeType("CUexternalSemaphore const *") PointerBuffer extSemArray, @Nullable @NativeType("CUDA_EXTERNAL_SEMAPHORE_WAIT_PARAMS const *") CUDA_EXTERNAL_SEMAPHORE_WAIT_PARAMS.Buffer paramsArray, @NativeType("CUstream") long stream) {
        if (CHECKS) {
            checkSafe(paramsArray, extSemArray.remaining());
        }
        return ncuWaitExternalSemaphoresAsync(memAddress(extSemArray), memAddressSafe(paramsArray), extSemArray.remaining(), stream);
    }

    // --- [ cuDestroyExternalSemaphore ] ---

    @NativeType("CUresult")
    public static int cuDestroyExternalSemaphore(@NativeType("CUexternalSemaphore") long extSem) {
        long __functionAddress = Functions.DestroyExternalSemaphore;
        if (CHECKS) {
            check(extSem);
        }
        return invokePI(__functionAddress, extSem);
    }

    // --- [ cuStreamWaitValue32 ] ---

    @NativeType("CUresult")
    public static int cuStreamWaitValue32(@NativeType("CUstream") long stream, @NativeType("CUdeviceptr") long addr, @NativeType("cuuint32_t") int value, @NativeType("unsigned int") int flags) {
        long __functionAddress = Functions.StreamWaitValue32;
        if (CHECKS) {
            check(stream);
            check(addr);
        }
        return invokePPI(__functionAddress, stream, addr, value, flags);
    }

    // --- [ cuStreamWaitValue64 ] ---

    @NativeType("CUresult")
    public static int cuStreamWaitValue64(@NativeType("CUstream") long stream, @NativeType("CUdeviceptr") long addr, @NativeType("cuuint64_t") long value, @NativeType("unsigned int") int flags) {
        long __functionAddress = Functions.StreamWaitValue64;
        if (CHECKS) {
            check(stream);
            check(addr);
        }
        return invokePPJI(__functionAddress, stream, addr, value, flags);
    }

    // --- [ cuStreamWriteValue32 ] ---

    @NativeType("CUresult")
    public static int cuStreamWriteValue32(@NativeType("CUstream") long stream, @NativeType("CUdeviceptr") long addr, @NativeType("cuuint32_t") int value, @NativeType("unsigned int") int flags) {
        long __functionAddress = Functions.StreamWriteValue32;
        if (CHECKS) {
            check(stream);
            check(addr);
        }
        return invokePPI(__functionAddress, stream, addr, value, flags);
    }

    // --- [ cuStreamWriteValue64 ] ---

    @NativeType("CUresult")
    public static int cuStreamWriteValue64(@NativeType("CUstream") long stream, @NativeType("CUdeviceptr") long addr, @NativeType("cuuint64_t") long value, @NativeType("unsigned int") int flags) {
        long __functionAddress = Functions.StreamWriteValue64;
        if (CHECKS) {
            check(stream);
            check(addr);
        }
        return invokePPJI(__functionAddress, stream, addr, value, flags);
    }

    // --- [ cuStreamBatchMemOp ] ---

    public static int ncuStreamBatchMemOp(long stream, int count, long paramArray, int flags) {
        long __functionAddress = Functions.StreamBatchMemOp;
        if (CHECKS) {
            check(stream);
        }
        return invokePPI(__functionAddress, stream, count, paramArray, flags);
    }

    @NativeType("CUresult")
    public static int cuStreamBatchMemOp(@NativeType("CUstream") long stream, @NativeType("CUstreamBatchMemOpParams *") CUstreamBatchMemOpParams.Buffer paramArray, @NativeType("unsigned int") int flags) {
        return ncuStreamBatchMemOp(stream, paramArray.remaining(), paramArray.address(), flags);
    }

    // --- [ cuFuncGetAttribute ] ---

    public static int ncuFuncGetAttribute(long pi, int attrib, int hfunc) {
        long __functionAddress = Functions.FuncGetAttribute;
        return invokePI(__functionAddress, pi, attrib, hfunc);
    }

    @NativeType("CUresult")
    public static int cuFuncGetAttribute(@NativeType("int *") IntBuffer pi, @NativeType("CUfunction_attribute") int attrib, @NativeType("CUfunction") int hfunc) {
        if (CHECKS) {
            check(pi, 1);
        }
        return ncuFuncGetAttribute(memAddress(pi), attrib, hfunc);
    }

    // --- [ cuFuncSetAttribute ] ---

    @NativeType("CUresult")
    public static int cuFuncSetAttribute(@NativeType("CUfunction") int hfunc, @NativeType("CUfunction_attribute") int attrib, int value) {
        long __functionAddress = Functions.FuncSetAttribute;
        return invokeI(__functionAddress, hfunc, attrib, value);
    }

    // --- [ cuFuncSetCacheConfig ] ---

    @NativeType("CUresult")
    public static int cuFuncSetCacheConfig(@NativeType("CUfunction") int hfunc, @NativeType("CUfunc_cache") int config) {
        long __functionAddress = Functions.FuncSetCacheConfig;
        return invokeI(__functionAddress, hfunc, config);
    }

    // --- [ cuFuncSetSharedMemConfig ] ---

    @NativeType("CUresult")
    public static int cuFuncSetSharedMemConfig(@NativeType("CUfunction") int hfunc, @NativeType("CUsharedconfig") int config) {
        long __functionAddress = Functions.FuncSetSharedMemConfig;
        return invokeI(__functionAddress, hfunc, config);
    }

    // --- [ cuLaunchKernel ] ---

    public static int ncuLaunchKernel(int f, int gridDimX, int gridDimY, int gridDimZ, int blockDimX, int blockDimY, int blockDimZ, int sharedMemBytes, long hStream, long kernelParams, long extra) {
        long __functionAddress = Functions.LaunchKernel;
        if (CHECKS) {
            check(hStream);
        }
        return invokePPPI(__functionAddress, f, gridDimX, gridDimY, gridDimZ, blockDimX, blockDimY, blockDimZ, sharedMemBytes, hStream, kernelParams, extra);
    }

    @NativeType("CUresult")
    public static int cuLaunchKernel(@NativeType("CUfunction") int f, @NativeType("unsigned int") int gridDimX, @NativeType("unsigned int") int gridDimY, @NativeType("unsigned int") int gridDimZ, @NativeType("unsigned int") int blockDimX, @NativeType("unsigned int") int blockDimY, @NativeType("unsigned int") int blockDimZ, @NativeType("unsigned int") int sharedMemBytes, @NativeType("CUstream") long hStream, @Nullable @NativeType("void **") PointerBuffer kernelParams, @Nullable @NativeType("void **") PointerBuffer extra) {
        return ncuLaunchKernel(f, gridDimX, gridDimY, gridDimZ, blockDimX, blockDimY, blockDimZ, sharedMemBytes, hStream, memAddressSafe(kernelParams), memAddressSafe(extra));
    }

    // --- [ cuLaunchCooperativeKernel ] ---

    public static int ncuLaunchCooperativeKernel(int f, int gridDimX, int gridDimY, int gridDimZ, int blockDimX, int blockDimY, int blockDimZ, int sharedMemBytes, long hStream, long kernelParams) {
        long __functionAddress = Functions.LaunchCooperativeKernel;
        if (CHECKS) {
            check(hStream);
        }
        return invokePPI(__functionAddress, f, gridDimX, gridDimY, gridDimZ, blockDimX, blockDimY, blockDimZ, sharedMemBytes, hStream, kernelParams);
    }

    @NativeType("CUresult")
    public static int cuLaunchCooperativeKernel(@NativeType("CUfunction") int f, @NativeType("unsigned int") int gridDimX, @NativeType("unsigned int") int gridDimY, @NativeType("unsigned int") int gridDimZ, @NativeType("unsigned int") int blockDimX, @NativeType("unsigned int") int blockDimY, @NativeType("unsigned int") int blockDimZ, @NativeType("unsigned int") int sharedMemBytes, @NativeType("CUstream") long hStream, @Nullable @NativeType("void **") PointerBuffer kernelParams) {
        return ncuLaunchCooperativeKernel(f, gridDimX, gridDimY, gridDimZ, blockDimX, blockDimY, blockDimZ, sharedMemBytes, hStream, memAddressSafe(kernelParams));
    }

    // --- [ cuLaunchCooperativeKernelMultiDevice ] ---

    public static int ncuLaunchCooperativeKernelMultiDevice(long launchParamsList, int numDevices, int flags) {
        long __functionAddress = Functions.LaunchCooperativeKernelMultiDevice;
        if (CHECKS) {
            CUDA_LAUNCH_PARAMS.validate(launchParamsList, numDevices);
        }
        return invokePI(__functionAddress, launchParamsList, numDevices, flags);
    }

    @NativeType("CUresult")
    public static int cuLaunchCooperativeKernelMultiDevice(@NativeType("CUDA_LAUNCH_PARAMS *") CUDA_LAUNCH_PARAMS.Buffer launchParamsList, @NativeType("unsigned int") int flags) {
        return ncuLaunchCooperativeKernelMultiDevice(launchParamsList.address(), launchParamsList.remaining(), flags);
    }

    // --- [ cuLaunchHostFunc ] ---

    @NativeType("CUresult")
    public static int cuLaunchHostFunc(@NativeType("CUstream") long hStream, @NativeType("CUhostFn") long fn, @NativeType("void *") long userData) {
        long __functionAddress = Functions.LaunchHostFunc;
        if (CHECKS) {
            check(hStream);
            check(fn);
            check(userData);
        }
        return invokePPPI(__functionAddress, hStream, fn, userData);
    }

    // --- [ cuGraphCreate ] ---

    public static int ncuGraphCreate(long phGraph, int flags) {
        long __functionAddress = Functions.GraphCreate;
        return invokePI(__functionAddress, phGraph, flags);
    }

    @NativeType("CUresult")
    public static int cuGraphCreate(@NativeType("CUgraph *") PointerBuffer phGraph, @NativeType("unsigned int") int flags) {
        if (CHECKS) {
            check(phGraph, 1);
        }
        return ncuGraphCreate(memAddress(phGraph), flags);
    }

    // --- [ cuGraphAddKernelNode ] ---

    public static int ncuGraphAddKernelNode(long phGraphNode, long hGraph, long dependencies, long numDependencies, long nodeParams) {
        long __functionAddress = Functions.GraphAddKernelNode;
        if (CHECKS) {
            check(hGraph);
            CUDA_KERNEL_NODE_PARAMS.validate(nodeParams);
        }
        return invokePPPPPI(__functionAddress, phGraphNode, hGraph, dependencies, numDependencies, nodeParams);
    }

    @NativeType("CUresult")
    public static int cuGraphAddKernelNode(@NativeType("CUgraphNode *") PointerBuffer phGraphNode, @NativeType("CUgraph") long hGraph, @Nullable @NativeType("CUgraphNode *") PointerBuffer dependencies, @NativeType("CUDA_KERNEL_NODE_PARAMS const *") CUDA_KERNEL_NODE_PARAMS nodeParams) {
        if (CHECKS) {
            check(phGraphNode, 1);
        }
        return ncuGraphAddKernelNode(memAddress(phGraphNode), hGraph, memAddressSafe(dependencies), remainingSafe(dependencies), nodeParams.address());
    }

    // --- [ cuGraphKernelNodeGetParams ] ---

    public static int ncuGraphKernelNodeGetParams(long hNode, long nodeParams) {
        long __functionAddress = Functions.GraphKernelNodeGetParams;
        if (CHECKS) {
            check(hNode);
        }
        return invokePPI(__functionAddress, hNode, nodeParams);
    }

    @NativeType("CUresult")
    public static int cuGraphKernelNodeGetParams(@NativeType("CUgraphNode") long hNode, @NativeType("CUDA_KERNEL_NODE_PARAMS *") CUDA_KERNEL_NODE_PARAMS nodeParams) {
        return ncuGraphKernelNodeGetParams(hNode, nodeParams.address());
    }

    // --- [ cuGraphKernelNodeSetParams ] ---

    public static int ncuGraphKernelNodeSetParams(long hNode, long nodeParams) {
        long __functionAddress = Functions.GraphKernelNodeSetParams;
        if (CHECKS) {
            check(hNode);
            CUDA_KERNEL_NODE_PARAMS.validate(nodeParams);
        }
        return invokePPI(__functionAddress, hNode, nodeParams);
    }

    @NativeType("CUresult")
    public static int cuGraphKernelNodeSetParams(@NativeType("CUgraphNode") long hNode, @NativeType("CUDA_KERNEL_NODE_PARAMS const *") CUDA_KERNEL_NODE_PARAMS nodeParams) {
        return ncuGraphKernelNodeSetParams(hNode, nodeParams.address());
    }

    // --- [ cuGraphAddMemcpyNode ] ---

    public static int ncuGraphAddMemcpyNode(long phGraphNode, long hGraph, long dependencies, long numDependencies, long copyParams, long ctx) {
        long __functionAddress = Functions.GraphAddMemcpyNode;
        if (CHECKS) {
            check(hGraph);
            CUDA_MEMCPY3D.validate(copyParams);
            check(ctx);
        }
        return invokePPPPPPI(__functionAddress, phGraphNode, hGraph, dependencies, numDependencies, copyParams, ctx);
    }

    @NativeType("CUresult")
    public static int cuGraphAddMemcpyNode(@NativeType("CUgraphNode *") PointerBuffer phGraphNode, @NativeType("CUgraph") long hGraph, @Nullable @NativeType("CUgraphNode *") PointerBuffer dependencies, @NativeType("CUDA_MEMCPY3D const *") CUDA_MEMCPY3D copyParams, @NativeType("CUcontext") long ctx) {
        if (CHECKS) {
            check(phGraphNode, 1);
        }
        return ncuGraphAddMemcpyNode(memAddress(phGraphNode), hGraph, memAddressSafe(dependencies), remainingSafe(dependencies), copyParams.address(), ctx);
    }

    // --- [ cuGraphMemcpyNodeGetParams ] ---

    public static int ncuGraphMemcpyNodeGetParams(long hNode, long nodeParams) {
        long __functionAddress = Functions.GraphMemcpyNodeGetParams;
        if (CHECKS) {
            check(hNode);
        }
        return invokePPI(__functionAddress, hNode, nodeParams);
    }

    @NativeType("CUresult")
    public static int cuGraphMemcpyNodeGetParams(@NativeType("CUgraphNode") long hNode, @NativeType("CUDA_MEMCPY3D *") CUDA_MEMCPY3D nodeParams) {
        return ncuGraphMemcpyNodeGetParams(hNode, nodeParams.address());
    }

    // --- [ cuGraphMemcpyNodeSetParams ] ---

    public static int ncuGraphMemcpyNodeSetParams(long hNode, long nodeParams) {
        long __functionAddress = Functions.GraphMemcpyNodeSetParams;
        if (CHECKS) {
            check(hNode);
            CUDA_MEMCPY3D.validate(nodeParams);
        }
        return invokePPI(__functionAddress, hNode, nodeParams);
    }

    @NativeType("CUresult")
    public static int cuGraphMemcpyNodeSetParams(@NativeType("CUgraphNode") long hNode, @NativeType("CUDA_MEMCPY3D const *") CUDA_MEMCPY3D nodeParams) {
        return ncuGraphMemcpyNodeSetParams(hNode, nodeParams.address());
    }

    // --- [ cuGraphAddMemsetNode ] ---

    public static int ncuGraphAddMemsetNode(long phGraphNode, long hGraph, long dependencies, long numDependencies, long memsetParams, long ctx) {
        long __functionAddress = Functions.GraphAddMemsetNode;
        if (CHECKS) {
            check(hGraph);
            CUDA_MEMSET_NODE_PARAMS.validate(memsetParams);
            check(ctx);
        }
        return invokePPPPPPI(__functionAddress, phGraphNode, hGraph, dependencies, numDependencies, memsetParams, ctx);
    }

    @NativeType("CUresult")
    public static int cuGraphAddMemsetNode(@NativeType("CUgraphNode *") PointerBuffer phGraphNode, @NativeType("CUgraph") long hGraph, @Nullable @NativeType("CUgraphNode *") PointerBuffer dependencies, @NativeType("CUDA_MEMSET_NODE_PARAMS const *") CUDA_MEMSET_NODE_PARAMS memsetParams, @NativeType("CUcontext") long ctx) {
        if (CHECKS) {
            check(phGraphNode, 1);
        }
        return ncuGraphAddMemsetNode(memAddress(phGraphNode), hGraph, memAddressSafe(dependencies), remainingSafe(dependencies), memsetParams.address(), ctx);
    }

    // --- [ cuGraphMemsetNodeGetParams ] ---

    public static int ncuGraphMemsetNodeGetParams(long hNode, long nodeParams) {
        long __functionAddress = Functions.GraphMemsetNodeGetParams;
        if (CHECKS) {
            check(hNode);
        }
        return invokePPI(__functionAddress, hNode, nodeParams);
    }

    @NativeType("CUresult")
    public static int cuGraphMemsetNodeGetParams(@NativeType("CUgraphNode") long hNode, @NativeType("CUDA_MEMSET_NODE_PARAMS *") CUDA_MEMSET_NODE_PARAMS nodeParams) {
        return ncuGraphMemsetNodeGetParams(hNode, nodeParams.address());
    }

    // --- [ cuGraphMemsetNodeSetParams ] ---

    public static int ncuGraphMemsetNodeSetParams(long hNode, long nodeParams) {
        long __functionAddress = Functions.GraphMemsetNodeSetParams;
        if (CHECKS) {
            check(hNode);
            CUDA_MEMSET_NODE_PARAMS.validate(nodeParams);
        }
        return invokePPI(__functionAddress, hNode, nodeParams);
    }

    @NativeType("CUresult")
    public static int cuGraphMemsetNodeSetParams(@NativeType("CUgraphNode") long hNode, @NativeType("CUDA_MEMSET_NODE_PARAMS const *") CUDA_MEMSET_NODE_PARAMS nodeParams) {
        return ncuGraphMemsetNodeSetParams(hNode, nodeParams.address());
    }

    // --- [ cuGraphAddHostNode ] ---

    public static int ncuGraphAddHostNode(long phGraphNode, long hGraph, long dependencies, long numDependencies, long nodeParams) {
        long __functionAddress = Functions.GraphAddHostNode;
        if (CHECKS) {
            check(hGraph);
            CUDA_HOST_NODE_PARAMS.validate(nodeParams);
        }
        return invokePPPPPI(__functionAddress, phGraphNode, hGraph, dependencies, numDependencies, nodeParams);
    }

    @NativeType("CUresult")
    public static int cuGraphAddHostNode(@NativeType("CUgraphNode *") PointerBuffer phGraphNode, @NativeType("CUgraph") long hGraph, @Nullable @NativeType("CUgraphNode *") PointerBuffer dependencies, @NativeType("CUDA_HOST_NODE_PARAMS const *") CUDA_HOST_NODE_PARAMS nodeParams) {
        if (CHECKS) {
            check(phGraphNode, 1);
        }
        return ncuGraphAddHostNode(memAddress(phGraphNode), hGraph, memAddressSafe(dependencies), remainingSafe(dependencies), nodeParams.address());
    }

    // --- [ cuGraphHostNodeGetParams ] ---

    public static int ncuGraphHostNodeGetParams(long hNode, long nodeParams) {
        long __functionAddress = Functions.GraphHostNodeGetParams;
        if (CHECKS) {
            check(hNode);
        }
        return invokePPI(__functionAddress, hNode, nodeParams);
    }

    @NativeType("CUresult")
    public static int cuGraphHostNodeGetParams(@NativeType("CUgraphNode") long hNode, @NativeType("CUDA_HOST_NODE_PARAMS *") CUDA_HOST_NODE_PARAMS nodeParams) {
        return ncuGraphHostNodeGetParams(hNode, nodeParams.address());
    }

    // --- [ cuGraphHostNodeSetParams ] ---

    public static int ncuGraphHostNodeSetParams(long hNode, long nodeParams) {
        long __functionAddress = Functions.GraphHostNodeSetParams;
        if (CHECKS) {
            check(hNode);
            CUDA_HOST_NODE_PARAMS.validate(nodeParams);
        }
        return invokePPI(__functionAddress, hNode, nodeParams);
    }

    @NativeType("CUresult")
    public static int cuGraphHostNodeSetParams(@NativeType("CUgraphNode") long hNode, @NativeType("CUDA_HOST_NODE_PARAMS const *") CUDA_HOST_NODE_PARAMS nodeParams) {
        return ncuGraphHostNodeSetParams(hNode, nodeParams.address());
    }

    // --- [ cuGraphAddChildGraphNode ] ---

    public static int ncuGraphAddChildGraphNode(long phGraphNode, long hGraph, long dependencies, long numDependencies, long childGraph) {
        long __functionAddress = Functions.GraphAddChildGraphNode;
        if (CHECKS) {
            check(hGraph);
            check(childGraph);
        }
        return invokePPPPPI(__functionAddress, phGraphNode, hGraph, dependencies, numDependencies, childGraph);
    }

    @NativeType("CUresult")
    public static int cuGraphAddChildGraphNode(@NativeType("CUgraphNode *") PointerBuffer phGraphNode, @NativeType("CUgraph") long hGraph, @Nullable @NativeType("CUgraphNode *") PointerBuffer dependencies, @NativeType("CUgraph") long childGraph) {
        if (CHECKS) {
            check(phGraphNode, 1);
        }
        return ncuGraphAddChildGraphNode(memAddress(phGraphNode), hGraph, memAddressSafe(dependencies), remainingSafe(dependencies), childGraph);
    }

    // --- [ cuGraphChildGraphNodeGetGraph ] ---

    public static int ncuGraphChildGraphNodeGetGraph(long hNode, long phGraph) {
        long __functionAddress = Functions.GraphChildGraphNodeGetGraph;
        if (CHECKS) {
            check(hNode);
        }
        return invokePPI(__functionAddress, hNode, phGraph);
    }

    @NativeType("CUresult")
    public static int cuGraphChildGraphNodeGetGraph(@NativeType("CUgraphNode") long hNode, @NativeType("CUgraph *") PointerBuffer phGraph) {
        if (CHECKS) {
            check(phGraph, 1);
        }
        return ncuGraphChildGraphNodeGetGraph(hNode, memAddress(phGraph));
    }

    // --- [ cuGraphAddEmptyNode ] ---

    public static int ncuGraphAddEmptyNode(long phGraphNode, long hGraph, long dependencies, long numDependencies) {
        long __functionAddress = Functions.GraphAddEmptyNode;
        if (CHECKS) {
            check(hGraph);
        }
        return invokePPPPI(__functionAddress, phGraphNode, hGraph, dependencies, numDependencies);
    }

    @NativeType("CUresult")
    public static int cuGraphAddEmptyNode(@NativeType("CUgraphNode *") PointerBuffer phGraphNode, @NativeType("CUgraph") long hGraph, @Nullable @NativeType("CUgraphNode *") PointerBuffer dependencies) {
        if (CHECKS) {
            check(phGraphNode, 1);
        }
        return ncuGraphAddEmptyNode(memAddress(phGraphNode), hGraph, memAddressSafe(dependencies), remainingSafe(dependencies));
    }

    // --- [ cuGraphClone ] ---

    public static int ncuGraphClone(long phGraphClone, long originalGraph) {
        long __functionAddress = Functions.GraphClone;
        if (CHECKS) {
            check(originalGraph);
        }
        return invokePPI(__functionAddress, phGraphClone, originalGraph);
    }

    @NativeType("CUresult")
    public static int cuGraphClone(@NativeType("CUgraph *") PointerBuffer phGraphClone, @NativeType("CUgraph") long originalGraph) {
        if (CHECKS) {
            check(phGraphClone, 1);
        }
        return ncuGraphClone(memAddress(phGraphClone), originalGraph);
    }

    // --- [ cuGraphNodeFindInClone ] ---

    public static int ncuGraphNodeFindInClone(long phNode, long hOriginalNode, long hClonedGraph) {
        long __functionAddress = Functions.GraphNodeFindInClone;
        if (CHECKS) {
            check(hOriginalNode);
            check(hClonedGraph);
        }
        return invokePPPI(__functionAddress, phNode, hOriginalNode, hClonedGraph);
    }

    @NativeType("CUresult")
    public static int cuGraphNodeFindInClone(@NativeType("CUgraphNode *") PointerBuffer phNode, @NativeType("CUgraphNode") long hOriginalNode, @NativeType("CUgraph") long hClonedGraph) {
        if (CHECKS) {
            check(phNode, 1);
        }
        return ncuGraphNodeFindInClone(memAddress(phNode), hOriginalNode, hClonedGraph);
    }

    // --- [ cuGraphNodeGetType ] ---

    public static int ncuGraphNodeGetType(long hNode, long type) {
        long __functionAddress = Functions.GraphNodeGetType;
        if (CHECKS) {
            check(hNode);
        }
        return invokePPI(__functionAddress, hNode, type);
    }

    @NativeType("CUresult")
    public static int cuGraphNodeGetType(@NativeType("CUgraphNode") long hNode, @NativeType("CUgraphNodeType *") IntBuffer type) {
        if (CHECKS) {
            check(type, 1);
        }
        return ncuGraphNodeGetType(hNode, memAddress(type));
    }

    // --- [ cuGraphGetNodes ] ---

    public static int ncuGraphGetNodes(long hGraph, long nodes, long numNodes) {
        long __functionAddress = Functions.GraphGetNodes;
        if (CHECKS) {
            check(hGraph);
        }
        return invokePPPI(__functionAddress, hGraph, nodes, numNodes);
    }

    @NativeType("CUresult")
    public static int cuGraphGetNodes(@NativeType("CUgraph") long hGraph, @Nullable @NativeType("CUgraphNode *") PointerBuffer nodes, @NativeType("size_t *") PointerBuffer numNodes) {
        if (CHECKS) {
            check(numNodes, 1);
            checkSafe(nodes, numNodes.get(numNodes.position()));
        }
        return ncuGraphGetNodes(hGraph, memAddressSafe(nodes), memAddress(numNodes));
    }

    // --- [ cuGraphGetRootNodes ] ---

    public static int ncuGraphGetRootNodes(long hGraph, long rootNodes, long numRootNodes) {
        long __functionAddress = Functions.GraphGetRootNodes;
        if (CHECKS) {
            check(hGraph);
        }
        return invokePPPI(__functionAddress, hGraph, rootNodes, numRootNodes);
    }

    @NativeType("CUresult")
    public static int cuGraphGetRootNodes(@NativeType("CUgraph") long hGraph, @Nullable @NativeType("CUgraphNode *") PointerBuffer rootNodes, @NativeType("size_t *") PointerBuffer numRootNodes) {
        if (CHECKS) {
            check(numRootNodes, 1);
            checkSafe(rootNodes, numRootNodes.get(numRootNodes.position()));
        }
        return ncuGraphGetRootNodes(hGraph, memAddressSafe(rootNodes), memAddress(numRootNodes));
    }

    // --- [ cuGraphGetEdges ] ---

    public static int ncuGraphGetEdges(long hGraph, long from, long to, long numEdges) {
        long __functionAddress = Functions.GraphGetEdges;
        if (CHECKS) {
            check(hGraph);
        }
        return invokePPPPI(__functionAddress, hGraph, from, to, numEdges);
    }

    @NativeType("CUresult")
    public static int cuGraphGetEdges(@NativeType("CUgraph") long hGraph, @Nullable @NativeType("CUgraphNode *") PointerBuffer from, @Nullable @NativeType("CUgraphNode *") PointerBuffer to, @NativeType("size_t *") PointerBuffer numEdges) {
        if (CHECKS) {
            check(numEdges, 1);
            checkSafe(from, numEdges.get(numEdges.position()));
            checkSafe(to, numEdges.get(numEdges.position()));
        }
        return ncuGraphGetEdges(hGraph, memAddressSafe(from), memAddressSafe(to), memAddress(numEdges));
    }

    // --- [ cuGraphNodeGetDependencies ] ---

    public static int ncuGraphNodeGetDependencies(long hNode, long dependencies, long numDependencies) {
        long __functionAddress = Functions.GraphNodeGetDependencies;
        if (CHECKS) {
            check(hNode);
        }
        return invokePPPI(__functionAddress, hNode, dependencies, numDependencies);
    }

    @NativeType("CUresult")
    public static int cuGraphNodeGetDependencies(@NativeType("CUgraphNode") long hNode, @Nullable @NativeType("CUgraphNode *") PointerBuffer dependencies, @NativeType("size_t *") PointerBuffer numDependencies) {
        if (CHECKS) {
            check(numDependencies, 1);
            checkSafe(dependencies, numDependencies.get(numDependencies.position()));
        }
        return ncuGraphNodeGetDependencies(hNode, memAddressSafe(dependencies), memAddress(numDependencies));
    }

    // --- [ cuGraphNodeGetDependentNodes ] ---

    public static int ncuGraphNodeGetDependentNodes(long hNode, long dependentNodes, long numDependentNodes) {
        long __functionAddress = Functions.GraphNodeGetDependentNodes;
        if (CHECKS) {
            check(hNode);
        }
        return invokePPPI(__functionAddress, hNode, dependentNodes, numDependentNodes);
    }

    @NativeType("CUresult")
    public static int cuGraphNodeGetDependentNodes(@NativeType("CUgraphNode") long hNode, @Nullable @NativeType("CUgraphNode *") PointerBuffer dependentNodes, @NativeType("size_t *") PointerBuffer numDependentNodes) {
        if (CHECKS) {
            check(numDependentNodes, 1);
            checkSafe(dependentNodes, numDependentNodes.get(numDependentNodes.position()));
        }
        return ncuGraphNodeGetDependentNodes(hNode, memAddressSafe(dependentNodes), memAddress(numDependentNodes));
    }

    // --- [ cuGraphAddDependencies ] ---

    public static int ncuGraphAddDependencies(long hGraph, long from, long to, long numDependencies) {
        long __functionAddress = Functions.GraphAddDependencies;
        if (CHECKS) {
            check(hGraph);
        }
        return invokePPPPI(__functionAddress, hGraph, from, to, numDependencies);
    }

    @NativeType("CUresult")
    public static int cuGraphAddDependencies(@NativeType("CUgraph") long hGraph, @NativeType("CUgraphNode *") PointerBuffer from, @NativeType("CUgraphNode *") PointerBuffer to) {
        if (CHECKS) {
            check(to, from.remaining());
        }
        return ncuGraphAddDependencies(hGraph, memAddress(from), memAddress(to), from.remaining());
    }

    // --- [ cuGraphRemoveDependencies ] ---

    public static int ncuGraphRemoveDependencies(long hGraph, long from, long to, long numDependencies) {
        long __functionAddress = Functions.GraphRemoveDependencies;
        if (CHECKS) {
            check(hGraph);
        }
        return invokePPPPI(__functionAddress, hGraph, from, to, numDependencies);
    }

    @NativeType("CUresult")
    public static int cuGraphRemoveDependencies(@NativeType("CUgraph") long hGraph, @NativeType("CUgraphNode *") PointerBuffer from, @NativeType("CUgraphNode *") PointerBuffer to) {
        if (CHECKS) {
            check(to, from.remaining());
        }
        return ncuGraphRemoveDependencies(hGraph, memAddress(from), memAddress(to), from.remaining());
    }

    // --- [ cuGraphDestroyNode ] ---

    @NativeType("CUresult")
    public static int cuGraphDestroyNode(@NativeType("CUgraphNode") long hNode) {
        long __functionAddress = Functions.GraphDestroyNode;
        if (CHECKS) {
            check(hNode);
        }
        return invokePI(__functionAddress, hNode);
    }

    // --- [ cuGraphInstantiate ] ---

    public static int ncuGraphInstantiate(long phGraphExec, long hGraph, long phErrorNode, long logBuffer, long bufferSize) {
        long __functionAddress = Functions.GraphInstantiate;
        if (CHECKS) {
            check(hGraph);
        }
        return invokePPPPPI(__functionAddress, phGraphExec, hGraph, phErrorNode, logBuffer, bufferSize);
    }

    @NativeType("CUresult")
    public static int cuGraphInstantiate(@NativeType("CUgraphExec *") PointerBuffer phGraphExec, @NativeType("CUgraph") long hGraph, @NativeType("CUgraphNode *") PointerBuffer phErrorNode, @NativeType("char *") ByteBuffer logBuffer) {
        if (CHECKS) {
            check(phGraphExec, 1);
            check(phErrorNode, 1);
        }
        return ncuGraphInstantiate(memAddress(phGraphExec), hGraph, memAddress(phErrorNode), memAddress(logBuffer), logBuffer.remaining());
    }

    // --- [ cuGraphLaunch ] ---

    @NativeType("CUresult")
    public static int cuGraphLaunch(@NativeType("CUgraphExec") long hGraphExec, @NativeType("CUstream") long hStream) {
        long __functionAddress = Functions.GraphLaunch;
        if (CHECKS) {
            check(hGraphExec);
            check(hStream);
        }
        return invokePPI(__functionAddress, hGraphExec, hStream);
    }

    // --- [ cuGraphExecDestroy ] ---

    @NativeType("CUresult")
    public static int cuGraphExecDestroy(@NativeType("CUgraphExec") long hGraphExec) {
        long __functionAddress = Functions.GraphExecDestroy;
        if (CHECKS) {
            check(hGraphExec);
        }
        return invokePI(__functionAddress, hGraphExec);
    }

    // --- [ cuGraphDestroy ] ---

    @NativeType("CUresult")
    public static int cuGraphDestroy(@NativeType("CUgraph") long hGraph) {
        long __functionAddress = Functions.GraphDestroy;
        if (CHECKS) {
            check(hGraph);
        }
        return invokePI(__functionAddress, hGraph);
    }

    // --- [ cuOccupancyMaxActiveBlocksPerMultiprocessor ] ---

    public static int ncuOccupancyMaxActiveBlocksPerMultiprocessor(long numBlocks, int func, int blockSize, long dynamicSMemSize) {
        long __functionAddress = Functions.OccupancyMaxActiveBlocksPerMultiprocessor;
        return invokePPI(__functionAddress, numBlocks, func, blockSize, dynamicSMemSize);
    }

    @NativeType("CUresult")
    public static int cuOccupancyMaxActiveBlocksPerMultiprocessor(@NativeType("int *") IntBuffer numBlocks, @NativeType("CUfunction") int func, int blockSize, @NativeType("size_t") long dynamicSMemSize) {
        if (CHECKS) {
            check(numBlocks, 1);
        }
        return ncuOccupancyMaxActiveBlocksPerMultiprocessor(memAddress(numBlocks), func, blockSize, dynamicSMemSize);
    }

    // --- [ cuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags ] ---

    public static int ncuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(long numBlocks, int func, int blockSize, long dynamicSMemSize, int flags) {
        long __functionAddress = Functions.OccupancyMaxActiveBlocksPerMultiprocessorWithFlags;
        return invokePPI(__functionAddress, numBlocks, func, blockSize, dynamicSMemSize, flags);
    }

    @NativeType("CUresult")
    public static int cuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(@NativeType("int *") IntBuffer numBlocks, @NativeType("CUfunction") int func, int blockSize, @NativeType("size_t") long dynamicSMemSize, @NativeType("unsigned int") int flags) {
        if (CHECKS) {
            check(numBlocks, 1);
        }
        return ncuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(memAddress(numBlocks), func, blockSize, dynamicSMemSize, flags);
    }

    // --- [ cuOccupancyMaxPotentialBlockSize ] ---

    public static int ncuOccupancyMaxPotentialBlockSize(long minGridSize, long blockSize, int func, long blockSizeToDynamicSMemSize, long dynamicSMemSize, int blockSizeLimit) {
        long __functionAddress = Functions.OccupancyMaxPotentialBlockSize;
        if (CHECKS) {
            check(blockSizeToDynamicSMemSize);
        }
        return invokePPPPI(__functionAddress, minGridSize, blockSize, func, blockSizeToDynamicSMemSize, dynamicSMemSize, blockSizeLimit);
    }

    @NativeType("CUresult")
    public static int cuOccupancyMaxPotentialBlockSize(@NativeType("int *") IntBuffer minGridSize, @NativeType("int *") IntBuffer blockSize, @NativeType("CUfunction") int func, @NativeType("CUoccupancyB2DSize") long blockSizeToDynamicSMemSize, @NativeType("size_t") long dynamicSMemSize, int blockSizeLimit) {
        if (CHECKS) {
            check(minGridSize, 1);
            check(blockSize, 1);
        }
        return ncuOccupancyMaxPotentialBlockSize(memAddress(minGridSize), memAddress(blockSize), func, blockSizeToDynamicSMemSize, dynamicSMemSize, blockSizeLimit);
    }

    // --- [ cuOccupancyMaxPotentialBlockSizeWithFlags ] ---

    public static int ncuOccupancyMaxPotentialBlockSizeWithFlags(long minGridSize, long blockSize, int func, long blockSizeToDynamicSMemSize, long dynamicSMemSize, int blockSizeLimit, int flags) {
        long __functionAddress = Functions.OccupancyMaxPotentialBlockSizeWithFlags;
        if (CHECKS) {
            check(blockSizeToDynamicSMemSize);
        }
        return invokePPPPI(__functionAddress, minGridSize, blockSize, func, blockSizeToDynamicSMemSize, dynamicSMemSize, blockSizeLimit, flags);
    }

    @NativeType("CUresult")
    public static int cuOccupancyMaxPotentialBlockSizeWithFlags(@NativeType("int *") IntBuffer minGridSize, @NativeType("int *") IntBuffer blockSize, @NativeType("CUfunction") int func, @NativeType("CUoccupancyB2DSize") long blockSizeToDynamicSMemSize, @NativeType("size_t") long dynamicSMemSize, int blockSizeLimit, @NativeType("unsigned int") int flags) {
        if (CHECKS) {
            check(minGridSize, 1);
            check(blockSize, 1);
        }
        return ncuOccupancyMaxPotentialBlockSizeWithFlags(memAddress(minGridSize), memAddress(blockSize), func, blockSizeToDynamicSMemSize, dynamicSMemSize, blockSizeLimit, flags);
    }

    // --- [ cuTexRefSetArray ] ---

    @NativeType("CUresult")
    public static int cuTexRefSetArray(@NativeType("CUtexref") long hTexRef, @NativeType("CUarray") long hArray, @NativeType("unsigned int") int Flags) {
        long __functionAddress = Functions.TexRefSetArray;
        if (CHECKS) {
            check(hTexRef);
            check(hArray);
        }
        return invokePPI(__functionAddress, hTexRef, hArray, Flags);
    }

    // --- [ cuTexRefSetMipmappedArray ] ---

    @NativeType("CUresult")
    public static int cuTexRefSetMipmappedArray(@NativeType("CUtexref") long hTexRef, @NativeType("CUmipmappedArray") long hMipmappedArray, @NativeType("unsigned int") int Flags) {
        long __functionAddress = Functions.TexRefSetMipmappedArray;
        if (CHECKS) {
            check(hTexRef);
            check(hMipmappedArray);
        }
        return invokePPI(__functionAddress, hTexRef, hMipmappedArray, Flags);
    }

    // --- [ cuTexRefSetAddress ] ---

    public static int ncuTexRefSetAddress(long ByteOffset, long hTexRef, long dptr, long bytes) {
        long __functionAddress = Functions.TexRefSetAddress;
        if (CHECKS) {
            check(hTexRef);
            check(dptr);
        }
        return invokePPPPI(__functionAddress, ByteOffset, hTexRef, dptr, bytes);
    }

    @NativeType("CUresult")
    public static int cuTexRefSetAddress(@NativeType("size_t *") PointerBuffer ByteOffset, @NativeType("CUtexref") long hTexRef, @NativeType("CUdeviceptr") long dptr, @NativeType("size_t") long bytes) {
        if (CHECKS) {
            check(ByteOffset, 1);
        }
        return ncuTexRefSetAddress(memAddress(ByteOffset), hTexRef, dptr, bytes);
    }

    // --- [ cuTexRefSetAddress2D ] ---

    public static int ncuTexRefSetAddress2D(long hTexRef, long desc, long dptr, long Pitch) {
        long __functionAddress = Functions.TexRefSetAddress2D;
        if (CHECKS) {
            check(hTexRef);
            check(dptr);
        }
        return invokePPPPI(__functionAddress, hTexRef, desc, dptr, Pitch);
    }

    @NativeType("CUresult")
    public static int cuTexRefSetAddress2D(@NativeType("CUtexref") long hTexRef, @NativeType("CUDA_ARRAY_DESCRIPTOR const *") CUDA_ARRAY_DESCRIPTOR desc, @NativeType("CUdeviceptr") long dptr, @NativeType("size_t") long Pitch) {
        return ncuTexRefSetAddress2D(hTexRef, desc.address(), dptr, Pitch);
    }

    // --- [ cuTexRefSetFormat ] ---

    @NativeType("CUresult")
    public static int cuTexRefSetFormat(@NativeType("CUtexref") long hTexRef, @NativeType("CUarray_format") int fmt, int NumPackedComponents) {
        long __functionAddress = Functions.TexRefSetFormat;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePI(__functionAddress, hTexRef, fmt, NumPackedComponents);
    }

    // --- [ cuTexRefSetAddressMode ] ---

    @NativeType("CUresult")
    public static int cuTexRefSetAddressMode(@NativeType("CUtexref") long hTexRef, int dim, @NativeType("CUaddress_mode") int am) {
        long __functionAddress = Functions.TexRefSetAddressMode;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePI(__functionAddress, hTexRef, dim, am);
    }

    // --- [ cuTexRefSetFilterMode ] ---

    @NativeType("CUresult")
    public static int cuTexRefSetFilterMode(@NativeType("CUtexref") long hTexRef, @NativeType("CUfilter_mode") int fm) {
        long __functionAddress = Functions.TexRefSetFilterMode;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePI(__functionAddress, hTexRef, fm);
    }

    // --- [ cuTexRefSetMipmapFilterMode ] ---

    @NativeType("CUresult")
    public static int cuTexRefSetMipmapFilterMode(@NativeType("CUtexref") long hTexRef, @NativeType("CUfilter_mode") int fm) {
        long __functionAddress = Functions.TexRefSetMipmapFilterMode;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePI(__functionAddress, hTexRef, fm);
    }

    // --- [ cuTexRefSetMipmapLevelBias ] ---

    @NativeType("CUresult")
    public static int cuTexRefSetMipmapLevelBias(@NativeType("CUtexref") long hTexRef, float bias) {
        long __functionAddress = Functions.TexRefSetMipmapLevelBias;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePI(__functionAddress, hTexRef, bias);
    }

    // --- [ cuTexRefSetMipmapLevelClamp ] ---

    @NativeType("CUresult")
    public static int cuTexRefSetMipmapLevelClamp(@NativeType("CUtexref") long hTexRef, float minMipmapLevelClamp, float maxMipmapLevelClamp) {
        long __functionAddress = Functions.TexRefSetMipmapLevelClamp;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePI(__functionAddress, hTexRef, minMipmapLevelClamp, maxMipmapLevelClamp);
    }

    // --- [ cuTexRefSetMaxAnisotropy ] ---

    @NativeType("CUresult")
    public static int cuTexRefSetMaxAnisotropy(@NativeType("CUtexref") long hTexRef, @NativeType("unsigned int") int maxAniso) {
        long __functionAddress = Functions.TexRefSetMaxAnisotropy;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePI(__functionAddress, hTexRef, maxAniso);
    }

    // --- [ cuTexRefSetBorderColor ] ---

    public static int ncuTexRefSetBorderColor(long hTexRef, long pBorderColor) {
        long __functionAddress = Functions.TexRefSetBorderColor;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePPI(__functionAddress, hTexRef, pBorderColor);
    }

    @NativeType("CUresult")
    public static int cuTexRefSetBorderColor(@NativeType("CUtexref") long hTexRef, @NativeType("float *") FloatBuffer pBorderColor) {
        if (CHECKS) {
            check(pBorderColor, 4);
        }
        return ncuTexRefSetBorderColor(hTexRef, memAddress(pBorderColor));
    }

    // --- [ cuTexRefSetFlags ] ---

    @NativeType("CUresult")
    public static int cuTexRefSetFlags(@NativeType("CUtexref") long hTexRef, @NativeType("unsigned int") int Flags) {
        long __functionAddress = Functions.TexRefSetFlags;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePI(__functionAddress, hTexRef, Flags);
    }

    // --- [ cuTexRefGetAddress ] ---

    public static int ncuTexRefGetAddress(long pdptr, long hTexRef) {
        long __functionAddress = Functions.TexRefGetAddress;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePPI(__functionAddress, pdptr, hTexRef);
    }

    @NativeType("CUresult")
    public static int cuTexRefGetAddress(@NativeType("CUdeviceptr *") PointerBuffer pdptr, @NativeType("CUtexref") long hTexRef) {
        if (CHECKS) {
            check(pdptr, 1);
        }
        return ncuTexRefGetAddress(memAddress(pdptr), hTexRef);
    }

    // --- [ cuTexRefGetArray ] ---

    public static int ncuTexRefGetArray(long phArray, long hTexRef) {
        long __functionAddress = Functions.TexRefGetArray;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePPI(__functionAddress, phArray, hTexRef);
    }

    @NativeType("CUresult")
    public static int cuTexRefGetArray(@NativeType("CUarray *") PointerBuffer phArray, @NativeType("CUtexref") long hTexRef) {
        if (CHECKS) {
            check(phArray, 1);
        }
        return ncuTexRefGetArray(memAddress(phArray), hTexRef);
    }

    // --- [ cuTexRefGetMipmappedArray ] ---

    public static int ncuTexRefGetMipmappedArray(long phMipmappedArray, long hTexRef) {
        long __functionAddress = Functions.TexRefGetMipmappedArray;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePPI(__functionAddress, phMipmappedArray, hTexRef);
    }

    @NativeType("CUresult")
    public static int cuTexRefGetMipmappedArray(@NativeType("CUmipmappedArray *") PointerBuffer phMipmappedArray, @NativeType("CUtexref") long hTexRef) {
        if (CHECKS) {
            check(phMipmappedArray, 1);
        }
        return ncuTexRefGetMipmappedArray(memAddress(phMipmappedArray), hTexRef);
    }

    // --- [ cuTexRefGetAddressMode ] ---

    public static int ncuTexRefGetAddressMode(long pam, long hTexRef, int dim) {
        long __functionAddress = Functions.TexRefGetAddressMode;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePPI(__functionAddress, pam, hTexRef, dim);
    }

    @NativeType("CUresult")
    public static int cuTexRefGetAddressMode(@NativeType("CUaddress_mode *") IntBuffer pam, @NativeType("CUtexref") long hTexRef, int dim) {
        if (CHECKS) {
            check(pam, 1);
        }
        return ncuTexRefGetAddressMode(memAddress(pam), hTexRef, dim);
    }

    // --- [ cuTexRefGetFilterMode ] ---

    public static int ncuTexRefGetFilterMode(long pfm, long hTexRef) {
        long __functionAddress = Functions.TexRefGetFilterMode;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePPI(__functionAddress, pfm, hTexRef);
    }

    @NativeType("CUresult")
    public static int cuTexRefGetFilterMode(@NativeType("CUfilter_mode *") IntBuffer pfm, @NativeType("CUtexref") long hTexRef) {
        if (CHECKS) {
            check(pfm, 1);
        }
        return ncuTexRefGetFilterMode(memAddress(pfm), hTexRef);
    }

    // --- [ cuTexRefGetFormat ] ---

    public static int ncuTexRefGetFormat(long pFormat, long pNumChannels, long hTexRef) {
        long __functionAddress = Functions.TexRefGetFormat;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePPPI(__functionAddress, pFormat, pNumChannels, hTexRef);
    }

    @NativeType("CUresult")
    public static int cuTexRefGetFormat(@NativeType("CUarray_format *") IntBuffer pFormat, @NativeType("int *") IntBuffer pNumChannels, @NativeType("CUtexref") long hTexRef) {
        if (CHECKS) {
            check(pFormat, 1);
            check(pNumChannels, 1);
        }
        return ncuTexRefGetFormat(memAddress(pFormat), memAddress(pNumChannels), hTexRef);
    }

    // --- [ cuTexRefGetMipmapFilterMode ] ---

    public static int ncuTexRefGetMipmapFilterMode(long pfm, long hTexRef) {
        long __functionAddress = Functions.TexRefGetMipmapFilterMode;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePPI(__functionAddress, pfm, hTexRef);
    }

    @NativeType("CUresult")
    public static int cuTexRefGetMipmapFilterMode(@NativeType("CUfilter_mode *") IntBuffer pfm, @NativeType("CUtexref") long hTexRef) {
        if (CHECKS) {
            check(pfm, 1);
        }
        return ncuTexRefGetMipmapFilterMode(memAddress(pfm), hTexRef);
    }

    // --- [ cuTexRefGetMipmapLevelBias ] ---

    public static int ncuTexRefGetMipmapLevelBias(long pbias, long hTexRef) {
        long __functionAddress = Functions.TexRefGetMipmapLevelBias;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePPI(__functionAddress, pbias, hTexRef);
    }

    @NativeType("CUresult")
    public static int cuTexRefGetMipmapLevelBias(@NativeType("float *") FloatBuffer pbias, @NativeType("CUtexref") long hTexRef) {
        if (CHECKS) {
            check(pbias, 1);
        }
        return ncuTexRefGetMipmapLevelBias(memAddress(pbias), hTexRef);
    }

    // --- [ cuTexRefGetMipmapLevelClamp ] ---

    public static int ncuTexRefGetMipmapLevelClamp(long pminMipmapLevelClamp, long pmaxMipmapLevelClamp, long hTexRef) {
        long __functionAddress = Functions.TexRefGetMipmapLevelClamp;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePPPI(__functionAddress, pminMipmapLevelClamp, pmaxMipmapLevelClamp, hTexRef);
    }

    @NativeType("CUresult")
    public static int cuTexRefGetMipmapLevelClamp(@NativeType("float *") FloatBuffer pminMipmapLevelClamp, @NativeType("float *") FloatBuffer pmaxMipmapLevelClamp, @NativeType("CUtexref") long hTexRef) {
        if (CHECKS) {
            check(pminMipmapLevelClamp, 1);
            check(pmaxMipmapLevelClamp, 1);
        }
        return ncuTexRefGetMipmapLevelClamp(memAddress(pminMipmapLevelClamp), memAddress(pmaxMipmapLevelClamp), hTexRef);
    }

    // --- [ cuTexRefGetMaxAnisotropy ] ---

    public static int ncuTexRefGetMaxAnisotropy(long pmaxAniso, long hTexRef) {
        long __functionAddress = Functions.TexRefGetMaxAnisotropy;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePPI(__functionAddress, pmaxAniso, hTexRef);
    }

    @NativeType("CUresult")
    public static int cuTexRefGetMaxAnisotropy(@NativeType("int *") IntBuffer pmaxAniso, @NativeType("CUtexref") long hTexRef) {
        if (CHECKS) {
            check(pmaxAniso, 1);
        }
        return ncuTexRefGetMaxAnisotropy(memAddress(pmaxAniso), hTexRef);
    }

    // --- [ cuTexRefGetBorderColor ] ---

    public static int ncuTexRefGetBorderColor(long pBorderColor, long hTexRef) {
        long __functionAddress = Functions.TexRefGetBorderColor;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePPI(__functionAddress, pBorderColor, hTexRef);
    }

    @NativeType("CUresult")
    public static int cuTexRefGetBorderColor(@NativeType("float *") FloatBuffer pBorderColor, @NativeType("CUtexref") long hTexRef) {
        if (CHECKS) {
            check(pBorderColor, 4);
        }
        return ncuTexRefGetBorderColor(memAddress(pBorderColor), hTexRef);
    }

    // --- [ cuTexRefGetFlags ] ---

    public static int ncuTexRefGetFlags(long pFlags, long hTexRef) {
        long __functionAddress = Functions.TexRefGetFlags;
        if (CHECKS) {
            check(hTexRef);
        }
        return invokePPI(__functionAddress, pFlags, hTexRef);
    }

    @NativeType("CUresult")
    public static int cuTexRefGetFlags(@NativeType("unsigned int *") IntBuffer pFlags, @NativeType("CUtexref") long hTexRef) {
        if (CHECKS) {
            check(pFlags, 1);
        }
        return ncuTexRefGetFlags(memAddress(pFlags), hTexRef);
    }

    // --- [ cuSurfRefSetArray ] ---

    @NativeType("CUresult")
    public static int cuSurfRefSetArray(@NativeType("CUsurfref") long hSurfRef, @NativeType("CUarray") long hArray, @NativeType("unsigned int") int Flags) {
        long __functionAddress = Functions.SurfRefSetArray;
        if (CHECKS) {
            check(hSurfRef);
            check(hArray);
        }
        return invokePPI(__functionAddress, hSurfRef, hArray, Flags);
    }

    // --- [ cuSurfRefGetArray ] ---

    public static int ncuSurfRefGetArray(long phArray, long hSurfRef) {
        long __functionAddress = Functions.SurfRefGetArray;
        if (CHECKS) {
            check(hSurfRef);
        }
        return invokePPI(__functionAddress, phArray, hSurfRef);
    }

    @NativeType("CUresult")
    public static int cuSurfRefGetArray(@NativeType("CUarray *") PointerBuffer phArray, @NativeType("CUsurfref") long hSurfRef) {
        if (CHECKS) {
            check(phArray, 1);
        }
        return ncuSurfRefGetArray(memAddress(phArray), hSurfRef);
    }

    // --- [ cuTexObjectCreate ] ---

    public static int ncuTexObjectCreate(long pTexObject, long pResDesc, long pTexDesc, long pResViewDesc) {
        long __functionAddress = Functions.TexObjectCreate;
        return invokePPPPI(__functionAddress, pTexObject, pResDesc, pTexDesc, pResViewDesc);
    }

    @NativeType("CUresult")
    public static int cuTexObjectCreate(@NativeType("CUtexObject *") LongBuffer pTexObject, @NativeType("CUDA_RESOURCE_DESC const *") CUDA_RESOURCE_DESC pResDesc, @NativeType("CUDA_TEXTURE_DESC const *") CUDA_TEXTURE_DESC pTexDesc, @NativeType("CUDA_RESOURCE_VIEW_DESC const *") CUDA_RESOURCE_VIEW_DESC pResViewDesc) {
        if (CHECKS) {
            check(pTexObject, 1);
        }
        return ncuTexObjectCreate(memAddress(pTexObject), pResDesc.address(), pTexDesc.address(), pResViewDesc.address());
    }

    // --- [ cuTexObjectDestroy ] ---

    @NativeType("CUresult")
    public static int cuTexObjectDestroy(@NativeType("CUtexObject") long texObject) {
        long __functionAddress = Functions.TexObjectDestroy;
        return invokeJI(__functionAddress, texObject);
    }

    // --- [ cuTexObjectGetResourceDesc ] ---

    public static int ncuTexObjectGetResourceDesc(long pResDesc, long texObject) {
        long __functionAddress = Functions.TexObjectGetResourceDesc;
        return invokePJI(__functionAddress, pResDesc, texObject);
    }

    @NativeType("CUresult")
    public static int cuTexObjectGetResourceDesc(@NativeType("CUDA_RESOURCE_DESC *") CUDA_RESOURCE_DESC pResDesc, @NativeType("CUtexObject") long texObject) {
        return ncuTexObjectGetResourceDesc(pResDesc.address(), texObject);
    }

    // --- [ cuTexObjectGetTextureDesc ] ---

    public static int ncuTexObjectGetTextureDesc(long pTexDesc, long texObject) {
        long __functionAddress = Functions.TexObjectGetTextureDesc;
        return invokePJI(__functionAddress, pTexDesc, texObject);
    }

    @NativeType("CUresult")
    public static int cuTexObjectGetTextureDesc(@NativeType("CUDA_TEXTURE_DESC *") CUDA_TEXTURE_DESC pTexDesc, @NativeType("CUtexObject") long texObject) {
        return ncuTexObjectGetTextureDesc(pTexDesc.address(), texObject);
    }

    // --- [ cuTexObjectGetResourceViewDesc ] ---

    public static int ncuTexObjectGetResourceViewDesc(long pResViewDesc, long texObject) {
        long __functionAddress = Functions.TexObjectGetResourceViewDesc;
        return invokePJI(__functionAddress, pResViewDesc, texObject);
    }

    @NativeType("CUresult")
    public static int cuTexObjectGetResourceViewDesc(@NativeType("CUDA_RESOURCE_VIEW_DESC *") CUDA_RESOURCE_VIEW_DESC pResViewDesc, @NativeType("CUtexObject") long texObject) {
        return ncuTexObjectGetResourceViewDesc(pResViewDesc.address(), texObject);
    }

    // --- [ cuSurfObjectCreate ] ---

    public static int ncuSurfObjectCreate(long pSurfObject, long pResDesc) {
        long __functionAddress = Functions.SurfObjectCreate;
        return invokePPI(__functionAddress, pSurfObject, pResDesc);
    }

    @NativeType("CUresult")
    public static int cuSurfObjectCreate(@NativeType("CUsurfObject *") LongBuffer pSurfObject, @NativeType("CUDA_RESOURCE_DESC const *") CUDA_RESOURCE_DESC pResDesc) {
        if (CHECKS) {
            check(pSurfObject, 1);
        }
        return ncuSurfObjectCreate(memAddress(pSurfObject), pResDesc.address());
    }

    // --- [ cuSurfObjectDestroy ] ---

    @NativeType("CUresult")
    public static int cuSurfObjectDestroy(@NativeType("CUsurfObject") long surfObject) {
        long __functionAddress = Functions.SurfObjectDestroy;
        return invokeJI(__functionAddress, surfObject);
    }

    // --- [ cuSurfObjectGetResourceDesc ] ---

    public static int ncuSurfObjectGetResourceDesc(long pResDesc, long surfObject) {
        long __functionAddress = Functions.SurfObjectGetResourceDesc;
        return invokePJI(__functionAddress, pResDesc, surfObject);
    }

    @NativeType("CUresult")
    public static int cuSurfObjectGetResourceDesc(@NativeType("CUDA_RESOURCE_DESC *") CUDA_RESOURCE_DESC pResDesc, @NativeType("CUsurfObject") long surfObject) {
        return ncuSurfObjectGetResourceDesc(pResDesc.address(), surfObject);
    }

    // --- [ cuDeviceCanAccessPeer ] ---

    public static int ncuDeviceCanAccessPeer(long canAccessPeer, int dev, int peerDev) {
        long __functionAddress = Functions.DeviceCanAccessPeer;
        return invokePI(__functionAddress, canAccessPeer, dev, peerDev);
    }

    @NativeType("CUresult")
    public static int cuDeviceCanAccessPeer(@NativeType("int *") IntBuffer canAccessPeer, @NativeType("CUdevice") int dev, @NativeType("CUdevice") int peerDev) {
        if (CHECKS) {
            check(canAccessPeer, 1);
        }
        return ncuDeviceCanAccessPeer(memAddress(canAccessPeer), dev, peerDev);
    }

    // --- [ cuCtxEnablePeerAccess ] ---

    @NativeType("CUresult")
    public static int cuCtxEnablePeerAccess(@NativeType("CUcontext") long peerContext, @NativeType("unsigned int") int Flags) {
        long __functionAddress = Functions.CtxEnablePeerAccess;
        if (CHECKS) {
            check(peerContext);
        }
        return invokePI(__functionAddress, peerContext, Flags);
    }

    // --- [ cuCtxDisablePeerAccess ] ---

    @NativeType("CUresult")
    public static int cuCtxDisablePeerAccess(@NativeType("CUcontext") long peerContext) {
        long __functionAddress = Functions.CtxDisablePeerAccess;
        if (CHECKS) {
            check(peerContext);
        }
        return invokePI(__functionAddress, peerContext);
    }

    // --- [ cuDeviceGetP2PAttribute ] ---

    public static int ncuDeviceGetP2PAttribute(long value, int attrib, int srcDevice, int dstDevice) {
        long __functionAddress = Functions.DeviceGetP2PAttribute;
        return invokePI(__functionAddress, value, attrib, srcDevice, dstDevice);
    }

    @NativeType("CUresult")
    public static int cuDeviceGetP2PAttribute(@NativeType("int *") IntBuffer value, @NativeType("CUdevice_P2PAttribute") int attrib, @NativeType("CUdevice") int srcDevice, @NativeType("CUdevice") int dstDevice) {
        if (CHECKS) {
            check(value, 1);
        }
        return ncuDeviceGetP2PAttribute(memAddress(value), attrib, srcDevice, dstDevice);
    }

    // --- [ cuGraphicsUnregisterResource ] ---

    @NativeType("CUresult")
    public static int cuGraphicsUnregisterResource(@NativeType("CUgraphicsResource") long resource) {
        long __functionAddress = Functions.GraphicsUnregisterResource;
        if (CHECKS) {
            check(resource);
        }
        return invokePI(__functionAddress, resource);
    }

    // --- [ cuGraphicsSubResourceGetMappedArray ] ---

    public static int ncuGraphicsSubResourceGetMappedArray(long pArray, long resource, int arrayIndex, int mipLevel) {
        long __functionAddress = Functions.GraphicsSubResourceGetMappedArray;
        if (CHECKS) {
            check(resource);
        }
        return invokePPI(__functionAddress, pArray, resource, arrayIndex, mipLevel);
    }

    @NativeType("CUresult")
    public static int cuGraphicsSubResourceGetMappedArray(@NativeType("CUarray *") PointerBuffer pArray, @NativeType("CUgraphicsResource") long resource, @NativeType("unsigned int") int arrayIndex, @NativeType("unsigned int") int mipLevel) {
        if (CHECKS) {
            check(pArray, 1);
        }
        return ncuGraphicsSubResourceGetMappedArray(memAddress(pArray), resource, arrayIndex, mipLevel);
    }

    // --- [ cuGraphicsResourceGetMappedMipmappedArray ] ---

    public static int ncuGraphicsResourceGetMappedMipmappedArray(long pMipmappedArray, long resource) {
        long __functionAddress = Functions.GraphicsResourceGetMappedMipmappedArray;
        if (CHECKS) {
            check(resource);
        }
        return invokePPI(__functionAddress, pMipmappedArray, resource);
    }

    @NativeType("CUresult")
    public static int cuGraphicsResourceGetMappedMipmappedArray(@NativeType("CUmipmappedArray *") PointerBuffer pMipmappedArray, @NativeType("CUgraphicsResource") long resource) {
        if (CHECKS) {
            check(pMipmappedArray, 1);
        }
        return ncuGraphicsResourceGetMappedMipmappedArray(memAddress(pMipmappedArray), resource);
    }

    // --- [ cuGraphicsResourceGetMappedPointer ] ---

    public static int ncuGraphicsResourceGetMappedPointer(long pDevPtr, long pSize, long resource) {
        long __functionAddress = Functions.GraphicsResourceGetMappedPointer;
        if (CHECKS) {
            check(resource);
        }
        return invokePPPI(__functionAddress, pDevPtr, pSize, resource);
    }

    @NativeType("CUresult")
    public static int cuGraphicsResourceGetMappedPointer(@NativeType("CUdeviceptr *") PointerBuffer pDevPtr, @NativeType("size_t *") PointerBuffer pSize, @NativeType("CUgraphicsResource") long resource) {
        if (CHECKS) {
            check(pDevPtr, 1);
            check(pSize, 1);
        }
        return ncuGraphicsResourceGetMappedPointer(memAddress(pDevPtr), memAddress(pSize), resource);
    }

    // --- [ cuGraphicsResourceSetMapFlags ] ---

    @NativeType("CUresult")
    public static int cuGraphicsResourceSetMapFlags(@NativeType("CUgraphicsResource") long resource, @NativeType("unsigned int") int flags) {
        long __functionAddress = Functions.GraphicsResourceSetMapFlags;
        if (CHECKS) {
            check(resource);
        }
        return invokePI(__functionAddress, resource, flags);
    }

    // --- [ cuGraphicsMapResources ] ---

    public static int ncuGraphicsMapResources(int count, long resources, long hStream) {
        long __functionAddress = Functions.GraphicsMapResources;
        if (CHECKS) {
            check(hStream);
        }
        return invokePPI(__functionAddress, count, resources, hStream);
    }

    @NativeType("CUresult")
    public static int cuGraphicsMapResources(@NativeType("CUgraphicsResource *") PointerBuffer resources, @NativeType("CUstream") long hStream) {
        return ncuGraphicsMapResources(resources.remaining(), memAddress(resources), hStream);
    }

    // --- [ cuGraphicsUnmapResources ] ---

    public static int ncuGraphicsUnmapResources(int count, long resources, long hStream) {
        long __functionAddress = Functions.GraphicsUnmapResources;
        if (CHECKS) {
            check(hStream);
        }
        return invokePPI(__functionAddress, count, resources, hStream);
    }

    @NativeType("CUresult")
    public static int cuGraphicsUnmapResources(@NativeType("CUgraphicsResource *") PointerBuffer resources, @NativeType("CUstream") long hStream) {
        return ncuGraphicsUnmapResources(resources.remaining(), memAddress(resources), hStream);
    }

    // --- [ cuGetExportTable ] ---

    public static int ncuGetExportTable(long ppExportTable, long pExportTableId) {
        long __functionAddress = Functions.GetExportTable;
        return invokePPI(__functionAddress, ppExportTable, pExportTableId);
    }

    @NativeType("CUresult")
    public static int cuGetExportTable(@NativeType("void const **") PointerBuffer ppExportTable, @NativeType("CUuuid const *") CUUUID pExportTableId) {
        return ncuGetExportTable(memAddress(ppExportTable), pExportTableId.address());
    }

}