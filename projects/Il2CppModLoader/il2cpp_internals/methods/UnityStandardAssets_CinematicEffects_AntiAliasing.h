using namespace app;

namespace app::methods::UnityStandardAssets::CinematicEffects::AntiAliasing {
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_method, (AntiAliasing * __this));
IL2CPP_REGISTER_METHOD(0x024FF930, void, set_method, (AntiAliasing * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x024FF940, IAntiAliasing *, get_current, (AntiAliasing * __this));
IL2CPP_REGISTER_METHOD(0x024FF950, Camera *, get_cameraComponent, (AntiAliasing * __this));
IL2CPP_REGISTER_METHOD(0x024FFA20, void, OnEnable, (AntiAliasing * __this));
IL2CPP_REGISTER_METHOD(0x024FFB30, void, OnDisable, (AntiAliasing * __this));
IL2CPP_REGISTER_METHOD(0x024FFD70, void, OnPreCull, (AntiAliasing * __this));
IL2CPP_REGISTER_METHOD(0x024FFE30, void, OnPostRender, (AntiAliasing * __this));
IL2CPP_REGISTER_METHOD(0x024FFEF0, void, OnRenderImage, (AntiAliasing * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02500040, void, IRenderPostprocessor_OnRenderImage, (AntiAliasing * __this, PostProcessRenderContext * context));
IL2CPP_REGISTER_METHOD(0x025000F0, void, __ctor, (AntiAliasing * __this));
IL2CPP_REGISTER_METHOD(0x007893E0, bool, IRenderPostprocessor_get_enabled, (AntiAliasing * __this));
}
