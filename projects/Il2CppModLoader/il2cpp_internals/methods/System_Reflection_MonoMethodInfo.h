using namespace app;

namespace app::methods::System::Reflection::MonoMethodInfo {
IL2CPP_REGISTER_METHOD(0x02692400, void, get_method_info, (void * handle, MonoMethodInfo * info));
IL2CPP_REGISTER_METHOD(0x02692410, int32_t, get_method_attributes, (void * handle));
IL2CPP_REGISTER_METHOD(0x02692420, MonoMethodInfo, GetMethodInfo, (void * handle));
IL2CPP_REGISTER_METHOD(0x02692470, Type *, GetDeclaringType, (void * handle));
IL2CPP_REGISTER_METHOD(0x02692490, Type *, GetReturnType, (void * handle));
IL2CPP_REGISTER_METHOD(0x02692410, MethodAttributes__Enum, GetAttributes, (void * handle));
IL2CPP_REGISTER_METHOD(0x026924B0, CallingConventions__Enum, GetCallingConvention, (void * handle));
IL2CPP_REGISTER_METHOD(0x026924D0, MethodImplAttributes__Enum, GetMethodImplementationFlags, (void * handle));
IL2CPP_REGISTER_METHOD(0x02692500, ParameterInfo_1__Array *, get_parameter_info, (void * handle, MemberInfo_1 * member));
IL2CPP_REGISTER_METHOD(0x02692500, ParameterInfo_1__Array *, GetParametersInfo, (void * handle, MemberInfo_1 * member));
}
