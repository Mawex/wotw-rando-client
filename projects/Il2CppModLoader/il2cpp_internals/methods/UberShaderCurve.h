using namespace app;

namespace app::methods::UberShaderCurve {
IL2CPP_REGISTER_METHOD(0x002FB9B0, AnimationCurve *, get_Curve, (UberShaderCurve * __this));
IL2CPP_REGISTER_METHOD(0x0190E180, float, get_MaxValue, (UberShaderCurve * __this));
IL2CPP_REGISTER_METHOD(0x0190E1A0, float, get_MeanValue, (UberShaderCurve * __this));
IL2CPP_REGISTER_METHOD(0x0190E1C0, bool, get_IsSimple, (UberShaderCurve * __this));
IL2CPP_REGISTER_METHOD(0x0190E390, float, GetMeanCurveValue, (UberShaderCurve * __this));
IL2CPP_REGISTER_METHOD(0x0190E560, float, GetMaxCurveValue, (UberShaderCurve * __this));
IL2CPP_REGISTER_METHOD(0x0190E7A0, void, __ctor, (UberShaderCurve * __this));
IL2CPP_REGISTER_METHOD(0x0190E7E0, void, __ctor, (UberShaderCurve * __this, float value));
IL2CPP_REGISTER_METHOD(0x0190E820, void, __ctor, (UberShaderCurve * __this, AnimationCurve * curve));
IL2CPP_REGISTER_METHOD(0x0190EB50, void, BindProperties, (UberShaderCurve * __this));
IL2CPP_REGISTER_METHOD(0x0190ED50, void, CreateTexture, (UberShaderCurve * __this));
IL2CPP_REGISTER_METHOD(0x0190EE60, Vector4, GetSettings, (UberShaderCurve * __this));
IL2CPP_REGISTER_METHOD(0x0190EE90, void, Set, (UberShaderCurve * __this, String * bindName, UberShaderBlock * attachedBlock));
}
