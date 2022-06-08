using namespace app;

namespace app::methods::System::Guid {
IL2CPP_REGISTER_METHOD(0x001D46A0, void, __ctor, (Guid__Boxed * __this, Byte__Array * b));
IL2CPP_REGISTER_METHODINFO(0x0473B0D0, Guid__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D46B0, void, __ctor, (Guid__Boxed * __this, uint32_t a, uint16_t b, uint16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k));
IL2CPP_REGISTER_METHOD(0x001D4700, void, __ctor, (Guid__Boxed * __this, int32_t a, int16_t b, int16_t c, Byte__Array * d));
IL2CPP_REGISTER_METHODINFO(0x04735470, Guid__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D46B0, void, __ctor, (Guid__Boxed * __this, int32_t a, int16_t b, int16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k));
IL2CPP_REGISTER_METHOD(0x001D4710, void, __ctor, (Guid__Boxed * __this, String * g));
IL2CPP_REGISTER_METHODINFO(0x0474F608, Guid__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DF9340, Guid, Parse, (String * input));
IL2CPP_REGISTER_METHODINFO(0x0474BAD8, Guid_Parse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DF9490, bool, TryParse, (String * input, Guid * result));
IL2CPP_REGISTER_METHOD(0x01DF95C0, bool, TryParseExact, (String * input, String * format, Guid * result));
IL2CPP_REGISTER_METHOD(0x01DF9770, bool, TryParseGuid, (String * g, Guid_GuidStyles__Enum flags, Guid_GuidResult * result));
IL2CPP_REGISTER_METHOD(0x01DF99A0, bool, TryParseGuidWithHexPrefix, (String * guidString, Guid_GuidResult * result));
IL2CPP_REGISTER_METHOD(0x01DFA170, bool, TryParseGuidWithNoStyle, (String * guidString, Guid_GuidResult * result));
IL2CPP_REGISTER_METHOD(0x01DFA510, bool, TryParseGuidWithDashes, (String * guidString, Guid_GuidResult * result));
IL2CPP_REGISTER_METHOD(0x01DFAAA0, bool, StringToShort, (String * str, int32_t requiredLength, int32_t flags, int16_t * result, Guid_GuidResult * parseResult));
IL2CPP_REGISTER_METHOD(0x01DFAC10, bool, StringToShort, (String * str, int32_t * parsePos, int32_t requiredLength, int32_t flags, int16_t * result, Guid_GuidResult * parseResult));
IL2CPP_REGISTER_METHOD(0x01DFAD20, bool, StringToInt, (String * str, int32_t requiredLength, int32_t flags, int32_t * result, Guid_GuidResult * parseResult));
IL2CPP_REGISTER_METHOD(0x01DFAE10, bool, StringToInt, (String * str, int32_t * parsePos, int32_t requiredLength, int32_t flags, int32_t * result, Guid_GuidResult * parseResult));
IL2CPP_REGISTER_METHOD(0x01DFAEF0, bool, StringToInt, (String * str, int32_t * parsePos, int32_t requiredLength, int32_t flags, int32_t * result, Guid_GuidResult * parseResult));
IL2CPP_REGISTER_METHODINFO(0x0472B268, Guid_StringToInt_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFB0B0, bool, StringToLong, (String * str, int32_t * parsePos, int32_t flags, int64_t * result, Guid_GuidResult * parseResult));
IL2CPP_REGISTER_METHOD(0x01DFB190, bool, StringToLong, (String * str, int32_t * parsePos, int32_t flags, int64_t * result, Guid_GuidResult * parseResult));
IL2CPP_REGISTER_METHODINFO(0x04742898, Guid_StringToLong_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFB2F0, String *, EatAllWhitespace, (String * str));
IL2CPP_REGISTER_METHOD(0x01DFB450, bool, IsHexPrefix, (String * str, int32_t i));
IL2CPP_REGISTER_METHOD(0x001D4720, Byte__Array *, ToByteArray, (Guid__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D4730, String *, ToString, (Guid__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D4740, int32_t, GetHashCode, (Guid__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D4770, bool, Equals, (Guid__Boxed * __this, Object * o));
IL2CPP_REGISTER_METHOD(0x001D4780, bool, Equals, (Guid__Boxed * __this, Guid g));
IL2CPP_REGISTER_METHOD(0x001D47A0, int32_t, GetResult, (Guid__Boxed * __this, uint32_t me, uint32_t them));
IL2CPP_REGISTER_METHOD(0x001D47C0, int32_t, CompareTo, (Guid__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0472C070, Guid_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D47D0, int32_t, CompareTo, (Guid__Boxed * __this, Guid value));
IL2CPP_REGISTER_METHOD(0x01DFC0D0, bool, operator___, (Guid a, Guid b));
IL2CPP_REGISTER_METHOD(0x01DFC250, bool, operator___, (Guid a, Guid b));
IL2CPP_REGISTER_METHOD(0x001D47F0, String *, ToString, (Guid__Boxed * __this, String * format));
IL2CPP_REGISTER_METHOD(0x01DFC320, uint16_t, HexToChar, (int32_t a));
IL2CPP_REGISTER_METHOD(0x01DFC340, int32_t, HexsToChars, (uint16_t * guidChars, int32_t offset, int32_t a, int32_t b));
IL2CPP_REGISTER_METHOD(0x01DFC420, int32_t, HexsToChars, (uint16_t * guidChars, int32_t offset, int32_t a, int32_t b, bool hex));
IL2CPP_REGISTER_METHOD(0x001D47F0, String *, ToString, (Guid__Boxed * __this, String * format, IFormatProvider * provider));
IL2CPP_REGISTER_METHODINFO(0x04763920, Guid_ToString_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFCC80, Guid, NewGuid, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01DFCF20, void, __cctor, (MethodInfo * method));
}
