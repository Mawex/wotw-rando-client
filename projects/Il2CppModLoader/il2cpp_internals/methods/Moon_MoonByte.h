#include <interception_macros.h>

namespace app::methods::Moon::MoonByte {
IL2CPP_REGISTER_METHOD(0x02F90770, bool, get_IsCrossSceneReference, (MoonByte * __this));
IL2CPP_REGISTER_METHOD(0x02F90830, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonByte * __this));
IL2CPP_REGISTER_METHODINFO(0x04742DB8, MoonByte_get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F90970, bool, get_IsStaticValue, (MoonByte * __this));
IL2CPP_REGISTER_METHOD(0x02F8F210, void, __ctor, (MoonByte * __this, uint8_t staticValue));
IL2CPP_REGISTER_METHOD(0x02F90A10, uint8_t, Resolve, (MoonByte * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04710940, MoonByte_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F90BF0, uint8_t, SafeResolve, (MoonByte * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04747EA8, MoonByte_SafeResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F90EC0, bool, CanResolve, (MoonByte * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02F91080, bool, TryResolve, (MoonByte * __this, uint8_t * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x023CF080, void, SetStaticValue, (MoonByte * __this, uint8_t newValue));
IL2CPP_REGISTER_METHOD(0x02F910E0, void, SetValueInResolver, (MoonByte * __this, uint8_t newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x047812B8, MoonByte_SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C3DD30, MoonTypeData, GetTypeData, (MoonByte * __this));
}
