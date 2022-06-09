#include <interception_macros.h>

namespace app::methods::System::InvalidTimeZoneException {
    IL2CPP_REGISTER_METHOD(0x02265F70, void, __ctor_1, (app::InvalidTimeZoneException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x02266020, void, __ctor_2, (app::InvalidTimeZoneException * this_ptr, app::String * message, app::Exception * inner_exception));
    IL2CPP_REGISTER_METHOD(0x022660E0, void, __ctor_3, (app::InvalidTimeZoneException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x022661A0, void, __ctor_4, (app::InvalidTimeZoneException * this_ptr));
}
