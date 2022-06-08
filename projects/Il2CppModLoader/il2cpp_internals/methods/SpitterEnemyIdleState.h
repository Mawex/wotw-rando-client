#include <interception_macros.h>

namespace app::methods::SpitterEnemyIdleState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (SpitterEnemyIdleState * __this, SpitterEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x0099F6B0, void, UpdateState, (SpitterEnemyIdleState * __this));
IL2CPP_REGISTER_METHOD(0x0099F770, void, OnEnter, (SpitterEnemyIdleState * __this));
IL2CPP_REGISTER_METHOD(0x0099F810, void, OnExit, (SpitterEnemyIdleState * __this));
}
