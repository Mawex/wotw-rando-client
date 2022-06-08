using namespace app;

namespace app::methods::System::Reflection::Emit::FieldBuilder {
IL2CPP_REGISTER_METHOD(0x02680210, FieldAttributes__Enum, get_Attributes, (FieldBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x047217D8, FieldBuilder_get_Attributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680260, Type *, get_DeclaringType, (FieldBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x047277D8, FieldBuilder_get_DeclaringType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026802B0, Type *, get_FieldType, (FieldBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x04700D40, FieldBuilder_get_FieldType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680300, String *, get_Name, (FieldBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x04777698, FieldBuilder_get_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680350, Object *, GetValue, (FieldBuilder * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x04756A78, FieldBuilder_GetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026803A0, RuntimeFieldHandle, get_FieldHandle, (FieldBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x0474AD48, FieldBuilder_get_FieldHandle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026803D0, Type *, get_ReflectedType, (FieldBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x0474DD78, FieldBuilder_get_ReflectedType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680400, Object__Array *, GetCustomAttributes, (FieldBuilder * __this, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x0476A2A0, FieldBuilder_GetCustomAttributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680430, Object__Array *, GetCustomAttributes, (FieldBuilder * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x047637E0, FieldBuilder_GetCustomAttributes_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680460, bool, IsDefined, (FieldBuilder * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x0470EFE8, FieldBuilder_IsDefined__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680490, void, SetValue, (FieldBuilder * __this, Object * obj, Object * val, BindingFlags__Enum invokeAttr, Binder * binder, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x0472C758, FieldBuilder_SetValue__MethodInfo);
}
