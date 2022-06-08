#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::X509CertificateBuilder {
IL2CPP_REGISTER_METHOD(0x0293DCD0, void, __ctor, (X509CertificateBuilder * __this));
IL2CPP_REGISTER_METHOD(0x0293DCE0, void, __ctor, (X509CertificateBuilder * __this, uint8_t version));
IL2CPP_REGISTER_METHODINFO(0x04702DC0, X509CertificateBuilder__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0052A280, uint8_t, get_Version, (X509CertificateBuilder * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_Version, (X509CertificateBuilder * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x002FB950, Byte__Array *, get_SerialNumber, (X509CertificateBuilder * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_SerialNumber, (X509CertificateBuilder * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_IssuerName, (X509CertificateBuilder * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_IssuerName, (X509CertificateBuilder * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, DateTime, get_NotBefore, (X509CertificateBuilder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_NotBefore, (X509CertificateBuilder * __this, DateTime value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, DateTime, get_NotAfter, (X509CertificateBuilder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_NotAfter, (X509CertificateBuilder * __this, DateTime value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_SubjectName, (X509CertificateBuilder * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_SubjectName, (X509CertificateBuilder * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, AsymmetricAlgorithm *, get_SubjectPublicKey, (X509CertificateBuilder * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_SubjectPublicKey, (X509CertificateBuilder * __this, AsymmetricAlgorithm * value));
IL2CPP_REGISTER_METHOD(0x002FBB40, Byte__Array *, get_IssuerUniqueId, (X509CertificateBuilder * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_IssuerUniqueId, (X509CertificateBuilder * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x002FBB60, Byte__Array *, get_SubjectUniqueId, (X509CertificateBuilder * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_SubjectUniqueId, (X509CertificateBuilder * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x002FBB80, X509ExtensionCollection_1 *, get_Extensions, (X509CertificateBuilder * __this));
IL2CPP_REGISTER_METHOD(0x0293DED0, ASN1_1 *, SubjectPublicKeyInfo, (X509CertificateBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x0478CEA0, X509CertificateBuilder_SubjectPublicKeyInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0293E7A0, Byte__Array *, UniqueIdentifier, (X509CertificateBuilder * __this, Byte__Array * id));
IL2CPP_REGISTER_METHOD(0x0293E940, ASN1_1 *, ToBeSigned, (X509CertificateBuilder * __this, String * oid));
}
