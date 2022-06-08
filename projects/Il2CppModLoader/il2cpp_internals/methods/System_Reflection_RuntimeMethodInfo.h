using namespace app;

namespace app::methods::System::Reflection::RuntimeMethodInfo {
IL2CPP_REGISTER_METHOD(0x00420EE0, BindingFlags__Enum, get_BindingFlags, (RuntimeMethodInfo * __this));
IL2CPP_REGISTER_METHOD(0x02697900, Module *, get_Module, (RuntimeMethodInfo * __this));
IL2CPP_REGISTER_METHOD(0x02697A30, RuntimeType *, get_ReflectedTypeInternal, (RuntimeMethodInfo * __this));
IL2CPP_REGISTER_METHOD(0x02697B10, String *, FormatNameAndSig, (RuntimeMethodInfo * __this, bool serialization));
IL2CPP_REGISTER_METHOD(0x02697D60, Delegate *, CreateDelegate, (RuntimeMethodInfo * __this, Type * delegateType));
IL2CPP_REGISTER_METHOD(0x01AD43A0, Delegate *, CreateDelegate, (RuntimeMethodInfo * __this, Type * delegateType, Object * target));
IL2CPP_REGISTER_METHOD(0x02697D90, String *, ToString, (RuntimeMethodInfo * __this));
IL2CPP_REGISTER_METHOD(0x02697900, RuntimeModule *, GetRuntimeModule, (RuntimeMethodInfo * __this));
IL2CPP_REGISTER_METHOD(0x02697E70, void, GetObjectData, (RuntimeMethodInfo * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04735EE8, RuntimeMethodInfo_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026980C0, String *, SerializationToString, (RuntimeMethodInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RuntimeMethodInfo * __this));
}
