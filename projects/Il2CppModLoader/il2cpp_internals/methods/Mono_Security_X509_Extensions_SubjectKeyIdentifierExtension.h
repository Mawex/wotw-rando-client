using namespace app;

namespace app::methods::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension {
IL2CPP_REGISTER_METHOD(0x0291D710, void, __ctor, (SubjectKeyIdentifierExtension * __this, X509Extension_2 * extension));
IL2CPP_REGISTER_METHOD(0x029228C0, void, Decode, (SubjectKeyIdentifierExtension * __this));
IL2CPP_REGISTER_METHODINFO(0x04735AA8, SubjectKeyIdentifierExtension_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02922A80, void, Encode, (SubjectKeyIdentifierExtension * __this));
IL2CPP_REGISTER_METHODINFO(0x047580D8, SubjectKeyIdentifierExtension_Encode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02922CE0, String *, get_Name, (SubjectKeyIdentifierExtension * __this));
IL2CPP_REGISTER_METHOD(0x02922D60, Byte__Array *, get_Identifier, (SubjectKeyIdentifierExtension * __this));
IL2CPP_REGISTER_METHOD(0x02922EB0, String *, ToString, (SubjectKeyIdentifierExtension * __this));
}
