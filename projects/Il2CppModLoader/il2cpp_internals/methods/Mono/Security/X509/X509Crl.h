#include <interception_macros.h>

namespace app::methods::Mono::Security::X509::X509Crl {
    IL2CPP_REGISTER_METHOD(0x029414D0, void, __ctor, (app::X509Crl * this_ptr, app::Byte__Array * crl));
    IL2CPP_REGISTER_METHODINFO(0x0472EA88, X509Crl__ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02941660, void, Parse, (app::X509Crl * this_ptr, app::Byte__Array * crl));
    IL2CPP_REGISTER_METHODINFO(0x04798DC0, X509Crl_Parse__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02942000, app::ArrayList *, get_Entries, (app::X509Crl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x029420A0, app::X509Crl_X509CrlEntry *, get_Item_1, (app::X509Crl * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x029421A0, app::X509Crl_X509CrlEntry *, get_Item_2, (app::X509Crl * this_ptr, app::Byte__Array * serial_number));
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::X509ExtensionCollection_1 *, get_Extensions, (app::X509Crl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x029421B0, app::Byte__Array *, get_Hash, (app::X509Crl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_IssuerName, (app::X509Crl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::DateTime, get_NextUpdate, (app::X509Crl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB950, app::DateTime, get_ThisUpdate, (app::X509Crl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String *, get_SignatureAlgorithm, (app::X509Crl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x029424B0, app::Byte__Array *, get_Signature, (app::X509Crl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02942600, app::Byte__Array *, get_RawData, (app::X509Crl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0052A280, uint8_t, get_Version, (app::X509Crl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02942740, bool, get_IsCurrent, (app::X509Crl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02942920, bool, WasCurrent, (app::X509Crl * this_ptr, app::DateTime instant));
    IL2CPP_REGISTER_METHOD(0x02942A80, app::Byte__Array *, GetBytes, (app::X509Crl * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0293FC80, bool, Compare, (app::X509Crl * this_ptr, app::Byte__Array * array1, app::Byte__Array * array2));
    IL2CPP_REGISTER_METHOD(0x02942BC0, app::X509Crl_X509CrlEntry *, GetCrlEntry_1, (app::X509Crl * this_ptr, app::X509Certificate_2 * x509));
    IL2CPP_REGISTER_METHODINFO(0x04764308, X509Crl_GetCrlEntry__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02942CA0, app::X509Crl_X509CrlEntry *, GetCrlEntry_2, (app::X509Crl * this_ptr, app::Byte__Array * serial_number));
    IL2CPP_REGISTER_METHODINFO(0x04701200, X509Crl_GetCrlEntry_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02942F80, bool, VerifySignature_1, (app::X509Crl * this_ptr, app::X509Certificate_2 * x509));
    IL2CPP_REGISTER_METHODINFO(0x0473BBB0, X509Crl_VerifySignature__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02943370, bool, VerifySignature_2, (app::X509Crl * this_ptr, app::DSA * dsa));
    IL2CPP_REGISTER_METHODINFO(0x0477E040, X509Crl_VerifySignature_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x029437C0, bool, VerifySignature_3, (app::X509Crl * this_ptr, app::RSA * rsa));
    IL2CPP_REGISTER_METHOD(0x02943980, bool, VerifySignature_4, (app::X509Crl * this_ptr, app::AsymmetricAlgorithm * aa));
    IL2CPP_REGISTER_METHODINFO(0x04790BC8, X509Crl_VerifySignature_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02943B90, app::X509Crl *, CreateFromFile, (app::String * filename));
    IL2CPP_REGISTER_METHODINFO(0x04768768, X509Crl_CreateFromFile__MethodInfo);
}
