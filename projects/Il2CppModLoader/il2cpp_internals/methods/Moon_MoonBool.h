using namespace app;

namespace app::methods::Moon::MoonBool {
IL2CPP_REGISTER_METHOD(0x02F8EF70, bool, get_IsCrossSceneReference, (MoonBool * __this));
IL2CPP_REGISTER_METHOD(0x02F8F030, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonBool * __this));
IL2CPP_REGISTER_METHODINFO(0x04770628, MoonBool_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F8F170, bool, get_IsStaticValue, (MoonBool * __this));
IL2CPP_REGISTER_METHOD(0x02F8F210, void, __ctor, (MoonBool * __this, bool staticValue));
IL2CPP_REGISTER_METHOD(0x02F8F230, bool, Resolve, (MoonBool * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04729CD0, MoonBool_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F8F420, bool, SafeResolve, (MoonBool * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x047137B8, MoonBool_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F8F700, bool, CanResolve, (MoonBool * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F8F8C0, bool, TryResolve, (MoonBool * __this, bool * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x023CF080, void, SetStaticValue, (MoonBool * __this, bool newValue));
IL2CPP_REGISTER_METHOD(0x02F8F920, void, SetValueInResolver, (MoonBool * __this, bool newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04767660, MoonBool_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C3DD30, MoonTypeData, GetTypeData, (MoonBool * __this));
}
