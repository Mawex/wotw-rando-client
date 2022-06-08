#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::JsonConvert {
IL2CPP_REGISTER_METHOD(0x01A64830, Func_1_Newtonsoft_Json_JsonSerializerSettings_ *, get_DefaultSettings, ());
IL2CPP_REGISTER_METHOD(0x01A648D0, String *, ToString, (bool value));
IL2CPP_REGISTER_METHOD(0x01A649B0, String *, ToString, (uint16_t value));
IL2CPP_REGISTER_METHOD(0x01A64A80, String *, ToString, (float value, FloatFormatHandling__Enum floatFormatHandling, uint16_t quoteChar, bool nullable));
IL2CPP_REGISTER_METHOD(0x01A64BC0, String *, EnsureFloatFormat, (double value, String * text, FloatFormatHandling__Enum floatFormatHandling, uint16_t quoteChar, bool nullable));
IL2CPP_REGISTER_METHOD(0x01A64D70, String *, ToString, (double value, FloatFormatHandling__Enum floatFormatHandling, uint16_t quoteChar, bool nullable));
IL2CPP_REGISTER_METHOD(0x01A64EB0, String *, EnsureDecimalPlace, (double value, String * text));
IL2CPP_REGISTER_METHOD(0x01A65050, String *, EnsureDecimalPlace, (String * text));
IL2CPP_REGISTER_METHOD(0x01A65120, String *, ToString, (Decimal value));
IL2CPP_REGISTER_METHOD(0x01A652A0, String *, ToString, (String * value));
IL2CPP_REGISTER_METHOD(0x01A65440, String *, ToString, (String * value, uint16_t delimiter));
IL2CPP_REGISTER_METHOD(0x01A655B0, String *, ToString, (String * value, uint16_t delimiter, StringEscapeHandling__Enum stringEscapeHandling));
IL2CPP_REGISTER_METHODINFO(0x04760F78, JsonConvert_ToString_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A656C0, void, __cctor, ());
}
