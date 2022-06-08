#include <interception_macros.h>

namespace app::methods::ColorVariationManager {
IL2CPP_REGISTER_METHOD(0x006D41F0, float, get_WorkingTime, (ColorVariationManager * __this));
IL2CPP_REGISTER_METHOD(0x0044E710, MoonRenderPipelineAsset *, get_MoonRenderAsset, (ColorVariationManager * __this));
IL2CPP_REGISTER_METHOD(0x011D8F20, bool, get_ColorVariationDebugEnabled, ());
IL2CPP_REGISTER_METHOD(0x011D8FC0, void, set_ColorVariationDebugEnabled, (bool value));
IL2CPP_REGISTER_METHOD(0x011D9070, void, CollectePropertiesForShaders, (ColorVariationManager * __this, ColorVariationSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x011D9360, void, RegisterColorVariationInfluencer, (ColorVariationManager_IColorVariationInfluencer * influencer));
IL2CPP_REGISTER_METHOD(0x011D9610, void, UnregisterColorVariationInfluencer, (ColorVariationManager_IColorVariationInfluencer * influencer));
IL2CPP_REGISTER_METHOD(0x011D96D0, void, MixInfluences, (ColorVariationManager * __this, ColorVariationSettings * * settings));
IL2CPP_REGISTER_METHOD(0x011D98C0, void, ApplyColorVariation, (ColorVariationManager * __this, ColorVariationSettings * settings));
IL2CPP_REGISTER_METHOD(0x011D9B90, void, ApplyCustomColorVariationBrightness, (ColorVariationManager * __this, float val));
IL2CPP_REGISTER_METHOD(0x011D9C10, void, DoUpdate, (ColorVariationManager * __this, float deltaTime, ColorVariationSettings * settings));
IL2CPP_REGISTER_METHOD(0x011D9E00, void, __ctor, (ColorVariationManager * __this));
IL2CPP_REGISTER_METHOD(0x011DA010, void, __cctor, ());
}
