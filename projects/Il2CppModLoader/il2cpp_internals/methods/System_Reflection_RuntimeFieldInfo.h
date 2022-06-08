using namespace app;

namespace app::methods::System::Reflection::RuntimeFieldInfo {
IL2CPP_REGISTER_METHOD(0x00420EE0, BindingFlags__Enum, get_BindingFlags, (RuntimeFieldInfo * __this));
IL2CPP_REGISTER_METHOD(0x02697520, Module *, get_Module, (RuntimeFieldInfo * __this));
IL2CPP_REGISTER_METHOD(0x02697550, RuntimeType *, GetDeclaringTypeInternal, (RuntimeFieldInfo * __this));
IL2CPP_REGISTER_METHOD(0x02697630, RuntimeType *, get_ReflectedTypeInternal, (RuntimeFieldInfo * __this));
IL2CPP_REGISTER_METHOD(0x02697520, RuntimeModule *, GetRuntimeModule, (RuntimeFieldInfo * __this));
IL2CPP_REGISTER_METHOD(0x02697710, void, GetObjectData, (RuntimeFieldInfo * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0470ACC0, RuntimeFieldInfo_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RuntimeFieldInfo * __this));
}
