using namespace app;

namespace app::methods::System::Security::Cryptography::RSAPKCS1SignatureFormatter {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RSAPKCS1SignatureFormatter * __this));
IL2CPP_REGISTER_METHOD(0x01F76900, void, __ctor, (RSAPKCS1SignatureFormatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHOD(0x028ED8B0, Byte__Array *, CreateSignature, (RSAPKCS1SignatureFormatter * __this, Byte__Array * rgbHash));
IL2CPP_REGISTER_METHODINFO(0x047710E8, RSAPKCS1SignatureFormatter_CreateSignature__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028EDA30, void, SetHashAlgorithm, (RSAPKCS1SignatureFormatter * __this, String * strName));
IL2CPP_REGISTER_METHODINFO(0x0472F228, RSAPKCS1SignatureFormatter_SetHashAlgorithm__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028EDAF0, void, SetKey, (RSAPKCS1SignatureFormatter * __this, AsymmetricAlgorithm * key));
IL2CPP_REGISTER_METHODINFO(0x047944D0, RSAPKCS1SignatureFormatter_SetKey__MethodInfo);
}
