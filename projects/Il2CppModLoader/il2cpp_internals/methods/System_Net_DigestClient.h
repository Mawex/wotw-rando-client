#include <interception_macros.h>

namespace app::methods::System::Net::DigestClient {
IL2CPP_REGISTER_METHOD(0x01EADAA0, Hashtable *, get_Cache, ());
IL2CPP_REGISTER_METHOD(0x01EADCB0, void, CheckExpired, (int32_t count));
IL2CPP_REGISTER_METHOD(0x01EAE310, Authorization *, Authenticate, (DigestClient * __this, String * challenge, WebRequest * webRequest, ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x01EAE730, Authorization *, PreAuthenticate, (DigestClient * __this, WebRequest * webRequest, ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x01EAE8D0, String *, get_AuthenticationType, (DigestClient * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanPreAuthenticate, (DigestClient * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DigestClient * __this));
IL2CPP_REGISTER_METHOD(0x01EAE950, void, __cctor, ());
}
