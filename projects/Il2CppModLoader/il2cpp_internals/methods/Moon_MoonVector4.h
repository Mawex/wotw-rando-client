#include <interception_macros.h>

namespace app::methods::Moon::MoonVector4 {
IL2CPP_REGISTER_METHOD(0x02F9B400, bool, get_IsCrossSceneReference, (MoonVector4 * __this));
IL2CPP_REGISTER_METHOD(0x02F9B4C0, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonVector4 * __this));
IL2CPP_REGISTER_METHODINFO(0x047210D8, MoonVector4_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F9B600, bool, get_IsStaticValue, (MoonVector4 * __this));
IL2CPP_REGISTER_METHOD(0x02F92180, void, __ctor, (MoonVector4 * __this, Vector4 staticValue));
IL2CPP_REGISTER_METHOD(0x02F9B6A0, Vector4, Resolve, (MoonVector4 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x047744B0, MoonVector4_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F9B8A0, Vector4, SafeResolve, (MoonVector4 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x047082E0, MoonVector4_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F9BBC0, bool, CanResolve, (MoonVector4 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F9BD80, bool, TryResolve, (MoonVector4 * __this, Vector4 * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F92900, void, SetStaticValue, (MoonVector4 * __this, Vector4 newValue));
IL2CPP_REGISTER_METHOD(0x02F9BDF0, void, SetValueInResolver, (MoonVector4 * __this, Vector4 newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0471E080, MoonVector4_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01746A40, MoonTypeData, GetTypeData, (MoonVector4 * __this));
}
