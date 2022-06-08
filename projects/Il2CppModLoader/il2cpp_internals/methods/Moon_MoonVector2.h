using namespace app;

namespace app::methods::Moon::MoonVector2 {
IL2CPP_REGISTER_METHOD(0x02F99B50, bool, get_IsCrossSceneReference, (MoonVector2 * __this));
IL2CPP_REGISTER_METHOD(0x02F99C10, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonVector2 * __this));
IL2CPP_REGISTER_METHODINFO(0x047685C0, MoonVector2_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F99D50, bool, get_IsStaticValue, (MoonVector2 * __this));
IL2CPP_REGISTER_METHOD(0x02F99DF0, void, __ctor, (MoonVector2 * __this, Vector2 staticValue));
IL2CPP_REGISTER_METHOD(0x02F99E30, Vector2, Resolve, (MoonVector2 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0478F908, MoonVector2_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F9A030, Vector2, SafeResolve, (MoonVector2 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04750388, MoonVector2_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F9A330, bool, CanResolve, (MoonVector2 * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F9A4F0, bool, TryResolve, (MoonVector2 * __this, Vector2 * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F9A560, void, SetStaticValue, (MoonVector2 * __this, Vector2 newValue));
IL2CPP_REGISTER_METHOD(0x02F9A590, void, SetValueInResolver, (MoonVector2 * __this, Vector2 newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x047516D8, MoonVector2_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C3DD30, MoonTypeData, GetTypeData, (MoonVector2 * __this));
}
