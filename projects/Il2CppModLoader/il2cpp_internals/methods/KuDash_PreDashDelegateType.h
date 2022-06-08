#include <interception_macros.h>

namespace app::methods::KuDash_PreDashDelegateType {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (KuDash_PreDashDelegateType * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (KuDash_PreDashDelegateType * __this, bool * allow));
IL2CPP_REGISTER_METHOD(0x012344E0, IAsyncResult *, BeginInvoke, (KuDash_PreDashDelegateType * __this, bool * allow, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (KuDash_PreDashDelegateType * __this, bool * allow, IAsyncResult * result));
}
