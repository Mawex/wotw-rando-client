#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::AsymmetricAlgorithm {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::AsymmetricAlgorithm * this_ptr));
IL2CPP_REGISTER_METHOD(0x020C87A0, void, Dispose_1, (app::AsymmetricAlgorithm * this_ptr));
IL2CPP_REGISTER_METHOD(0x020C87B0, void, Clear, (app::AsymmetricAlgorithm * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose_2, (app::AsymmetricAlgorithm * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_KeySize, (app::AsymmetricAlgorithm * this_ptr));
IL2CPP_REGISTER_METHOD(0x020C8860, void, set_KeySize, (app::AsymmetricAlgorithm * this_ptr, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04775A00, AsymmetricAlgorithm_set_KeySize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C89E0, KeySizes__Array *, get_LegalKeySizes, (app::AsymmetricAlgorithm * this_ptr));
IL2CPP_REGISTER_METHOD(0x020C8B20, String *, get_SignatureAlgorithm, (app::AsymmetricAlgorithm * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04734B30, AsymmetricAlgorithm_get_SignatureAlgorithm__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C8B70, String *, get_KeyExchangeAlgorithm, (app::AsymmetricAlgorithm * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047746B0, AsymmetricAlgorithm_get_KeyExchangeAlgorithm__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C8BC0, AsymmetricAlgorithm *, Create_1, ());
IL2CPP_REGISTER_METHOD(0x020C8D10, AsymmetricAlgorithm *, Create_2, (app::String * alg_name));
IL2CPP_REGISTER_METHOD(0x020C8DF0, void, FromXmlString, (app::AsymmetricAlgorithm * this_ptr, app::String * xml_string));
IL2CPP_REGISTER_METHODINFO(0x04756FD0, AsymmetricAlgorithm_FromXmlString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C8E40, String *, ToXmlString, (app::AsymmetricAlgorithm * this_ptr, bool include_private_parameters));
IL2CPP_REGISTER_METHODINFO(0x04757490, AsymmetricAlgorithm_ToXmlString__MethodInfo);
}
