#include <interception_macros.h>

namespace app::methods::System_Reflection::RuntimePropertyInfo {
IL2CPP_REGISTER_METHOD(0x00420EE0, BindingFlags__Enum, get_BindingFlags, (app::RuntimePropertyInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x026981A0, Module *, get_Module, (app::RuntimePropertyInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02698290, RuntimeType *, GetDeclaringTypeInternal, (app::RuntimePropertyInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02698370, RuntimeType *, get_ReflectedTypeInternal, (app::RuntimePropertyInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x026981A0, RuntimeModule *, GetRuntimeModule, (app::RuntimePropertyInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02698450, String *, ToString, (app::RuntimePropertyInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02698460, String *, FormatNameAndSig, (app::RuntimePropertyInfo * this_ptr, bool serialization));
IL2CPP_REGISTER_METHOD(0x026986D0, void, GetObjectData, (app::RuntimePropertyInfo * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04757410, RuntimePropertyInfo_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026988D0, String *, SerializationToString, (app::RuntimePropertyInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::RuntimePropertyInfo * this_ptr));
}
