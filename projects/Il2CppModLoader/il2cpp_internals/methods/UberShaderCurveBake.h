using namespace app;

namespace app::methods::UberShaderCurveBake {
IL2CPP_REGISTER_METHOD(0x0190EFA0, bool, GradientsAreEqual, (Gradient * a, UberShaderCurveBake_GradientData data));
IL2CPP_REGISTER_METHOD(0x0190F1E0, void, Init, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0190F480, String *, GetCurveString, (AnimationCurve * curve));
IL2CPP_REGISTER_METHOD(0x0190F9D0, String *, GetGradientString, (Gradient * g));
IL2CPP_REGISTER_METHOD(0x0190FD00, Texture2D *, BakeAnimationCurve, (AnimationCurve * curve, TextureWrapMode__Enum wrapMode, int32_t resolution, float * scale, float * duration));
IL2CPP_REGISTER_METHOD(0x01910200, GradientColorKey__Array *, GetColorKeys, (Gradient * gradient));
IL2CPP_REGISTER_METHOD(0x01910300, GradientAlphaKey__Array *, GetAlphakeys, (Gradient * gradient));
IL2CPP_REGISTER_METHOD(0x01910400, Texture2D *, BakeAnimationGradient, (Gradient * gradient, int32_t resolution));
}
