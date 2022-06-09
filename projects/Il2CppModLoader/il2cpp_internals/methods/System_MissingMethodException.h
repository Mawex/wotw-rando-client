#include <interception_macros.h>

namespace app::methods::System::MissingMethodException {
IL2CPP_REGISTER_METHOD(0x0226A870, void, __ctor_1, (app::MissingMethodException * this_ptr));
IL2CPP_REGISTER_METHOD(0x0226A900, void, __ctor_2, (app::MissingMethodException * this_ptr, app::String * message));
IL2CPP_REGISTER_METHOD(0x0226A170, void, __ctor_3, (app::MissingMethodException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0226A920, String *, get_Message, (app::MissingMethodException * this_ptr));
IL2CPP_REGISTER_METHOD(0x0226A300, void, __ctor_4, (app::MissingMethodException * this_ptr, app::String * class_name, app::String * method_name));
IL2CPP_REGISTER_METHOD(0x0226AA50, void, __ctor_5, (app::MissingMethodException * this_ptr, app::String * class_name, app::String * method_name, app::String * signature, app::String * message));
}
