#include <interception_macros.h>

namespace app::methods::System::MissingFieldException {
IL2CPP_REGISTER_METHOD(0x0226A0C0, void, __ctor_1, (app::MissingFieldException * this_ptr));
IL2CPP_REGISTER_METHOD(0x0226A150, void, __ctor_2, (app::MissingFieldException * this_ptr, app::String * message));
IL2CPP_REGISTER_METHOD(0x0226A170, void, __ctor_3, (app::MissingFieldException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0226A190, String *, get_Message, (app::MissingFieldException * this_ptr));
IL2CPP_REGISTER_METHOD(0x0226A300, void, __ctor_4, (app::MissingFieldException * this_ptr, app::String * class_name, app::String * field_name));
}
