#include <interception_macros.h>

namespace app::methods::CameraMultiplyMotionBlurAnimator {
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (CameraMultiplyMotionBlurAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (CameraMultiplyMotionBlurAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01693450, void, SampleValue, (CameraMultiplyMotionBlurAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (CameraMultiplyMotionBlurAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01693500, void, RestoreToOriginalState, (CameraMultiplyMotionBlurAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00FEF0A0, void, OnDisable, (CameraMultiplyMotionBlurAnimator * __this));
IL2CPP_REGISTER_METHOD(0x012708F0, void, __ctor, (CameraMultiplyMotionBlurAnimator * __this));
}
