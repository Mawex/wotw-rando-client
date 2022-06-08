using namespace app;

namespace app::methods::Newtonsoft::Json::Utilities::StringUtils {
IL2CPP_REGISTER_METHOD(0x030272D0, String *, FormatWith, (String * format, IFormatProvider * provider, Object * arg0));
IL2CPP_REGISTER_METHOD(0x030273E0, String *, FormatWith, (String * format, IFormatProvider * provider, Object * arg0, Object * arg1));
IL2CPP_REGISTER_METHOD(0x03027540, String *, FormatWith, (String * format, IFormatProvider * provider, Object * arg0, Object * arg1, Object * arg2));
IL2CPP_REGISTER_METHOD(0x03027700, String *, FormatWith, (String * format, IFormatProvider * provider, Object * arg0, Object * arg1, Object * arg2, Object * arg3));
IL2CPP_REGISTER_METHOD(0x03027910, String *, FormatWith, (String * format, IFormatProvider * provider, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x030279C0, StringWriter *, CreateStringWriter, (int32_t capacity));
IL2CPP_REGISTER_METHOD(0x03027C10, void, ToCharAsUnicode, (uint16_t c, Char__Array * buffer));
IL2CPP_REGISTER_METHOD(0x03027D50, String *, ToCamelCase, (String * s));
IL2CPP_REGISTER_METHOD(0x03028020, uint16_t, ToLower, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x030280F0, bool, IsHighSurrogate, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x030281A0, bool, IsLowSurrogate, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x03028250, bool, StartsWith, (String * source, uint16_t value));
IL2CPP_REGISTER_METHOD(0x03028290, bool, EndsWith, (String * source, uint16_t value));
IL2CPP_REGISTER_METHOD(0x030282D0, String *, Trim, (String * s, int32_t start, int32_t length));
IL2CPP_REGISTER_METHODINFO(0x04729B90, StringUtils_Trim__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015805D0, Object *, ForgivingCaseSensitiveFind, (IEnumerable_1_System_Object_ * source, Func_2_Object_String_ * valueSelector, String * testValue));
IL2CPP_REGISTER_METHODINFO(0x047679B0, StringUtils_ForgivingCaseSensitiveFind__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015805D0, JsonProperty *, ForgivingCaseSensitiveFind, (IEnumerable_1_Newtonsoft_Json_Serialization_JsonProperty_ * source, Func_2_Newtonsoft_Json_Serialization_JsonProperty_String_ * valueSelector, String * testValue));
IL2CPP_REGISTER_METHODINFO(0x04724740, StringUtils_ForgivingCaseSensitiveFind_1__MethodInfo);
}
