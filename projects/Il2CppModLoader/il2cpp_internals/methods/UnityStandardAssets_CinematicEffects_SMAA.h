using namespace app;

namespace app::methods::UnityStandardAssets::CinematicEffects::SMAA {
IL2CPP_REGISTER_METHOD(0x02508F20, Shader *, get_shader, (SMAA * __this));
IL2CPP_REGISTER_METHOD(0x02509030, Texture2D *, get_areaTexture, (SMAA * __this));
IL2CPP_REGISTER_METHOD(0x02509110, Texture2D *, get_searchTexture, (SMAA * __this));
IL2CPP_REGISTER_METHOD(0x025091F0, Material *, get_material, (SMAA * __this));
IL2CPP_REGISTER_METHOD(0x025092D0, void, OnEnable, (SMAA * __this, AntiAliasing * owner));
IL2CPP_REGISTER_METHOD(0x02509360, void, OnDisable, (SMAA * __this));
IL2CPP_REGISTER_METHOD(0x025094C0, void, OnPreCull, (SMAA * __this, Camera * camera));
IL2CPP_REGISTER_METHOD(0x025097E0, void, OnPostRender, (SMAA * __this, Camera * camera));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRenderImage, (SMAA * __this, PostProcessRenderContext * ctx));
IL2CPP_REGISTER_METHOD(0x02509850, void, OnRenderImage, (SMAA * __this, Camera * camera, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0250AF90, RenderTexture *, TempRT, (SMAA * __this, int32_t width, int32_t height, RenderTextureFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x0250B0C0, void, __ctor, (SMAA * __this));
}
