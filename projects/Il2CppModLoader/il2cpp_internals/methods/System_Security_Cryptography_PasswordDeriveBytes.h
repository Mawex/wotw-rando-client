#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::PasswordDeriveBytes {
IL2CPP_REGISTER_METHOD(0x020DFA80, void, __ctor, (PasswordDeriveBytes * __this, String * strPassword, Byte__Array * rgbSalt));
IL2CPP_REGISTER_METHOD(0x020DFC70, void, __ctor, (PasswordDeriveBytes * __this, Byte__Array * password, Byte__Array * salt));
IL2CPP_REGISTER_METHOD(0x020DFE60, void, __ctor, (PasswordDeriveBytes * __this, String * strPassword, Byte__Array * rgbSalt, String * strHashName, int32_t iterations));
IL2CPP_REGISTER_METHOD(0x020E0010, void, __ctor, (PasswordDeriveBytes * __this, Byte__Array * password, Byte__Array * salt, String * hashName, int32_t iterations));
IL2CPP_REGISTER_METHOD(0x020E01C0, void, __ctor, (PasswordDeriveBytes * __this, String * strPassword, Byte__Array * rgbSalt, CspParameters * cspParams));
IL2CPP_REGISTER_METHOD(0x020E0290, void, __ctor, (PasswordDeriveBytes * __this, Byte__Array * password, Byte__Array * salt, CspParameters * cspParams));
IL2CPP_REGISTER_METHOD(0x020E0360, void, __ctor, (PasswordDeriveBytes * __this, String * strPassword, Byte__Array * rgbSalt, String * strHashName, int32_t iterations, CspParameters * cspParams));
IL2CPP_REGISTER_METHOD(0x020E0500, void, __ctor, (PasswordDeriveBytes * __this, Byte__Array * password, Byte__Array * salt, String * hashName, int32_t iterations, CspParameters * cspParams));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_HashName, (PasswordDeriveBytes * __this));
IL2CPP_REGISTER_METHOD(0x020E07D0, void, set_HashName, (PasswordDeriveBytes * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04791A40, PasswordDeriveBytes_set_HashName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_IterationCount, (PasswordDeriveBytes * __this));
IL2CPP_REGISTER_METHOD(0x020E0940, void, set_IterationCount, (PasswordDeriveBytes * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04744938, PasswordDeriveBytes_set_IterationCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020E0AA0, Byte__Array *, get_Salt, (PasswordDeriveBytes * __this));
IL2CPP_REGISTER_METHOD(0x020E0BF0, void, set_Salt, (PasswordDeriveBytes * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x0475B698, PasswordDeriveBytes_set_Salt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020E0DC0, Byte__Array *, GetBytes, (PasswordDeriveBytes * __this, int32_t cb));
IL2CPP_REGISTER_METHODINFO(0x0474C488, PasswordDeriveBytes_GetBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020E0F60, void, Reset, (PasswordDeriveBytes * __this));
IL2CPP_REGISTER_METHOD(0x020E0F70, void, Dispose, (PasswordDeriveBytes * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x020E10A0, Byte__Array *, CryptDeriveKey, (PasswordDeriveBytes * __this, String * algname, String * alghashname, int32_t keySize, Byte__Array * rgbIV));
IL2CPP_REGISTER_METHODINFO(0x04731EA0, PasswordDeriveBytes_CryptDeriveKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020E1190, Byte__Array *, ComputeBaseValue, (PasswordDeriveBytes * __this));
IL2CPP_REGISTER_METHOD(0x020E13B0, Byte__Array *, ComputeBytes, (PasswordDeriveBytes * __this, int32_t cb));
IL2CPP_REGISTER_METHOD(0x020E19A0, void, HashPrefix, (PasswordDeriveBytes * __this, CryptoStream * cs));
IL2CPP_REGISTER_METHODINFO(0x04774568, PasswordDeriveBytes_HashPrefix__MethodInfo);
}
