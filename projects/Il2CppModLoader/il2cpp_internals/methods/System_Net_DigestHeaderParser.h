#include <interception_macros.h>

namespace app::methods::System::Net::DigestHeaderParser {
IL2CPP_REGISTER_METHOD(0x01EAEAB0, void, __ctor, (DigestHeaderParser * __this, String * header));
IL2CPP_REGISTER_METHOD(0x00791D90, String *, get_Realm, (DigestHeaderParser * __this));
IL2CPP_REGISTER_METHOD(0x00791DD0, String *, get_Opaque, (DigestHeaderParser * __this));
IL2CPP_REGISTER_METHOD(0x01EAEBA0, String *, get_Nonce, (DigestHeaderParser * __this));
IL2CPP_REGISTER_METHOD(0x01EAEBE0, String *, get_Algorithm, (DigestHeaderParser * __this));
IL2CPP_REGISTER_METHOD(0x01EAEC20, String *, get_QOP, (DigestHeaderParser * __this));
IL2CPP_REGISTER_METHOD(0x01EAEC60, bool, Parse, (DigestHeaderParser * __this));
IL2CPP_REGISTER_METHOD(0x01EAEEF0, void, SkipWhitespace, (DigestHeaderParser * __this));
IL2CPP_REGISTER_METHOD(0x01EAEF60, String *, GetKey, (DigestHeaderParser * __this));
IL2CPP_REGISTER_METHOD(0x01EAF010, bool, GetKeywordAndValue, (DigestHeaderParser * __this, String * * key, String * * value));
IL2CPP_REGISTER_METHOD(0x01EAF290, void, __cctor, ());
}
