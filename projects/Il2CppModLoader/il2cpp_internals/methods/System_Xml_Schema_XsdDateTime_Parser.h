using namespace app;

namespace app::methods::System::Xml::Schema::XsdDateTime_Parser {
IL2CPP_REGISTER_METHOD(0x001C6160, bool, Parse, (XsdDateTime_Parser__Boxed * __this, String * text, XsdDateTimeFlags__Enum kinds));
IL2CPP_REGISTER_METHOD(0x001C6170, bool, ParseDate, (XsdDateTime_Parser__Boxed * __this, int32_t start));
IL2CPP_REGISTER_METHOD(0x001C6180, bool, ParseTimeAndZoneAndWhitespace, (XsdDateTime_Parser__Boxed * __this, int32_t start));
IL2CPP_REGISTER_METHOD(0x001C61C0, bool, ParseTimeAndWhitespace, (XsdDateTime_Parser__Boxed * __this, int32_t start));
IL2CPP_REGISTER_METHOD(0x001C6200, bool, ParseTime, (XsdDateTime_Parser__Boxed * __this, int32_t * start));
IL2CPP_REGISTER_METHOD(0x001C6210, bool, ParseZoneAndWhitespace, (XsdDateTime_Parser__Boxed * __this, int32_t start));
IL2CPP_REGISTER_METHOD(0x001C6220, bool, Parse4Dig, (XsdDateTime_Parser__Boxed * __this, int32_t start, int32_t * num));
IL2CPP_REGISTER_METHOD(0x001C6230, bool, Parse2Dig, (XsdDateTime_Parser__Boxed * __this, int32_t start, int32_t * num));
IL2CPP_REGISTER_METHOD(0x001C6240, bool, ParseChar, (XsdDateTime_Parser__Boxed * __this, int32_t start, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x00CD0C30, bool, Test, (XsdDateTimeFlags__Enum left, XsdDateTimeFlags__Enum right));
IL2CPP_REGISTER_METHOD(0x01C80CE0, void, __cctor, (MethodInfo * method));
}
