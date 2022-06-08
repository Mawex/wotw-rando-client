using namespace app;

namespace app::methods::Mono::Security::X509::X509Crl {
IL2CPP_REGISTER_METHOD(0x029414D0, void, __ctor, (X509Crl * __this, Byte__Array * crl));
IL2CPP_REGISTER_METHODINFO(0x0472EA88, X509Crl__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02941660, void, Parse, (X509Crl * __this, Byte__Array * crl));
IL2CPP_REGISTER_METHODINFO(0x04798DC0, X509Crl_Parse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02942000, ArrayList *, get_Entries, (X509Crl * __this));
IL2CPP_REGISTER_METHOD(0x029420A0, X509Crl_X509CrlEntry *, get_Item, (X509Crl * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x029421A0, X509Crl_X509CrlEntry *, get_Item, (X509Crl * __this, Byte__Array * serialNumber));
IL2CPP_REGISTER_METHOD(0x002FB9F0, X509ExtensionCollection_1 *, get_Extensions, (X509Crl * __this));
IL2CPP_REGISTER_METHOD(0x029421B0, Byte__Array *, get_Hash, (X509Crl * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_IssuerName, (X509Crl * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, DateTime, get_NextUpdate, (X509Crl * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, DateTime, get_ThisUpdate, (X509Crl * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_SignatureAlgorithm, (X509Crl * __this));
IL2CPP_REGISTER_METHOD(0x029424B0, Byte__Array *, get_Signature, (X509Crl * __this));
IL2CPP_REGISTER_METHOD(0x02942600, Byte__Array *, get_RawData, (X509Crl * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, uint8_t, get_Version, (X509Crl * __this));
IL2CPP_REGISTER_METHOD(0x02942740, bool, get_IsCurrent, (X509Crl * __this));
IL2CPP_REGISTER_METHOD(0x02942920, bool, WasCurrent, (X509Crl * __this, DateTime instant));
IL2CPP_REGISTER_METHOD(0x02942A80, Byte__Array *, GetBytes, (X509Crl * __this));
IL2CPP_REGISTER_METHOD(0x0293FC80, bool, Compare, (X509Crl * __this, Byte__Array * array1, Byte__Array * array2));
IL2CPP_REGISTER_METHOD(0x02942BC0, X509Crl_X509CrlEntry *, GetCrlEntry, (X509Crl * __this, X509Certificate_2 * x509));
IL2CPP_REGISTER_METHODINFO(0x04764308, X509Crl_GetCrlEntry__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02942CA0, X509Crl_X509CrlEntry *, GetCrlEntry, (X509Crl * __this, Byte__Array * serialNumber));
IL2CPP_REGISTER_METHODINFO(0x04701200, X509Crl_GetCrlEntry_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02942F80, bool, VerifySignature, (X509Crl * __this, X509Certificate_2 * x509));
IL2CPP_REGISTER_METHODINFO(0x0473BBB0, X509Crl_VerifySignature__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02943370, bool, VerifySignature, (X509Crl * __this, DSA * dsa));
IL2CPP_REGISTER_METHODINFO(0x0477E040, X509Crl_VerifySignature_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029437C0, bool, VerifySignature, (X509Crl * __this, RSA * rsa));
IL2CPP_REGISTER_METHOD(0x02943980, bool, VerifySignature, (X509Crl * __this, AsymmetricAlgorithm * aa));
IL2CPP_REGISTER_METHODINFO(0x04790BC8, X509Crl_VerifySignature_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02943B90, X509Crl *, CreateFromFile, (String * filename));
IL2CPP_REGISTER_METHODINFO(0x04768768, X509Crl_CreateFromFile__MethodInfo);
}
