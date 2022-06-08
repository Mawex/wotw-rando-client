using namespace app;

namespace app::methods::Moon::MoonColor {
IL2CPP_REGISTER_METHOD(0x02F91EE0, bool, get_IsCrossSceneReference, (MoonColor * __this));
IL2CPP_REGISTER_METHOD(0x02F91FA0, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonColor * __this));
IL2CPP_REGISTER_METHODINFO(0x047835A8, MoonColor_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F920E0, bool, get_IsStaticValue, (MoonColor * __this));
IL2CPP_REGISTER_METHOD(0x02F92180, void, __ctor, (MoonColor * __this, Color staticValue));
IL2CPP_REGISTER_METHOD(0x02F921B0, Color, Resolve, (MoonColor * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x047050B8, MoonColor_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F923B0, Color, SafeResolve, (MoonColor * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04784708, MoonColor_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F926D0, bool, CanResolve, (MoonColor * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F92890, bool, TryResolve, (MoonColor * __this, Color * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F92900, void, SetStaticValue, (MoonColor * __this, Color newValue));
IL2CPP_REGISTER_METHOD(0x02F92910, void, SetValueInResolver, (MoonColor * __this, Color newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04762418, MoonColor_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01746A40, MoonTypeData, GetTypeData, (MoonColor * __this));
}
