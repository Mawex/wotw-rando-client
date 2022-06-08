using namespace app;

namespace app::methods::Moon::MoonColor32 {
IL2CPP_REGISTER_METHOD(0x02F92B30, bool, get_IsCrossSceneReference, (MoonColor32 * __this));
IL2CPP_REGISTER_METHOD(0x02F92BF0, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonColor32 * __this));
IL2CPP_REGISTER_METHODINFO(0x0476B478, MoonColor32_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F92D30, bool, get_IsStaticValue, (MoonColor32 * __this));
IL2CPP_REGISTER_METHOD(0x02F92DD0, void, __ctor, (MoonColor32 * __this, Color32 staticValue));
IL2CPP_REGISTER_METHOD(0x02F92DF0, Color32, Resolve, (MoonColor32 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04765400, MoonColor32_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F92FD0, Color32, SafeResolve, (MoonColor32 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04708FC8, MoonColor32_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F932B0, bool, CanResolve, (MoonColor32 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F93470, bool, TryResolve, (MoonColor32 * __this, Color32 * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F934D0, void, SetStaticValue, (MoonColor32 * __this, Color32 newValue));
IL2CPP_REGISTER_METHOD(0x02F934E0, void, SetValueInResolver, (MoonColor32 * __this, Color32 newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0474F790, MoonColor32_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C3DD30, MoonTypeData, GetTypeData, (MoonColor32 * __this));
}
