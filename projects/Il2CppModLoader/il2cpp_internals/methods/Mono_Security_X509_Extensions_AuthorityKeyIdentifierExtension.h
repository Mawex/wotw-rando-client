using namespace app;

namespace app::methods::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension {
IL2CPP_REGISTER_METHOD(0x0291D710, void, __ctor, (AuthorityKeyIdentifierExtension * __this, X509Extension_2 * extension));
IL2CPP_REGISTER_METHOD(0x0291D720, void, Decode, (AuthorityKeyIdentifierExtension * __this));
IL2CPP_REGISTER_METHODINFO(0x0476C768, AuthorityKeyIdentifierExtension_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0291D930, void, Encode, (AuthorityKeyIdentifierExtension * __this));
IL2CPP_REGISTER_METHODINFO(0x0470EFF8, AuthorityKeyIdentifierExtension_Encode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0291DC70, String *, get_Name, (AuthorityKeyIdentifierExtension * __this));
IL2CPP_REGISTER_METHOD(0x0291DCF0, Byte__Array *, get_Identifier, (AuthorityKeyIdentifierExtension * __this));
IL2CPP_REGISTER_METHOD(0x0291DE40, String *, ToString, (AuthorityKeyIdentifierExtension * __this));
}
