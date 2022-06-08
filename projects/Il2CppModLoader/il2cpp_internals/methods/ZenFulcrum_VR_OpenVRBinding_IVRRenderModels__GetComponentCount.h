#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentCount {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRRenderModels_GetComponentCount * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x020105B0, uint32_t, Invoke, (IVRRenderModels_GetComponentCount * __this, String * pchRenderModelName));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (IVRRenderModels_GetComponentCount * __this, String * pchRenderModelName, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVRRenderModels_GetComponentCount * __this, IAsyncResult * result));
}
