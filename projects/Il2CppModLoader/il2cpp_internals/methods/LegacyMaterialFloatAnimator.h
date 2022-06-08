#include <interception_macros.h>

namespace app::methods::LegacyMaterialFloatAnimator {
IL2CPP_REGISTER_METHOD(0x00A2DEC0, int32_t, get_PropertyID, (LegacyMaterialFloatAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A2DF40, void, Start, (LegacyMaterialFloatAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A2E430, void, OnDestroy, (LegacyMaterialFloatAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A2E5C0, void, AnimateIt, (LegacyMaterialFloatAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A16F90, void, RestoreToOriginalState, (LegacyMaterialFloatAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A2E7C0, void, __ctor, (LegacyMaterialFloatAnimator * __this));
}
