#pragma once
#include <interception_macros.h>

namespace app::methods::LegacyTwoPointTransformAnimator {
    IL2CPP_REGISTER_METHOD(0x0112CE20, void, Start, (app::LegacyTwoPointTransformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112D070, void, AnimateIt, (app::LegacyTwoPointTransformAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A16F90, void, RestoreToOriginalState, (app::LegacyTwoPointTransformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005790B0, void, ctor, (app::LegacyTwoPointTransformAnimator * this_ptr))
}
