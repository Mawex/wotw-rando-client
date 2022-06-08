#include <interception_macros.h>

namespace app::methods::System::Globalization::IdnMapping {
IL2CPP_REGISTER_METHOD(0x026168E0, void, __ctor, (IdnMapping * __this));
IL2CPP_REGISTER_METHOD(0x02616A60, bool, Equals, (IdnMapping * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02616B20, int32_t, GetHashCode, (IdnMapping * __this));
IL2CPP_REGISTER_METHOD(0x02616B40, String *, GetAscii, (IdnMapping * __this, String * unicode));
IL2CPP_REGISTER_METHODINFO(0x04797928, IdnMapping_GetAscii__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02616CC0, String *, GetAscii, (IdnMapping * __this, String * unicode, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0471A6B0, IdnMapping_GetAscii_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02616E30, String *, Convert, (IdnMapping * __this, String * input, int32_t index, int32_t count, bool toAscii));
IL2CPP_REGISTER_METHOD(0x026170D0, String *, ToAscii, (IdnMapping * __this, String * s, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x04719F70, IdnMapping_ToAscii__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02617550, void, VerifyLength, (IdnMapping * __this, String * s, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x04712990, IdnMapping_VerifyLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026176A0, String *, NamePrep, (IdnMapping * __this, String * s, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x0478D318, IdnMapping_NamePrep__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02617820, void, VerifyProhibitedCharacters, (IdnMapping * __this, String * s, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x04769F50, IdnMapping_VerifyProhibitedCharacters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02617A60, void, VerifyStd3AsciiRules, (IdnMapping * __this, String * s, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x04712BA0, IdnMapping_VerifyStd3AsciiRules__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02617CC0, String *, GetUnicode, (IdnMapping * __this, String * ascii));
IL2CPP_REGISTER_METHODINFO(0x0472CF48, IdnMapping_GetUnicode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02617E40, String *, GetUnicode, (IdnMapping * __this, String * ascii, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047334A8, IdnMapping_GetUnicode_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02617FB0, String *, ToUnicode, (IdnMapping * __this, String * s, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x0478A168, IdnMapping_ToUnicode__MethodInfo);
}
