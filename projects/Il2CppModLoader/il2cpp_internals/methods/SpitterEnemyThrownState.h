#include <interception_macros.h>

namespace app::methods::SpitterEnemyThrownState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (SpitterEnemyThrownState * __this, SpitterEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (SpitterEnemyThrownState * __this));
IL2CPP_REGISTER_METHOD(0x009A16E0, void, OnEnter, (SpitterEnemyThrownState * __this));
IL2CPP_REGISTER_METHOD(0x009A1730, void, OnExit, (SpitterEnemyThrownState * __this));
IL2CPP_REGISTER_METHOD(0x009A1760, void, OnThrow, (SpitterEnemyThrownState * __this));
IL2CPP_REGISTER_METHODINFO(0x04729960, SpitterEnemyThrownState_OnThrow__MethodInfo);
}
