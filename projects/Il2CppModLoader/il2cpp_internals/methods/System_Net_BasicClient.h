#include <interception_macros.h>

namespace app::methods::System_Net::BasicClient {
IL2CPP_REGISTER_METHOD(0x020148A0, Authorization *, Authenticate, (app::BasicClient * this_ptr, app::String * challenge, app::WebRequest * web_request, app::ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x020149B0, Byte__Array *, GetBytes, (app::String * str));
IL2CPP_REGISTER_METHOD(0x02014AA0, Authorization *, InternalAuthenticate, (app::WebRequest * web_request, app::ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x02014EC0, Authorization *, PreAuthenticate, (app::BasicClient * this_ptr, app::WebRequest * web_request, app::ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x02014EE0, String *, get_AuthenticationType, (app::BasicClient * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanPreAuthenticate, (app::BasicClient * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::BasicClient * this_ptr));
}
