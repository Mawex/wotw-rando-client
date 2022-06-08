#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ActivateDamageAnimator {
IL2CPP_REGISTER_METHOD(0x00A35F10, bool, ShouldShowDamageField, (ActivateDamageAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C67B0, void, Awake, (ActivateDamageAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C67C0, void, OnDisable, (ActivateDamageAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C67D0, void, OnDestroy, (ActivateDamageAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C67F0, void, OnStartPlayback, (ActivateDamageAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010C68E0, void, OnStopPlayback, (ActivateDamageAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C6920, void, CacheComponents, (ActivateDamageAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C6B50, void, ApplyOverrides, (ActivateDamageAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C6FE0, void, RemoveOverrides, (ActivateDamageAnimator * __this));
IL2CPP_REGISTER_METHOD(0x010C7200, void, __ctor, (ActivateDamageAnimator * __this));
}
