#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRTrackedCamera__GetVideoStreamTextureSize {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRTrackedCamera_GetVideoStreamTextureSize * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F524C0, EVRTrackedCameraError__Enum, Invoke, (app::IVRTrackedCamera_GetVideoStreamTextureSize * this_ptr, uint32_t n_device_index, app::EVRTrackedCameraFrameType__Enum e_frame_type, app::VRTextureBounds_t * p_texture_bounds, app::uint32_t * pn_width, app::uint32_t * pn_height));
IL2CPP_REGISTER_METHOD(0x00F54A80, IAsyncResult *, BeginInvoke, (app::IVRTrackedCamera_GetVideoStreamTextureSize * this_ptr, uint32_t n_device_index, app::EVRTrackedCameraFrameType__Enum e_frame_type, app::VRTextureBounds_t * p_texture_bounds, app::uint32_t * pn_width, app::uint32_t * pn_height, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F52A90, EVRTrackedCameraError__Enum, EndInvoke, (app::IVRTrackedCamera_GetVideoStreamTextureSize * this_ptr, app::VRTextureBounds_t * p_texture_bounds, app::uint32_t * pn_width, app::uint32_t * pn_height, app::IAsyncResult * result));
}
