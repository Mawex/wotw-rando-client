using namespace app;

namespace app::methods::System::Reflection::RuntimeConstructorInfo {
IL2CPP_REGISTER_METHOD(0x02696B10, Module *, get_Module, (RuntimeConstructorInfo * __this));
IL2CPP_REGISTER_METHOD(0x02696B10, RuntimeModule *, GetRuntimeModule, (RuntimeConstructorInfo * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, BindingFlags__Enum, get_BindingFlags, (RuntimeConstructorInfo * __this));
IL2CPP_REGISTER_METHOD(0x02696C00, RuntimeType *, get_ReflectedTypeInternal, (RuntimeConstructorInfo * __this));
IL2CPP_REGISTER_METHOD(0x02696CE0, void, GetObjectData, (RuntimeConstructorInfo * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0471F848, RuntimeConstructorInfo_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02696EE0, String *, SerializationToString, (RuntimeConstructorInfo * __this));
IL2CPP_REGISTER_METHOD(0x02696F00, void, SerializationInvoke, (RuntimeConstructorInfo * __this, Object * target, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0268FE90, void, __ctor, (RuntimeConstructorInfo * __this));
}
