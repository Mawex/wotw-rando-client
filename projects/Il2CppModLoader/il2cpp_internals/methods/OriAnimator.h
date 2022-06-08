using namespace app;

namespace app::methods::OriAnimator {
IL2CPP_REGISTER_METHOD(0x00621460, MoonAnimator *, GetMoonAnimator, (OriAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00621560, float, get_Duration, (OriAnimator * __this));
IL2CPP_REGISTER_METHOD(0x006216D0, bool, get_IsLooping, (OriAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (OriAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (OriAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00621840, void, SampleValue, (OriAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x006218D0, void, OnDrawGizmos, (OriAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005A4BA0, void, __ctor, (OriAnimator * __this));
}
