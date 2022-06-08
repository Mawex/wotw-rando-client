using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetControllerStateWithPose {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetControllerStateWithPose * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167D740, bool, Invoke, (IVRSystem_GetControllerStateWithPose * __this, ETrackingUniverseOrigin__Enum eOrigin, uint32_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose));
IL2CPP_REGISTER_METHOD(0x02CEAEB0, IAsyncResult *, BeginInvoke, (IVRSystem_GetControllerStateWithPose * __this, ETrackingUniverseOrigin__Enum eOrigin, uint32_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (IVRSystem_GetControllerStateWithPose * __this, VRControllerState_t * pControllerState, TrackedDevicePose_t * pTrackedDevicePose, IAsyncResult * result));
}
