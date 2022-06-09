#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json::JsonReaderException {
IL2CPP_REGISTER_METHOD(0x01A6BEE0, void, __ctor_1, (app::JsonReaderException * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A6BEF0, void, __ctor_2, (app::JsonReaderException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01A6BF10, void, __ctor_3, (app::JsonReaderException * this_ptr, app::String * message, app::String * path, int32_t line_number, int32_t line_position, app::Exception * inner_exception));
IL2CPP_REGISTER_METHOD(0x01A6BF60, JsonReaderException *, Create_1, (app::JsonReader * reader, app::String * message));
IL2CPP_REGISTER_METHOD(0x01A6BF70, JsonReaderException *, Create_2, (app::JsonReader * reader, app::String * message, app::Exception * ex));
IL2CPP_REGISTER_METHOD(0x01A6C060, JsonReaderException *, Create_3, (app::IJsonLineInfo * line_info, app::String * path, app::String * message, app::Exception * ex));
}
