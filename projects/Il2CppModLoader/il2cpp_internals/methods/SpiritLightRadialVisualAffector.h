#include <interception_macros.h>

namespace app::methods::SpiritLightRadialVisualAffector {
IL2CPP_REGISTER_METHOD(0x00D626B0, Vector3, get_Position, (SpiritLightRadialVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D62760, float, get_LightIntensityInThisFrame, (SpiritLightRadialVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D627A0, float, get_LightRadiusInThisFrame, (SpiritLightRadialVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D627E0, void, ResetStaticsAll, ());
IL2CPP_REGISTER_METHOD(0x00675C60, bool, IsVisibleInCamera, (SpiritLightRadialVisualAffector * __this, GameplayCamera * gameplayCamera));
IL2CPP_REGISTER_METHOD(0x00D628C0, void, OnEnable, (SpiritLightRadialVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D62960, void, OnDisable, (SpiritLightRadialVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D62A10, void, OnActivate, (SpiritLightRadialVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D62B80, void, OnDeactivate, (SpiritLightRadialVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D62C40, void, OnFrustumEnter, (SpiritLightRadialVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D62C60, void, OnFrustumExit, (SpiritLightRadialVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_InsideFrustum, (SpiritLightRadialVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00675C70, void, set_InsideFrustum, (SpiritLightRadialVisualAffector * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00D62C80, Bounds, get_Bounds, (SpiritLightRadialVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (SpiritLightRadialVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D62D10, void, __ctor, (SpiritLightRadialVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D62D40, void, __cctor, ());
}
