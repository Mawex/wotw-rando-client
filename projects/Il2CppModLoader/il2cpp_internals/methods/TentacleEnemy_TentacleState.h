using namespace app;

namespace app::methods::TentacleEnemy_TentacleState {
IL2CPP_REGISTER_METHOD(0x00CFCB30, BehaviourTreeStatus__Enum, OnUpdate, (TentacleEnemy_TentacleState * __this, TickData tick));
IL2CPP_REGISTER_METHOD(0x00CFCC00, float, ModifyDamage, (TentacleEnemy_TentacleState * __this, float damage, int32_t jointIndex));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanEvadeSlash, (TentacleEnemy_TentacleState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyWiggleSettings, (TentacleEnemy_TentacleState * __this, TentacleEnemy_WiggleData * wiggleSettings));
IL2CPP_REGISTER_METHOD(0x00CFCCD0, void, __ctor, (TentacleEnemy_TentacleState * __this));
}
