using namespace app;

namespace app::methods::RotationAnimator {
IL2CPP_REGISTER_METHOD(0x01370EF0, void, CacheOriginals, (RotationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01371000, void, SampleValue, (RotationAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x013711C0, void, RestoreToOriginalState, (RotationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (RotationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x011135D0, Vector3, get_OriginalRotation, (RotationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (RotationAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00990E80, void, __ctor, (RotationAnimator * __this));
}
