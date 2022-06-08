using namespace app;

namespace app::methods::Colorful::SmartSaturation {
IL2CPP_REGISTER_METHOD(0x03053130, Texture2D *, get_m_CurveTexture, (SmartSaturation * __this));
IL2CPP_REGISTER_METHOD(0x03053200, void, Reset, (SmartSaturation * __this));
IL2CPP_REGISTER_METHOD(0x03053430, void, OnEnable, (SmartSaturation * __this));
IL2CPP_REGISTER_METHOD(0x03053450, void, OnDisable, (SmartSaturation * __this));
IL2CPP_REGISTER_METHOD(0x030535F0, void, UpdateCurve, (SmartSaturation * __this));
IL2CPP_REGISTER_METHOD(0x03053A70, void, OnRenderImage, (SmartSaturation * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03053D00, String *, GetShaderName, (SmartSaturation * __this));
IL2CPP_REGISTER_METHOD(0x00B5D320, void, __ctor, (SmartSaturation * __this));
}
