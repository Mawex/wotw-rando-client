#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::CVRSystem__GetControllerStatePacked {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::CVRSystem_GetControllerStatePacked * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x0167D2B0, bool, Invoke, (app::CVRSystem_GetControllerStatePacked * this_ptr, uint32_t un_controller_device_index, app::VRControllerState_t_Packed * p_controller_state, uint32_t un_controller_state_size));
IL2CPP_REGISTER_METHOD(0x0167D650, IAsyncResult *, BeginInvoke, (app::CVRSystem_GetControllerStatePacked * this_ptr, uint32_t un_controller_device_index, app::VRControllerState_t_Packed * p_controller_state, uint32_t un_controller_state_size, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::CVRSystem_GetControllerStatePacked * this_ptr, app::VRControllerState_t_Packed * p_controller_state, app::IAsyncResult * result));
}
