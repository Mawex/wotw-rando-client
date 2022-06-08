#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::TraceJsonReader {
IL2CPP_REGISTER_METHOD(0x01BFCC20, void, __ctor, (TraceJsonReader * __this, JsonReader * innerReader));
IL2CPP_REGISTER_METHOD(0x01BFCEE0, String *, GetDeserializedJsonMessage, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFCF10, bool, Read, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFCF90, Nullable_1_Int32_, ReadAsInt32, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD010, String *, ReadAsString, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD090, Byte__Array *, ReadAsBytes, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD110, Nullable_1_Decimal_, ReadAsDecimal, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD1A0, Nullable_1_Double_, ReadAsDouble, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD220, Nullable_1_Boolean_, ReadAsBoolean, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD2A0, Nullable_1_DateTime_, ReadAsDateTime, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD320, Nullable_1_DateTimeOffset_, ReadAsDateTimeOffset, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD3B0, void, WriteCurrentToken, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD400, int32_t, get_Depth, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD430, String *, get_Path, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD460, JsonToken__Enum_1, get_TokenType, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD490, Object *, get_Value, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD4C0, Type *, get_ValueType, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x00AA3500, void, Close, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD4F0, bool, IJsonLineInfo_HasLineInfo, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD590, int32_t, IJsonLineInfo_get_LineNumber, (TraceJsonReader * __this));
IL2CPP_REGISTER_METHOD(0x01BFD630, int32_t, IJsonLineInfo_get_LinePosition, (TraceJsonReader * __this));
}
