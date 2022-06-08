using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetVideoStreamTextureGL {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRTrackedCamera_GetVideoStreamTextureGL * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F544B0, EVRTrackedCameraError__Enum, Invoke, (IVRTrackedCamera_GetVideoStreamTextureGL * __this, uint64_t hTrackedCamera, EVRTrackedCameraFrameType__Enum eFrameType, uint32_t * pglTextureId, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize));
IL2CPP_REGISTER_METHOD(0x00F54950, IAsyncResult *, BeginInvoke, (IVRTrackedCamera_GetVideoStreamTextureGL * __this, uint64_t hTrackedCamera, EVRTrackedCameraFrameType__Enum eFrameType, uint32_t * pglTextureId, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVRTrackedCameraError__Enum, EndInvoke, (IVRTrackedCamera_GetVideoStreamTextureGL * __this, uint32_t * pglTextureId, CameraVideoStreamFrameHeader_t * pFrameHeader, IAsyncResult * result));
}
