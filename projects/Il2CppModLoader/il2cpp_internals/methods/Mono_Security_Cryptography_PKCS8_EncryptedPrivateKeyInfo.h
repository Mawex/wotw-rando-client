using namespace app;

namespace app::methods::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PKCS8_EncryptedPrivateKeyInfo * __this));
IL2CPP_REGISTER_METHOD(0x025D2F50, void, __ctor, (PKCS8_EncryptedPrivateKeyInfo * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Algorithm, (PKCS8_EncryptedPrivateKeyInfo * __this));
IL2CPP_REGISTER_METHOD(0x025D2F60, Byte__Array *, get_EncryptedData, (PKCS8_EncryptedPrivateKeyInfo * __this));
IL2CPP_REGISTER_METHOD(0x025D30B0, Byte__Array *, get_Salt, (PKCS8_EncryptedPrivateKeyInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_IterationCount, (PKCS8_EncryptedPrivateKeyInfo * __this));
IL2CPP_REGISTER_METHOD(0x025D3240, void, Decode, (PKCS8_EncryptedPrivateKeyInfo * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x04764068, PKCS8_EncryptedPrivateKeyInfo_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PKCS8_EncryptedPrivateKeyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A3FD50, void, __ctor, (PKCS8_EncryptedPrivateKeyInfo_1 * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Algorithm, (PKCS8_EncryptedPrivateKeyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Algorithm, (PKCS8_EncryptedPrivateKeyInfo_1 * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02A3FD60, Byte__Array *, get_EncryptedData, (PKCS8_EncryptedPrivateKeyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A3FEB0, void, set_EncryptedData, (PKCS8_EncryptedPrivateKeyInfo_1 * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x02A40000, Byte__Array *, get_Salt, (PKCS8_EncryptedPrivateKeyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_IterationCount, (PKCS8_EncryptedPrivateKeyInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A40190, void, set_IterationCount, (PKCS8_EncryptedPrivateKeyInfo_1 * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04711940, PKCS8_EncryptedPrivateKeyInfo_1_set_IterationCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A40250, void, Decode, (PKCS8_EncryptedPrivateKeyInfo_1 * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x047641E8, PKCS8_EncryptedPrivateKeyInfo_1_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A40660, Byte__Array *, GetBytes, (PKCS8_EncryptedPrivateKeyInfo_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x0475D058, PKCS8_EncryptedPrivateKeyInfo_1_GetBytes__MethodInfo);
}
