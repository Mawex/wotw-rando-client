using namespace app;

namespace app::methods::UberPostProcessingAnimation {
IL2CPP_REGISTER_METHOD(0x018F3EC0, void, CopyCameraSettings, (CameraSettings * * settings, CameraSettings * fromSettings));
IL2CPP_REGISTER_METHOD(0x018F3F90, void, StartAnimateCameraSettingsJob, (CameraSettings * * settings, CameraSettings * fromSettings, CameraSettings * toSettings, float curveValue));
IL2CPP_REGISTER_METHOD(0x018F46B0, void, AnimateOtherCameraSettings, (CameraSettings * * settings, CameraSettings * fromSettings, CameraSettings * toSettings, float curveValue));
IL2CPP_REGISTER_METHOD(0x018F50B0, void, FinishAnimateCameraSettingsJob, (CameraSettings * * settings));
IL2CPP_REGISTER_METHOD(0x018F5330, void, AnimateCameraSettings, (CameraSettings * * settings, CameraSettings * fromSettings, CameraSettings * toSettings, float curveValue));
IL2CPP_REGISTER_METHOD(0x018F5450, void, AnimateVignettingSettings, (VignettingSettings * * vignettingSettings, VignettingSettings * fromSettings, VignettingSettings * toSettings, float curveValue));
IL2CPP_REGISTER_METHOD(0x018F55A0, void, AnimateNoiseSettings, (NoiseSettings * * noiseSettings, NoiseSettings * fromSettings, NoiseSettings * toSettings, float curveValue));
IL2CPP_REGISTER_METHOD(0x018F5730, void, AnimateContrastSettings, (ContrastSettings * * contrastSettings, ContrastSettings * fromSettings, ContrastSettings * toSettings, float curveValue));
IL2CPP_REGISTER_METHOD(0x018F5880, void, AnimateDesaturationSettings, (DesaturationSettings * * desaturationSettings, DesaturationSettings * fromSettings, DesaturationSettings * toSettings, float curveValue));
IL2CPP_REGISTER_METHOD(0x018F5990, void, AnimateColorCorrectionSettings, (ColorCorrectionSettings * * colorCorrectionSettings, ColorCorrectionSettings * fromSettings, ColorCorrectionSettings * toSettings, float curveValue));
IL2CPP_REGISTER_METHOD(0x018F5B10, void, AnimateCurveKeyframe, (AnimationCurve * * curve, int32_t keyframeIndex, AnimationCurve * fromCurve, AnimationCurve * toCurve, float curveValue));
IL2CPP_REGISTER_METHOD(0x018F6000, void, AnimateBloomSettings, (BloomSettings * * bloomSettings, BloomSettings * fromSettings, BloomSettings * toSettings, float curveValue));
IL2CPP_REGISTER_METHOD(0x018F6180, void, AnimateEmissiveSettings, (EmissiveSettings * * emissiveSettings, EmissiveSettings * fromSettings, EmissiveSettings * toSettings, float curveValue));
}
