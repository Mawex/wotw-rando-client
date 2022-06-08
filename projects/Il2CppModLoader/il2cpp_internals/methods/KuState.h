using namespace app;

namespace app::methods::KuState {
IL2CPP_REGISTER_METHOD(0x002FB9B0, Ku *, get_Ku, (KuState * __this));
IL2CPP_REGISTER_METHOD(0x01246820, CharacterGravity *, get_CharacterGravity, (KuState * __this));
IL2CPP_REGISTER_METHOD(0x01246860, CharacterLeftRightMovement *, get_CharacterLeftRightMovement, (KuState * __this));
IL2CPP_REGISTER_METHOD(0x012468A0, CharacterPlatformMovement *, get_PlatformMovement, (KuState * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatePerforming, (KuState * __this));
IL2CPP_REGISTER_METHOD(0x012468E0, void, OnDisable, (KuState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (KuState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (KuState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (KuState * __this));
IL2CPP_REGISTER_METHOD(0x01246900, void, set_IsActive, (KuState * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsActive, (KuState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (KuState * __this));
IL2CPP_REGISTER_METHOD(0x01246930, void, PlayAnimation, (KuState * __this, MoonAnimation * animation, int32_t priority, Func_1_Boolean_ * continueCondition, Action * onAnimationEnd, bool forceOverride));
IL2CPP_REGISTER_METHOD(0x01236310, void, StopAnimation, (KuState * __this));
IL2CPP_REGISTER_METHOD(0x01234B30, bool, get_IsPlayingAnimation, (KuState * __this));
IL2CPP_REGISTER_METHOD(0x01246990, void, PlaySoundEvent, (KuState * __this, Event_1 * wiseEvent));
IL2CPP_REGISTER_METHOD(0x01246AB0, void, SetOriFloatAnimationParameter, (KuState * __this, FloatAnimationParameter * parameter, float value));
IL2CPP_REGISTER_METHOD(0x01246C60, void, Serialize, (KuState * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x01246D20, void, SetReferenceToKu, (KuState * __this, Ku * ku));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetReferenceToKu, (KuState * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (KuState * __this));
}
