#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension {
IL2CPP_REGISTER_METHOD(0x021C3470, void, __ctor, (X509BasicConstraintsExtension * __this));
IL2CPP_REGISTER_METHOD(0x021C35D0, void, __ctor, (X509BasicConstraintsExtension * __this, AsnEncodedData * encodedBasicConstraints, bool critical));
IL2CPP_REGISTER_METHOD(0x021C3760, void, __ctor, (X509BasicConstraintsExtension * __this, bool certificateAuthority, bool hasPathLengthConstraint, int32_t pathLengthConstraint, bool critical));
IL2CPP_REGISTER_METHODINFO(0x047220F8, X509BasicConstraintsExtension__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C3940, bool, get_CertificateAuthority, (X509BasicConstraintsExtension * __this));
IL2CPP_REGISTER_METHODINFO(0x0473B9F0, X509BasicConstraintsExtension_get_CertificateAuthority__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C3A00, bool, get_HasPathLengthConstraint, (X509BasicConstraintsExtension * __this));
IL2CPP_REGISTER_METHODINFO(0x04708318, X509BasicConstraintsExtension_get_HasPathLengthConstraint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C3AC0, int32_t, get_PathLengthConstraint, (X509BasicConstraintsExtension * __this));
IL2CPP_REGISTER_METHODINFO(0x04724108, X509BasicConstraintsExtension_get_PathLengthConstraint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C3B80, void, CopyFrom, (X509BasicConstraintsExtension * __this, AsnEncodedData * asnEncodedData));
IL2CPP_REGISTER_METHODINFO(0x0475A118, X509BasicConstraintsExtension_CopyFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C3E90, AsnDecodeStatus__Enum, Decode, (X509BasicConstraintsExtension * __this, Byte__Array * extension));
IL2CPP_REGISTER_METHOD(0x021C4110, Byte__Array *, Encode, (X509BasicConstraintsExtension * __this));
IL2CPP_REGISTER_METHOD(0x021C44A0, String *, ToString, (X509BasicConstraintsExtension * __this, bool multiLine));
}
