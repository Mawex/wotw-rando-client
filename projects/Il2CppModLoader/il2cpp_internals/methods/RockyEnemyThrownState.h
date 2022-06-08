#include <interception_macros.h>

namespace app::methods::RockyEnemyThrownState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (RockyEnemyThrownState * __this, RockyEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x01364550, void, UpdateState, (RockyEnemyThrownState * __this));
IL2CPP_REGISTER_METHOD(0x01364590, void, OnEnter, (RockyEnemyThrownState * __this));
IL2CPP_REGISTER_METHOD(0x01364690, void, OnExit, (RockyEnemyThrownState * __this));
IL2CPP_REGISTER_METHOD(0x013646C0, void, OnThrow, (RockyEnemyThrownState * __this));
IL2CPP_REGISTER_METHODINFO(0x047893F8, RockyEnemyThrownState_OnThrow__MethodInfo);
}
