using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::RSASslSignatureFormatter {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RSASslSignatureFormatter * __this));
IL2CPP_REGISTER_METHOD(0x01F76900, void, __ctor, (RSASslSignatureFormatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHOD(0x01F76E00, Byte__Array *, CreateSignature, (RSASslSignatureFormatter * __this, Byte__Array * rgbHash));
IL2CPP_REGISTER_METHODINFO(0x04754CF8, RSASslSignatureFormatter_CreateSignature__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F77050, void, SetHashAlgorithm, (RSASslSignatureFormatter * __this, String * strName));
IL2CPP_REGISTER_METHOD(0x01F771F0, void, SetKey, (RSASslSignatureFormatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x0471AE10, RSASslSignatureFormatter_SetKey__MethodInfo);
}
