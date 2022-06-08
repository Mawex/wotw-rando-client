using namespace app;

namespace app::methods::Moon::MoonString {
IL2CPP_REGISTER_METHOD(0x02F99020, bool, get_IsCrossSceneReference, (MoonString * __this));
IL2CPP_REGISTER_METHOD(0x02F990E0, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonString * __this));
IL2CPP_REGISTER_METHODINFO(0x04758360, MoonString_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F99220, bool, get_IsStaticValue, (MoonString * __this));
IL2CPP_REGISTER_METHOD(0x02F95C10, void, __ctor, (MoonString * __this, String * staticValue));
IL2CPP_REGISTER_METHOD(0x02F992C0, String *, Resolve, (MoonString * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x047137C8, MoonString_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F994A0, String *, SafeResolve, (MoonString * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04727450, MoonString_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F99780, bool, CanResolve, (MoonString * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F99940, bool, TryResolve, (MoonString * __this, String * * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x00B701E0, void, SetStaticValue, (MoonString * __this, String * newValue));
IL2CPP_REGISTER_METHOD(0x02F999B0, void, SetValueInResolver, (MoonString * __this, String * newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0475D5A8, MoonString_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C3DD30, MoonTypeData, GetTypeData, (MoonString * __this));
}
