#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRTrackedCamera__GetVideoStreamFrameBuffer {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRTrackedCamera_GetVideoStreamFrameBuffer * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F53760, EVRTrackedCameraError__Enum, Invoke, (app::IVRTrackedCamera_GetVideoStreamFrameBuffer * this_ptr, uint64_t h_tracked_camera, app::EVRTrackedCameraFrameType__Enum e_frame_type, app::void * p_frame_buffer, uint32_t n_frame_buffer_size, app::CameraVideoStreamFrameHeader_t * p_frame_header, uint32_t n_frame_header_size));
IL2CPP_REGISTER_METHOD(0x00F53CB0, IAsyncResult *, BeginInvoke, (app::IVRTrackedCamera_GetVideoStreamFrameBuffer * this_ptr, uint64_t h_tracked_camera, app::EVRTrackedCameraFrameType__Enum e_frame_type, app::void * p_frame_buffer, uint32_t n_frame_buffer_size, app::CameraVideoStreamFrameHeader_t * p_frame_header, uint32_t n_frame_header_size, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRTrackedCameraError__Enum, EndInvoke, (app::IVRTrackedCamera_GetVideoStreamFrameBuffer * this_ptr, app::CameraVideoStreamFrameHeader_t * p_frame_header, app::IAsyncResult * result));
}
