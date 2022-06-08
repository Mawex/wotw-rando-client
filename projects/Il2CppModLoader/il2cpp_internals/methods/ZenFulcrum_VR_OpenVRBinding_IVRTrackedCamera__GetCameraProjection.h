using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraProjection {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRTrackedCamera_GetCameraProjection * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F53190, EVRTrackedCameraError__Enum, Invoke, (IVRTrackedCamera_GetCameraProjection * __this, uint32_t nDeviceIndex, EVRTrackedCameraFrameType__Enum eFrameType, float flZNear, float flZFar, HmdMatrix44_t * pProjection));
IL2CPP_REGISTER_METHOD(0x00F53640, IAsyncResult *, BeginInvoke, (IVRTrackedCamera_GetCameraProjection * __this, uint32_t nDeviceIndex, EVRTrackedCameraFrameType__Enum eFrameType, float flZNear, float flZFar, HmdMatrix44_t * pProjection, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRTrackedCameraError__Enum, EndInvoke, (IVRTrackedCamera_GetCameraProjection * __this, HmdMatrix44_t * pProjection, IAsyncResult * result));
}
