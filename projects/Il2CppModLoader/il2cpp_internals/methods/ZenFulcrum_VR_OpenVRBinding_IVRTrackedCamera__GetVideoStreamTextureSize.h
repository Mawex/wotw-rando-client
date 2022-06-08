using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetVideoStreamTextureSize {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRTrackedCamera_GetVideoStreamTextureSize * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F524C0, EVRTrackedCameraError__Enum, Invoke, (IVRTrackedCamera_GetVideoStreamTextureSize * __this, uint32_t nDeviceIndex, EVRTrackedCameraFrameType__Enum eFrameType, VRTextureBounds_t * pTextureBounds, uint32_t * pnWidth, uint32_t * pnHeight));
IL2CPP_REGISTER_METHOD(0x00F54A80, IAsyncResult *, BeginInvoke, (IVRTrackedCamera_GetVideoStreamTextureSize * __this, uint32_t nDeviceIndex, EVRTrackedCameraFrameType__Enum eFrameType, VRTextureBounds_t * pTextureBounds, uint32_t * pnWidth, uint32_t * pnHeight, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F52A90, EVRTrackedCameraError__Enum, EndInvoke, (IVRTrackedCamera_GetVideoStreamTextureSize * __this, VRTextureBounds_t * pTextureBounds, uint32_t * pnWidth, uint32_t * pnHeight, IAsyncResult * result));
}
