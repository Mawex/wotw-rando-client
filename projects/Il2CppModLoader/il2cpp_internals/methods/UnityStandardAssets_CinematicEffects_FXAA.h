#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::CinematicEffects::FXAA {
IL2CPP_REGISTER_METHOD(0x02504DF0, void, __ctor, (FXAA * __this, bool useSeparateAlpha));
IL2CPP_REGISTER_METHOD(0x02504EC0, Shader *, get_shader, (FXAA * __this));
IL2CPP_REGISTER_METHOD(0x02504FC0, Material *, get_material, (FXAA * __this));
IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_validSourceFormat, (FXAA * __this));
IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_validSourceFormat, (FXAA * __this, bool value));
IL2CPP_REGISTER_METHOD(0x025050A0, void, OnEnable, (FXAA * __this, AntiAliasing * owner));
IL2CPP_REGISTER_METHOD(0x02505130, void, OnDisable, (FXAA * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPreCull, (FXAA * __this, Camera * camera));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostRender, (FXAA * __this, Camera * camera));
IL2CPP_REGISTER_METHOD(0x02505210, void, SetSeparateAlpha, (FXAA * __this, CommandBuffer * cmd, bool state));
IL2CPP_REGISTER_METHOD(0x025053A0, void, SetAlphaMask, (FXAA * __this, CommandBuffer * cmd, bool state));
IL2CPP_REGISTER_METHOD(0x02505530, void, UpdateMaterial, (FXAA * __this));
IL2CPP_REGISTER_METHOD(0x02505780, void, UpdateMaterial, (FXAA * __this, FXAA_QualitySettings qualitySettings));
IL2CPP_REGISTER_METHOD(0x02505920, void, OnRenderImage, (FXAA * __this, Camera * camera, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02505BD0, void, OnRenderImage, (FXAA * __this, PostProcessRenderContext * ctx));
IL2CPP_REGISTER_METHOD(0x02506000, void, __cctor, ());
}
