using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRRenderModels__GetComponentStatePacked {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CVRRenderModels_GetComponentStatePacked * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167AA00, bool, Invoke, (CVRRenderModels_GetComponentStatePacked * __this, String * pchRenderModelName, String * pchComponentName, VRControllerState_t_Packed * pControllerState, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState));
IL2CPP_REGISTER_METHOD(0x0167B110, IAsyncResult *, BeginInvoke, (CVRRenderModels_GetComponentStatePacked * __this, String * pchRenderModelName, String * pchComponentName, VRControllerState_t_Packed * pControllerState, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167B230, bool, EndInvoke, (CVRRenderModels_GetComponentStatePacked * __this, VRControllerState_t_Packed * pControllerState, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState, IAsyncResult * result));
}
