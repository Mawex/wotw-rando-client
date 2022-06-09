#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRTrackedCamera__GetVideoStreamTextureGL {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRTrackedCamera_GetVideoStreamTextureGL * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F544B0, EVRTrackedCameraError__Enum, Invoke, (app::IVRTrackedCamera_GetVideoStreamTextureGL * this_ptr, uint64_t h_tracked_camera, app::EVRTrackedCameraFrameType__Enum e_frame_type, app::uint32_t * pgl_texture_id, app::CameraVideoStreamFrameHeader_t * p_frame_header, uint32_t n_frame_header_size));
IL2CPP_REGISTER_METHOD(0x00F54950, IAsyncResult *, BeginInvoke, (app::IVRTrackedCamera_GetVideoStreamTextureGL * this_ptr, uint64_t h_tracked_camera, app::EVRTrackedCameraFrameType__Enum e_frame_type, app::uint32_t * pgl_texture_id, app::CameraVideoStreamFrameHeader_t * p_frame_header, uint32_t n_frame_header_size, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVRTrackedCameraError__Enum, EndInvoke, (app::IVRTrackedCamera_GetVideoStreamTextureGL * this_ptr, app::uint32_t * pgl_texture_id, app::CameraVideoStreamFrameHeader_t * p_frame_header, app::IAsyncResult * result));
}
