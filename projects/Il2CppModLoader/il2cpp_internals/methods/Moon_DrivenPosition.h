#include <interception_macros.h>

namespace app::methods::Moon::DrivenPosition {
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (DrivenPosition * __this));
IL2CPP_REGISTER_METHOD(0x01BA8340, Transform *, get_EffectiveTranform, (DrivenPosition * __this));
IL2CPP_REGISTER_METHOD(0x01BA8440, ITweenLerpInputProvider *, get_ResolvedInputProvider, (DrivenPosition * __this));
IL2CPP_REGISTER_METHOD(0x01BA8500, Vector3, get_ResolvedInitialPosition, (DrivenPosition * __this));
IL2CPP_REGISTER_METHOD(0x01BA8660, Vector3, get_ResolvedEndPosition, (DrivenPosition * __this));
IL2CPP_REGISTER_METHOD(0x01BA87D0, void, OnEnable, (DrivenPosition * __this));
IL2CPP_REGISTER_METHOD(0x01BA8870, void, OnDisable, (DrivenPosition * __this));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, Awake, (DrivenPosition * __this));
IL2CPP_REGISTER_METHOD(0x01BA8910, void, OnDrawGizmos, (DrivenPosition * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_ShouldUpdate, (DrivenPosition * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_ShouldUpdate, (DrivenPosition * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01BA8DA0, void, OnUpdate, (DrivenPosition * __this, float delta));
IL2CPP_REGISTER_METHOD(0x01BA9040, GameObject *, GetDynamicGraphicTarget, (DrivenPosition * __this));
IL2CPP_REGISTER_METHOD(0x01BA9130, void, __ctor, (DrivenPosition * __this));
}
