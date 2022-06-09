#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRTrackedCamera__HasCamera {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRTrackedCamera_HasCamera * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F51B50, EVRTrackedCameraError__Enum, Invoke, (app::IVRTrackedCamera_HasCamera * this_ptr, uint32_t n_device_index, app::bool * p_has_camera));
IL2CPP_REGISTER_METHOD(0x00F54BB0, IAsyncResult *, BeginInvoke, (app::IVRTrackedCamera_HasCamera * this_ptr, uint32_t n_device_index, app::bool * p_has_camera, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRTrackedCameraError__Enum, EndInvoke, (app::IVRTrackedCamera_HasCamera * this_ptr, app::bool * p_has_camera, app::IAsyncResult * result));
}
