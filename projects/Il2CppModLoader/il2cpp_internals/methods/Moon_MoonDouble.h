#include <interception_macros.h>

namespace app::methods::Moon::MoonDouble {
IL2CPP_REGISTER_METHOD(0x02F936F0, bool, get_IsCrossSceneReference, (MoonDouble * __this));
IL2CPP_REGISTER_METHOD(0x02F937B0, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonDouble * __this));
IL2CPP_REGISTER_METHODINFO(0x0477E288, MoonDouble_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F938F0, bool, get_IsStaticValue, (MoonDouble * __this));
IL2CPP_REGISTER_METHOD(0x02F93990, void, __ctor, (MoonDouble * __this, double staticValue));
IL2CPP_REGISTER_METHOD(0x02F939B0, double, Resolve, (MoonDouble * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0470DAB0, MoonDouble_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F93BA0, double, SafeResolve, (MoonDouble * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04799F60, MoonDouble_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F93E80, bool, CanResolve, (MoonDouble * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F94040, bool, TryResolve, (MoonDouble * __this, double * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F940B0, void, SetStaticValue, (MoonDouble * __this, double newValue));
IL2CPP_REGISTER_METHOD(0x02F940C0, void, SetValueInResolver, (MoonDouble * __this, double newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04757748, MoonDouble_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C3DD30, MoonTypeData, GetTypeData, (MoonDouble * __this));
}
