#include <interception_macros.h>

namespace app::methods::UberPostProcessAnimator {
IL2CPP_REGISTER_METHOD(0x00738690, float, get_Weight, (UberPostProcessAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_Weight, (UberPostProcessAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBC60, CameraSettings *, get_Settings, (UberPostProcessAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_Settings, (UberPostProcessAnimator * __this, CameraSettings * value));
IL2CPP_REGISTER_METHOD(0x00417920, PostProcessInfluencerOrder__Enum, get_PostInfluenceApplyOrder, (UberPostProcessAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, CameraSettingsAsset *, get_SettingsAssetForDebug, (UberPostProcessAnimator * __this));
IL2CPP_REGISTER_METHOD(0x018F38A0, void, OnValidate, (UberPostProcessAnimator * __this));
IL2CPP_REGISTER_METHOD(0x018F38B0, void, OnUpdateEntity, (UberPostProcessAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x018F38D0, void, OnStartPlayback, (UberPostProcessAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x018F39A0, void, OnStopPlayback, (UberPostProcessAnimator * __this));
IL2CPP_REGISTER_METHOD(0x018F39A0, void, OnDisable, (UberPostProcessAnimator * __this));
IL2CPP_REGISTER_METHOD(0x018F39B0, void, UpdateWithTime, (UberPostProcessAnimator * __this, float time));
IL2CPP_REGISTER_METHOD(0x018F3A30, void, UpdateSettings, (UberPostProcessAnimator * __this));
IL2CPP_REGISTER_METHOD(0x018F38D0, void, OnStartWhenPlaybackOrPreview, (UberPostProcessAnimator * __this));
IL2CPP_REGISTER_METHOD(0x018F3C10, void, OnStopWhenPlaybackOrPreview, (UberPostProcessAnimator * __this));
IL2CPP_REGISTER_METHOD(0x018F3CB0, void, SampleValue, (UberPostProcessAnimator * __this, float time));
IL2CPP_REGISTER_METHOD(0x018F3DE0, void, __ctor, (UberPostProcessAnimator * __this));
}
