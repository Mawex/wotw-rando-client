#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RSAPKCS1KeyExchangeDeformatter * __this));
IL2CPP_REGISTER_METHOD(0x028EC0A0, void, __ctor, (RSAPKCS1KeyExchangeDeformatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x0472FF10, RSAPKCS1KeyExchangeDeformatter__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB950, RandomNumberGenerator *, get_RNG, (RSAPKCS1KeyExchangeDeformatter * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_RNG, (RSAPKCS1KeyExchangeDeformatter * __this, RandomNumberGenerator * value));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_Parameters, (RSAPKCS1KeyExchangeDeformatter * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Parameters, (RSAPKCS1KeyExchangeDeformatter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x028EC1B0, Byte__Array *, DecryptKeyExchange, (RSAPKCS1KeyExchangeDeformatter * __this, Byte__Array * rgbIn));
IL2CPP_REGISTER_METHODINFO(0x04758B18, RSAPKCS1KeyExchangeDeformatter_DecryptKeyExchange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028EC3F0, void, SetKey, (RSAPKCS1KeyExchangeDeformatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x0473EB68, RSAPKCS1KeyExchangeDeformatter_SetKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028EC500, bool, get_OverridesDecrypt, (RSAPKCS1KeyExchangeDeformatter * __this));
}
