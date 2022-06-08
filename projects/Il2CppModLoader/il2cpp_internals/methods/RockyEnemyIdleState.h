#include <interception_macros.h>

namespace app::methods::RockyEnemyIdleState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (RockyEnemyIdleState * __this, RockyEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x01360950, void, UpdateState, (RockyEnemyIdleState * __this));
IL2CPP_REGISTER_METHOD(0x01361190, void, OnEnter, (RockyEnemyIdleState * __this));
IL2CPP_REGISTER_METHOD(0x01360A50, void, OnExit, (RockyEnemyIdleState * __this));
}
