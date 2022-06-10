#pragma once
#include <interception_macros.h>

namespace app::methods::UberPoolParticlesClear {
    IL2CPP_REGISTER_METHOD(0x00FDFB30, void, OnPoolSpawned, (app::UberPoolParticlesClear * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::UberPoolParticlesClear * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberPoolParticlesClear * this_ptr))
}
