#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::RSAOAEPKeyExchangeFormatter {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RSAOAEPKeyExchangeFormatter * __this));
IL2CPP_REGISTER_METHOD(0x028EB6B0, void, __ctor, (RSAOAEPKeyExchangeFormatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x0477B740, RSAOAEPKeyExchangeFormatter__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028EB7C0, Byte__Array *, get_Parameter, (RSAOAEPKeyExchangeFormatter * __this));
IL2CPP_REGISTER_METHOD(0x028EB910, void, set_Parameter, (RSAOAEPKeyExchangeFormatter * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_Parameters, (RSAOAEPKeyExchangeFormatter * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, RandomNumberGenerator *, get_Rng, (RSAOAEPKeyExchangeFormatter * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Rng, (RSAOAEPKeyExchangeFormatter * __this, RandomNumberGenerator * value));
IL2CPP_REGISTER_METHOD(0x028EBA60, void, SetKey, (RSAOAEPKeyExchangeFormatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x04761EF8, RSAOAEPKeyExchangeFormatter_SetKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028EBB70, Byte__Array *, CreateKeyExchange, (RSAOAEPKeyExchangeFormatter * __this, Byte__Array * rgbData));
IL2CPP_REGISTER_METHODINFO(0x0471A5C0, RSAOAEPKeyExchangeFormatter_CreateKeyExchange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DC7CD0, Byte__Array *, CreateKeyExchange, (RSAOAEPKeyExchangeFormatter * __this, Byte__Array * rgbData, Type * symAlgType));
IL2CPP_REGISTER_METHOD(0x028EBE30, bool, get_OverridesEncrypt, (RSAOAEPKeyExchangeFormatter * __this));
}
