#pragma once
#include <interception_macros.h>

namespace app::methods::CounterstrikeEffectPositionOverride {
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_SpawnPosition, (app::CounterstrikeEffectPositionOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CounterstrikeEffectPositionOverride * this_ptr))
}
