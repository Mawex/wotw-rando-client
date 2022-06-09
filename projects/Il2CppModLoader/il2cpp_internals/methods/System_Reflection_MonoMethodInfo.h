#include <interception_macros.h>

namespace app::methods::System_Reflection::MonoMethodInfo {
IL2CPP_REGISTER_METHOD(0x02692400, void, get_method_info, (app::void * handle, app::MonoMethodInfo * info));
IL2CPP_REGISTER_METHOD(0x02692410, int32_t, get_method_attributes, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x02692420, MonoMethodInfo, GetMethodInfo, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x02692470, Type *, GetDeclaringType, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x02692490, Type *, GetReturnType, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x02692410, MethodAttributes__Enum, GetAttributes, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x026924B0, CallingConventions__Enum, GetCallingConvention, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x026924D0, MethodImplAttributes__Enum, GetMethodImplementationFlags, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x02692500, ParameterInfo_1__Array *, get_parameter_info, (app::void * handle, app::MemberInfo_1 * member));
IL2CPP_REGISTER_METHOD(0x02692500, ParameterInfo_1__Array *, GetParametersInfo, (app::void * handle, app::MemberInfo_1 * member));
}
