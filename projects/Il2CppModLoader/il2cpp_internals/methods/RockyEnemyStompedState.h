#include <interception_macros.h>

namespace app::methods::RockyEnemyStompedState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (RockyEnemyStompedState * __this, RockyEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (RockyEnemyStompedState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (RockyEnemyStompedState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (RockyEnemyStompedState * __this));
IL2CPP_REGISTER_METHOD(0x013642A0, void, OnStomped, (RockyEnemyStompedState * __this));
}
