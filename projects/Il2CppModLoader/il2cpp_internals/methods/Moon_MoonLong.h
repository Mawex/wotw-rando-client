#include <interception_macros.h>

namespace app::methods::Moon::MoonLong {
IL2CPP_REGISTER_METHOD(0x02F95970, bool, get_IsCrossSceneReference, (MoonLong * __this));
IL2CPP_REGISTER_METHOD(0x02F95A30, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonLong * __this));
IL2CPP_REGISTER_METHODINFO(0x0477E8D8, MoonLong_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F95B70, bool, get_IsStaticValue, (MoonLong * __this));
IL2CPP_REGISTER_METHOD(0x02F95C10, void, __ctor, (MoonLong * __this, int64_t staticValue));
IL2CPP_REGISTER_METHOD(0x02F95C30, int64_t, Resolve, (MoonLong * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04707F00, MoonLong_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F95E10, int64_t, SafeResolve, (MoonLong * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04734E18, MoonLong_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F960F0, bool, CanResolve, (MoonLong * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F962B0, bool, TryResolve, (MoonLong * __this, int64_t * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x00B701E0, void, SetStaticValue, (MoonLong * __this, int64_t newValue));
IL2CPP_REGISTER_METHOD(0x02F96320, void, SetValueInResolver, (MoonLong * __this, int64_t newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0473EB50, MoonLong_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C3DD30, MoonTypeData, GetTypeData, (MoonLong * __this));
}
