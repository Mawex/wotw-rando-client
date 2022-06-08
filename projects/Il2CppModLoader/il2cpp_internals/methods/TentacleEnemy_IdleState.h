using namespace app;

namespace app::methods::TentacleEnemy_IdleState {
IL2CPP_REGISTER_METHOD(0x00CF7AE0, String *, get_Name, (TentacleEnemy_IdleState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBegin, (TentacleEnemy_IdleState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInterrupt, (TentacleEnemy_IdleState * __this));
IL2CPP_REGISTER_METHOD(0x00CF7B60, BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (TentacleEnemy_IdleState * __this, TickData tick));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanEvadeSlash, (TentacleEnemy_IdleState * __this));
IL2CPP_REGISTER_METHOD(0x00CF7E70, void, ModifyWiggleSettings, (TentacleEnemy_IdleState * __this, TentacleEnemy_WiggleData * wiggleSettings));
IL2CPP_REGISTER_METHOD(0x00CF7ED0, void, __ctor, (TentacleEnemy_IdleState * __this));
}
