using namespace app;

namespace app::methods::Moon::MoonQuaternion {
IL2CPP_REGISTER_METHOD(0x02F972C0, bool, get_IsCrossSceneReference, (MoonQuaternion * __this));
IL2CPP_REGISTER_METHOD(0x02F97380, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonQuaternion * __this));
IL2CPP_REGISTER_METHODINFO(0x04732DF0, MoonQuaternion_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F974C0, bool, get_IsStaticValue, (MoonQuaternion * __this));
IL2CPP_REGISTER_METHOD(0x02F92180, void, __ctor, (MoonQuaternion * __this, Quaternion staticValue));
IL2CPP_REGISTER_METHOD(0x02F97560, Quaternion, Resolve, (MoonQuaternion * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0477B970, MoonQuaternion_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F97760, Quaternion, SafeResolve, (MoonQuaternion * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x0474FA10, MoonQuaternion_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F97A80, bool, CanResolve, (MoonQuaternion * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F97C40, bool, TryResolve, (MoonQuaternion * __this, Quaternion * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F92900, void, SetStaticValue, (MoonQuaternion * __this, Quaternion newValue));
IL2CPP_REGISTER_METHOD(0x02F97CB0, void, SetValueInResolver, (MoonQuaternion * __this, Quaternion newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04784740, MoonQuaternion_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01746A40, MoonTypeData, GetTypeData, (MoonQuaternion * __this));
}
