#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentRenderModelName {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRRenderModels_GetComponentRenderModelName * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE3470, uint32_t, Invoke, (IVRRenderModels_GetComponentRenderModelName * __this, String * pchRenderModelName, String * pchComponentName, StringBuilder * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen));
IL2CPP_REGISTER_METHOD(0x02CE3A80, IAsyncResult *, BeginInvoke, (IVRRenderModels_GetComponentRenderModelName * __this, String * pchRenderModelName, String * pchComponentName, StringBuilder * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVRRenderModels_GetComponentRenderModelName * __this, IAsyncResult * result));
}
