using namespace app;

namespace app::methods::System::Reflection::RuntimeEventInfo {
IL2CPP_REGISTER_METHOD(0x00420EE0, BindingFlags__Enum, get_BindingFlags, (RuntimeEventInfo * __this));
IL2CPP_REGISTER_METHOD(0x026970A0, Module *, get_Module, (RuntimeEventInfo * __this));
IL2CPP_REGISTER_METHOD(0x02697190, RuntimeType *, GetDeclaringTypeInternal, (RuntimeEventInfo * __this));
IL2CPP_REGISTER_METHOD(0x02697270, RuntimeType *, get_ReflectedTypeInternal, (RuntimeEventInfo * __this));
IL2CPP_REGISTER_METHOD(0x026970A0, RuntimeModule *, GetRuntimeModule, (RuntimeEventInfo * __this));
IL2CPP_REGISTER_METHOD(0x02697350, void, GetObjectData, (RuntimeEventInfo * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0472F7A0, RuntimeEventInfo_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RuntimeEventInfo * __this));
}
