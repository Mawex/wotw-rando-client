using namespace app;

namespace app::methods::System::Security::Cryptography::RC2CryptoServiceProvider {
IL2CPP_REGISTER_METHOD(0x028DE660, void, __ctor, (RC2CryptoServiceProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x047702A0, RC2CryptoServiceProvider__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_EffectiveKeySize, (RC2CryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x028DE820, void, set_EffectiveKeySize, (RC2CryptoServiceProvider * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x047056D8, RC2CryptoServiceProvider_set_EffectiveKeySize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_UseSalt, (RC2CryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_UseSalt, (RC2CryptoServiceProvider * __this, bool value));
IL2CPP_REGISTER_METHOD(0x028DE8F0, ICryptoTransform *, CreateEncryptor, (RC2CryptoServiceProvider * __this, Byte__Array * rgbKey, Byte__Array * rgbIV));
IL2CPP_REGISTER_METHODINFO(0x04753578, RC2CryptoServiceProvider_CreateEncryptor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028DEAA0, ICryptoTransform *, CreateDecryptor, (RC2CryptoServiceProvider * __this, Byte__Array * rgbKey, Byte__Array * rgbIV));
IL2CPP_REGISTER_METHODINFO(0x0475F250, RC2CryptoServiceProvider_CreateDecryptor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028DEC50, void, GenerateKey, (RC2CryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x028DED30, void, GenerateIV, (RC2CryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x028DEE00, void, __cctor, (MethodInfo * method));
}
