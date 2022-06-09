#include <interception_macros.h>

namespace app::methods::KuDash_PreDashDelegateType {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::KuDash_PreDashDelegateType * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::KuDash_PreDashDelegateType * this_ptr, app::bool * allow));
IL2CPP_REGISTER_METHOD(0x012344E0, IAsyncResult *, BeginInvoke, (app::KuDash_PreDashDelegateType * this_ptr, app::bool * allow, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::KuDash_PreDashDelegateType * this_ptr, app::bool * allow, app::IAsyncResult * result));
}
