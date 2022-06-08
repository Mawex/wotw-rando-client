using namespace app;

namespace app::methods::MoveToTargetAnimator {
IL2CPP_REGISTER_METHOD(0x00868870, Vector3, get_OriginalPosition, (MoveToTargetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00868890, bool, get_IsLooping, (MoveToTargetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00868970, void, CacheOriginals, (MoveToTargetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00868980, void, SetEffectiveTransform, (MoveToTargetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00868B40, void, SampleValue, (MoveToTargetAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00868EE0, float, get_Duration, (MoveToTargetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00868F10, void, RestoreToOriginalState, (MoveToTargetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00869350, void, __ctor, (MoveToTargetAnimator * __this));
}
