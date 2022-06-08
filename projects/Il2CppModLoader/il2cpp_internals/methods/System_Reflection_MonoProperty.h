#include <interception_macros.h>

namespace app::methods::System::Reflection::MonoProperty {
IL2CPP_REGISTER_METHOD(0x02693030, void, CachePropertyInfo, (MonoProperty * __this, PInfo__Enum flags));
IL2CPP_REGISTER_METHOD(0x02693120, PropertyAttributes__Enum, get_Attributes, (MonoProperty * __this));
IL2CPP_REGISTER_METHOD(0x02693140, bool, get_CanRead, (MonoProperty * __this));
IL2CPP_REGISTER_METHOD(0x02693190, bool, get_CanWrite, (MonoProperty * __this));
IL2CPP_REGISTER_METHOD(0x026931E0, Type *, get_PropertyType, (MonoProperty * __this));
IL2CPP_REGISTER_METHOD(0x026932F0, Type *, get_ReflectedType, (MonoProperty * __this));
IL2CPP_REGISTER_METHOD(0x02693330, Type *, get_DeclaringType, (MonoProperty * __this));
IL2CPP_REGISTER_METHOD(0x02693370, String *, get_Name, (MonoProperty * __this));
IL2CPP_REGISTER_METHOD(0x026933C0, MethodInfo_1__Array *, GetAccessors, (MonoProperty * __this, bool nonPublic));
IL2CPP_REGISTER_METHOD(0x02693610, MethodInfo_1 *, GetGetMethod, (MonoProperty * __this, bool nonPublic));
IL2CPP_REGISTER_METHOD(0x026936B0, ParameterInfo_1__Array *, GetIndexParameters, (MonoProperty * __this));
IL2CPP_REGISTER_METHOD(0x02693910, MethodInfo_1 *, GetSetMethod, (MonoProperty * __this, bool nonPublic));
IL2CPP_REGISTER_METHOD(0x026939B0, Object *, GetConstantValue, (MonoProperty * __this));
IL2CPP_REGISTER_METHOD(0x026939B0, Object *, GetRawConstantValue, (MonoProperty * __this));
IL2CPP_REGISTER_METHOD(0x026939C0, bool, IsDefined, (MonoProperty * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x02693A70, Object__Array *, GetCustomAttributes, (MonoProperty * __this, bool inherit));
IL2CPP_REGISTER_METHOD(0x02693B10, Object__Array *, GetCustomAttributes, (MonoProperty * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x02693BC0, MonoProperty_GetterAdapter *, CreateGetterDelegate, (MethodInfo_1 * method_1));
IL2CPP_REGISTER_METHODINFO(0x0477B0E0, MonoProperty_CreateGetterDelegate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02693FA0, Object *, GetValue, (MonoProperty * __this, Object * obj, Object__Array * index));
IL2CPP_REGISTER_METHOD(0x02693FE0, Object *, GetValue, (MonoProperty * __this, Object * obj, BindingFlags__Enum invokeAttr, Binder * binder, Object__Array * index, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x04780710, MonoProperty_GetValue_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026941F0, void, SetValue, (MonoProperty * __this, Object * obj, Object * value, BindingFlags__Enum invokeAttr, Binder * binder, Object__Array * index, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x04747AD0, MonoProperty_SetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026944B0, Type__Array *, GetOptionalCustomModifiers, (MonoProperty * __this));
IL2CPP_REGISTER_METHOD(0x026944F0, Type__Array *, GetRequiredCustomModifiers, (MonoProperty * __this));
IL2CPP_REGISTER_METHOD(0x0268FE80, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributesData, (MonoProperty * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MonoProperty * __this));
IL2CPP_REGISTER_METHOD(0x0153E250, Object *, GetterAdapterFrame, (MonoProperty_Getter_2_System_Object_System_Object_ * getter, Object * obj));
IL2CPP_REGISTER_METHOD(0x0153E2E0, Object *, StaticGetterAdapterFrame, (MonoProperty_StaticGetter_1_System_Object_ * getter, Object * obj));
}
