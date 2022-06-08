using namespace app;

namespace app::methods::CharacterPlatformMovement_ScheduledSpeedCurve {
IL2CPP_REGISTER_METHOD(0x01312050, bool, get_ApplyDirection, (CharacterPlatformMovement_ScheduledSpeedCurve * __this));
IL2CPP_REGISTER_METHOD(0x01312090, bool, get_ApplyOnX, (CharacterPlatformMovement_ScheduledSpeedCurve * __this));
IL2CPP_REGISTER_METHOD(0x013120D0, bool, get_ApplyOnY, (CharacterPlatformMovement_ScheduledSpeedCurve * __this));
IL2CPP_REGISTER_METHOD(0x01312110, bool, get_Finished, (CharacterPlatformMovement_ScheduledSpeedCurve * __this));
IL2CPP_REGISTER_METHOD(0x0043C0F0, float, get_Time, (CharacterPlatformMovement_ScheduledSpeedCurve * __this));
IL2CPP_REGISTER_METHOD(0x01312230, void, __ctor, (CharacterPlatformMovement_ScheduledSpeedCurve * __this, CharacterPlatformMovement_SpeedSpace__Enum space, bool additive, AnimationCurve * curveX, AnimationCurve * curveY, float curveScaleX, float curveScaleY, Func_1_Boolean_ * canContinue));
IL2CPP_REGISTER_METHOD(0x01312280, void, __ctor, (CharacterPlatformMovement_ScheduledSpeedCurve * __this, CharacterPlatformMovement_SpeedSpace__Enum space, bool additive, AnimationCurve * curve, Vector2 direction, float curveScale, float timeScale, Func_1_Boolean_ * canContinue));
IL2CPP_REGISTER_METHOD(0x013122E0, void, Step, (CharacterPlatformMovement_ScheduledSpeedCurve * __this, CharacterPlatformMovement * target, float deltaTime));
}
