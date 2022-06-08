#include <interception_macros.h>

namespace app::methods::TentacleEnemy_StunState {
IL2CPP_REGISTER_METHOD(0x00CFC770, bool, get_IsStun, (TentacleEnemy_StunState * __this));
IL2CPP_REGISTER_METHOD(0x00CFC780, String *, get_Name, (TentacleEnemy_StunState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBegin, (TentacleEnemy_StunState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInterrupt, (TentacleEnemy_StunState * __this));
IL2CPP_REGISTER_METHOD(0x00CFC800, BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (TentacleEnemy_StunState * __this, TickData tick));
IL2CPP_REGISTER_METHOD(0x00CFC890, void, MakeStun, (TentacleEnemy_StunState * __this));
IL2CPP_REGISTER_METHOD(0x00CFC9C0, void, __ctor, (TentacleEnemy_StunState * __this));
}
