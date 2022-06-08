using namespace app;

namespace app::methods::LegacyUberTransformFollowAnimator {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (LegacyUberTransformFollowAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004C87D0, void, OnStartPlay, (LegacyUberTransformFollowAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01130390, void, CacheOriginals, (LegacyUberTransformFollowAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (LegacyUberTransformFollowAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x01130790, float, get_Duration, (LegacyUberTransformFollowAnimator * __this));
IL2CPP_REGISTER_METHOD(0x011307A0, void, RestoreToOriginalState, (LegacyUberTransformFollowAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01130990, void, __ctor, (LegacyUberTransformFollowAnimator * __this));
}
