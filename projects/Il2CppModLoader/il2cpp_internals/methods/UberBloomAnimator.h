#include <interception_macros.h>

namespace app::methods::UberBloomAnimator {
IL2CPP_REGISTER_METHOD(0x01291E10, float, get_IntensityWeight, (UberBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00623260, float, get_IntensityValue, (UberBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01291E90, float, get_ThresholdWeight, (UberBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007F58D0, float, get_ThresholdValue, (UberBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E38F0, void, OnUpdateEntity, (UberBloomAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x013E39E0, void, OnStartPlayback, (UberBloomAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x013E3AB0, void, OnStopPlayback, (UberBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E3B90, void, OnDisable, (UberBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E39E0, void, OnStartWhenPlaybackOrPreview, (UberBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E3BA0, void, OnStopWhenPlaybackOrPreview, (UberBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01292100, void, UpdateAtTime, (UberBloomAnimator * __this, float timeValue));
IL2CPP_REGISTER_METHOD(0x013E3C60, void, __ctor, (UberBloomAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013E4080, void, __cctor, ());
}
