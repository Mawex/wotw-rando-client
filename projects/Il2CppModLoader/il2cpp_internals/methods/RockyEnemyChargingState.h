#include <interception_macros.h>

namespace app::methods::RockyEnemyChargingState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (RockyEnemyChargingState * __this, RockyEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (RockyEnemyChargingState * __this));
IL2CPP_REGISTER_METHOD(0x01360A90, void, OnEnter, (RockyEnemyChargingState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (RockyEnemyChargingState * __this));
}
