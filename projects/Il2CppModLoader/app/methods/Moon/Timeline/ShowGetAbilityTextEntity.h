#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ShowGetAbilityTextEntity {
    IL2CPP_REGISTER_METHOD(0x00D01D90, bool, get_ShouldCheckForIfAbilityEquipped, (app::ShowGetAbilityTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D01DF0, bool, IsAbilityEquipped, (app::ShowGetAbilityTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D01EF0, void, OnStartPlayback, (app::ShowGetAbilityTextEntity * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00D02060, void, OnUpdateEntity, (app::ShowGetAbilityTextEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00D02290, void, SynchronizeData, (app::ShowGetAbilityTextEntity * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record))
    IL2CPP_REGISTER_METHOD(0x00D022B0, void, Update, (app::ShowGetAbilityTextEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D026C0, void, ctor, (app::ShowGetAbilityTextEntity * this_ptr))
}
