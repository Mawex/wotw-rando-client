#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::AesCryptoServiceProvider {
IL2CPP_REGISTER_METHOD(0x02FC8400, void, __ctor, (app::AesCryptoServiceProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x02FC84A0, void, GenerateIV, (app::AesCryptoServiceProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x025C4D30, void, GenerateKey, (app::AesCryptoServiceProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x02FC84C0, ICryptoTransform *, CreateDecryptor_1, (app::AesCryptoServiceProvider * this_ptr, app::Byte__Array * key, app::Byte__Array * iv));
IL2CPP_REGISTER_METHODINFO(0x04769700, AesCryptoServiceProvider_CreateDecryptor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FC86A0, ICryptoTransform *, CreateEncryptor_1, (app::AesCryptoServiceProvider * this_ptr, app::Byte__Array * key, app::Byte__Array * iv));
IL2CPP_REGISTER_METHODINFO(0x047975B0, AesCryptoServiceProvider_CreateEncryptor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FC8880, Byte__Array *, get_IV, (app::AesCryptoServiceProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x02FC8890, void, set_IV, (app::AesCryptoServiceProvider * this_ptr, app::Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x02FC88A0, Byte__Array *, get_Key, (app::AesCryptoServiceProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x02FC88B0, void, set_Key, (app::AesCryptoServiceProvider * this_ptr, app::Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_KeySize, (app::AesCryptoServiceProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x02FC88C0, void, set_KeySize, (app::AesCryptoServiceProvider * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_FeedbackSize, (app::AesCryptoServiceProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E102C0, void, set_FeedbackSize, (app::AesCryptoServiceProvider * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FC830, CipherMode__Enum, get_Mode, (app::AesCryptoServiceProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x02FC88D0, void, set_Mode, (app::AesCryptoServiceProvider * this_ptr, app::CipherMode__Enum value));
IL2CPP_REGISTER_METHODINFO(0x04700E40, AesCryptoServiceProvider_set_Mode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E57A0, PaddingMode__Enum, get_Padding, (app::AesCryptoServiceProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E10E40, void, set_Padding, (app::AesCryptoServiceProvider * this_ptr, app::PaddingMode__Enum value));
IL2CPP_REGISTER_METHOD(0x01E11290, ICryptoTransform *, CreateDecryptor_2, (app::AesCryptoServiceProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E11230, ICryptoTransform *, CreateEncryptor_2, (app::AesCryptoServiceProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E100D0, void, Dispose, (app::AesCryptoServiceProvider * this_ptr, bool disposing));
}
