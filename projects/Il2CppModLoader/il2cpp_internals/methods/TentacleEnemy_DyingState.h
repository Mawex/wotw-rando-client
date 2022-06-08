#include <interception_macros.h>

namespace app::methods::TentacleEnemy_DyingState {
IL2CPP_REGISTER_METHOD(0x00CF6C40, String *, get_Name, (TentacleEnemy_DyingState * __this));
IL2CPP_REGISTER_METHOD(0x00CF6CC0, void, OnBegin, (TentacleEnemy_DyingState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInterrupt, (TentacleEnemy_DyingState * __this));
IL2CPP_REGISTER_METHOD(0x00CF6CD0, BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (TentacleEnemy_DyingState * __this, TickData tick));
IL2CPP_REGISTER_METHOD(0x00CF6DF0, void, __ctor, (TentacleEnemy_DyingState * __this));
}
