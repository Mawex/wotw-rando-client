#include <interception_macros.h>

namespace app::methods::Moon::MoonInt {
IL2CPP_REGISTER_METHOD(0x02F94E50, bool, get_IsCrossSceneReference, (MoonInt * __this));
IL2CPP_REGISTER_METHOD(0x02F94F10, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonInt * __this));
IL2CPP_REGISTER_METHODINFO(0x04702080, MoonInt_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F95050, bool, get_IsStaticValue, (MoonInt * __this));
IL2CPP_REGISTER_METHOD(0x02F92DD0, void, __ctor, (MoonInt * __this, int32_t staticValue));
IL2CPP_REGISTER_METHOD(0x02F950F0, int32_t, Resolve, (MoonInt * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04737CF0, MoonInt_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F952D0, int32_t, SafeResolve, (MoonInt * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04709B58, MoonInt_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F955A0, bool, CanResolve, (MoonInt * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F95760, bool, TryResolve, (MoonInt * __this, int32_t * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F934D0, void, SetStaticValue, (MoonInt * __this, int32_t newValue));
IL2CPP_REGISTER_METHOD(0x02F957D0, void, SetValueInResolver, (MoonInt * __this, int32_t newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0478B248, MoonInt_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C3DD30, MoonTypeData, GetTypeData, (MoonInt * __this));
}
