#include <interception_macros.h>

namespace app::methods::System_Reflection::RuntimeEventInfo {
IL2CPP_REGISTER_METHOD(0x00420EE0, BindingFlags__Enum, get_BindingFlags, (app::RuntimeEventInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x026970A0, Module *, get_Module, (app::RuntimeEventInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02697190, RuntimeType *, GetDeclaringTypeInternal, (app::RuntimeEventInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02697270, RuntimeType *, get_ReflectedTypeInternal, (app::RuntimeEventInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x026970A0, RuntimeModule *, GetRuntimeModule, (app::RuntimeEventInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02697350, void, GetObjectData, (app::RuntimeEventInfo * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0472F7A0, RuntimeEventInfo_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::RuntimeEventInfo * this_ptr));
}
