using namespace app;

namespace app::methods::LegacyPostprocessAnimationPlayer {
IL2CPP_REGISTER_METHOD(0x00A319F0, float, get_Duration, (LegacyPostprocessAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00A31A20, bool, get_IsLooping, (LegacyPostprocessAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00A31B00, void, Awake, (LegacyPostprocessAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (LegacyPostprocessAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (LegacyPostprocessAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00A31BB0, void, SampleValue, (LegacyPostprocessAnimationPlayer * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00A31EC0, void, __ctor, (LegacyPostprocessAnimationPlayer * __this));
}
