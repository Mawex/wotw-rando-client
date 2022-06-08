using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__AcquireVideoStreamingService {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRTrackedCamera_AcquireVideoStreamingService * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F51B50, EVRTrackedCameraError__Enum, Invoke, (IVRTrackedCamera_AcquireVideoStreamingService * __this, uint32_t nDeviceIndex, uint64_t * pHandle));
IL2CPP_REGISTER_METHOD(0x00F51EC0, IAsyncResult *, BeginInvoke, (IVRTrackedCamera_AcquireVideoStreamingService * __this, uint32_t nDeviceIndex, uint64_t * pHandle, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRTrackedCameraError__Enum, EndInvoke, (IVRTrackedCamera_AcquireVideoStreamingService * __this, uint64_t * pHandle, IAsyncResult * result));
}
