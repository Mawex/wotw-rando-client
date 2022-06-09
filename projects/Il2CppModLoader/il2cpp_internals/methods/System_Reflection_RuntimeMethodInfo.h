#include <interception_macros.h>

namespace app::methods::System_Reflection::RuntimeMethodInfo {
IL2CPP_REGISTER_METHOD(0x00420EE0, BindingFlags__Enum, get_BindingFlags, (app::RuntimeMethodInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02697900, Module *, get_Module, (app::RuntimeMethodInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02697A30, RuntimeType *, get_ReflectedTypeInternal, (app::RuntimeMethodInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02697B10, String *, FormatNameAndSig, (app::RuntimeMethodInfo * this_ptr, bool serialization));
IL2CPP_REGISTER_METHOD(0x02697D60, Delegate *, CreateDelegate_1, (app::RuntimeMethodInfo * this_ptr, app::Type * delegate_type));
IL2CPP_REGISTER_METHOD(0x01AD43A0, Delegate *, CreateDelegate_2, (app::RuntimeMethodInfo * this_ptr, app::Type * delegate_type, app::Object * target));
IL2CPP_REGISTER_METHOD(0x02697D90, String *, ToString, (app::RuntimeMethodInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02697900, RuntimeModule *, GetRuntimeModule, (app::RuntimeMethodInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02697E70, void, GetObjectData, (app::RuntimeMethodInfo * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04735EE8, RuntimeMethodInfo_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026980C0, String *, SerializationToString, (app::RuntimeMethodInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::RuntimeMethodInfo * this_ptr));
}
