#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::RijndaelManaged {
IL2CPP_REGISTER_METHOD(0x028F00D0, void, __ctor, (RijndaelManaged * __this));
IL2CPP_REGISTER_METHODINFO(0x0473B620, RijndaelManaged__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028F0230, ICryptoTransform *, CreateEncryptor, (RijndaelManaged * __this, Byte__Array * rgbKey, Byte__Array * rgbIV));
IL2CPP_REGISTER_METHOD(0x028F0260, ICryptoTransform *, CreateDecryptor, (RijndaelManaged * __this, Byte__Array * rgbKey, Byte__Array * rgbIV));
IL2CPP_REGISTER_METHOD(0x028F0290, void, GenerateKey, (RijndaelManaged * __this));
IL2CPP_REGISTER_METHOD(0x028F0350, void, GenerateIV, (RijndaelManaged * __this));
IL2CPP_REGISTER_METHOD(0x028F0410, ICryptoTransform *, NewEncryptor, (RijndaelManaged * __this, Byte__Array * rgbKey, CipherMode__Enum mode, Byte__Array * rgbIV, int32_t feedbackSize, RijndaelManagedTransformMode__Enum encryptMode));
}
