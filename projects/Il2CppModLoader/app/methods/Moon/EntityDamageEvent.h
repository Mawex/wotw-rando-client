#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::EntityDamageEvent {
    IL2CPP_REGISTER_METHOD(0x0121E360, void, ctor, (app::EntityDamageEvent * this_ptr, app::Entity * entity, app::DamageResult damage_result))
}
