using namespace app;

namespace app::methods::Moon::MoonBounds {
IL2CPP_REGISTER_METHOD(0x02F8FAC0, bool, get_IsCrossSceneReference, (MoonBounds * __this));
IL2CPP_REGISTER_METHOD(0x02F8FB80, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonBounds * __this));
IL2CPP_REGISTER_METHODINFO(0x04724380, MoonBounds_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F8FCC0, bool, get_IsStaticValue, (MoonBounds * __this));
IL2CPP_REGISTER_METHOD(0x02F8FD60, void, __ctor, (MoonBounds * __this, Bounds staticValue));
IL2CPP_REGISTER_METHOD(0x02F8FD90, Bounds, Resolve, (MoonBounds * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04755098, MoonBounds_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F8FFA0, Bounds, SafeResolve, (MoonBounds * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0474ED10, MoonBounds_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F902E0, bool, CanResolve, (MoonBounds * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F904A0, bool, TryResolve, (MoonBounds * __this, Bounds * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F90520, void, SetStaticValue, (MoonBounds * __this, Bounds newValue));
IL2CPP_REGISTER_METHOD(0x02F90540, void, SetValueInResolver, (MoonBounds * __this, Bounds newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04753418, MoonBounds_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CB5CB0, MoonTypeData, GetTypeData, (MoonBounds * __this));
}
