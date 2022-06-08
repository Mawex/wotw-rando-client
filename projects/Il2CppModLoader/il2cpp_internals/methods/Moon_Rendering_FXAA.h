using namespace app;

namespace app::methods::Moon::Rendering::FXAA {
IL2CPP_REGISTER_METHOD(0x0078A1A0, void, OnEnable, (FXAA_1 * __this));
IL2CPP_REGISTER_METHOD(0x0078A240, void, OnDisable, (FXAA_1 * __this));
IL2CPP_REGISTER_METHOD(0x0078A290, void, OnRenderImage, (FXAA_1 * __this, RenderTexture * src, RenderTexture * dest));
IL2CPP_REGISTER_METHOD(0x0078A9C0, void, IRenderPostprocessor_OnRenderImage, (FXAA_1 * __this, PostProcessRenderContext * context));
IL2CPP_REGISTER_METHOD(0x0078B650, void, AllocateRenderTextures, (FXAA_1 * __this));
IL2CPP_REGISTER_METHOD(0x0078BBA0, void, ReleaseRenderTextures, (FXAA_1 * __this));
IL2CPP_REGISTER_METHOD(0x0078BD30, void, AllocateComputeBuffers, (FXAA_1 * __this));
IL2CPP_REGISTER_METHOD(0x0078A240, void, ReleaseComputeBuffers, (FXAA_1 * __this));
IL2CPP_REGISTER_METHOD(0x0078C0F0, void, CheckForResolutionChanged, (FXAA_1 * __this));
IL2CPP_REGISTER_METHOD(0x0078C490, void, CheckForParamsChanged, (FXAA_1 * __this));
IL2CPP_REGISTER_METHOD(0x0078C5F0, void, __ctor, (FXAA_1 * __this));
IL2CPP_REGISTER_METHOD(0x0078C8D0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x007893E0, bool, IRenderPostprocessor_get_enabled, (FXAA_1 * __this));
}
