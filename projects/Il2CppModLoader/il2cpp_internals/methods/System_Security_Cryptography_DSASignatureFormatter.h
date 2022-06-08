using namespace app;

namespace app::methods::System::Security::Cryptography::DSASignatureFormatter {
IL2CPP_REGISTER_METHOD(0x020D7890, void, __ctor, (DSASignatureFormatter * __this));
IL2CPP_REGISTER_METHOD(0x020D7930, void, __ctor, (DSASignatureFormatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x04792580, DSASignatureFormatter__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D7A40, void, SetKey, (DSASignatureFormatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x0472E670, DSASignatureFormatter_SetKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D7B50, void, SetHashAlgorithm, (DSASignatureFormatter * __this, String * strName));
IL2CPP_REGISTER_METHODINFO(0x04763080, DSASignatureFormatter_SetHashAlgorithm__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D7C60, Byte__Array *, CreateSignature, (DSASignatureFormatter * __this, Byte__Array * rgbHash));
IL2CPP_REGISTER_METHODINFO(0x047261E8, DSASignatureFormatter_CreateSignature__MethodInfo);
}
