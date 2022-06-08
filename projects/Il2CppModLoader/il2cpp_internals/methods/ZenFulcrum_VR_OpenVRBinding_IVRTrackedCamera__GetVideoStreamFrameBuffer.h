using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetVideoStreamFrameBuffer {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRTrackedCamera_GetVideoStreamFrameBuffer * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F53760, EVRTrackedCameraError__Enum, Invoke, (IVRTrackedCamera_GetVideoStreamFrameBuffer * __this, uint64_t hTrackedCamera, EVRTrackedCameraFrameType__Enum eFrameType, void * pFrameBuffer, uint32_t nFrameBufferSize, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize));
IL2CPP_REGISTER_METHOD(0x00F53CB0, IAsyncResult *, BeginInvoke, (IVRTrackedCamera_GetVideoStreamFrameBuffer * __this, uint64_t hTrackedCamera, EVRTrackedCameraFrameType__Enum eFrameType, void * pFrameBuffer, uint32_t nFrameBufferSize, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRTrackedCameraError__Enum, EndInvoke, (IVRTrackedCamera_GetVideoStreamFrameBuffer * __this, CameraVideoStreamFrameHeader_t * pFrameHeader, IAsyncResult * result));
}
