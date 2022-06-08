using namespace app;

namespace app::methods::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RSAOAEPKeyExchangeDeformatter * __this));
IL2CPP_REGISTER_METHOD(0x028EAF30, void, __ctor, (RSAOAEPKeyExchangeDeformatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x04791558, RSAOAEPKeyExchangeDeformatter__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_Parameters, (RSAOAEPKeyExchangeDeformatter * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Parameters, (RSAOAEPKeyExchangeDeformatter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x028EB040, Byte__Array *, DecryptKeyExchange, (RSAOAEPKeyExchangeDeformatter * __this, Byte__Array * rgbData));
IL2CPP_REGISTER_METHODINFO(0x04763208, RSAOAEPKeyExchangeDeformatter_DecryptKeyExchange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028EB330, void, SetKey, (RSAOAEPKeyExchangeDeformatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x04700D48, RSAOAEPKeyExchangeDeformatter_SetKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028EB440, bool, get_OverridesDecrypt, (RSAOAEPKeyExchangeDeformatter * __this));
}
