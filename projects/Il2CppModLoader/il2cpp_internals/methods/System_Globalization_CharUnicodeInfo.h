using namespace app;

namespace app::methods::System::Globalization::CharUnicodeInfo {
IL2CPP_REGISTER_METHOD(0x01A21B10, int32_t, InternalConvertToUtf32, (String * s, int32_t index));
IL2CPP_REGISTER_METHOD(0x01A21C30, bool, IsWhiteSpace, (String * s, int32_t index));
IL2CPP_REGISTER_METHOD(0x01A21D00, bool, IsWhiteSpace, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x01A21DB0, UnicodeCategory__Enum, GetUnicodeCategory, (uint16_t ch));
IL2CPP_REGISTER_METHOD(0x01A21E50, UnicodeCategory__Enum, GetUnicodeCategory, (String * s, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0471FA10, CharUnicodeInfo_GetUnicodeCategory_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A21F70, UnicodeCategory__Enum, InternalGetUnicodeCategory, (int32_t ch));
IL2CPP_REGISTER_METHOD(0x01A22010, uint8_t, InternalGetCategoryValue, (int32_t ch, int32_t offset));
IL2CPP_REGISTER_METHOD(0x01A22190, UnicodeCategory__Enum, InternalGetUnicodeCategory, (String * value, int32_t index));
IL2CPP_REGISTER_METHOD(0x01A22300, void, __cctor, (MethodInfo * method));
}
