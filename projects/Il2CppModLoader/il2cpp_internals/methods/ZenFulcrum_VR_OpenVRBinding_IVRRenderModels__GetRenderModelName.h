#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelName {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRRenderModels_GetRenderModelName * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE3D50, uint32_t, Invoke, (IVRRenderModels_GetRenderModelName * __this, uint32_t unRenderModelIndex, StringBuilder * pchRenderModelName, uint32_t unRenderModelNameLen));
IL2CPP_REGISTER_METHOD(0x02CE40E0, IAsyncResult *, BeginInvoke, (IVRRenderModels_GetRenderModelName * __this, uint32_t unRenderModelIndex, StringBuilder * pchRenderModelName, uint32_t unRenderModelNameLen, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVRRenderModels_GetRenderModelName * __this, IAsyncResult * result));
}
