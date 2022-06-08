using namespace app;

namespace app::methods::System::Reflection::Emit::MethodBuilder {
IL2CPP_REGISTER_METHOD(0x02680F90, MethodAttributes__Enum, get_Attributes, (MethodBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x047378E8, MethodBuilder_get_Attributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680FE0, Type *, get_DeclaringType, (MethodBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x04783EC8, MethodBuilder_get_DeclaringType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02681030, String *, get_Name, (MethodBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x04797CC0, MethodBuilder_get_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02681080, ParameterInfo_1__Array *, GetParameters, (MethodBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x047040D8, MethodBuilder_GetParameters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026810D0, RuntimeMethodHandle, get_MethodHandle, (MethodBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x04793920, MethodBuilder_get_MethodHandle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02681100, Type *, get_ReflectedType, (MethodBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x04770208, MethodBuilder_get_ReflectedType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02681130, MethodInfo_1 *, GetBaseDefinition, (MethodBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x0476F8B0, MethodBuilder_GetBaseDefinition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02681160, Object__Array *, GetCustomAttributes, (MethodBuilder * __this, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x0478E120, MethodBuilder_GetCustomAttributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02681190, Object__Array *, GetCustomAttributes, (MethodBuilder * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04799758, MethodBuilder_GetCustomAttributes_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026811C0, MethodImplAttributes__Enum, GetMethodImplementationFlags, (MethodBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x0472E7C0, MethodBuilder_GetMethodImplementationFlags__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026811F0, Object *, Invoke, (MethodBuilder * __this, Object * obj, BindingFlags__Enum invokeAttr, Binder * binder, Object__Array * parameters, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x04750780, MethodBuilder_Invoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02681220, bool, IsDefined, (MethodBuilder * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04731DC0, MethodBuilder_IsDefined__MethodInfo);
}
