#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetDeviceToAbsoluteTrackingPose {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetDeviceToAbsoluteTrackingPose * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEB0B0, void, Invoke, (IVRSystem_GetDeviceToAbsoluteTrackingPose * __this, ETrackingUniverseOrigin__Enum eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t__Array * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount));
IL2CPP_REGISTER_METHOD(0x02CEB4B0, IAsyncResult *, BeginInvoke, (IVRSystem_GetDeviceToAbsoluteTrackingPose * __this, ETrackingUniverseOrigin__Enum eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t__Array * pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (IVRSystem_GetDeviceToAbsoluteTrackingPose * __this, IAsyncResult * result));
}
