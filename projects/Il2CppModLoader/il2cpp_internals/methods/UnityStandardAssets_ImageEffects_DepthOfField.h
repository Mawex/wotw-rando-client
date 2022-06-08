using namespace app;

namespace app::methods::UnityStandardAssets::ImageEffects::DepthOfField {
IL2CPP_REGISTER_METHOD(0x0251FF20, bool, CheckResources, (DepthOfField * __this));
IL2CPP_REGISTER_METHOD(0x0251FFA0, void, OnEnable, (DepthOfField * __this));
IL2CPP_REGISTER_METHOD(0x025200D0, void, OnDisable, (DepthOfField * __this));
IL2CPP_REGISTER_METHOD(0x02520250, void, ReleaseComputeResources, (DepthOfField * __this));
IL2CPP_REGISTER_METHOD(0x025202A0, void, CreateComputeResources, (DepthOfField * __this));
IL2CPP_REGISTER_METHOD(0x025205D0, float, FocalDistance01, (DepthOfField * __this, float worldDist));
IL2CPP_REGISTER_METHOD(0x02520A00, void, WriteCoc, (DepthOfField * __this, RenderTexture * fromTo, bool fgDilate));
IL2CPP_REGISTER_METHOD(0x02521150, void, OnRenderImage, (DepthOfField * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02523590, void, __ctor, (DepthOfField * __this));
}
