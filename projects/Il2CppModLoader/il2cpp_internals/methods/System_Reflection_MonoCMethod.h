using namespace app;

namespace app::methods::System::Reflection::MonoCMethod {
IL2CPP_REGISTER_METHOD(0x0268F2D0, MethodImplAttributes__Enum, GetMethodImplementationFlags, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F300, ParameterInfo_1__Array *, GetParameters, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F300, ParameterInfo_1__Array *, GetParametersInternal, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F340, int32_t, GetParametersCount, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F380, Object *, InternalInvoke, (MonoCMethod * __this, Object * obj, Object__Array * parameters, Exception * * exc));
IL2CPP_REGISTER_METHOD(0x0268F390, Object *, Invoke, (MonoCMethod * __this, Object * obj, BindingFlags__Enum invokeAttr, Binder * binder, Object__Array * parameters, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x04704008, MonoCMethod_Invoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268F500, Object *, DoInvoke, (MonoCMethod * __this, Object * obj, BindingFlags__Enum invokeAttr, Binder * binder, Object__Array * parameters, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x0475B3A0, MonoCMethod_DoInvoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268F750, Object *, InternalInvoke, (MonoCMethod * __this, Object * obj, Object__Array * parameters));
IL2CPP_REGISTER_METHODINFO(0x04733140, MonoCMethod_InternalInvoke_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268F860, Object *, Invoke, (MonoCMethod * __this, BindingFlags__Enum invokeAttr, Binder * binder, Object__Array * parameters, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x002FA280, RuntimeMethodHandle, get_MethodHandle, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F890, MethodAttributes__Enum, get_Attributes, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F8A0, CallingConventions__Enum, get_CallingConvention, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F8D0, bool, get_ContainsGenericParameters, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Type *, get_ReflectedType, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F910, Type *, get_DeclaringType, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F940, String *, get_Name, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F980, bool, IsDefined, (MonoCMethod * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x0268FA40, Object__Array *, GetCustomAttributes, (MonoCMethod * __this, bool inherit));
IL2CPP_REGISTER_METHOD(0x0268FAF0, Object__Array *, GetCustomAttributes, (MonoCMethod * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x0268FBB0, MethodBody *, GetMethodBody, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268FBD0, String *, ToString, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268FE80, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributesData, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_core_clr_security_level, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsSecurityCritical, (MonoCMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268FE90, void, __ctor, (MonoCMethod * __this));
}
