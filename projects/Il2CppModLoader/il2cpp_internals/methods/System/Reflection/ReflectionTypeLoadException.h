#include <interception_macros.h>

namespace app::methods::System::Reflection::ReflectionTypeLoadException {
    IL2CPP_REGISTER_METHOD(0x02695FF0, void, __ctor_1, (app::ReflectionTypeLoadException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02696080, void, __ctor_2, (app::ReflectionTypeLoadException * this_ptr, app::Type__Array * classes, app::Exception__Array * exceptions));
    IL2CPP_REGISTER_METHOD(0x026960D0, void, __ctor_3, (app::ReflectionTypeLoadException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Type__Array *, get_Types, (app::ReflectionTypeLoadException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02696270, void, GetObjectData, (app::ReflectionTypeLoadException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x04723130, ReflectionTypeLoadException_GetObjectData__MethodInfo);
}
