#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::AesManaged {
IL2CPP_REGISTER_METHOD(0x02FC8A30, void, __ctor, (AesManaged * __this));
IL2CPP_REGISTER_METHODINFO(0x047735A8, AesManaged__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FC8C10, int32_t, get_FeedbackSize, (AesManaged * __this));
IL2CPP_REGISTER_METHOD(0x02FC8C40, void, set_FeedbackSize, (AesManaged * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02FC8C70, Byte__Array *, get_IV, (AesManaged * __this));
IL2CPP_REGISTER_METHOD(0x02FC8CA0, void, set_IV, (AesManaged * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x0210EA10, Byte__Array *, get_Key, (AesManaged * __this));
IL2CPP_REGISTER_METHOD(0x02FC8CD0, void, set_Key, (AesManaged * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x02FC8D00, int32_t, get_KeySize, (AesManaged * __this));
IL2CPP_REGISTER_METHOD(0x02FC8D30, void, set_KeySize, (AesManaged * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02FC8D60, CipherMode__Enum, get_Mode, (AesManaged * __this));
IL2CPP_REGISTER_METHOD(0x02FC8D90, void, set_Mode, (AesManaged * __this, CipherMode__Enum value));
IL2CPP_REGISTER_METHODINFO(0x04747F58, AesManaged_set_Mode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FC8E80, PaddingMode__Enum, get_Padding, (AesManaged * __this));
IL2CPP_REGISTER_METHOD(0x02FC8EB0, void, set_Padding, (AesManaged * __this, PaddingMode__Enum value));
IL2CPP_REGISTER_METHOD(0x02FC8EE0, ICryptoTransform *, CreateDecryptor, (AesManaged * __this));
IL2CPP_REGISTER_METHOD(0x02FC8F10, ICryptoTransform *, CreateDecryptor, (AesManaged * __this, Byte__Array * key, Byte__Array * iv));
IL2CPP_REGISTER_METHODINFO(0x04746A28, AesManaged_CreateDecryptor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FC90B0, ICryptoTransform *, CreateEncryptor, (AesManaged * __this));
IL2CPP_REGISTER_METHOD(0x02FC90E0, ICryptoTransform *, CreateEncryptor, (AesManaged * __this, Byte__Array * key, Byte__Array * iv));
IL2CPP_REGISTER_METHODINFO(0x0478B8D0, AesManaged_CreateEncryptor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FC9280, void, Dispose, (AesManaged * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02030050, void, GenerateIV, (AesManaged * __this));
IL2CPP_REGISTER_METHOD(0x02FC9400, void, GenerateKey, (AesManaged * __this));
}
