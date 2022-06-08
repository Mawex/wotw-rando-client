using namespace app;

namespace app::methods::System::Security::Cryptography::Rfc2898DeriveBytes {
IL2CPP_REGISTER_METHOD(0x028EE7D0, void, __ctor, (Rfc2898DeriveBytes * __this, String * password, int32_t saltSize));
IL2CPP_REGISTER_METHOD(0x028EE7F0, void, __ctor, (Rfc2898DeriveBytes * __this, String * password, int32_t saltSize, int32_t iterations));
IL2CPP_REGISTER_METHODINFO(0x04706A78, Rfc2898DeriveBytes__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028EEB20, void, __ctor, (Rfc2898DeriveBytes * __this, String * password, Byte__Array * salt));
IL2CPP_REGISTER_METHOD(0x028EEB40, void, __ctor, (Rfc2898DeriveBytes * __this, String * password, Byte__Array * salt, int32_t iterations));
IL2CPP_REGISTER_METHOD(0x028EECE0, void, __ctor, (Rfc2898DeriveBytes * __this, Byte__Array * password, Byte__Array * salt, int32_t iterations));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_IterationCount, (Rfc2898DeriveBytes * __this));
IL2CPP_REGISTER_METHOD(0x028EEE60, void, set_IterationCount, (Rfc2898DeriveBytes * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04764F80, Rfc2898DeriveBytes_set_IterationCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028EEF40, Byte__Array *, get_Salt, (Rfc2898DeriveBytes * __this));
IL2CPP_REGISTER_METHOD(0x028EF080, void, set_Salt, (Rfc2898DeriveBytes * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x0475C618, Rfc2898DeriveBytes_set_Salt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028EF250, Byte__Array *, GetBytes, (Rfc2898DeriveBytes * __this, int32_t cb));
IL2CPP_REGISTER_METHODINFO(0x04787318, Rfc2898DeriveBytes_GetBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028EF410, void, Reset, (Rfc2898DeriveBytes * __this));
IL2CPP_REGISTER_METHOD(0x028EF420, void, Dispose, (Rfc2898DeriveBytes * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x028EF4F0, void, Initialize, (Rfc2898DeriveBytes * __this));
IL2CPP_REGISTER_METHOD(0x028EF5B0, Byte__Array *, Func, (Rfc2898DeriveBytes * __this));
IL2CPP_REGISTER_METHOD(0x028EF9D0, Byte__Array *, CryptDeriveKey, (Rfc2898DeriveBytes * __this, String * algname, String * alghashname, int32_t keySize, Byte__Array * rgbIV));
IL2CPP_REGISTER_METHODINFO(0x04762B30, Rfc2898DeriveBytes_CryptDeriveKey__MethodInfo);
}
