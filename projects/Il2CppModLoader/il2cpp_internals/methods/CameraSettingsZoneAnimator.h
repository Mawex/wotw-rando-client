using namespace app;

namespace app::methods::CameraSettingsZoneAnimator {
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (CameraSettingsZoneAnimator * __this));
IL2CPP_REGISTER_METHOD(0x016A9520, void, SampleValue, (CameraSettingsZoneAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x016A95E0, void, RestoreToOriginalState, (CameraSettingsZoneAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (CameraSettingsZoneAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (CameraSettingsZoneAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00990E80, void, __ctor, (CameraSettingsZoneAnimator * __this));
}
