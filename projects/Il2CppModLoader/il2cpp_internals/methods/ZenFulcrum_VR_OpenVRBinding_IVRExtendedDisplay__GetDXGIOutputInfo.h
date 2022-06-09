#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRExtendedDisplay__GetDXGIOutputInfo {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRExtendedDisplay_GetDXGIOutputInfo * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x012E7480, void, Invoke, (app::IVRExtendedDisplay_GetDXGIOutputInfo * this_ptr, app::int32_t * pn_adapter_index, app::int32_t * pn_adapter_output_index));
IL2CPP_REGISTER_METHOD(0x02D78250, IAsyncResult *, BeginInvoke, (app::IVRExtendedDisplay_GetDXGIOutputInfo * this_ptr, app::int32_t * pn_adapter_index, app::int32_t * pn_adapter_output_index, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (app::IVRExtendedDisplay_GetDXGIOutputInfo * this_ptr, app::int32_t * pn_adapter_index, app::int32_t * pn_adapter_output_index, app::IAsyncResult * result));
}
