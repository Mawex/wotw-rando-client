#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRSystem__GetControllerStateWithPosePacked {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CVRSystem_GetControllerStateWithPosePacked * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167D740, bool, Invoke, (CVRSystem_GetControllerStateWithPosePacked * __this, ETrackingUniverseOrigin__Enum eOrigin, uint32_t unControllerDeviceIndex, VRControllerState_t_Packed * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose));
IL2CPP_REGISTER_METHOD(0x0167DBD0, IAsyncResult *, BeginInvoke, (CVRSystem_GetControllerStateWithPosePacked * __this, ETrackingUniverseOrigin__Enum eOrigin, uint32_t unControllerDeviceIndex, VRControllerState_t_Packed * pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t * pTrackedDevicePose, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (CVRSystem_GetControllerStateWithPosePacked * __this, VRControllerState_t_Packed * pControllerState, TrackedDevicePose_t * pTrackedDevicePose, IAsyncResult * result));
}
