#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::ColorCorrectionLookup {
IL2CPP_REGISTER_METHOD(0x0251CA30, bool, CheckResources, (ColorCorrectionLookup * __this));
IL2CPP_REGISTER_METHOD(0x0251CAC0, void, OnDisable, (ColorCorrectionLookup * __this));
IL2CPP_REGISTER_METHOD(0x0251CBA0, void, OnDestroy, (ColorCorrectionLookup * __this));
IL2CPP_REGISTER_METHOD(0x0251CC80, void, SetIdentityLut, (ColorCorrectionLookup * __this));
IL2CPP_REGISTER_METHOD(0x0251CF70, bool, ValidDimensions, (ColorCorrectionLookup * __this, Texture2D * tex2d));
IL2CPP_REGISTER_METHOD(0x0251D0A0, void, Convert, (ColorCorrectionLookup * __this, Texture2D * temp2DTex, String * path));
IL2CPP_REGISTER_METHOD(0x0251D5B0, void, OnRenderImage, (ColorCorrectionLookup * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0251D8C0, void, __ctor, (ColorCorrectionLookup * __this));
}
