using namespace app;

namespace app::methods::CharacterAnimationController {
IL2CPP_REGISTER_METHOD(0x01046C20, void, Start, (CharacterAnimationController * __this));
IL2CPP_REGISTER_METHOD(0x01046D90, void, OnDestroy, (CharacterAnimationController * __this));
IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_IsSuspended, (CharacterAnimationController * __this));
IL2CPP_REGISTER_METHOD(0x00DFE810, void, set_IsSuspended, (CharacterAnimationController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01046F10, void, OnAnimationEnd, (CharacterAnimationController * __this, TextureAnimation * animation));
IL2CPP_REGISTER_METHODINFO(0x0470A528, CharacterAnimationController_OnAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01046FF0, void, FixedUpdate, (CharacterAnimationController * __this));
IL2CPP_REGISTER_METHOD(0x01047200, void, ResetState, (CharacterAnimationController * __this));
IL2CPP_REGISTER_METHOD(0x010472E0, void, ChangeState, (CharacterAnimationController * __this, CharacterAnimationStateBase * state));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (CharacterAnimationController * __this));
}
