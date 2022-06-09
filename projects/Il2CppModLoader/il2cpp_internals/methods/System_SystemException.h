#include <interception_macros.h>

namespace app::methods::System::SystemException {
IL2CPP_REGISTER_METHOD(0x0243E4C0, void, __ctor_1, (app::SystemException * this_ptr));
IL2CPP_REGISTER_METHOD(0x0243E580, void, __ctor_2, (app::SystemException * this_ptr, app::String * message));
IL2CPP_REGISTER_METHOD(0x0243E640, void, __ctor_3, (app::SystemException * this_ptr, app::String * message, app::Exception * inner_exception));
IL2CPP_REGISTER_METHOD(0x0243E700, void, __ctor_4, (app::SystemException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
}
