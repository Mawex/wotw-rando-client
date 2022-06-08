#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::JsonWriterException {
IL2CPP_REGISTER_METHOD(0x01A6BEE0, void, __ctor, (JsonWriterException * __this));
IL2CPP_REGISTER_METHOD(0x01A6BEF0, void, __ctor, (JsonWriterException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01F035E0, void, __ctor, (JsonWriterException * __this, String * message, String * path, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x01F03610, JsonWriterException *, Create, (JsonWriter * writer, String * message, Exception * ex));
IL2CPP_REGISTER_METHOD(0x01F03650, JsonWriterException *, Create, (String * path, String * message, Exception * ex));
}
