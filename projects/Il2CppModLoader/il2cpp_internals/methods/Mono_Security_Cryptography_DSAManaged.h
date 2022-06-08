using namespace app;

namespace app::methods::Mono::Security::Cryptography::DSAManaged {
IL2CPP_REGISTER_METHOD(0x025C92E0, void, __ctor, (DSAManaged * __this, int32_t dwKeySize));
IL2CPP_REGISTER_METHOD(0x025C94A0, void, Finalize, (DSAManaged * __this));
IL2CPP_REGISTER_METHOD(0x025C9520, void, Generate, (DSAManaged * __this));
IL2CPP_REGISTER_METHOD(0x025C96B0, void, GenerateKeyPair, (DSAManaged * __this));
IL2CPP_REGISTER_METHOD(0x025C9810, void, add, (DSAManaged * __this, Byte__Array * a, Byte__Array * b, int32_t value));
IL2CPP_REGISTER_METHOD(0x025C98D0, void, GenerateParams, (DSAManaged * __this, int32_t keyLength));
IL2CPP_REGISTER_METHOD(0x025CA2C0, RandomNumberGenerator *, get_Random, (DSAManaged * __this));
IL2CPP_REGISTER_METHOD(0x025CA2F0, int32_t, get_KeySize, (DSAManaged * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_KeyExchangeAlgorithm, (DSAManaged * __this));
IL2CPP_REGISTER_METHOD(0x025CA320, bool, get_PublicOnly, (DSAManaged * __this));
IL2CPP_REGISTER_METHOD(0x025CA3D0, String *, get_SignatureAlgorithm, (DSAManaged * __this));
IL2CPP_REGISTER_METHOD(0x025CA450, Byte__Array *, NormalizeArray, (DSAManaged * __this, Byte__Array * array));
IL2CPP_REGISTER_METHOD(0x025CA540, DSAParameters, ExportParameters, (DSAManaged * __this, bool includePrivateParameters));
IL2CPP_REGISTER_METHODINFO(0x0474B3E8, DSAManaged_ExportParameters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025CA880, void, ImportParameters, (DSAManaged * __this, DSAParameters parameters));
IL2CPP_REGISTER_METHODINFO(0x0470F210, DSAManaged_ImportParameters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025CB1E0, Byte__Array *, CreateSignature, (DSAManaged * __this, Byte__Array * rgbHash));
IL2CPP_REGISTER_METHODINFO(0x04709980, DSAManaged_CreateSignature__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025CB6B0, bool, VerifySignature, (DSAManaged * __this, Byte__Array * rgbHash, Byte__Array * rgbSignature));
IL2CPP_REGISTER_METHODINFO(0x0471B4C0, DSAManaged_VerifySignature__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025CBD90, void, Dispose, (DSAManaged * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x025CC070, void, add_KeyGenerated, (DSAManaged * __this, DSAManaged_KeyGeneratedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x025CC160, void, remove_KeyGenerated, (DSAManaged * __this, DSAManaged_KeyGeneratedEventHandler * value));
}
