#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRTrackedCamera__GetCameraFrameSize {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRTrackedCamera_GetCameraFrameSize * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F524C0, EVRTrackedCameraError__Enum, Invoke, (app::IVRTrackedCamera_GetCameraFrameSize * this_ptr, uint32_t n_device_index, app::EVRTrackedCameraFrameType__Enum e_frame_type, app::uint32_t * pn_width, app::uint32_t * pn_height, app::uint32_t * pn_frame_buffer_size));
IL2CPP_REGISTER_METHOD(0x00F52960, IAsyncResult *, BeginInvoke, (app::IVRTrackedCamera_GetCameraFrameSize * this_ptr, uint32_t n_device_index, app::EVRTrackedCameraFrameType__Enum e_frame_type, app::uint32_t * pn_width, app::uint32_t * pn_height, app::uint32_t * pn_frame_buffer_size, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F52A90, EVRTrackedCameraError__Enum, EndInvoke, (app::IVRTrackedCamera_GetCameraFrameSize * this_ptr, app::uint32_t * pn_width, app::uint32_t * pn_height, app::uint32_t * pn_frame_buffer_size, app::IAsyncResult * result));
}
