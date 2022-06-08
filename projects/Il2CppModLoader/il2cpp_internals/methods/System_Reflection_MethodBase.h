#include <interception_macros.h>

namespace app::methods::System::Reflection::MethodBase {
IL2CPP_REGISTER_METHOD(0x0268C9D0, MethodBase *, GetMethodFromHandle, (RuntimeMethodHandle handle));
IL2CPP_REGISTER_METHODINFO(0x0474BB70, MethodBase_GetMethodFromHandle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x0268CC90, bool, operator___, (MethodBase * left, MethodBase * right));
IL2CPP_REGISTER_METHOD(0x0268CE30, bool, operator___, (MethodBase * left, MethodBase * right));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (MethodBase * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x01E113B0, ParameterInfo_1__Array *, GetParametersNoCopy, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x00417920, CallingConventions__Enum, get_CallingConvention, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x0268CE50, Type__Array *, GetGenericArguments, (MethodBase * __this));
IL2CPP_REGISTER_METHODINFO(0x04712CD0, MethodBase_GetGenericArguments__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsGenericMethodDefinition, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ContainsGenericParameters, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsGenericMethod, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x0268CEC0, bool, get_IsSecurityCritical, (MethodBase * __this));
IL2CPP_REGISTER_METHODINFO(0x0478C948, MethodBase_get_IsSecurityCritical__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268CF10, Object *, Invoke, (MethodBase * __this, Object * obj, Object__Array * parameters));
IL2CPP_REGISTER_METHOD(0x0268CF50, bool, get_IsPublic, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x0268CF80, bool, get_IsStatic, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x0268CFA0, bool, get_IsFinal, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x0268CFC0, bool, get_IsVirtual, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x0268CFE0, bool, get_IsAbstract, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x0268D010, bool, get_IsSpecialName, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x0268D040, bool, get_IsConstructor, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x0268D140, MethodBody *, GetMethodBody, (MethodBase * __this));
IL2CPP_REGISTER_METHODINFO(0x04778AA8, MethodBase_GetMethodBody__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268D190, String *, ConstructParameters, (Type__Array * parameterTypes, CallingConventions__Enum callingConvention, bool serialization));
IL2CPP_REGISTER_METHOD(0x0268D4A0, String *, FormatNameAndSig, (MethodBase * __this, bool serialization));
IL2CPP_REGISTER_METHOD(0x0268D6C0, Type__Array *, GetParameterTypes, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x01E113B0, ParameterInfo_1__Array *, GetParametersInternal, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x0268D830, int32_t, GetParametersCount, (MethodBase * __this));
IL2CPP_REGISTER_METHOD(0x0268D860, MethodBase *, GetMethodFromHandleNoGenericCheck, (RuntimeMethodHandle handle));
IL2CPP_REGISTER_METHOD(0x0268D8E0, MethodBase *, GetMethodFromHandleNoGenericCheck, (RuntimeMethodHandle handle, RuntimeTypeHandle reflectedType));
IL2CPP_REGISTER_METHOD(0x0268D920, MethodBody *, GetMethodBodyInternal, (void * handle));
IL2CPP_REGISTER_METHOD(0x0268D930, MethodBody *, GetMethodBody, (void * handle));
IL2CPP_REGISTER_METHOD(0x0268D940, MethodBase *, GetMethodFromHandleInternalType, (void * method_handle, void * type_handle));
IL2CPP_REGISTER_METHOD(0x0268D950, MethodBase *, GetMethodFromHandleInternalType_native, (void * method_handle, void * type_handle, bool genericCheck));
}
