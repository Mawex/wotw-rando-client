#include <interception_macros.h>

namespace app::methods::System::OutOfMemoryException {
    IL2CPP_REGISTER_METHOD(0x0227C790, void, __ctor_1, (app::OutOfMemoryException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0227C840, void, __ctor_2, (app::OutOfMemoryException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor_3, (app::OutOfMemoryException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
}
