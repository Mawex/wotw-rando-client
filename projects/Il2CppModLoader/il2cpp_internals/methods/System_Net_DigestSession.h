#include <interception_macros.h>

namespace app::methods::System_Net::DigestSession {
IL2CPP_REGISTER_METHOD(0x01EAF500, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01EAF590, void, __ctor, (app::DigestSession * this_ptr));
IL2CPP_REGISTER_METHOD(0x01EAF640, String *, get_Algorithm, (app::DigestSession * this_ptr));
IL2CPP_REGISTER_METHOD(0x01EAF690, String *, get_Realm, (app::DigestSession * this_ptr));
IL2CPP_REGISTER_METHOD(0x01EAF6E0, String *, get_Nonce, (app::DigestSession * this_ptr));
IL2CPP_REGISTER_METHOD(0x01EAF730, String *, get_Opaque, (app::DigestSession * this_ptr));
IL2CPP_REGISTER_METHOD(0x01EAF780, String *, get_QOP, (app::DigestSession * this_ptr));
IL2CPP_REGISTER_METHOD(0x01EAF7D0, String *, get_CNonce, (app::DigestSession * this_ptr));
IL2CPP_REGISTER_METHOD(0x01EAF910, bool, Parse, (app::DigestSession * this_ptr, app::String * challenge));
IL2CPP_REGISTER_METHOD(0x01EAFBD0, String *, HashToHexString, (app::DigestSession * this_ptr, app::String * to_be_hashed));
IL2CPP_REGISTER_METHOD(0x01EAFE30, String *, HA1, (app::DigestSession * this_ptr, app::String * username, app::String * password));
IL2CPP_REGISTER_METHOD(0x01EB00E0, String *, HA2, (app::DigestSession * this_ptr, app::HttpWebRequest * web_request));
IL2CPP_REGISTER_METHOD(0x01EB0280, String *, Response, (app::DigestSession * this_ptr, app::String * username, app::String * password, app::HttpWebRequest * web_request));
IL2CPP_REGISTER_METHOD(0x01EB0510, Authorization *, Authenticate, (app::DigestSession * this_ptr, app::WebRequest * web_request, app::ICredentials * credentials));
IL2CPP_REGISTER_METHODINFO(0x0476C5D8, DigestSession_Authenticate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, DateTime, get_LastUse, (app::DigestSession * this_ptr));
}
