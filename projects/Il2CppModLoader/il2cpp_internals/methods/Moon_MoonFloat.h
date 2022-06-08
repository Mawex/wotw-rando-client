#include <interception_macros.h>

namespace app::methods::Moon::MoonFloat {
IL2CPP_REGISTER_METHOD(0x02F942E0, bool, get_IsCrossSceneReference, (MoonFloat * __this));
IL2CPP_REGISTER_METHOD(0x02F943A0, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonFloat * __this));
IL2CPP_REGISTER_METHODINFO(0x04727DF0, MoonFloat_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F944E0, bool, get_IsStaticValue, (MoonFloat * __this));
IL2CPP_REGISTER_METHOD(0x02F94580, void, __ctor, (MoonFloat * __this, float staticValue));
IL2CPP_REGISTER_METHOD(0x02F945A0, float, Resolve, (MoonFloat * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04757738, MoonFloat_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F94790, float, SafeResolve, (MoonFloat * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x047804E8, MoonFloat_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F94A70, bool, CanResolve, (MoonFloat * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F94C30, bool, TryResolve, (MoonFloat * __this, float * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F94CA0, void, SetStaticValue, (MoonFloat * __this, float newValue));
IL2CPP_REGISTER_METHOD(0x02F94CB0, void, SetValueInResolver, (MoonFloat * __this, float newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04738E80, MoonFloat_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C3DD30, MoonTypeData, GetTypeData, (MoonFloat * __this));
}
