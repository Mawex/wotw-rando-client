#include <interception_macros.h>

namespace app::methods::LegacyDistanceAnimator {
IL2CPP_REGISTER_METHOD(0x00A19E90, void, Start, (LegacyDistanceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A19F50, void, FixedUpdate, (LegacyDistanceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A1A3B0, bool, get_IsSuspended, (LegacyDistanceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A1A3C0, void, set_IsSuspended, (LegacyDistanceAnimator * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0057AAC0, SuspendableMask__Enum, get_Mask, (LegacyDistanceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A1A3D0, void, set_Mask, (LegacyDistanceAnimator * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00A1A480, void, __ctor, (LegacyDistanceAnimator * __this));
}
