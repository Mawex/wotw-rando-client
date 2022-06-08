using namespace app;

namespace app::methods::Newtonsoft::Json::JsonSerializationException {
IL2CPP_REGISTER_METHOD(0x01A6BEE0, void, __ctor, (JsonSerializationException * __this));
IL2CPP_REGISTER_METHOD(0x01A6C260, void, __ctor, (JsonSerializationException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x01A6C270, void, __ctor, (JsonSerializationException * __this, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x01A6BEF0, void, __ctor, (JsonSerializationException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01A6BF10, void, __ctor, (JsonSerializationException * __this, String * message, String * path, int32_t lineNumber, int32_t linePosition, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x01A6C280, JsonSerializationException *, Create, (JsonReader * reader, String * message));
IL2CPP_REGISTER_METHOD(0x01A6C290, JsonSerializationException *, Create, (JsonReader * reader, String * message, Exception * ex));
IL2CPP_REGISTER_METHOD(0x01A6C380, JsonSerializationException *, Create, (IJsonLineInfo * lineInfo, String * path, String * message, Exception * ex));
}
