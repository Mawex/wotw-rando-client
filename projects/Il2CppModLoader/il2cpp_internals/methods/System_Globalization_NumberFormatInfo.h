#include <interception_macros.h>

namespace app::methods::System_Globalization::NumberFormatInfo {
IL2CPP_REGISTER_METHOD(0x01DE9EB0, void, __ctor_1, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DE9EC0, void, OnSerializing, (app::NumberFormatInfo * this_ptr, app::StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeserializing, (app::NumberFormatInfo * this_ptr, app::StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeserialized, (app::NumberFormatInfo * this_ptr, app::StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x01DE9FE0, void, __ctor_2, (app::NumberFormatInfo * this_ptr, app::CultureData * culture_data));
IL2CPP_REGISTER_METHOD(0x01DEA630, NumberFormatInfo *, get_InvariantInfo, ());
IL2CPP_REGISTER_METHOD(0x01DEA7E0, NumberFormatInfo *, GetInstance, (app::IFormatProvider * format_provider));
IL2CPP_REGISTER_METHOD(0x01DEA970, Object *, Clone, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x0063D090, int32_t, get_CurrencyDecimalDigits, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_CurrencyDecimalSeparator, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_IsReadOnly, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DEAAB0, Int32__Array *, get_CurrencyGroupSizes, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DEABF0, Int32__Array *, get_NumberGroupSizes, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DEAD30, Int32__Array *, get_PercentGroupSizes, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_CurrencyGroupSeparator, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, get_CurrencySymbol, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DEAE70, NumberFormatInfo *, get_CurrentInfo, ());
IL2CPP_REGISTER_METHOD(0x002FBBA0, String *, get_NaNSymbol, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x0073EDA0, int32_t, get_CurrencyNegativePattern, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x00855600, int32_t, get_NumberNegativePattern, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x008519C0, int32_t, get_PercentPositivePattern, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFCE0, int32_t, get_PercentNegativePattern, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBE0, String *, get_NegativeInfinitySymbol, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_NegativeSign, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x005035C0, int32_t, get_NumberDecimalDigits, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_NumberDecimalSeparator, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_NumberGroupSeparator, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x0062C500, int32_t, get_CurrencyPositivePattern, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBC0, String *, get_PositiveInfinitySymbol, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_PositiveSign, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x008468B0, int32_t, get_PercentDecimalDigits, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC00, String *, get_PercentDecimalSeparator, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC20, String *, get_PercentGroupSeparator, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC40, String *, get_PercentSymbol, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC60, String *, get_PerMilleSymbol, (app::NumberFormatInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DEAFA0, Object *, GetFormat, (app::NumberFormatInfo * this_ptr, app::Type * format_type));
IL2CPP_REGISTER_METHOD(0x01DEB070, NumberFormatInfo *, ReadOnly, (app::NumberFormatInfo * nfi));
IL2CPP_REGISTER_METHODINFO(0x04754570, NumberFormatInfo_ReadOnly__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DEB200, void, ValidateParseStyleInteger, (app::NumberStyles__Enum style));
IL2CPP_REGISTER_METHODINFO(0x047920B8, NumberFormatInfo_ValidateParseStyleInteger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DEB320, void, ValidateParseStyleFloatingPoint, (app::NumberStyles__Enum style));
IL2CPP_REGISTER_METHODINFO(0x04745AD0, NumberFormatInfo_ValidateParseStyleFloatingPoint__MethodInfo);
}
