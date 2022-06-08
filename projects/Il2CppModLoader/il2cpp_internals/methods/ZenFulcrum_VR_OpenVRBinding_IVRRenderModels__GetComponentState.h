#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentState {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRRenderModels_GetComponentState * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167AA00, bool, Invoke, (IVRRenderModels_GetComponentState * __this, String * pchRenderModelName, String * pchComponentName, VRControllerState_t * pControllerState, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState));
IL2CPP_REGISTER_METHOD(0x02CE3B70, IAsyncResult *, BeginInvoke, (IVRRenderModels_GetComponentState * __this, String * pchRenderModelName, String * pchComponentName, VRControllerState_t * pControllerState, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167B230, bool, EndInvoke, (IVRRenderModels_GetComponentState * __this, VRControllerState_t * pControllerState, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState, IAsyncResult * result));
}
