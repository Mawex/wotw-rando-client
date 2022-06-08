#include <interception_macros.h>

namespace app::methods::Mono::Net::Security::AsyncProtocolRequest {
IL2CPP_REGISTER_METHOD(0x002FA280, MobileAuthenticatedStream *, get_Parent, (AsyncProtocolRequest * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_RunSynchronously, (AsyncProtocolRequest * __this));
IL2CPP_REGISTER_METHOD(0x0217ACC0, String *, get_Name, (AsyncProtocolRequest * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_UserResult, (AsyncProtocolRequest * __this));
IL2CPP_REGISTER_METHOD(0x0052A020, void, set_UserResult, (AsyncProtocolRequest * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0217AD00, void, __ctor, (AsyncProtocolRequest * __this, MobileAuthenticatedStream * parent, bool sync));
IL2CPP_REGISTER_METHOD(0x0217AE60, void, RequestRead, (AsyncProtocolRequest * __this, int32_t size));
IL2CPP_REGISTER_METHOD(0x0217AF40, void, RequestWrite, (AsyncProtocolRequest * __this));
IL2CPP_REGISTER_METHOD(0x0217AF50, Task_1_Mono_Net_Security_AsyncProtocolResult_ *, StartOperation, (AsyncProtocolRequest * __this, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x0217B070, Task *, ProcessOperation, (AsyncProtocolRequest * __this, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x0217B180, Task_1_System_Nullable_1_ *, InnerRead, (AsyncProtocolRequest * __this, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x0217B2B0, String *, ToString, (AsyncProtocolRequest * __this));
}
