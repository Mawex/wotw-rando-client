#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentName {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRRenderModels_GetComponentName * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE2D70, uint32_t, Invoke, (IVRRenderModels_GetComponentName * __this, String * pchRenderModelName, uint32_t unComponentIndex, StringBuilder * pchComponentName, uint32_t unComponentNameLen));
IL2CPP_REGISTER_METHOD(0x02CE3380, IAsyncResult *, BeginInvoke, (IVRRenderModels_GetComponentName * __this, String * pchRenderModelName, uint32_t unComponentIndex, StringBuilder * pchComponentName, uint32_t unComponentNameLen, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVRRenderModels_GetComponentName * __this, IAsyncResult * result));
}
