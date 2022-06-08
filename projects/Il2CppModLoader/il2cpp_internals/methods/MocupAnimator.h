using namespace app;

namespace app::methods::MocupAnimator {
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (MocupAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (MocupAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (MocupAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0132F470, float, get_Duration, (MocupAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (MocupAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0132F5D0, void, __ctor, (MocupAnimator * __this));
}
