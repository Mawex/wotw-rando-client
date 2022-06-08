using namespace app;

namespace app::methods::Mono::Security::X509::X509Certificate {
IL2CPP_REGISTER_METHOD(0x025E6220, void, Parse, (X509Certificate * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x04782048, X509Certificate_Parse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025E6D00, void, __ctor, (X509Certificate * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x04786008, X509Certificate__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025E6E60, Byte__Array *, GetUnsignedBigInteger, (X509Certificate * __this, Byte__Array * integer));
IL2CPP_REGISTER_METHOD(0x025E6F50, DSA *, get_DSA, (X509Certificate * __this));
IL2CPP_REGISTER_METHODINFO(0x04717108, X509Certificate_get_DSA__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_IssuerName, (X509Certificate * __this));
IL2CPP_REGISTER_METHOD(0x025E7500, Byte__Array *, get_KeyAlgorithmParameters, (X509Certificate * __this));
IL2CPP_REGISTER_METHOD(0x025E7650, Byte__Array *, get_PublicKey, (X509Certificate * __this));
IL2CPP_REGISTER_METHOD(0x025E77A0, RSA *, get_RSA, (X509Certificate * __this));
IL2CPP_REGISTER_METHOD(0x025E7B30, Byte__Array *, get_RawData, (X509Certificate * __this));
IL2CPP_REGISTER_METHOD(0x025E7C80, Byte__Array *, get_SerialNumber, (X509Certificate * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, get_SubjectName, (X509Certificate * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, DateTime, get_ValidFrom, (X509Certificate * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, DateTime, get_ValidUntil, (X509Certificate * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, ASN1 *, GetIssuerName, (X509Certificate * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, ASN1 *, GetSubjectName, (X509Certificate * __this));
IL2CPP_REGISTER_METHOD(0x025E7DD0, void, GetObjectData, (X509Certificate * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x025E7E70, Byte__Array *, PEM, (String * type, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x025E8070, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0293A480, void, Parse, (X509Certificate_2 * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x047434A0, X509Certificate_2_Parse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0293AF60, void, __ctor, (X509Certificate_2 * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x04733D08, X509Certificate_2__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0293B0C0, Byte__Array *, GetUnsignedBigInteger, (X509Certificate_2 * __this, Byte__Array * integer));
IL2CPP_REGISTER_METHOD(0x0293B1B0, DSA *, get_DSA, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHODINFO(0x04763B00, X509Certificate_2_get_DSA__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0293B760, void, set_DSA, (X509Certificate_2 * __this, DSA * value));
IL2CPP_REGISTER_METHOD(0x002FBCE0, X509ExtensionCollection_1 *, get_Extensions, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x0293B780, Byte__Array *, get_Hash, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_IssuerName, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_KeyAlgorithm, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x0293BAA0, Byte__Array *, get_KeyAlgorithmParameters, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_KeyAlgorithmParameters, (X509Certificate_2 * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x0293BBF0, Byte__Array *, get_PublicKey, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x0293BD40, RSA *, get_RSA, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x0293C0D0, void, set_RSA, (X509Certificate_2 * __this, RSA * value));
IL2CPP_REGISTER_METHOD(0x0293C0F0, Byte__Array *, get_RawData, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x0293C240, Byte__Array *, get_SerialNumber, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x0293C390, Byte__Array *, get_Signature, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHODINFO(0x0478C5E8, X509Certificate_2_get_Signature__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBBC0, String *, get_SignatureAlgorithm, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x0293C8D0, Byte__Array *, get_SignatureAlgorithmParameters, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, get_SubjectName, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, DateTime, get_ValidFrom, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, DateTime, get_ValidUntil, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x00736620, int32_t, get_Version, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x0293CA20, bool, get_IsCurrent, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x0293CBB0, bool, WasCurrent, (X509Certificate_2 * __this, DateTime instant));
IL2CPP_REGISTER_METHOD(0x0293CCD0, Byte__Array *, get_IssuerUniqueIdentifier, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x0293CE20, Byte__Array *, get_SubjectUniqueIdentifier, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x0293CF70, bool, VerifySignature, (X509Certificate_2 * __this, DSA * dsa));
IL2CPP_REGISTER_METHOD(0x0293D120, bool, VerifySignature, (X509Certificate_2 * __this, RSA * rsa));
IL2CPP_REGISTER_METHOD(0x0293D340, bool, VerifySignature, (X509Certificate_2 * __this, AsymmetricAlgorithm * aa));
IL2CPP_REGISTER_METHODINFO(0x04755ED0, X509Certificate_2_VerifySignature_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0293D550, bool, CheckSignature, (X509Certificate_2 * __this, Byte__Array * hash, String * hashAlgorithm, Byte__Array * signature));
IL2CPP_REGISTER_METHOD(0x0293D760, bool, get_IsSelfSigned, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, ASN1_1 *, GetIssuerName, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, ASN1_1 *, GetSubjectName, (X509Certificate_2 * __this));
IL2CPP_REGISTER_METHOD(0x0293D880, void, __ctor, (X509Certificate_2 * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0293D9A0, void, GetObjectData, (X509Certificate_2 * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0293DA40, Byte__Array *, PEM, (String * type, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x0293DC40, void, __cctor, (MethodInfo * method));
}
