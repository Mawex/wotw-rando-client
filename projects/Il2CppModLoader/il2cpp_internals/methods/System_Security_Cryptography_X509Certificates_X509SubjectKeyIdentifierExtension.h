#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension {
IL2CPP_REGISTER_METHOD(0x0257E3B0, void, __ctor, (X509SubjectKeyIdentifierExtension * __this));
IL2CPP_REGISTER_METHOD(0x0257E510, void, __ctor, (X509SubjectKeyIdentifierExtension * __this, AsnEncodedData * encodedSubjectKeyIdentifier, bool critical));
IL2CPP_REGISTER_METHOD(0x0257E6A0, void, __ctor, (X509SubjectKeyIdentifierExtension * __this, Byte__Array * subjectKeyIdentifier, bool critical));
IL2CPP_REGISTER_METHODINFO(0x04776D08, X509SubjectKeyIdentifierExtension__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0257E960, void, __ctor, (X509SubjectKeyIdentifierExtension * __this, String * subjectKeyIdentifier, bool critical));
IL2CPP_REGISTER_METHODINFO(0x04713308, X509SubjectKeyIdentifierExtension__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0257EB70, void, __ctor, (X509SubjectKeyIdentifierExtension * __this, PublicKey * key, bool critical));
IL2CPP_REGISTER_METHOD(0x0257EB90, void, __ctor, (X509SubjectKeyIdentifierExtension * __this, PublicKey * key, X509SubjectKeyIdentifierHashAlgorithm__Enum algorithm, bool critical));
IL2CPP_REGISTER_METHODINFO(0x04734720, X509SubjectKeyIdentifierExtension__ctor_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0257F380, String *, get_SubjectKeyIdentifier, (X509SubjectKeyIdentifierExtension * __this));
IL2CPP_REGISTER_METHODINFO(0x04707010, X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0257F450, void, CopyFrom, (X509SubjectKeyIdentifierExtension * __this, AsnEncodedData * asnEncodedData));
IL2CPP_REGISTER_METHODINFO(0x047161C8, X509SubjectKeyIdentifierExtension_CopyFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0257F760, uint8_t, FromHexChar, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x0257F790, uint8_t, FromHexChars, (uint16_t c1, uint16_t c2));
IL2CPP_REGISTER_METHOD(0x0257F810, Byte__Array *, FromHex, (String * hex));
IL2CPP_REGISTER_METHOD(0x0257F9B0, AsnDecodeStatus__Enum, Decode, (X509SubjectKeyIdentifierExtension * __this, Byte__Array * extension));
IL2CPP_REGISTER_METHOD(0x0257FBF0, Byte__Array *, Encode, (X509SubjectKeyIdentifierExtension * __this));
IL2CPP_REGISTER_METHOD(0x0257FD50, String *, ToString, (X509SubjectKeyIdentifierExtension * __this, bool multiLine));
}
