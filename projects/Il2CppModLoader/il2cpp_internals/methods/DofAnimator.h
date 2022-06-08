using namespace app;

namespace app::methods::DofAnimator {
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (DofAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B9BC90, void, SampleValue, (DofAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00B9BE90, void, RestoreToOriginalState, (DofAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B9BF30, void, OnDisable, (DofAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (DofAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (DofAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B9BFE0, void, AddDofAnimator, (DofAnimator * animator, float weight));
IL2CPP_REGISTER_METHOD(0x00B9C0D0, void, RemoveDofAnimator, (DofAnimator * animator));
IL2CPP_REGISTER_METHOD(0x00B9C1A0, void, ComputeWeightScale, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00B9C400, void, __ctor, (DofAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B9C470, void, __cctor, (MethodInfo * method));
}
