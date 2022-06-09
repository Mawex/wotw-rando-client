#include <interception_macros.h>

namespace app::methods::System_IO::InvalidDataException {
    IL2CPP_REGISTER_METHOD(0x0200A9E0, void, __ctor_1, (app::InvalidDataException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0200AA70, void, __ctor_2, (app::InvalidDataException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor_3, (app::InvalidDataException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
}
