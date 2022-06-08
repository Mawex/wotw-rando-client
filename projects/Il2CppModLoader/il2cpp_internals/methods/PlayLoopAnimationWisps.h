#include <interception_macros.h>

namespace app::methods::PlayLoopAnimationWisps {
IL2CPP_REGISTER_METHOD(0x01179690, MoonAnimator *, get_Animator, (PlayLoopAnimationWisps * __this));
IL2CPP_REGISTER_METHOD(0x01179770, MoonAnimation *, get_Animation, (PlayLoopAnimationWisps * __this));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsSuspended, (PlayLoopAnimationWisps * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsSuspended, (PlayLoopAnimationWisps * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00608710, SuspendableMask__Enum, get_Mask, (PlayLoopAnimationWisps * __this));
IL2CPP_REGISTER_METHOD(0x01179850, void, set_Mask, (PlayLoopAnimationWisps * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x003FF7B0, UpdateType__Enum, get_UpdateType, (PlayLoopAnimationWisps * __this));
IL2CPP_REGISTER_METHOD(0x003FF7C0, void, set_UpdateType, (PlayLoopAnimationWisps * __this, UpdateType__Enum value));
IL2CPP_REGISTER_METHOD(0x01179900, void, Awake, (PlayLoopAnimationWisps * __this));
IL2CPP_REGISTER_METHOD(0x011799C0, void, OnDestroy, (PlayLoopAnimationWisps * __this));
IL2CPP_REGISTER_METHOD(0x01179A80, void, OnEnable, (PlayLoopAnimationWisps * __this));
IL2CPP_REGISTER_METHOD(0x01179B20, void, PlayAnimation, (PlayLoopAnimationWisps * __this));
IL2CPP_REGISTER_METHOD(0x01179D80, void, OnUpdate, (PlayLoopAnimationWisps * __this, float delta));
IL2CPP_REGISTER_METHOD(0x01179DC0, void, __ctor, (PlayLoopAnimationWisps * __this));
}
