#include <interception_macros.h>

namespace app::methods::System::Reflection::Emit::PropertyBuilder {
IL2CPP_REGISTER_METHOD(0x02689220, PropertyAttributes__Enum, get_Attributes, (PropertyBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x04784E78, PropertyBuilder_get_Attributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02689270, bool, get_CanRead, (PropertyBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x04797188, PropertyBuilder_get_CanRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026892C0, bool, get_CanWrite, (PropertyBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x047402A0, PropertyBuilder_get_CanWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02689310, Type *, get_DeclaringType, (PropertyBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x0473E798, PropertyBuilder_get_DeclaringType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02689360, String *, get_Name, (PropertyBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x04712940, PropertyBuilder_get_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026893B0, Type *, get_PropertyType, (PropertyBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x0475A340, PropertyBuilder_get_PropertyType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02689400, ParameterInfo_1__Array *, GetIndexParameters, (PropertyBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x047890B8, PropertyBuilder_GetIndexParameters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02689450, Type *, get_ReflectedType, (PropertyBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x04784E70, PropertyBuilder_get_ReflectedType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02689480, MethodInfo_1__Array *, GetAccessors, (PropertyBuilder * __this, bool nonPublic));
IL2CPP_REGISTER_METHODINFO(0x0477C0A0, PropertyBuilder_GetAccessors__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026894B0, Object__Array *, GetCustomAttributes, (PropertyBuilder * __this, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04705F88, PropertyBuilder_GetCustomAttributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026894E0, Object__Array *, GetCustomAttributes, (PropertyBuilder * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x0473A9B8, PropertyBuilder_GetCustomAttributes_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02689510, MethodInfo_1 *, GetGetMethod, (PropertyBuilder * __this, bool nonPublic));
IL2CPP_REGISTER_METHODINFO(0x04736D68, PropertyBuilder_GetGetMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02689540, MethodInfo_1 *, GetSetMethod, (PropertyBuilder * __this, bool nonPublic));
IL2CPP_REGISTER_METHODINFO(0x0470C370, PropertyBuilder_GetSetMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02689570, Object *, GetValue, (PropertyBuilder * __this, Object * obj, BindingFlags__Enum invokeAttr, Binder * binder, Object__Array * index, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x0476D6E8, PropertyBuilder_GetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026895A0, bool, IsDefined, (PropertyBuilder * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHODINFO(0x04726400, PropertyBuilder_IsDefined__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026895D0, void, SetValue, (PropertyBuilder * __this, Object * obj, Object * value, BindingFlags__Enum invokeAttr, Binder * binder, Object__Array * index, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x0476BAD8, PropertyBuilder_SetValue__MethodInfo);
}
