using namespace app;

namespace app::methods::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RSAPKCS1KeyExchangeFormatter * __this));
IL2CPP_REGISTER_METHOD(0x028EC770, void, __ctor, (RSAPKCS1KeyExchangeFormatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x04710898, RSAPKCS1KeyExchangeFormatter__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028EC880, String *, get_Parameters, (RSAPKCS1KeyExchangeFormatter * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, RandomNumberGenerator *, get_Rng, (RSAPKCS1KeyExchangeFormatter * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Rng, (RSAPKCS1KeyExchangeFormatter * __this, RandomNumberGenerator * value));
IL2CPP_REGISTER_METHOD(0x028EC900, void, SetKey, (RSAPKCS1KeyExchangeFormatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x04750568, RSAPKCS1KeyExchangeFormatter_SetKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028ECA10, Byte__Array *, CreateKeyExchange, (RSAPKCS1KeyExchangeFormatter * __this, Byte__Array * rgbData));
IL2CPP_REGISTER_METHODINFO(0x047483E8, RSAPKCS1KeyExchangeFormatter_CreateKeyExchange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DC7CD0, Byte__Array *, CreateKeyExchange, (RSAPKCS1KeyExchangeFormatter * __this, Byte__Array * rgbData, Type * symAlgType));
IL2CPP_REGISTER_METHOD(0x028ECD60, bool, get_OverridesEncrypt, (RSAPKCS1KeyExchangeFormatter * __this));
}
