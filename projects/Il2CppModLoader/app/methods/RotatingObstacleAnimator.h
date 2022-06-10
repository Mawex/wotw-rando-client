#pragma once
#include <interception_macros.h>

namespace app::methods::RotatingObstacleAnimator {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonSetupVisuals *, get_MoonSetupVisuals, (app::RotatingObstacleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136F520, void, set_MoonSetupVisuals, (app::RotatingObstacleAnimator * this_ptr, app::IMoonSetupVisuals * value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RotatingObstacleAnimator * this_ptr))
}
