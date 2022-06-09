#include <interception_macros.h>

namespace app::methods::System_Runtime_InteropServices::ExternalException {
    IL2CPP_REGISTER_METHOD(0x01A94260, void, __ctor_1, (app::ExternalException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A942F0, void, __ctor_2, (app::ExternalException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x01A94310, void, __ctor_3, (app::ExternalException * this_ptr, app::String * message, app::Exception * inner));
    IL2CPP_REGISTER_METHOD(0x01A93D50, void, __ctor_4, (app::ExternalException * this_ptr, app::String * message, int32_t error_code));
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor_5, (app::ExternalException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_ErrorCode, (app::ExternalException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A94330, app::String *, ToString, (app::ExternalException * this_ptr));
}
