#pragma once
#include <interception_macros.h>

namespace app::methods::DamageBasedPrefabProvider {
    IL2CPP_REGISTER_METHOD(0x00DC1C80, app::GameObject *, Prefab, (app::DamageBasedPrefabProvider * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00DC1F40, app::GameObject__Array *, GetPotentialPrefabs, (app::DamageBasedPrefabProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DamageBasedPrefabProvider * this_ptr))
}
