#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::JsonReaderException {
IL2CPP_REGISTER_METHOD(0x01A6BEE0, void, __ctor, (JsonReaderException * __this));
IL2CPP_REGISTER_METHOD(0x01A6BEF0, void, __ctor, (JsonReaderException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01A6BF10, void, __ctor, (JsonReaderException * __this, String * message, String * path, int32_t lineNumber, int32_t linePosition, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x01A6BF60, JsonReaderException *, Create, (JsonReader * reader, String * message));
IL2CPP_REGISTER_METHOD(0x01A6BF70, JsonReaderException *, Create, (JsonReader * reader, String * message, Exception * ex));
IL2CPP_REGISTER_METHOD(0x01A6C060, JsonReaderException *, Create, (IJsonLineInfo * lineInfo, String * path, String * message, Exception * ex));
}
