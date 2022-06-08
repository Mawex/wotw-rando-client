#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetControllerState {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetControllerState * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167D2B0, bool, Invoke, (IVRSystem_GetControllerState * __this, uint32_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize));
IL2CPP_REGISTER_METHOD(0x02CEADC0, IAsyncResult *, BeginInvoke, (IVRSystem_GetControllerState * __this, uint32_t unControllerDeviceIndex, VRControllerState_t * pControllerState, uint32_t unControllerStateSize, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRSystem_GetControllerState * __this, VRControllerState_t * pControllerState, IAsyncResult * result));
}
