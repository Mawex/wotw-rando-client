using namespace app;

namespace app::methods::System::Reflection::MonoField {
IL2CPP_REGISTER_METHOD(0x00654950, FieldAttributes__Enum, get_Attributes, (MonoField * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, RuntimeFieldHandle, get_FieldHandle, (MonoField * __this));
IL2CPP_REGISTER_METHOD(0x0173D7D0, Type *, ResolveType, (MonoField * __this));
IL2CPP_REGISTER_METHOD(0x026906D0, Type *, get_FieldType, (MonoField * __this));
IL2CPP_REGISTER_METHOD(0x02690790, Type *, GetParentType, (MonoField * __this, bool declaring));
IL2CPP_REGISTER_METHOD(0x026907C0, Type *, get_ReflectedType, (MonoField * __this));
IL2CPP_REGISTER_METHOD(0x026907D0, Type *, get_DeclaringType, (MonoField * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Name, (MonoField * __this));
IL2CPP_REGISTER_METHOD(0x026907F0, bool, IsDefined, (MonoField * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x026908B0, Object__Array *, GetCustomAttributes, (MonoField * __this, bool inherit));
IL2CPP_REGISTER_METHOD(0x02690960, Object__Array *, GetCustomAttributes, (MonoField * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x02690A20, int32_t, GetFieldOffset, (MonoField * __this));
IL2CPP_REGISTER_METHOD(0x02690A30, Object *, GetValueInternal, (MonoField * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02690A80, Object *, GetValue, (MonoField * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x047093B0, MonoField_GetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02690C80, String *, ToString, (MonoField * __this));
IL2CPP_REGISTER_METHOD(0x01EE2430, void, SetValueInternal, (FieldInfo_1 * fi, Object * obj, Object * value));
IL2CPP_REGISTER_METHOD(0x02690D70, void, SetValue, (MonoField * __this, Object * obj, Object * val, BindingFlags__Enum invokeAttr, Binder * binder, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x047267E8, MonoField_SetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02691040, Object *, GetRawConstantValue, (MonoField * __this));
IL2CPP_REGISTER_METHOD(0x0268FE80, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributesData, (MonoField * __this));
IL2CPP_REGISTER_METHOD(0x02691050, void, CheckGeneric, (MonoField * __this));
IL2CPP_REGISTER_METHODINFO(0x04783570, MonoField_CheckGeneric__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MonoField * __this));
}
