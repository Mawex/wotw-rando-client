#include <interception_macros.h>

namespace app::methods::UberShaderCurveBake {
IL2CPP_REGISTER_METHOD(0x0190EFA0, bool, GradientsAreEqual, (app::Gradient * a, app::UberShaderCurveBake_GradientData data));
IL2CPP_REGISTER_METHOD(0x0190F1E0, void, Init, ());
IL2CPP_REGISTER_METHOD(0x0190F480, String *, GetCurveString, (app::AnimationCurve * curve));
IL2CPP_REGISTER_METHOD(0x0190F9D0, String *, GetGradientString, (app::Gradient * g));
IL2CPP_REGISTER_METHOD(0x0190FD00, Texture2D *, BakeAnimationCurve, (app::AnimationCurve * curve, app::TextureWrapMode__Enum wrap_mode, int32_t resolution, app::float * scale, app::float * duration));
IL2CPP_REGISTER_METHOD(0x01910200, GradientColorKey__Array *, GetColorKeys, (app::Gradient * gradient));
IL2CPP_REGISTER_METHOD(0x01910300, GradientAlphaKey__Array *, GetAlphakeys, (app::Gradient * gradient));
IL2CPP_REGISTER_METHOD(0x01910400, Texture2D *, BakeAnimationGradient, (app::Gradient * gradient, int32_t resolution));
}
