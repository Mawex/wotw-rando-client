#include <interception_macros.h>

namespace app::methods::SyncAnimations {
IL2CPP_REGISTER_METHOD(0x005136D0, KuController *, get_KuController, (SyncAnimations * __this));
IL2CPP_REGISTER_METHOD(0x00513770, Ku *, get_Ku, (SyncAnimations * __this));
IL2CPP_REGISTER_METHOD(0x00513800, void, OnEnable, (SyncAnimations * __this));
IL2CPP_REGISTER_METHOD(0x0043DF80, void, OnDisable, (SyncAnimations * __this));
IL2CPP_REGISTER_METHOD(0x00513B00, void, OnMatchAnimationTrigered, (SyncAnimations * __this, MoonAnimation * syncedAnimation, ActiveAnimationHandle sourceActiveAnimation, int32_t priority, Func_1_Boolean_ * sourceContinueCondition));
IL2CPP_REGISTER_METHODINFO(0x04797158, SyncAnimations_OnMatchAnimationTrigered__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00513DD0, void, OnMatchAnimationStopped, (SyncAnimations * __this, MoonAnimation * animation, ActiveAnimationHandle sourceActiveAnimation));
IL2CPP_REGISTER_METHODINFO(0x0476A1F8, SyncAnimations_OnMatchAnimationStopped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00513FB0, void, LateUpdate, (SyncAnimations * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SyncAnimations * __this));
}
