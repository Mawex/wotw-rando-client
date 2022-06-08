using namespace app;

namespace app::methods::TentacleEnemy_StuckInGroundState {
IL2CPP_REGISTER_METHOD(0x00CFBCF0, bool, get_IsStuck, (TentacleEnemy_StuckInGroundState * __this));
IL2CPP_REGISTER_METHOD(0x00CFBD00, String *, get_Name, (TentacleEnemy_StuckInGroundState * __this));
IL2CPP_REGISTER_METHOD(0x00CFBD80, void, OnBegin, (TentacleEnemy_StuckInGroundState * __this));
IL2CPP_REGISTER_METHOD(0x00CFBEF0, void, OnInterrupt, (TentacleEnemy_StuckInGroundState * __this));
IL2CPP_REGISTER_METHOD(0x00CFBEF0, void, OnExit, (TentacleEnemy_StuckInGroundState * __this));
IL2CPP_REGISTER_METHOD(0x00CFBF50, BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (TentacleEnemy_StuckInGroundState * __this, TickData tick));
IL2CPP_REGISTER_METHOD(0x00CFC560, float, ModifyDamage, (TentacleEnemy_StuckInGroundState * __this, float damage, int32_t jointIndex));
IL2CPP_REGISTER_METHOD(0x00CFC570, void, __ctor, (TentacleEnemy_StuckInGroundState * __this));
}
