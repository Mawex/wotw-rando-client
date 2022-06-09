#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::EventSourceException {
    IL2CPP_REGISTER_METHOD(0x019FD3F0, void, __ctor_1, (app::EventSourceException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x019FD4A0, void, __ctor_2, (app::EventSourceException * this_ptr, app::String * message, app::Exception * inner_exception));
    IL2CPP_REGISTER_METHOD(0x019FD560, void, __ctor_3, (app::EventSourceException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x019FD620, void, __ctor_4, (app::EventSourceException * this_ptr, app::Exception * inner_exception));
}
