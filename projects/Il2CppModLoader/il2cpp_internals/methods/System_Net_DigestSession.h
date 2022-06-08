using namespace app;

namespace app::methods::System::Net::DigestSession {
IL2CPP_REGISTER_METHOD(0x01EAF500, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01EAF590, void, __ctor, (DigestSession * __this));
IL2CPP_REGISTER_METHOD(0x01EAF640, String *, get_Algorithm, (DigestSession * __this));
IL2CPP_REGISTER_METHOD(0x01EAF690, String *, get_Realm, (DigestSession * __this));
IL2CPP_REGISTER_METHOD(0x01EAF6E0, String *, get_Nonce, (DigestSession * __this));
IL2CPP_REGISTER_METHOD(0x01EAF730, String *, get_Opaque, (DigestSession * __this));
IL2CPP_REGISTER_METHOD(0x01EAF780, String *, get_QOP, (DigestSession * __this));
IL2CPP_REGISTER_METHOD(0x01EAF7D0, String *, get_CNonce, (DigestSession * __this));
IL2CPP_REGISTER_METHOD(0x01EAF910, bool, Parse, (DigestSession * __this, String * challenge));
IL2CPP_REGISTER_METHOD(0x01EAFBD0, String *, HashToHexString, (DigestSession * __this, String * toBeHashed));
IL2CPP_REGISTER_METHOD(0x01EAFE30, String *, HA1, (DigestSession * __this, String * username, String * password));
IL2CPP_REGISTER_METHOD(0x01EB00E0, String *, HA2, (DigestSession * __this, HttpWebRequest * webRequest));
IL2CPP_REGISTER_METHOD(0x01EB0280, String *, Response, (DigestSession * __this, String * username, String * password, HttpWebRequest * webRequest));
IL2CPP_REGISTER_METHOD(0x01EB0510, Authorization *, Authenticate, (DigestSession * __this, WebRequest * webRequest, ICredentials * credentials));
IL2CPP_REGISTER_METHODINFO(0x0476C5D8, DigestSession_Authenticate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, DateTime, get_LastUse, (DigestSession * __this));
}
