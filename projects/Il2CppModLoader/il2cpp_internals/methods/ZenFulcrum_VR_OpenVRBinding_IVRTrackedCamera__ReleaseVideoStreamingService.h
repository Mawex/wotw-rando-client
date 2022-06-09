#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRTrackedCamera__ReleaseVideoStreamingService {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRTrackedCamera_ReleaseVideoStreamingService * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F55110, EVRTrackedCameraError__Enum, Invoke, (app::IVRTrackedCamera_ReleaseVideoStreamingService * this_ptr, uint64_t h_tracked_camera));
IL2CPP_REGISTER_METHOD(0x00F55460, IAsyncResult *, BeginInvoke, (app::IVRTrackedCamera_ReleaseVideoStreamingService * this_ptr, uint64_t h_tracked_camera, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRTrackedCameraError__Enum, EndInvoke, (app::IVRTrackedCamera_ReleaseVideoStreamingService * this_ptr, app::IAsyncResult * result));
}
