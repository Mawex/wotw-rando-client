#include <interception_macros.h>

namespace app::methods::Mono_Security_Cryptography::PKCS8_EncryptedPrivateKeyInfo {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::PKCS8_EncryptedPrivateKeyInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x025D2F50, void, __ctor_2, (app::PKCS8_EncryptedPrivateKeyInfo * this_ptr, app::Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Algorithm_1, (app::PKCS8_EncryptedPrivateKeyInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x025D2F60, Byte__Array *, get_EncryptedData_1, (app::PKCS8_EncryptedPrivateKeyInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x025D30B0, Byte__Array *, get_Salt_1, (app::PKCS8_EncryptedPrivateKeyInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_IterationCount_1, (app::PKCS8_EncryptedPrivateKeyInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x025D3240, void, Decode_1, (app::PKCS8_EncryptedPrivateKeyInfo * this_ptr, app::Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x04764068, PKCS8_EncryptedPrivateKeyInfo_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_3, (app::PKCS8_EncryptedPrivateKeyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A3FD50, void, __ctor_4, (app::PKCS8_EncryptedPrivateKeyInfo_1 * this_ptr, app::Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Algorithm_2, (app::PKCS8_EncryptedPrivateKeyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Algorithm, (app::PKCS8_EncryptedPrivateKeyInfo_1 * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x02A3FD60, Byte__Array *, get_EncryptedData_2, (app::PKCS8_EncryptedPrivateKeyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A3FEB0, void, set_EncryptedData, (app::PKCS8_EncryptedPrivateKeyInfo_1 * this_ptr, app::Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x02A40000, Byte__Array *, get_Salt_2, (app::PKCS8_EncryptedPrivateKeyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_IterationCount_2, (app::PKCS8_EncryptedPrivateKeyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A40190, void, set_IterationCount, (app::PKCS8_EncryptedPrivateKeyInfo_1 * this_ptr, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04711940, PKCS8_EncryptedPrivateKeyInfo_1_set_IterationCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A40250, void, Decode_2, (app::PKCS8_EncryptedPrivateKeyInfo_1 * this_ptr, app::Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x047641E8, PKCS8_EncryptedPrivateKeyInfo_1_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A40660, Byte__Array *, GetBytes, (app::PKCS8_EncryptedPrivateKeyInfo_1 * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0475D058, PKCS8_EncryptedPrivateKeyInfo_1_GetBytes__MethodInfo);
}
