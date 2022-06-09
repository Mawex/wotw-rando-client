#include <interception_macros.h>

namespace app::methods::System_Reflection::MethodBase {
IL2CPP_REGISTER_METHOD(0x0268C9D0, MethodBase *, GetMethodFromHandle, (app::RuntimeMethodHandle handle));
IL2CPP_REGISTER_METHODINFO(0x0474BB70, MethodBase_GetMethodFromHandle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268CC90, bool, operator____1, (app::MethodBase * left, app::MethodBase * right));
IL2CPP_REGISTER_METHOD(0x0268CE30, bool, operator____2, (app::MethodBase * left, app::MethodBase * right));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (app::MethodBase * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E113B0, ParameterInfo_1__Array *, GetParametersNoCopy, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, CallingConventions__Enum, get_CallingConvention, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268CE50, Type__Array *, GetGenericArguments, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04712CD0, MethodBase_GetGenericArguments__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsGenericMethodDefinition, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ContainsGenericParameters, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsGenericMethod, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268CEC0, bool, get_IsSecurityCritical, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0478C948, MethodBase_get_IsSecurityCritical__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268CF10, Object *, Invoke, (app::MethodBase * this_ptr, app::Object * obj, app::Object__Array * parameters));
IL2CPP_REGISTER_METHOD(0x0268CF50, bool, get_IsPublic, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268CF80, bool, get_IsStatic, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268CFA0, bool, get_IsFinal, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268CFC0, bool, get_IsVirtual, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268CFE0, bool, get_IsAbstract, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268D010, bool, get_IsSpecialName, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268D040, bool, get_IsConstructor, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268D140, MethodBody *, GetMethodBody_1, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04778AA8, MethodBase_GetMethodBody__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268D190, String *, ConstructParameters, (app::Type__Array * parameter_types, app::CallingConventions__Enum calling_convention, bool serialization));
IL2CPP_REGISTER_METHOD(0x0268D4A0, String *, FormatNameAndSig, (app::MethodBase * this_ptr, bool serialization));
IL2CPP_REGISTER_METHOD(0x0268D6C0, Type__Array *, GetParameterTypes, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E113B0, ParameterInfo_1__Array *, GetParametersInternal, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268D830, int32_t, GetParametersCount, (app::MethodBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x0268D860, MethodBase *, GetMethodFromHandleNoGenericCheck_1, (app::RuntimeMethodHandle handle));
IL2CPP_REGISTER_METHOD(0x0268D8E0, MethodBase *, GetMethodFromHandleNoGenericCheck_2, (app::RuntimeMethodHandle handle, app::RuntimeTypeHandle reflected_type));
IL2CPP_REGISTER_METHOD(0x0268D920, MethodBody *, GetMethodBodyInternal, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x0268D930, MethodBody *, GetMethodBody_2, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x0268D940, MethodBase *, GetMethodFromHandleInternalType, (app::void * method_handle, app::void * type_handle));
IL2CPP_REGISTER_METHOD(0x0268D950, MethodBase *, GetMethodFromHandleInternalType_native, (app::void * method_handle, app::void * type_handle, bool generic_check));
}
