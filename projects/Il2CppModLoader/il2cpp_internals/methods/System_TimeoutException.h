#include <interception_macros.h>

namespace app::methods::System::TimeoutException {
    IL2CPP_REGISTER_METHOD(0x027BB380, void, __ctor_1, (app::TimeoutException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027BB410, void, __ctor_2, (app::TimeoutException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor_3, (app::TimeoutException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
}
