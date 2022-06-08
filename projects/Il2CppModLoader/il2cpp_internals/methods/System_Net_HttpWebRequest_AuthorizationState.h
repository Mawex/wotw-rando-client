#include <interception_macros.h>

namespace app::methods::System::Net::HttpWebRequest_AuthorizationState {
IL2CPP_REGISTER_METHOD(0x00114130, bool, get_IsCompleted, (HttpWebRequest_AuthorizationState__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001155B0, HttpWebRequest_NtlmAuthState__Enum, get_NtlmAuthState, (HttpWebRequest_AuthorizationState__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D70A0, bool, get_IsNtlmAuthenticated, (HttpWebRequest_AuthorizationState__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D70C0, void, __ctor, (HttpWebRequest_AuthorizationState__Boxed * __this, HttpWebRequest * request, bool isProxy));
IL2CPP_REGISTER_METHOD(0x001D70E0, bool, CheckAuthorization, (HttpWebRequest_AuthorizationState__Boxed * __this, WebResponse * response, HttpStatusCode__Enum code));
IL2CPP_REGISTER_METHOD(0x001D70F0, void, Reset, (HttpWebRequest_AuthorizationState__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D7100, String *, ToString, (HttpWebRequest_AuthorizationState__Boxed * __this));
}
