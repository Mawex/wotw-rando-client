#include <interception_macros.h>

namespace app::methods::SpiritLightCapsuleVisualAffector {
IL2CPP_REGISTER_METHOD(0x00D61010, Vector3, get_StartPointPosition, (SpiritLightCapsuleVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D61180, Vector3, get_EndPointPosition, (SpiritLightCapsuleVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D612F0, float, get_LightIntensityInThisFrame, (SpiritLightCapsuleVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D61330, float, get_LightStartRadiusInThisFrame, (SpiritLightCapsuleVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D61370, float, get_LightEndRadiusInThisFrame, (SpiritLightCapsuleVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D613B0, bool, IsVisibleInCamera, (SpiritLightCapsuleVisualAffector * __this, GameplayCamera * gameplayCamera));
IL2CPP_REGISTER_METHOD(0x00980110, void, OnEnable, (SpiritLightCapsuleVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00CC2AF0, void, OnDisable, (SpiritLightCapsuleVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D616C0, void, OnActivate, (SpiritLightCapsuleVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D61780, void, OnDeactivate, (SpiritLightCapsuleVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D61840, void, __ctor, (SpiritLightCapsuleVisualAffector * __this));
IL2CPP_REGISTER_METHOD(0x00D61860, void, __cctor, ());
}
