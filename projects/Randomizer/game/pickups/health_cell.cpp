#include <Modloader/app/methods/SeinHealthController.h>
#include <Modloader/app/methods/SeinLevel.h>
#include <Modloader/interception_macros.h>
#include <game/pickups/pickups.h>

namespace {
    IL2CPP_INTERCEPT(SeinHealthController, void, set_BaseMaxHealth, (app::SeinHealthController * this_ptr, int32_t value)) {
        if (game::pickups::should_collect_pickup()) {
            next::SeinHealthController::set_BaseMaxHealth(this_ptr, value);
        }
    }

    IL2CPP_INTERCEPT(SeinHealthController, void, set_Amount, (app::SeinHealthController * this_ptr, float value)) {
        if (game::pickups::should_collect_pickup()) {
            next::SeinHealthController::set_Amount(this_ptr, value);
        }
    }

    IL2CPP_INTERCEPT(SeinLevel, void, set_PartialHealthContainers, (app::SeinLevel * this_ptr, int32_t value)) {
        if (game::pickups::should_collect_pickup()) {
            next::SeinLevel::set_PartialHealthContainers(this_ptr, value);
        }
    }

    IL2CPP_INTERCEPT(SeinLevel, int, get_PartialHealthContainers, (app::SeinLevel * this_ptr)) {
        return game::pickups::should_collect_pickup() ? next::SeinLevel::get_PartialHealthContainers(this_ptr) : 1;
    }
} // namespace
