#include <interception_macros.h>

namespace app::methods::System::Reflection::MonoMethod {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x02691130, String *, get_name, (MethodBase * method_1));
IL2CPP_REGISTER_METHOD(0x02691170, MonoMethod *, get_base_method, (MonoMethod * method_1, bool definition));
IL2CPP_REGISTER_METHOD(0x02691180, MethodInfo_1 *, GetBaseDefinition, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x02691190, MethodInfo_1 *, GetBaseMethod, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x026911A0, Type *, get_ReturnType, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F2D0, MethodImplAttributes__Enum, GetMethodImplementationFlags, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x026911D0, ParameterInfo_1__Array *, GetParameters, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F300, ParameterInfo_1__Array *, GetParametersInternal, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x026912D0, int32_t, GetParametersCount, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F380, Object *, InternalInvoke, (MonoMethod * __this, Object * obj, Object__Array * parameters, Exception * * exc));
IL2CPP_REGISTER_METHOD(0x02691310, Object *, Invoke, (MonoMethod * __this, Object * obj, BindingFlags__Enum invokeAttr, Binder * binder, Object__Array * parameters, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x0477CAD8, MonoMethod_Invoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026914E0, void, ConvertValues, (Binder * binder, Object__Array * args, ParameterInfo_1__Array * pinfo, CultureInfo * culture, BindingFlags__Enum invokeAttr));
IL2CPP_REGISTER_METHODINFO(0x04783CF0, MonoMethod_ConvertValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, RuntimeMethodHandle, get_MethodHandle, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F890, MethodAttributes__Enum, get_Attributes, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F8A0, CallingConventions__Enum, get_CallingConvention, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Type *, get_ReflectedType, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F910, Type *, get_DeclaringType, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268F940, String *, get_Name, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x02691820, bool, IsDefined, (MonoMethod * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x026918E0, Object__Array *, GetCustomAttributes, (MonoMethod * __this, bool inherit));
IL2CPP_REGISTER_METHOD(0x02691990, Object__Array *, GetCustomAttributes, (MonoMethod * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x02691A50, void, GetPInvoke, (MonoMethod * __this, PInvokeAttributes__Enum * flags, String * * entryPoint, String * * dllName));
IL2CPP_REGISTER_METHOD(0x02691A70, Object__Array *, GetPseudoCustomAttributes, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x02691CD0, MethodInfo_1 *, MakeGenericMethod, (MonoMethod * __this, Type__Array * methodInstantiation));
IL2CPP_REGISTER_METHODINFO(0x04703FC0, MonoMethod_MakeGenericMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02692000, MethodInfo_1 *, MakeGenericMethod_impl, (MonoMethod * __this, Type__Array * types));
IL2CPP_REGISTER_METHOD(0x02692010, Type__Array *, GetGenericArguments, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x02692150, MethodInfo_1 *, GetGenericMethodDefinition_impl, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x02692180, MethodInfo_1 *, GetGenericMethodDefinition, (MonoMethod * __this));
IL2CPP_REGISTER_METHODINFO(0x04775120, MonoMethod_GetGenericMethodDefinition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026922C0, bool, get_IsGenericMethodDefinition, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x026922D0, bool, get_IsGenericMethod, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x02692300, bool, get_ContainsGenericParameters, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268FBB0, MethodBody *, GetMethodBody, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x0268FE80, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributesData, (MonoMethod * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_core_clr_security_level, ());
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsSecurityCritical, (MonoMethod * __this));
}
