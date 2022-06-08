using namespace app;

namespace app::methods::CameraAnimator {
IL2CPP_REGISTER_METHOD(0x00933870, bool, get_IsLooping, (CameraAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01681520, void, CacheOriginals, (CameraAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01681660, void, SampleValue, (CameraAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x01681B10, float, get_Duration, (CameraAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01681C70, void, RestoreToOriginalState, (CameraAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01681FA0, void, OnStartPlay, (CameraAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01681FB0, void, OnStopPlay, (CameraAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01681FF0, void, __ctor, (CameraAnimator * __this));
}
