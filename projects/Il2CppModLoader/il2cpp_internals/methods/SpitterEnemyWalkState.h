#include <interception_macros.h>

namespace app::methods::SpitterEnemyWalkState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (SpitterEnemyWalkState * __this, SpitterEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x009A1FD0, void, UpdateState, (SpitterEnemyWalkState * __this));
IL2CPP_REGISTER_METHOD(0x009A20F0, void, OnEnter, (SpitterEnemyWalkState * __this));
IL2CPP_REGISTER_METHOD(0x009A2190, void, OnExit, (SpitterEnemyWalkState * __this));
}
