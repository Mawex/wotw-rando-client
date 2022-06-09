#include <interception_macros.h>

namespace app::methods::Mono_Security_Cryptography::RSAManaged {
IL2CPP_REGISTER_METHOD(0x025D4FD0, void, __ctor_1, (app::RSAManaged * this_ptr, int32_t key_size));
IL2CPP_REGISTER_METHOD(0x025D51B0, void, Finalize_1, (app::RSAManaged * this_ptr));
IL2CPP_REGISTER_METHOD(0x025D5230, void, GenerateKeyPair_1, (app::RSAManaged * this_ptr));
IL2CPP_REGISTER_METHOD(0x025D56D0, int32_t, get_KeySize_1, (app::RSAManaged * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04721FA0, RSAManaged_get_KeySize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D57D0, String *, get_KeyExchangeAlgorithm_1, (app::RSAManaged * this_ptr));
IL2CPP_REGISTER_METHOD(0x025D5850, bool, get_PublicOnly_1, (app::RSAManaged * this_ptr));
IL2CPP_REGISTER_METHOD(0x025D5950, String *, get_SignatureAlgorithm_1, (app::RSAManaged * this_ptr));
IL2CPP_REGISTER_METHOD(0x025D59D0, Byte__Array *, DecryptValue_1, (app::RSAManaged * this_ptr, app::Byte__Array * rgb));
IL2CPP_REGISTER_METHODINFO(0x04763278, RSAManaged_DecryptValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D5FC0, Byte__Array *, EncryptValue_1, (app::RSAManaged * this_ptr, app::Byte__Array * rgb));
IL2CPP_REGISTER_METHODINFO(0x04710F70, RSAManaged_EncryptValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D6260, RSAParameters, ExportParameters_1, (app::RSAManaged * this_ptr, bool include_private_parameters));
IL2CPP_REGISTER_METHODINFO(0x0477CA30, RSAManaged_ExportParameters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D6680, void, ImportParameters_1, (app::RSAManaged * this_ptr, app::RSAParameters parameters));
IL2CPP_REGISTER_METHODINFO(0x04717508, RSAManaged_ImportParameters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D72F0, void, Dispose_1, (app::RSAManaged * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x025D7620, void, add_KeyGenerated, (app::RSAManaged * this_ptr, app::RSAManaged_KeyGeneratedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x025D7710, void, remove_KeyGenerated, (app::RSAManaged * this_ptr, app::RSAManaged_KeyGeneratedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x025D7800, String *, ToXmlString_1, (app::RSAManaged * this_ptr, bool include_private_parameters));
IL2CPP_REGISTER_METHODINFO(0x04772890, RSAManaged_ToXmlString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025D7DE0, bool, get_IsCrtPossible, (app::RSAManaged * this_ptr));
IL2CPP_REGISTER_METHOD(0x025D7DF0, Byte__Array *, GetPaddedValue_1, (app::RSAManaged * this_ptr, app::BigInteger * value, int32_t length));
IL2CPP_REGISTER_METHOD(0x02A43200, void, __ctor_2, (app::RSAManaged_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A43210, void, __ctor_3, (app::RSAManaged_1 * this_ptr, int32_t key_size));
IL2CPP_REGISTER_METHOD(0x02A433F0, void, Finalize_2, (app::RSAManaged_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A43470, void, GenerateKeyPair_2, (app::RSAManaged_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A43910, int32_t, get_KeySize_2, (app::RSAManaged_1 * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04731738, RSAManaged_1_get_KeySize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A43A10, String *, get_KeyExchangeAlgorithm_2, (app::RSAManaged_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A43A90, bool, get_PublicOnly_2, (app::RSAManaged_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A43B90, String *, get_SignatureAlgorithm_2, (app::RSAManaged_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A43C10, Byte__Array *, DecryptValue_2, (app::RSAManaged_1 * this_ptr, app::Byte__Array * rgb));
IL2CPP_REGISTER_METHODINFO(0x0471CC10, RSAManaged_1_DecryptValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A44200, Byte__Array *, EncryptValue_2, (app::RSAManaged_1 * this_ptr, app::Byte__Array * rgb));
IL2CPP_REGISTER_METHODINFO(0x0476ACA8, RSAManaged_1_EncryptValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A444A0, RSAParameters, ExportParameters_2, (app::RSAManaged_1 * this_ptr, bool include_private_parameters));
IL2CPP_REGISTER_METHODINFO(0x0474EA20, RSAManaged_1_ExportParameters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A448C0, void, ImportParameters_2, (app::RSAManaged_1 * this_ptr, app::RSAParameters parameters));
IL2CPP_REGISTER_METHODINFO(0x04792690, RSAManaged_1_ImportParameters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A45530, void, Dispose_2, (app::RSAManaged_1 * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x02A45860, String *, ToXmlString_2, (app::RSAManaged_1 * this_ptr, bool include_private_parameters));
IL2CPP_REGISTER_METHODINFO(0x0478D010, RSAManaged_1_ToXmlString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A45E40, Byte__Array *, GetPaddedValue_2, (app::RSAManaged_1 * this_ptr, app::BigInteger_1 * value, int32_t length));
}
