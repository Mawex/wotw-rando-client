using namespace app;

namespace app::methods::UnityStandardAssets::ImageEffects::ContrastStretch {
IL2CPP_REGISTER_METHOD(0x0251E1E0, Material *, get_materialLum, (ContrastStretch * __this));
IL2CPP_REGISTER_METHOD(0x0251E3C0, Material *, get_materialReduce, (ContrastStretch * __this));
IL2CPP_REGISTER_METHOD(0x0251E5A0, Material *, get_materialAdapt, (ContrastStretch * __this));
IL2CPP_REGISTER_METHOD(0x0251E780, Material *, get_materialApply, (ContrastStretch * __this));
IL2CPP_REGISTER_METHOD(0x0251E970, void, Start, (ContrastStretch * __this));
IL2CPP_REGISTER_METHOD(0x0251EB50, void, OnEnable, (ContrastStretch * __this));
IL2CPP_REGISTER_METHOD(0x0251EDC0, void, OnDisable, (ContrastStretch * __this));
IL2CPP_REGISTER_METHOD(0x0251F070, void, OnRenderImage, (ContrastStretch * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0251F3A0, void, CalculateAdaptation, (ContrastStretch * __this, Texture * curTexture));
IL2CPP_REGISTER_METHOD(0x0251F7A0, void, __ctor, (ContrastStretch * __this));
}
