#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__GetDXGIOutputInfo {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_GetDXGIOutputInfo * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::IVRSystem_GetDXGIOutputInfo * this_ptr, app::int32_t * pn_adapter_index));
IL2CPP_REGISTER_METHOD(0x02CEAFE0, IAsyncResult *, BeginInvoke, (app::IVRSystem_GetDXGIOutputInfo * this_ptr, app::int32_t * pn_adapter_index, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::IVRSystem_GetDXGIOutputInfo * this_ptr, app::int32_t * pn_adapter_index, app::IAsyncResult * result));
}
