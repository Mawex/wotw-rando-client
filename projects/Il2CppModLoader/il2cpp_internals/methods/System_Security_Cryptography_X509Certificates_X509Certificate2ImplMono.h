using namespace app;

namespace app::methods::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono {
IL2CPP_REGISTER_METHOD(0x0194FC60, bool, get_IsValid, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, __ctor, (X509Certificate2ImplMono * __this, X509Certificate_2 * cert));
IL2CPP_REGISTER_METHOD(0x021C77E0, void, __ctor, (X509Certificate2ImplMono * __this, X509Certificate2ImplMono * other));
IL2CPP_REGISTER_METHOD(0x021C7950, X509CertificateImpl *, Clone, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021C7AB0, String *, GetIssuerName, (X509Certificate2ImplMono * __this, bool legacyV1Mode));
IL2CPP_REGISTER_METHOD(0x021C7BC0, String *, GetSubjectName, (X509Certificate2ImplMono * __this, bool legacyV1Mode));
IL2CPP_REGISTER_METHOD(0x021C7CD0, Byte__Array *, GetRawCertData, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021C7D10, Byte__Array *, GetCertHash, (X509Certificate2ImplMono * __this, bool lazy));
IL2CPP_REGISTER_METHOD(0x021C7D80, DateTime, GetValidFrom, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021C7DC0, DateTime, GetValidUntil, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHOD(0x01E17530, bool, Equals, (X509Certificate2ImplMono * __this, X509CertificateImpl * other, bool * result));
IL2CPP_REGISTER_METHOD(0x021C7E00, Byte__Array *, GetPublicKey, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021C7E40, Byte__Array *, GetSerialNumber, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHOD(0x00C944C0, void, __ctor, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021C7E80, X509ExtensionCollection_2 *, get_Extensions, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHODINFO(0x04772430, X509Certificate2ImplMono_get_Extensions__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C8050, X500DistinguishedName *, get_IssuerName, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHODINFO(0x0473B640, X509Certificate2ImplMono_get_IssuerName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C8250, AsymmetricAlgorithm *, get_PrivateKey, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHODINFO(0x047468B0, X509Certificate2ImplMono_get_PrivateKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C8590, void, set_PrivateKey, (X509Certificate2ImplMono * __this, AsymmetricAlgorithm * value));
IL2CPP_REGISTER_METHODINFO(0x0475E2E8, X509Certificate2ImplMono_set_PrivateKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C8780, PublicKey *, get_PublicKey, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHODINFO(0x0471C378, X509Certificate2ImplMono_get_PublicKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C89B0, Oid *, get_SignatureAlgorithm, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHODINFO(0x04737070, X509Certificate2ImplMono_get_SignatureAlgorithm__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C8BB0, X500DistinguishedName *, get_SubjectName, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHODINFO(0x04718E18, X509Certificate2ImplMono_get_SubjectName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C8DB0, int32_t, get_Version, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHODINFO(0x04781D28, X509Certificate2ImplMono_get_Version__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C8EA0, String *, GetNameInfo, (X509Certificate2ImplMono * __this, X509NameType__Enum nameType, bool forIssuer));
IL2CPP_REGISTER_METHODINFO(0x0472B990, X509Certificate2ImplMono_GetNameInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021C9200, ASN1_1 *, Find, (X509Certificate2ImplMono * __this, Byte__Array * oid, ASN1_1 * dn));
IL2CPP_REGISTER_METHOD(0x021C9370, String *, GetValueAsString, (X509Certificate2ImplMono * __this, ASN1_1 * pair));
IL2CPP_REGISTER_METHOD(0x021C96A0, X509Certificate_2 *, ImportPkcs12, (X509Certificate2ImplMono * __this, Byte__Array * rawData, String * password));
IL2CPP_REGISTER_METHOD(0x021CA210, void, Import, (X509Certificate2ImplMono * __this, Byte__Array * rawData, String * password, X509KeyStorageFlags__Enum keyStorageFlags));
IL2CPP_REGISTER_METHODINFO(0x0474F350, X509Certificate2ImplMono_Import__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021CA500, void, Reset, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021CA5F0, String *, ToString, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021CA690, String *, ToString, (X509Certificate2ImplMono * __this, bool verbose));
IL2CPP_REGISTER_METHOD(0x021CADC0, void, AppendBuffer, (StringBuilder * sb, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x021CAEE0, bool, Verify, (X509Certificate2ImplMono * __this, X509Certificate2 * thisCertificate));
IL2CPP_REGISTER_METHODINFO(0x0476DD68, X509Certificate2ImplMono_Verify__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9F0, X509CertificateImplCollection *, get_IntermediateCertificates, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, X509Certificate_2 *, get_MonoCertificate, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, X509Certificate2Impl *, get_FallbackImpl, (X509Certificate2ImplMono * __this));
IL2CPP_REGISTER_METHOD(0x021CB130, void, __cctor, (MethodInfo * method));
}
