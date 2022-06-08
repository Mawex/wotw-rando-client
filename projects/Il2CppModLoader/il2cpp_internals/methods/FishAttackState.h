using namespace app;

namespace app::methods::FishAttackState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (FishAttackState * __this, FishEnemy * fish));
IL2CPP_REGISTER_METHOD(0x01266950, void, UpdateState, (FishAttackState * __this));
IL2CPP_REGISTER_METHOD(0x01266D90, void, OnEnter, (FishAttackState * __this));
IL2CPP_REGISTER_METHOD(0x01266F50, void, OnExit, (FishAttackState * __this));
}
