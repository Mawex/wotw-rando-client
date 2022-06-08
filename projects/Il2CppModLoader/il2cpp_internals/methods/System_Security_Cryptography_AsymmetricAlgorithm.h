using namespace app;

namespace app::methods::System::Security::Cryptography::AsymmetricAlgorithm {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AsymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x020C87A0, void, Dispose, (AsymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x020C87B0, void, Clear, (AsymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (AsymmetricAlgorithm * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_KeySize, (AsymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x020C8860, void, set_KeySize, (AsymmetricAlgorithm * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04775A00, AsymmetricAlgorithm_set_KeySize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C89E0, KeySizes__Array *, get_LegalKeySizes, (AsymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x020C8B20, String *, get_SignatureAlgorithm, (AsymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHODINFO(0x04734B30, AsymmetricAlgorithm_get_SignatureAlgorithm__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C8B70, String *, get_KeyExchangeAlgorithm, (AsymmetricAlgorithm * __this));
IL2CPP_REGISTER_METHODINFO(0x047746B0, AsymmetricAlgorithm_get_KeyExchangeAlgorithm__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C8BC0, AsymmetricAlgorithm *, Create, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x020C8D10, AsymmetricAlgorithm *, Create, (String * algName));
IL2CPP_REGISTER_METHOD(0x020C8DF0, void, FromXmlString, (AsymmetricAlgorithm * __this, String * xmlString));
IL2CPP_REGISTER_METHODINFO(0x04756FD0, AsymmetricAlgorithm_FromXmlString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020C8E40, String *, ToXmlString, (AsymmetricAlgorithm * __this, bool includePrivateParameters));
IL2CPP_REGISTER_METHODINFO(0x04757490, AsymmetricAlgorithm_ToXmlString__MethodInfo);
}
