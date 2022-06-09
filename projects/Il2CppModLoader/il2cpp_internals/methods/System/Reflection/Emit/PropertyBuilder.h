#include <interception_macros.h>

namespace app::methods::System::Reflection::Emit::PropertyBuilder {
    IL2CPP_REGISTER_METHOD(0x02689220, app::PropertyAttributes__Enum, get_Attributes, (app::PropertyBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04784E78, PropertyBuilder_get_Attributes__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689270, bool, get_CanRead, (app::PropertyBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04797188, PropertyBuilder_get_CanRead__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026892C0, bool, get_CanWrite, (app::PropertyBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047402A0, PropertyBuilder_get_CanWrite__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689310, app::Type *, get_DeclaringType, (app::PropertyBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0473E798, PropertyBuilder_get_DeclaringType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689360, app::String *, get_Name, (app::PropertyBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04712940, PropertyBuilder_get_Name__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026893B0, app::Type *, get_PropertyType, (app::PropertyBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0475A340, PropertyBuilder_get_PropertyType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689400, app::ParameterInfo_1__Array *, GetIndexParameters, (app::PropertyBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047890B8, PropertyBuilder_GetIndexParameters__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689450, app::Type *, get_ReflectedType, (app::PropertyBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04784E70, PropertyBuilder_get_ReflectedType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689480, app::MethodInfo_1__Array *, GetAccessors, (app::PropertyBuilder * this_ptr, bool non_public));
    IL2CPP_REGISTER_METHODINFO(0x0477C0A0, PropertyBuilder_GetAccessors__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026894B0, app::Object__Array *, GetCustomAttributes_1, (app::PropertyBuilder * this_ptr, bool inherit));
    IL2CPP_REGISTER_METHODINFO(0x04705F88, PropertyBuilder_GetCustomAttributes__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026894E0, app::Object__Array *, GetCustomAttributes_2, (app::PropertyBuilder * this_ptr, app::Type * attribute_type, bool inherit));
    IL2CPP_REGISTER_METHODINFO(0x0473A9B8, PropertyBuilder_GetCustomAttributes_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689510, app::MethodInfo_1 *, GetGetMethod, (app::PropertyBuilder * this_ptr, bool non_public));
    IL2CPP_REGISTER_METHODINFO(0x04736D68, PropertyBuilder_GetGetMethod__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689540, app::MethodInfo_1 *, GetSetMethod, (app::PropertyBuilder * this_ptr, bool non_public));
    IL2CPP_REGISTER_METHODINFO(0x0470C370, PropertyBuilder_GetSetMethod__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689570, app::Object *, GetValue, (app::PropertyBuilder * this_ptr, app::Object * obj, app::BindingFlags__Enum invoke_attr, app::Binder * binder, app::Object__Array * index, app::CultureInfo * culture));
    IL2CPP_REGISTER_METHODINFO(0x0476D6E8, PropertyBuilder_GetValue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026895A0, bool, IsDefined, (app::PropertyBuilder * this_ptr, app::Type * attribute_type, bool inherit));
    IL2CPP_REGISTER_METHODINFO(0x04726400, PropertyBuilder_IsDefined__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026895D0, void, SetValue, (app::PropertyBuilder * this_ptr, app::Object * obj, app::Object * value, app::BindingFlags__Enum invoke_attr, app::Binder * binder, app::Object__Array * index, app::CultureInfo * culture));
    IL2CPP_REGISTER_METHODINFO(0x0476BAD8, PropertyBuilder_SetValue__MethodInfo);
}
