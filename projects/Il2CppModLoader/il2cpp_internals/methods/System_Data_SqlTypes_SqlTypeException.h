#include <interception_macros.h>

namespace app::methods::System_Data_SqlTypes::SqlTypeException {
    IL2CPP_REGISTER_METHOD(0x022BC060, void, __ctor_1, (app::SqlTypeException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022BC0F0, void, __ctor_2, (app::SqlTypeException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x022BC120, void, __ctor_3, (app::SqlTypeException * this_ptr, app::String * message, app::Exception * e));
    IL2CPP_REGISTER_METHOD(0x022BC140, void, __ctor_4, (app::SqlTypeException * this_ptr, app::SerializationInfo * si, app::StreamingContext sc));
    IL2CPP_REGISTER_METHODINFO(0x0474C320, SqlTypeException__ctor_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022BC1D0, app::SerializationInfo *, SqlTypeExceptionSerialization, (app::SerializationInfo * si, app::StreamingContext sc));
}
