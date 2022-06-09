#include <interception_macros.h>

namespace app::methods::System::ArgumentException {
IL2CPP_REGISTER_METHOD(0x022901E0, void, __ctor_1, (app::ArgumentException * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FEFCD0, void, __ctor_2, (app::ArgumentException * this_ptr, app::String * message));
IL2CPP_REGISTER_METHOD(0x01FEFCF0, void, __ctor_3, (app::ArgumentException * this_ptr, app::String * message, app::Exception * inner_exception));
IL2CPP_REGISTER_METHOD(0x02290270, void, __ctor_4, (app::ArgumentException * this_ptr, app::String * message, app::String * param_name, app::Exception * inner_exception));
IL2CPP_REGISTER_METHOD(0x022902B0, void, __ctor_5, (app::ArgumentException * this_ptr, app::String * message, app::String * param_name));
IL2CPP_REGISTER_METHOD(0x022902F0, void, __ctor_6, (app::ArgumentException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x022903C0, String *, get_Message, (app::ArgumentException * this_ptr));
IL2CPP_REGISTER_METHOD(0x02290500, void, GetObjectData, (app::ArgumentException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04719938, ArgumentException_GetObjectData__MethodInfo);
}
