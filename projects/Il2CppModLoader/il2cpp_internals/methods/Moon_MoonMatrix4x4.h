#include <interception_macros.h>

namespace app::methods::Moon::MoonMatrix4x4 {
IL2CPP_REGISTER_METHOD(0x02F96530, bool, get_IsCrossSceneReference, (MoonMatrix4x4 * __this));
IL2CPP_REGISTER_METHOD(0x02F965F0, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonMatrix4x4 * __this));
IL2CPP_REGISTER_METHODINFO(0x0472EF70, MoonMatrix4x4_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F96730, bool, get_IsStaticValue, (MoonMatrix4x4 * __this));
IL2CPP_REGISTER_METHOD(0x02F967D0, void, __ctor, (MoonMatrix4x4 * __this, Matrix4x4 staticValue));
IL2CPP_REGISTER_METHOD(0x02F96810, Matrix4x4, Resolve, (MoonMatrix4x4 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0470CA50, MoonMatrix4x4_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F96A50, Matrix4x4, SafeResolve, (MoonMatrix4x4 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0473CF70, MoonMatrix4x4_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F96DD0, bool, CanResolve, (MoonMatrix4x4 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F96F90, bool, TryResolve, (MoonMatrix4x4 * __this, Matrix4x4 * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F97030, void, SetStaticValue, (MoonMatrix4x4 * __this, Matrix4x4 newValue));
IL2CPP_REGISTER_METHOD(0x02F97060, void, SetValueInResolver, (MoonMatrix4x4 * __this, Matrix4x4 newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0474EF98, MoonMatrix4x4_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CB97B0, MoonTypeData, GetTypeData, (MoonMatrix4x4 * __this));
}
