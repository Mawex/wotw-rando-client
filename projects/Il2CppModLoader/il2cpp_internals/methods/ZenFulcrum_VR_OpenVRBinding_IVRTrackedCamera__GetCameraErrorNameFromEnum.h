#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRTrackedCamera__GetCameraErrorNameFromEnum {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRTrackedCamera_GetCameraErrorNameFromEnum * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F52080, void *, Invoke, (app::IVRTrackedCamera_GetCameraErrorNameFromEnum * this_ptr, app::EVRTrackedCameraError__Enum e_camera_error));
IL2CPP_REGISTER_METHOD(0x00F523C0, IAsyncResult *, BeginInvoke, (app::IVRTrackedCamera_GetCameraErrorNameFromEnum * this_ptr, app::EVRTrackedCameraError__Enum e_camera_error, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, void *, EndInvoke, (app::IVRTrackedCamera_GetCameraErrorNameFromEnum * this_ptr, app::IAsyncResult * result));
}
