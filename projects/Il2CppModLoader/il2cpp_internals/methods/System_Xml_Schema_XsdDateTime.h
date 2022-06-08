#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XsdDateTime {
IL2CPP_REGISTER_METHOD(0x001C5CD0, void, __ctor, (XsdDateTime__Boxed * __this, String * text, XsdDateTimeFlags__Enum kinds));
IL2CPP_REGISTER_METHODINFO(0x04750108, XsdDateTime__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001C5CE0, void, __ctor, (XsdDateTime__Boxed * __this, XsdDateTime_Parser parser));
IL2CPP_REGISTER_METHOD(0x001C5D30, void, InitiateXsdDateTime, (XsdDateTime__Boxed * __this, XsdDateTime_Parser parser));
IL2CPP_REGISTER_METHOD(0x01C7D070, bool, TryParse, (String * text, XsdDateTimeFlags__Enum kinds, XsdDateTime * result));
IL2CPP_REGISTER_METHOD(0x001C5D70, void, __ctor, (XsdDateTime__Boxed * __this, DateTime dateTime, XsdDateTimeFlags__Enum kinds));
IL2CPP_REGISTER_METHOD(0x001C5D80, void, __ctor, (XsdDateTime__Boxed * __this, DateTimeOffset dateTimeOffset));
IL2CPP_REGISTER_METHOD(0x001C5DB0, void, __ctor, (XsdDateTime__Boxed * __this, DateTimeOffset dateTimeOffset, XsdDateTimeFlags__Enum kinds));
IL2CPP_REGISTER_METHOD(0x001C5DD0, XsdDateTime_DateTimeTypeCode__Enum, get_InternalTypeCode, (XsdDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C5DE0, XsdDateTime_XsdDateTimeKind__Enum, get_InternalKind, (XsdDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C5DF0, int32_t, get_Year, (XsdDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C5E00, int32_t, get_Month, (XsdDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C5E10, int32_t, get_Day, (XsdDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C5E20, int32_t, get_Hour, (XsdDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C5E70, int32_t, get_Minute, (XsdDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C5EC0, int32_t, get_Second, (XsdDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C5F10, int32_t, get_Fraction, (XsdDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00114130, int32_t, get_ZoneHour, (XsdDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00114120, int32_t, get_ZoneMinute, (XsdDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01C7D680, DateTime, operator_, (XsdDateTime xdt));
IL2CPP_REGISTER_METHOD(0x01C7DB30, DateTimeOffset, operator_, (XsdDateTime xdt));
IL2CPP_REGISTER_METHOD(0x001C5F20, String *, ToString, (XsdDateTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C5F30, void, PrintDate, (XsdDateTime__Boxed * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x001C5F40, void, PrintTime, (XsdDateTime__Boxed * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x001C5F50, void, PrintZone, (XsdDateTime__Boxed * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x001C5F60, void, IntToCharArray, (XsdDateTime__Boxed * __this, Char__Array * text, int32_t start, int32_t value, int32_t digits));
IL2CPP_REGISTER_METHOD(0x001C5F70, void, ShortToCharArray, (XsdDateTime__Boxed * __this, Char__Array * text, int32_t start, int32_t value));
IL2CPP_REGISTER_METHOD(0x01C7EF10, void, __cctor, ());
}
