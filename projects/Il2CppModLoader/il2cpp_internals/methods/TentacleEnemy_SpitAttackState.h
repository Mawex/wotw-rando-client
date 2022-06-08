#include <interception_macros.h>

namespace app::methods::TentacleEnemy_SpitAttackState {
IL2CPP_REGISTER_METHOD(0x00CFA580, String *, get_Name, (TentacleEnemy_SpitAttackState * __this));
IL2CPP_REGISTER_METHOD(0x00CFA600, void, OnBegin, (TentacleEnemy_SpitAttackState * __this));
IL2CPP_REGISTER_METHOD(0x00CFA7A0, void, OnInterrupt, (TentacleEnemy_SpitAttackState * __this));
IL2CPP_REGISTER_METHOD(0x00CFA7B0, BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (TentacleEnemy_SpitAttackState * __this, TickData tick));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanEvadeSlash, (TentacleEnemy_SpitAttackState * __this));
IL2CPP_REGISTER_METHOD(0x00CFAD80, void, OnExit, (TentacleEnemy_SpitAttackState * __this));
IL2CPP_REGISTER_METHOD(0x00CFADF0, bool, UpdateSpawner, (TentacleEnemy_SpitAttackState * __this));
IL2CPP_REGISTER_METHOD(0x00CFB2C0, void, __ctor, (TentacleEnemy_SpitAttackState * __this));
}
