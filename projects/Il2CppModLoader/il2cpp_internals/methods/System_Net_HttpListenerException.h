#include <interception_macros.h>

namespace app::methods::System_Net::HttpListenerException {
IL2CPP_REGISTER_METHOD(0x01D45800, void, __ctor_1, (app::HttpListenerException * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D45900, void, __ctor_2, (app::HttpListenerException * this_ptr, int32_t error_code));
IL2CPP_REGISTER_METHOD(0x01D459B0, void, __ctor_3, (app::HttpListenerException * this_ptr, int32_t error_code, app::String * message));
IL2CPP_REGISTER_METHOD(0x01D45A70, void, __ctor_4, (app::HttpListenerException * this_ptr, app::SerializationInfo * serialization_info, app::StreamingContext streaming_context));
IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_ErrorCode, (app::HttpListenerException * this_ptr));
}
