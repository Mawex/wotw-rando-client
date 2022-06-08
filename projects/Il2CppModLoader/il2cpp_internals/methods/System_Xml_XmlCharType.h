#include <interception_macros.h>

namespace app::methods::System::Xml::XmlCharType {
IL2CPP_REGISTER_METHOD(0x0195F1F0, Object *, get_StaticLock, ());
IL2CPP_REGISTER_METHOD(0x0195F360, void, InitInstance, ());
IL2CPP_REGISTER_METHOD(0x0195F6C0, void, SetProperties, (String * ranges, uint8_t value));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (XmlCharType__Boxed * __this, Byte__Array * charProperties));
IL2CPP_REGISTER_METHOD(0x0195F7E0, XmlCharType, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00153570, bool, IsWhiteSpace, (XmlCharType__Boxed * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x001535B0, bool, IsNCNameSingleChar, (XmlCharType__Boxed * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x001535F0, bool, IsStartNCNameSingleChar, (XmlCharType__Boxed * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x00153630, bool, IsNameSingleChar, (XmlCharType__Boxed * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x00153680, bool, IsCharData, (XmlCharType__Boxed * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x001536C0, bool, IsPubidChar, (XmlCharType__Boxed * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x001536D0, bool, IsTextChar, (XmlCharType__Boxed * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x00153710, bool, IsLetter, (XmlCharType__Boxed * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x00153750, bool, IsNCNameCharXml4e, (XmlCharType__Boxed * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x00153790, bool, IsStartNCNameCharXml4e, (XmlCharType__Boxed * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x001537E0, bool, IsNameCharXml4e, (XmlCharType__Boxed * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x0195FA30, bool, IsDigit, (uint16_t ch));
IL2CPP_REGISTER_METHOD(0x0195FA40, bool, IsHighSurrogate, (int32_t ch));
IL2CPP_REGISTER_METHOD(0x0195FA50, bool, IsLowSurrogate, (int32_t ch));
IL2CPP_REGISTER_METHOD(0x0195FA60, bool, IsSurrogate, (int32_t ch));
IL2CPP_REGISTER_METHOD(0x0195FA70, int32_t, CombineSurrogateChar, (int32_t lowChar, int32_t highChar));
IL2CPP_REGISTER_METHOD(0x0195FA90, void, SplitSurrogateChar, (int32_t combinedChar, uint16_t * lowChar, uint16_t * highChar));
IL2CPP_REGISTER_METHOD(0x00153830, bool, IsOnlyWhitespace, (XmlCharType__Boxed * __this, String * str));
IL2CPP_REGISTER_METHOD(0x00153850, int32_t, IsOnlyWhitespaceWithPos, (XmlCharType__Boxed * __this, String * str));
IL2CPP_REGISTER_METHOD(0x00153860, int32_t, IsOnlyCharData, (XmlCharType__Boxed * __this, String * str));
IL2CPP_REGISTER_METHOD(0x0195FC30, bool, IsOnlyDigits, (String * str, int32_t startPos, int32_t len));
IL2CPP_REGISTER_METHOD(0x00153870, int32_t, IsPublicId, (XmlCharType__Boxed * __this, String * str));
IL2CPP_REGISTER_METHOD(0x0195FD00, bool, InRange, (int32_t value, int32_t start, int32_t end));
}
