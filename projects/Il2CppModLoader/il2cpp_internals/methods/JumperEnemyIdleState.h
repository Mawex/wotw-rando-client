#include <interception_macros.h>

namespace app::methods::JumperEnemyIdleState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (JumperEnemyIdleState * __this, JumperEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x00E58EB0, void, UpdateState, (JumperEnemyIdleState * __this));
IL2CPP_REGISTER_METHOD(0x00E58F20, void, OnEnter, (JumperEnemyIdleState * __this));
IL2CPP_REGISTER_METHOD(0x00E58FC0, void, OnExit, (JumperEnemyIdleState * __this));
}
