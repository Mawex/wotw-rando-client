#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::PostEffectsBase {
IL2CPP_REGISTER_METHOD(0x02D5D890, Material *, CheckShaderAndCreateMaterial, (PostEffectsBase * __this, Shader * s, Material * m2Create));
IL2CPP_REGISTER_METHOD(0x02D5DE70, Material *, CreateMaterial, (PostEffectsBase * __this, Shader * s, Material * m2Create));
IL2CPP_REGISTER_METHOD(0x02D5E1E0, void, OnEnable, (PostEffectsBase * __this));
IL2CPP_REGISTER_METHOD(0x02D5E1F0, bool, CheckSupport, (PostEffectsBase * __this));
IL2CPP_REGISTER_METHOD(0x02D5E200, bool, CheckResources, (PostEffectsBase * __this));
IL2CPP_REGISTER_METHOD(0x00980110, void, Start, (PostEffectsBase * __this));
IL2CPP_REGISTER_METHOD(0x02D5E2E0, bool, CheckSupport, (PostEffectsBase * __this, bool needDepth));
IL2CPP_REGISTER_METHOD(0x02D5E520, bool, CheckSupport, (PostEffectsBase * __this, bool needDepth, bool needHdr));
IL2CPP_REGISTER_METHOD(0x0052A070, bool, Dx11Support, (PostEffectsBase * __this));
IL2CPP_REGISTER_METHOD(0x02D5E570, void, ReportAutoDisable, (PostEffectsBase * __this));
IL2CPP_REGISTER_METHOD(0x02D5E640, bool, CheckShader, (PostEffectsBase * __this, Shader * s));
IL2CPP_REGISTER_METHOD(0x02D5E9B0, void, NotSupported, (PostEffectsBase * __this));
IL2CPP_REGISTER_METHOD(0x02D5EA10, void, DrawBorder, (PostEffectsBase * __this, RenderTexture * dest, Material * material));
IL2CPP_REGISTER_METHOD(0x013270D0, void, __ctor, (PostEffectsBase * __this));
}
