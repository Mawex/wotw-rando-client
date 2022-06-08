#include <interception_macros.h>

namespace app::methods::WindSpeedAnimator {
IL2CPP_REGISTER_METHOD(0x00578EE0, void, Start, (WindSpeedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00579060, void, AnimateIt, (WindSpeedAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x00579090, void, RestoreToOriginalState, (WindSpeedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005790B0, void, __ctor, (WindSpeedAnimator * __this));
}
