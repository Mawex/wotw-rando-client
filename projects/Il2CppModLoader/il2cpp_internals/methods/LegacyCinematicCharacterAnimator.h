using namespace app;

namespace app::methods::LegacyCinematicCharacterAnimator {
IL2CPP_REGISTER_METHOD(0x00B1C9B0, void, Awake, (LegacyCinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015DE110, float, get_Duration, (LegacyCinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015DE230, bool, get_IsLooping, (LegacyCinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015DE350, void, OnStartPlay, (LegacyCinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015DEB00, void, OnStopPlay, (LegacyCinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (LegacyCinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (LegacyCinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015DF0B0, void, SampleValue, (LegacyCinematicCharacterAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x015DF220, void, UpdateCachedAnimation, (LegacyCinematicCharacterAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005A4BA0, void, __ctor, (LegacyCinematicCharacterAnimator * __this));
}
