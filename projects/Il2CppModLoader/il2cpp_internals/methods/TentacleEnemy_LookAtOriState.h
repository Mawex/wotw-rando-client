using namespace app;

namespace app::methods::TentacleEnemy_LookAtOriState {
IL2CPP_REGISTER_METHOD(0x00CF7FB0, String *, get_Name, (TentacleEnemy_LookAtOriState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBegin, (TentacleEnemy_LookAtOriState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInterrupt, (TentacleEnemy_LookAtOriState * __this));
IL2CPP_REGISTER_METHOD(0x00CF8030, BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (TentacleEnemy_LookAtOriState * __this, TickData tick));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanEvadeSlash, (TentacleEnemy_LookAtOriState * __this));
IL2CPP_REGISTER_METHOD(0x00CF8250, void, __ctor, (TentacleEnemy_LookAtOriState * __this));
}
