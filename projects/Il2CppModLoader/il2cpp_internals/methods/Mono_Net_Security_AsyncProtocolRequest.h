#include <interception_macros.h>

namespace app::methods::Mono_Net_Security::AsyncProtocolRequest {
IL2CPP_REGISTER_METHOD(0x002FA280, MobileAuthenticatedStream *, get_Parent, (app::AsyncProtocolRequest * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_RunSynchronously, (app::AsyncProtocolRequest * this_ptr));
IL2CPP_REGISTER_METHOD(0x0217ACC0, String *, get_Name, (app::AsyncProtocolRequest * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_UserResult, (app::AsyncProtocolRequest * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A020, void, set_UserResult, (app::AsyncProtocolRequest * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x0217AD00, void, __ctor, (app::AsyncProtocolRequest * this_ptr, app::MobileAuthenticatedStream * parent, bool sync));
IL2CPP_REGISTER_METHOD(0x0217AE60, void, RequestRead, (app::AsyncProtocolRequest * this_ptr, int32_t size));
IL2CPP_REGISTER_METHOD(0x0217AF40, void, RequestWrite, (app::AsyncProtocolRequest * this_ptr));
IL2CPP_REGISTER_METHOD(0x0217AF50, Task_1_Mono_Net_Security_AsyncProtocolResult_ *, StartOperation, (app::AsyncProtocolRequest * this_ptr, app::CancellationToken cancellation_token));
IL2CPP_REGISTER_METHOD(0x0217B070, Task *, ProcessOperation, (app::AsyncProtocolRequest * this_ptr, app::CancellationToken cancellation_token));
IL2CPP_REGISTER_METHOD(0x0217B180, Task_1_System_Nullable_1_ *, InnerRead, (app::AsyncProtocolRequest * this_ptr, app::CancellationToken cancellation_token));
IL2CPP_REGISTER_METHOD(0x0217B2B0, String *, ToString, (app::AsyncProtocolRequest * this_ptr));
}
