#include <interception_macros.h>

namespace app::methods::UberExplosionActor {
IL2CPP_REGISTER_METHOD(0x013E84D0, void, Start, (UberExplosionActor * __this));
IL2CPP_REGISTER_METHOD(0x013E8500, void, ExplodeThis, (UberExplosionActor * __this));
IL2CPP_REGISTER_METHOD(0x013E84D0, void, OnPoolSpawned, (UberExplosionActor * __this));
IL2CPP_REGISTER_METHOD(0x0058F360, void, OnPoolDespawned, (UberExplosionActor * __this));
IL2CPP_REGISTER_METHOD(0x013E84D0, void, ExplodeAtStartIfNeeded, (UberExplosionActor * __this));
IL2CPP_REGISTER_METHOD(0x013E86E0, void, __ctor, (UberExplosionActor * __this));
}
