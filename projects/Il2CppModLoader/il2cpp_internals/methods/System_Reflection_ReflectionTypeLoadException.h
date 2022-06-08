#include <interception_macros.h>

namespace app::methods::System::Reflection::ReflectionTypeLoadException {
IL2CPP_REGISTER_METHOD(0x02695FF0, void, __ctor, (ReflectionTypeLoadException * __this));
IL2CPP_REGISTER_METHOD(0x02696080, void, __ctor, (ReflectionTypeLoadException * __this, Type__Array * classes, Exception__Array * exceptions));
IL2CPP_REGISTER_METHOD(0x026960D0, void, __ctor, (ReflectionTypeLoadException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FBC20, Type__Array *, get_Types, (ReflectionTypeLoadException * __this));
IL2CPP_REGISTER_METHOD(0x02696270, void, GetObjectData, (ReflectionTypeLoadException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04723130, ReflectionTypeLoadException_GetObjectData__MethodInfo);
}
