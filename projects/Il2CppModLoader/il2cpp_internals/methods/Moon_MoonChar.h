#include <interception_macros.h>

namespace app::methods::Moon::MoonChar {
IL2CPP_REGISTER_METHOD(0x02F91300, bool, get_IsCrossSceneReference, (MoonChar * __this));
IL2CPP_REGISTER_METHOD(0x02F913C0, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonChar * __this));
IL2CPP_REGISTER_METHODINFO(0x04744888, MoonChar_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F91500, bool, get_IsStaticValue, (MoonChar * __this));
IL2CPP_REGISTER_METHOD(0x02F915A0, void, __ctor, (MoonChar * __this, uint16_t staticValue));
IL2CPP_REGISTER_METHOD(0x02F915C0, uint16_t, Resolve, (MoonChar * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0472FCD0, MoonChar_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F917A0, uint16_t, SafeResolve, (MoonChar * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04703B98, MoonChar_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F91A80, bool, CanResolve, (MoonChar * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F91C40, bool, TryResolve, (MoonChar * __this, uint16_t * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F91CB0, void, SetStaticValue, (MoonChar * __this, uint16_t newValue));
IL2CPP_REGISTER_METHOD(0x02F91CC0, void, SetValueInResolver, (MoonChar * __this, uint16_t newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04720998, MoonChar_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C3DD30, MoonTypeData, GetTypeData, (MoonChar * __this));
}
