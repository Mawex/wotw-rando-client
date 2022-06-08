#include <interception_macros.h>

namespace app::methods::SpitterEnemyTrappedState {
IL2CPP_REGISTER_METHOD(0x009A1A40, void, __ctor, (SpitterEnemyTrappedState * __this, SpitterEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x009A1A50, void, UpdateState, (SpitterEnemyTrappedState * __this));
IL2CPP_REGISTER_METHOD(0x009A1B60, void, OnEnter, (SpitterEnemyTrappedState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (SpitterEnemyTrappedState * __this));
IL2CPP_REGISTER_METHOD(0x009A1D10, void, DealDamage, (SpitterEnemyTrappedState * __this));
}
