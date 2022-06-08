#include <interception_macros.h>

namespace app::methods::SpawnWormsAttack {
IL2CPP_REGISTER_METHOD(0x00EF6860, void, Start, (SpawnWormsAttack * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (SpawnWormsAttack * __this));
IL2CPP_REGISTER_METHOD(0x00EF6A10, void, SpawnAttack, (SpawnWormsAttack * __this));
IL2CPP_REGISTER_METHODINFO(0x047728C0, SpawnWormsAttack_SpawnAttack__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EF6B40, void, LaunchBabyWayerWorm, (SpawnWormsAttack * __this, Transform * spawnPointTransform));
IL2CPP_REGISTER_METHOD(0x00EF6E40, void, __ctor, (SpawnWormsAttack * __this));
}
