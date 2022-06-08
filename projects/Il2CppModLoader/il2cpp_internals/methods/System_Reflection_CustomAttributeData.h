#include <interception_macros.h>

namespace app::methods::System::Reflection::CustomAttributeData {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CustomAttributeData * __this));
IL2CPP_REGISTER_METHOD(0x0267D660, void, __ctor, (CustomAttributeData * __this, ConstructorInfo * ctorInfo, Assembly * assembly, void * data, uint32_t data_length));
IL2CPP_REGISTER_METHOD(0x0267D7F0, void, ResolveArgumentsInternal, (ConstructorInfo * ctor, Assembly * assembly, void * data, uint32_t data_length, Object__Array * * ctorArgs, Object__Array * * namedArgs));
IL2CPP_REGISTER_METHOD(0x0267D810, void, ResolveArguments, (CustomAttributeData * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, ConstructorInfo *, get_Constructor, (CustomAttributeData * __this));
IL2CPP_REGISTER_METHOD(0x0267D940, IList_1_System_Reflection_CustomAttributeTypedArgument_ *, get_ConstructorArguments, (CustomAttributeData * __this));
IL2CPP_REGISTER_METHOD(0x0267D960, IList_1_System_Reflection_CustomAttributeNamedArgument_ *, get_NamedArguments, (CustomAttributeData * __this));
IL2CPP_REGISTER_METHOD(0x0267D980, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributes, (Assembly * target));
IL2CPP_REGISTER_METHOD(0x0267DA20, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributes, (MemberInfo_1 * target));
IL2CPP_REGISTER_METHOD(0x01EEAC20, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributesInternal, (RuntimeType * target));
IL2CPP_REGISTER_METHOD(0x0267DAC0, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributes, (Module * target));
IL2CPP_REGISTER_METHOD(0x0267DB60, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributes, (ParameterInfo_1 * target));
IL2CPP_REGISTER_METHOD(0x01717090, Type *, get_AttributeType, (CustomAttributeData * __this));
IL2CPP_REGISTER_METHOD(0x0267DC00, String *, ToString, (CustomAttributeData * __this));
IL2CPP_REGISTER_METHOD(0x0267E2D0, bool, Equals, (CustomAttributeData * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0267E6C0, int32_t, GetHashCode, (CustomAttributeData * __this));
IL2CPP_REGISTER_METHOD(0x01586F90, Object__Array *, UnboxValues, (Object__Array * values));
IL2CPP_REGISTER_METHOD(0x01587200, CustomAttributeTypedArgument__Array *, UnboxValues, (Object__Array * values));
IL2CPP_REGISTER_METHODINFO(0x0475F958, CustomAttributeData_UnboxValues_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015870C0, CustomAttributeNamedArgument__Array *, UnboxValues, (Object__Array * values));
IL2CPP_REGISTER_METHODINFO(0x04776AE0, CustomAttributeData_UnboxValues_2__MethodInfo);
}
