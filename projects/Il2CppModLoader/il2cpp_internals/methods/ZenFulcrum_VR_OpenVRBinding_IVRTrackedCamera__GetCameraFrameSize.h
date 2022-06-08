using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraFrameSize {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRTrackedCamera_GetCameraFrameSize * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F524C0, EVRTrackedCameraError__Enum, Invoke, (IVRTrackedCamera_GetCameraFrameSize * __this, uint32_t nDeviceIndex, EVRTrackedCameraFrameType__Enum eFrameType, uint32_t * pnWidth, uint32_t * pnHeight, uint32_t * pnFrameBufferSize));
IL2CPP_REGISTER_METHOD(0x00F52960, IAsyncResult *, BeginInvoke, (IVRTrackedCamera_GetCameraFrameSize * __this, uint32_t nDeviceIndex, EVRTrackedCameraFrameType__Enum eFrameType, uint32_t * pnWidth, uint32_t * pnHeight, uint32_t * pnFrameBufferSize, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F52A90, EVRTrackedCameraError__Enum, EndInvoke, (IVRTrackedCamera_GetCameraFrameSize * __this, uint32_t * pnWidth, uint32_t * pnHeight, uint32_t * pnFrameBufferSize, IAsyncResult * result));
}
