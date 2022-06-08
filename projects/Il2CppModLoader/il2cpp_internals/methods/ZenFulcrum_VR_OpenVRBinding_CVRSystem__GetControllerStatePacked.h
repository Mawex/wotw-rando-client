#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRSystem__GetControllerStatePacked {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CVRSystem_GetControllerStatePacked * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167D2B0, bool, Invoke, (CVRSystem_GetControllerStatePacked * __this, uint32_t unControllerDeviceIndex, VRControllerState_t_Packed * pControllerState, uint32_t unControllerStateSize));
IL2CPP_REGISTER_METHOD(0x0167D650, IAsyncResult *, BeginInvoke, (CVRSystem_GetControllerStatePacked * __this, uint32_t unControllerDeviceIndex, VRControllerState_t_Packed * pControllerState, uint32_t unControllerStateSize, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (CVRSystem_GetControllerStatePacked * __this, VRControllerState_t_Packed * pControllerState, IAsyncResult * result));
}
