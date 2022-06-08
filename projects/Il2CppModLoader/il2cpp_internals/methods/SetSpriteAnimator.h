using namespace app;

namespace app::methods::SetSpriteAnimator {
IL2CPP_REGISTER_METHOD(0x005A48A0, void, CacheOriginals, (SetSpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005A48D0, void, SampleValue, (SetSpriteAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x005A4A40, void, RestoreToOriginalState, (SetSpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005A4AB0, float, get_Duration, (SetSpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (SetSpriteAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005A4BA0, void, __ctor, (SetSpriteAnimator * __this));
}
