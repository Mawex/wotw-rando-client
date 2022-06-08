using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraIntrinsics {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRTrackedCamera_GetCameraIntrinsics * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F52B80, EVRTrackedCameraError__Enum, Invoke, (IVRTrackedCamera_GetCameraIntrinsics * __this, uint32_t nDeviceIndex, EVRTrackedCameraFrameType__Enum eFrameType, HmdVector2_t * pFocalLength, HmdVector2_t * pCenter));
IL2CPP_REGISTER_METHOD(0x00F52FA0, IAsyncResult *, BeginInvoke, (IVRTrackedCamera_GetCameraIntrinsics * __this, uint32_t nDeviceIndex, EVRTrackedCameraFrameType__Enum eFrameType, HmdVector2_t * pFocalLength, HmdVector2_t * pCenter, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVRTrackedCameraError__Enum, EndInvoke, (IVRTrackedCamera_GetCameraIntrinsics * __this, HmdVector2_t * pFocalLength, HmdVector2_t * pCenter, IAsyncResult * result));
}
