#include <interception_macros.h>

namespace app::methods::System::Reflection::RuntimePropertyInfo {
IL2CPP_REGISTER_METHOD(0x00420EE0, BindingFlags__Enum, get_BindingFlags, (RuntimePropertyInfo * __this));
IL2CPP_REGISTER_METHOD(0x026981A0, Module *, get_Module, (RuntimePropertyInfo * __this));
IL2CPP_REGISTER_METHOD(0x02698290, RuntimeType *, GetDeclaringTypeInternal, (RuntimePropertyInfo * __this));
IL2CPP_REGISTER_METHOD(0x02698370, RuntimeType *, get_ReflectedTypeInternal, (RuntimePropertyInfo * __this));
IL2CPP_REGISTER_METHOD(0x026981A0, RuntimeModule *, GetRuntimeModule, (RuntimePropertyInfo * __this));
IL2CPP_REGISTER_METHOD(0x02698450, String *, ToString, (RuntimePropertyInfo * __this));
IL2CPP_REGISTER_METHOD(0x02698460, String *, FormatNameAndSig, (RuntimePropertyInfo * __this, bool serialization));
IL2CPP_REGISTER_METHOD(0x026986D0, void, GetObjectData, (RuntimePropertyInfo * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04757410, RuntimePropertyInfo_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026988D0, String *, SerializationToString, (RuntimePropertyInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RuntimePropertyInfo * __this));
}
