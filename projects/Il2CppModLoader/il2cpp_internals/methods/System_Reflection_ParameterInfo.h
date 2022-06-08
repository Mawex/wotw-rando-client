using namespace app;

namespace app::methods::System::Reflection::ParameterInfo {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ParameterInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02694630, String *, ToString, (ParameterInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x026948D0, void, FormatParameters, (StringBuilder * sb, ParameterInfo_1__Array * p, CallingConventions__Enum callingConvention, bool serialization));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_ParameterType, (ParameterInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x00998570, ParameterAttributes__Enum, get_Attributes, (ParameterInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02694B60, bool, get_IsIn, (ParameterInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02694B80, bool, get_IsOptional, (ParameterInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02694BA0, bool, get_IsOut, (ParameterInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02694BC0, bool, get_IsRetval, (ParameterInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, MemberInfo_1 *, get_Member, (ParameterInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Name, (ParameterInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Position, (ParameterInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02694BE0, Object__Array *, GetPseudoCustomAttributes, (ParameterInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Object *, GetDefaultValueImpl, (ParameterInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02695210, Object *, get_DefaultValue, (ParameterInfo_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04781B48, ParameterInfo_1_get_DefaultValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02695260, Object__Array *, GetCustomAttributes, (ParameterInfo_1 * __this, bool inherit));
IL2CPP_REGISTER_METHOD(0x026952E0, Object__Array *, GetCustomAttributes, (ParameterInfo_1 * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x02695360, Object *, GetRealObject, (ParameterInfo_1 * __this, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x047240F0, ParameterInfo_1_GetRealObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDefined, (ParameterInfo_1 * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x026953B0, ParameterInfo_1 *, New, (ParameterInfo_1 * pinfo, MemberInfo_1 * member));
}
