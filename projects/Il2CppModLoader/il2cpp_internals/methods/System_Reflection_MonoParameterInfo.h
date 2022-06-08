using namespace app;

namespace app::methods::System::Reflection::MonoParameterInfo {
IL2CPP_REGISTER_METHOD(0x02692AB0, void, __ctor, (MonoParameterInfo * __this, ParameterInfo_1 * pinfo, MemberInfo_1 * member));
IL2CPP_REGISTER_METHOD(0x02692B50, Object *, get_DefaultValue, (MonoParameterInfo * __this));
IL2CPP_REGISTER_METHOD(0x02692E00, Object__Array *, GetCustomAttributes, (MonoParameterInfo * __this, bool inherit));
IL2CPP_REGISTER_METHOD(0x02692EB0, Object__Array *, GetCustomAttributes, (MonoParameterInfo * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x02692F70, bool, IsDefined, (MonoParameterInfo * __this, Type * attributeType, bool inherit));
}
