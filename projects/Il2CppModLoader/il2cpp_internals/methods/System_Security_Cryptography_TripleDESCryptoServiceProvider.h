using namespace app;

namespace app::methods::System::Security::Cryptography::TripleDESCryptoServiceProvider {
IL2CPP_REGISTER_METHOD(0x01E12E70, void, __ctor, (TripleDESCryptoServiceProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x04757B08, TripleDESCryptoServiceProvider__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E13000, ICryptoTransform *, CreateEncryptor, (TripleDESCryptoServiceProvider * __this, Byte__Array * rgbKey, Byte__Array * rgbIV));
IL2CPP_REGISTER_METHODINFO(0x04776978, TripleDESCryptoServiceProvider_CreateEncryptor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E131F0, ICryptoTransform *, CreateDecryptor, (TripleDESCryptoServiceProvider * __this, Byte__Array * rgbKey, Byte__Array * rgbIV));
IL2CPP_REGISTER_METHODINFO(0x04703450, TripleDESCryptoServiceProvider_CreateDecryptor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E133E0, void, GenerateKey, (TripleDESCryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x01E13530, void, GenerateIV, (TripleDESCryptoServiceProvider * __this));
}
