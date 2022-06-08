#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__ReleaseVideoStreamingService {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRTrackedCamera_ReleaseVideoStreamingService * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F55110, EVRTrackedCameraError__Enum, Invoke, (IVRTrackedCamera_ReleaseVideoStreamingService * __this, uint64_t hTrackedCamera));
IL2CPP_REGISTER_METHOD(0x00F55460, IAsyncResult *, BeginInvoke, (IVRTrackedCamera_ReleaseVideoStreamingService * __this, uint64_t hTrackedCamera, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRTrackedCameraError__Enum, EndInvoke, (IVRTrackedCamera_ReleaseVideoStreamingService * __this, IAsyncResult * result));
}
