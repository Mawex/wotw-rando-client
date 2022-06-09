#include <interception_macros.h>

namespace app::methods::System::Reflection::Emit::TypeBuilder {
    IL2CPP_REGISTER_METHOD(0x02689600, app::Assembly *, get_Assembly, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04704DE0, TypeBuilder_get_Assembly__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689650, app::String *, get_AssemblyQualifiedName, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04731598, TypeBuilder_get_AssemblyQualifiedName__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026896A0, app::Type *, get_BaseType, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04742F38, TypeBuilder_get_BaseType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026896F0, app::String *, get_FullName, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04798580, TypeBuilder_get_FullName__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689740, app::Module *, get_Module, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0473CB68, TypeBuilder_get_Module__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689790, app::String *, get_Name, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04702F88, TypeBuilder_get_Name__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026897E0, app::String *, get_Namespace, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04781480, TypeBuilder_get_Namespace__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689830, app::Type *, GetElementType, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047185A0, TypeBuilder_GetElementType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689880, app::Type *, get_UnderlyingSystemType, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04776A88, TypeBuilder_get_UnderlyingSystemType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026898B0, app::TypeAttributes__Enum, GetAttributeFlagsImpl, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047438D8, TypeBuilder_GetAttributeFlagsImpl__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026898E0, app::ConstructorInfo *, GetConstructorImpl, (app::TypeBuilder * this_ptr, app::BindingFlags__Enum binding_attr, app::Binder * binder, app::CallingConventions__Enum call_convention, app::Type__Array * types, app::ParameterModifier__Array * modifiers));
    IL2CPP_REGISTER_METHODINFO(0x04780CC0, TypeBuilder_GetConstructorImpl__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689910, app::ConstructorInfo__Array *, GetConstructors, (app::TypeBuilder * this_ptr, app::BindingFlags__Enum binding_attr));
    IL2CPP_REGISTER_METHODINFO(0x04772490, TypeBuilder_GetConstructors__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689940, app::Object__Array *, GetCustomAttributes_1, (app::TypeBuilder * this_ptr, bool inherit));
    IL2CPP_REGISTER_METHODINFO(0x0476E720, TypeBuilder_GetCustomAttributes__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689970, app::Object__Array *, GetCustomAttributes_2, (app::TypeBuilder * this_ptr, app::Type * attribute_type, bool inherit));
    IL2CPP_REGISTER_METHODINFO(0x047619D0, TypeBuilder_GetCustomAttributes_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026899A0, app::EventInfo_1 *, GetEvent, (app::TypeBuilder * this_ptr, app::String * name, app::BindingFlags__Enum binding_attr));
    IL2CPP_REGISTER_METHODINFO(0x04708488, TypeBuilder_GetEvent__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x026899D0, app::EventInfo_1__Array *, GetEvents, (app::TypeBuilder * this_ptr, app::BindingFlags__Enum binding_attr));
    IL2CPP_REGISTER_METHODINFO(0x04716A70, TypeBuilder_GetEvents__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689A00, app::FieldInfo_1 *, GetField, (app::TypeBuilder * this_ptr, app::String * name, app::BindingFlags__Enum binding_attr));
    IL2CPP_REGISTER_METHODINFO(0x047968E0, TypeBuilder_GetField__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689A30, app::FieldInfo_1__Array *, GetFields, (app::TypeBuilder * this_ptr, app::BindingFlags__Enum binding_attr));
    IL2CPP_REGISTER_METHODINFO(0x0471A838, TypeBuilder_GetFields__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689A60, app::Type *, GetInterface, (app::TypeBuilder * this_ptr, app::String * name, bool ignore_case));
    IL2CPP_REGISTER_METHODINFO(0x04728250, TypeBuilder_GetInterface__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689A90, app::Type__Array *, GetInterfaces, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047711F0, TypeBuilder_GetInterfaces__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689AC0, app::MemberInfo_1__Array *, GetMembers, (app::TypeBuilder * this_ptr, app::BindingFlags__Enum binding_attr));
    IL2CPP_REGISTER_METHODINFO(0x04720C30, TypeBuilder_GetMembers__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689AF0, app::MethodInfo_1 *, GetMethodImpl, (app::TypeBuilder * this_ptr, app::String * name, app::BindingFlags__Enum binding_attr, app::Binder * binder, app::CallingConventions__Enum call_convention, app::Type__Array * types, app::ParameterModifier__Array * modifiers));
    IL2CPP_REGISTER_METHODINFO(0x04782C48, TypeBuilder_GetMethodImpl__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689B20, app::MethodInfo_1__Array *, GetMethods, (app::TypeBuilder * this_ptr, app::BindingFlags__Enum binding_attr));
    IL2CPP_REGISTER_METHODINFO(0x04739DC0, TypeBuilder_GetMethods__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689B50, app::Type *, GetNestedType, (app::TypeBuilder * this_ptr, app::String * name, app::BindingFlags__Enum binding_attr));
    IL2CPP_REGISTER_METHODINFO(0x04738758, TypeBuilder_GetNestedType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689B80, app::PropertyInfo_1__Array *, GetProperties, (app::TypeBuilder * this_ptr, app::BindingFlags__Enum binding_attr));
    IL2CPP_REGISTER_METHODINFO(0x04790D30, TypeBuilder_GetProperties__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689BB0, app::PropertyInfo_1 *, GetPropertyImpl, (app::TypeBuilder * this_ptr, app::String * name, app::BindingFlags__Enum binding_attr, app::Binder * binder, app::Type * return_type, app::Type__Array * types, app::ParameterModifier__Array * modifiers));
    IL2CPP_REGISTER_METHODINFO(0x047355E8, TypeBuilder_GetPropertyImpl__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689BE0, bool, HasElementTypeImpl, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04712F28, TypeBuilder_HasElementTypeImpl__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689C10, app::Object *, InvokeMember, (app::TypeBuilder * this_ptr, app::String * name, app::BindingFlags__Enum invoke_attr, app::Binder * binder, app::Object * target, app::Object__Array * args, app::ParameterModifier__Array * modifiers, app::CultureInfo * culture, app::String__Array * named_parameters));
    IL2CPP_REGISTER_METHODINFO(0x04709128, TypeBuilder_InvokeMember__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689C40, bool, IsArrayImpl, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04723EE8, TypeBuilder_IsArrayImpl__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689C70, bool, IsByRefImpl, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04719FA8, TypeBuilder_IsByRefImpl__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689CA0, bool, IsCOMObjectImpl, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04719C58, TypeBuilder_IsCOMObjectImpl__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689CD0, bool, IsDefined, (app::TypeBuilder * this_ptr, app::Type * attribute_type, bool inherit));
    IL2CPP_REGISTER_METHODINFO(0x04785930, TypeBuilder_IsDefined__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689D00, bool, IsPointerImpl, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04767DD8, TypeBuilder_IsPointerImpl__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02689D30, bool, IsPrimitiveImpl, (app::TypeBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04727E18, TypeBuilder_IsPrimitiveImpl__MethodInfo);
}
