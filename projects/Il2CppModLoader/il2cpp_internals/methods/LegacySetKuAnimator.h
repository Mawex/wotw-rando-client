using namespace app;

namespace app::methods::LegacySetKuAnimator {
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsLooping, (LegacySetKuAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (LegacySetKuAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (LegacySetKuAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00A35910, void, OnStartPlay, (LegacySetKuAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_Duration, (LegacySetKuAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (LegacySetKuAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005A4BA0, void, __ctor, (LegacySetKuAnimator * __this));
}
