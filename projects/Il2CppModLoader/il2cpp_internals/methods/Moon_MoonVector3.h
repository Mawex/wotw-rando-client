#include <interception_macros.h>

namespace app::methods::Moon::MoonVector3 {
IL2CPP_REGISTER_METHOD(0x02F9A7C0, bool, get_IsCrossSceneReference, (MoonVector3 * __this));
IL2CPP_REGISTER_METHOD(0x02F9A880, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonVector3 * __this));
IL2CPP_REGISTER_METHODINFO(0x0476EEB0, MoonVector3_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F9A9C0, bool, get_IsStaticValue, (MoonVector3 * __this));
IL2CPP_REGISTER_METHOD(0x02F9AA60, void, __ctor, (MoonVector3 * __this, Vector3 staticValue));
IL2CPP_REGISTER_METHOD(0x02F9AA90, Vector3, Resolve, (MoonVector3 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0473A368, MoonVector3_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F9ACA0, Vector3, SafeResolve, (MoonVector3 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0476EBE8, MoonVector3_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F9AFD0, bool, CanResolve, (MoonVector3 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F9B190, bool, TryResolve, (MoonVector3 * __this, Vector3 * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F9B210, void, SetStaticValue, (MoonVector3 * __this, Vector3 newValue));
IL2CPP_REGISTER_METHOD(0x02F9B230, void, SetResolver, (MoonVector3 * __this, IMoonTypeResolver * newResolver, Object_1 * resolverObject, int32_t intExtraData));
IL2CPP_REGISTER_METHOD(0x02F9B240, void, SetValueInResolver, (MoonVector3 * __this, Vector3 newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x047968F0, MoonVector3_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01746A40, MoonTypeData, GetTypeData, (MoonVector3 * __this));
}
