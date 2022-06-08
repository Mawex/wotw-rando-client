#include <interception_macros.h>

namespace app::methods::LegacyCameraSettingsDistanceBasedAnimator {
IL2CPP_REGISTER_METHOD(0x015DD330, Bounds, GetOuterBounds, (LegacyCameraSettingsDistanceBasedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015DD640, Bounds, GetInnerBounds, (LegacyCameraSettingsDistanceBasedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015DD830, float, NormalizedMarginPenetration, (LegacyCameraSettingsDistanceBasedAnimator * __this, Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x015DDCC0, void, FixedUpdate, (LegacyCameraSettingsDistanceBasedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015DDDC0, void, OnEnable, (LegacyCameraSettingsDistanceBasedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, (LegacyCameraSettingsDistanceBasedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015DDDD0, void, Init, (LegacyCameraSettingsDistanceBasedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, AnimateIt, (LegacyCameraSettingsDistanceBasedAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (LegacyCameraSettingsDistanceBasedAnimator * __this));
}
