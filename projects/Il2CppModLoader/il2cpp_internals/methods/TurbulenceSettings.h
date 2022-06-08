using namespace app;

namespace app::methods::TurbulenceSettings {
IL2CPP_REGISTER_METHOD(0x00B1A610, Texture2D *, get_TurbulenceTexture, (TurbulenceSettings * __this));
IL2CPP_REGISTER_METHOD(0x00B1A6F0, float, get_CurveDuration, (TurbulenceSettings * __this));
IL2CPP_REGISTER_METHOD(0x00B1A7B0, Texture2D *, BakeAnimationCurve, (TurbulenceSettings * __this, AnimationCurve * curve, TextureWrapMode__Enum wrapMode, int32_t resolution, float * scale));
IL2CPP_REGISTER_METHOD(0x00B1AEC0, Texture2D *, BakeAnimationCurve, (TurbulenceSettings * __this, AnimationCurve * curve, TextureWrapMode__Enum wrapMode, int32_t resolutionX, int32_t resolutionY, float * scale));
IL2CPP_REGISTER_METHOD(0x00B1B670, bool, CurveHasChanged, (TurbulenceSettings * __this));
IL2CPP_REGISTER_METHOD(0x00B1B680, void, __ctor, (TurbulenceSettings * __this));
}
