#include <interception_macros.h>

namespace app::methods::BabySeinController {
IL2CPP_REGISTER_METHOD(0x008616A0, bool, get_LockedInput, (BabySeinController * __this));
IL2CPP_REGISTER_METHOD(0x00861750, void, Awake, (BabySeinController * __this));
IL2CPP_REGISTER_METHOD(0x00861830, void, OnDestroy, (BabySeinController * __this));
IL2CPP_REGISTER_METHOD(0x008618D0, void, Start, (BabySeinController * __this));
IL2CPP_REGISTER_METHOD(0x00861930, Vector3, get_Position, (BabySeinController * __this));
IL2CPP_REGISTER_METHOD(0x008619A0, void, FixedUpdate, (BabySeinController * __this));
IL2CPP_REGISTER_METHOD(0x00861F70, void, Jump, (BabySeinController * __this));
IL2CPP_REGISTER_METHOD(0x00862530, void, Land, (BabySeinController * __this));
IL2CPP_REGISTER_METHOD(0x00862560, void, UpdateAnimations, (BabySeinController * __this));
IL2CPP_REGISTER_METHOD(0x00862D10, bool, ShouldWalkAnimationPlay, (BabySeinController * __this));
IL2CPP_REGISTER_METHODINFO(0x0470B8C8, BabySeinController_ShouldWalkAnimationPlay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00862E00, bool, ShouldIdleAnimationPlay, (BabySeinController * __this));
IL2CPP_REGISTER_METHODINFO(0x04762C28, BabySeinController_ShouldIdleAnimationPlay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldGrabBoxAnimationPlay, (BabySeinController * __this));
IL2CPP_REGISTER_METHOD(0x00862EF0, bool, ShouldFallAnimationPlay, (BabySeinController * __this));
IL2CPP_REGISTER_METHODINFO(0x0475B200, BabySeinController_ShouldFallAnimationPlay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00862F60, bool, ShouldFallIdleAnimationPlay, (BabySeinController * __this));
IL2CPP_REGISTER_METHODINFO(0x047344F8, BabySeinController_ShouldFallIdleAnimationPlay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00862FD0, bool, ShouldJumpIdleAnimationPlay, (BabySeinController * __this));
IL2CPP_REGISTER_METHODINFO(0x0471CE48, BabySeinController_ShouldJumpIdleAnimationPlay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00863080, bool, ShouldJumpAnimationPlay, (BabySeinController * __this));
IL2CPP_REGISTER_METHODINFO(0x0472AB20, BabySeinController_ShouldJumpAnimationPlay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00863130, bool, get_IsSuspended, (BabySeinController * __this));
IL2CPP_REGISTER_METHOD(0x00863140, void, set_IsSuspended, (BabySeinController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006410F0, SuspendableMask__Enum, get_Mask, (BabySeinController * __this));
IL2CPP_REGISTER_METHOD(0x00863150, void, set_Mask, (BabySeinController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00863200, void, __ctor, (BabySeinController * __this));
}
