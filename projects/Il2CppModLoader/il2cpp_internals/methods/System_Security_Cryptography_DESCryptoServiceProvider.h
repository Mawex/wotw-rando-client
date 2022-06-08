#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::DESCryptoServiceProvider {
IL2CPP_REGISTER_METHOD(0x020D1750, void, __ctor, (DESCryptoServiceProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x04702AB8, DESCryptoServiceProvider__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D18E0, ICryptoTransform *, CreateEncryptor, (DESCryptoServiceProvider * __this, Byte__Array * rgbKey, Byte__Array * rgbIV));
IL2CPP_REGISTER_METHODINFO(0x04787000, DESCryptoServiceProvider_CreateEncryptor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D1B40, ICryptoTransform *, CreateDecryptor, (DESCryptoServiceProvider * __this, Byte__Array * rgbKey, Byte__Array * rgbIV));
IL2CPP_REGISTER_METHODINFO(0x04720C38, DESCryptoServiceProvider_CreateDecryptor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020D1DA0, void, GenerateKey, (DESCryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x020D1F20, void, GenerateIV, (DESCryptoServiceProvider * __this));
}
