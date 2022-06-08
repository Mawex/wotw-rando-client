using namespace app;

namespace app::methods::System::Net::BasicClient {
IL2CPP_REGISTER_METHOD(0x020148A0, Authorization *, Authenticate, (BasicClient * __this, String * challenge, WebRequest * webRequest, ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x020149B0, Byte__Array *, GetBytes, (String * str));
IL2CPP_REGISTER_METHOD(0x02014AA0, Authorization *, InternalAuthenticate, (WebRequest * webRequest, ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x02014EC0, Authorization *, PreAuthenticate, (BasicClient * __this, WebRequest * webRequest, ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x02014EE0, String *, get_AuthenticationType, (BasicClient * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanPreAuthenticate, (BasicClient * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BasicClient * __this));
}
