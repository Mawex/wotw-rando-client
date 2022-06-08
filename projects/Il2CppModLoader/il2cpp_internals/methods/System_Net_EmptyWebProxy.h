#include <interception_macros.h>

namespace app::methods::System::Net::EmptyWebProxy {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EmptyWebProxy * __this));
IL2CPP_REGISTER_METHOD(0x00502220, Uri *, GetProxy, (EmptyWebProxy * __this, Uri * uri));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsBypassed, (EmptyWebProxy * __this, Uri * uri));
IL2CPP_REGISTER_METHOD(0x002FA280, ICredentials *, get_Credentials, (EmptyWebProxy * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Credentials, (EmptyWebProxy * __this, ICredentials * value));
IL2CPP_REGISTER_METHOD(0x01EB40E0, ProxyChain *, IAutoWebProxy_GetProxies, (EmptyWebProxy * __this, Uri * destination));
}
