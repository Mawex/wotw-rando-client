using namespace app;

namespace app::methods::Moon::Rendering::SrpSampler {
IL2CPP_REGISTER_METHOD(0x001203B0, String *, get_name, (SrpSampler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001204A0, float, get_userTime, (SrpSampler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001204D0, float, get_engineTime, (SrpSampler__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00120500, void, __ctor, (SrpSampler__Boxed * __this, String * name, SrpSampler_Scope__Enum scope, bool forceSuffix, bool isRoot, int32_t profilerMetric));
IL2CPP_REGISTER_METHODINFO(0x04787800, SrpSampler__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EBE760, SrpSampler, Get, (String * name, SrpSampler_Scope__Enum scope, bool isRoot, bool forceSuffix, Metric__Enum metric));
IL2CPP_REGISTER_METHOD(0x00EBE950, void, __cctor, (MethodInfo * method));
}
