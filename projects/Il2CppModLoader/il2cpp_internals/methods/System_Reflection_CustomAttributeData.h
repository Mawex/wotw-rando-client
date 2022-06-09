#include <interception_macros.h>

namespace app::methods::System_Reflection::CustomAttributeData {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::CustomAttributeData * this_ptr));
IL2CPP_REGISTER_METHOD(0x0267D660, void, __ctor_2, (app::CustomAttributeData * this_ptr, app::ConstructorInfo * ctor_info, app::Assembly * assembly, app::void * data, uint32_t data_length));
IL2CPP_REGISTER_METHOD(0x0267D7F0, void, ResolveArgumentsInternal, (app::ConstructorInfo * ctor, app::Assembly * assembly, app::void * data, uint32_t data_length, app::Object__Array * * ctor_args, app::Object__Array * * named_args));
IL2CPP_REGISTER_METHOD(0x0267D810, void, ResolveArguments, (app::CustomAttributeData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, ConstructorInfo *, get_Constructor, (app::CustomAttributeData * this_ptr));
IL2CPP_REGISTER_METHOD(0x0267D940, IList_1_System_Reflection_CustomAttributeTypedArgument_ *, get_ConstructorArguments, (app::CustomAttributeData * this_ptr));
IL2CPP_REGISTER_METHOD(0x0267D960, IList_1_System_Reflection_CustomAttributeNamedArgument_ *, get_NamedArguments, (app::CustomAttributeData * this_ptr));
IL2CPP_REGISTER_METHOD(0x0267D980, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributes_1, (app::Assembly * target));
IL2CPP_REGISTER_METHOD(0x0267DA20, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributes_2, (app::MemberInfo_1 * target));
IL2CPP_REGISTER_METHOD(0x01EEAC20, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributesInternal, (app::RuntimeType * target));
IL2CPP_REGISTER_METHOD(0x0267DAC0, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributes_3, (app::Module * target));
IL2CPP_REGISTER_METHOD(0x0267DB60, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributes_4, (app::ParameterInfo_1 * target));
IL2CPP_REGISTER_METHOD(0x01717090, Type *, get_AttributeType, (app::CustomAttributeData * this_ptr));
IL2CPP_REGISTER_METHOD(0x0267DC00, String *, ToString, (app::CustomAttributeData * this_ptr));
IL2CPP_REGISTER_METHOD(0x0267E2D0, bool, Equals, (app::CustomAttributeData * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x0267E6C0, int32_t, GetHashCode, (app::CustomAttributeData * this_ptr));
IL2CPP_REGISTER_METHOD(0x01586F90, Object__Array *, UnboxValues_1, (app::Object__Array * values));
IL2CPP_REGISTER_METHOD(0x01587200, CustomAttributeTypedArgument__Array *, UnboxValues_2, (app::Object__Array * values));
IL2CPP_REGISTER_METHODINFO(0x0475F958, CustomAttributeData_UnboxValues_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015870C0, CustomAttributeNamedArgument__Array *, UnboxValues_3, (app::Object__Array * values));
IL2CPP_REGISTER_METHODINFO(0x04776AE0, CustomAttributeData_UnboxValues_2__MethodInfo);
}
