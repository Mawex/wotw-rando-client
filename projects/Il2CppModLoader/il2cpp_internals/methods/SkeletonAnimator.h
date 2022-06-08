using namespace app;

namespace app::methods::SkeletonAnimator {
IL2CPP_REGISTER_METHOD(0x002FBCA0, MoonAnimator *, get_MoonAnimator, (SkeletonAnimator * __this));
IL2CPP_REGISTER_METHOD(0x006B3AE0, void, Awake, (SkeletonAnimator * __this));
IL2CPP_REGISTER_METHOD(0x006B3B90, float, get_Duration, (SkeletonAnimator * __this));
IL2CPP_REGISTER_METHOD(0x006B3D00, bool, get_IsLooping, (SkeletonAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (SkeletonAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (SkeletonAnimator * __this));
IL2CPP_REGISTER_METHOD(0x006B3E20, void, SampleValue, (SkeletonAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x006B3F50, void, __ctor, (SkeletonAnimator * __this));
}
