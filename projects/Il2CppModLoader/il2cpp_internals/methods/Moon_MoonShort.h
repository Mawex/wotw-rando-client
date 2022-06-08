#include <interception_macros.h>

namespace app::methods::Moon::MoonShort {
IL2CPP_REGISTER_METHOD(0x02F98470, bool, get_IsCrossSceneReference, (MoonShort * __this));
IL2CPP_REGISTER_METHOD(0x02F98530, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonShort * __this));
IL2CPP_REGISTER_METHODINFO(0x047927D8, MoonShort_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F98670, bool, get_IsStaticValue, (MoonShort * __this));
IL2CPP_REGISTER_METHOD(0x02F915A0, void, __ctor, (MoonShort * __this, int16_t staticValue));
IL2CPP_REGISTER_METHOD(0x02F98710, int16_t, Resolve, (MoonShort * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04726EB8, MoonShort_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F988F0, int16_t, SafeResolve, (MoonShort * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0472ED20, MoonShort_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F98BD0, bool, CanResolve, (MoonShort * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F98D90, bool, TryResolve, (MoonShort * __this, int16_t * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F91CB0, void, SetStaticValue, (MoonShort * __this, int16_t newValue));
IL2CPP_REGISTER_METHOD(0x02F98E00, void, SetValueInResolver, (MoonShort * __this, int16_t newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04707480, MoonShort_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C3DD30, MoonTypeData, GetTypeData, (MoonShort * __this));
}
