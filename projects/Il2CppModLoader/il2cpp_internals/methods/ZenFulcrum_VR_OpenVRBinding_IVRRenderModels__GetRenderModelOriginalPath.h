#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelOriginalPath {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRRenderModels_GetRenderModelOriginalPath * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE41C0, uint32_t, Invoke, (IVRRenderModels_GetRenderModelOriginalPath * __this, String * pchRenderModelName, StringBuilder * pchOriginalPath, uint32_t unOriginalPathLen, EVRRenderModelError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02CE47E0, IAsyncResult *, BeginInvoke, (IVRRenderModels_GetRenderModelOriginalPath * __this, String * pchRenderModelName, StringBuilder * pchOriginalPath, uint32_t unOriginalPathLen, EVRRenderModelError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, uint32_t, EndInvoke, (IVRRenderModels_GetRenderModelOriginalPath * __this, EVRRenderModelError__Enum * peError, IAsyncResult * result));
}
