using namespace app;

namespace app::methods::SpitterEnemyStunnedState {
IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_StunnedTimeLeft, (SpitterEnemyStunnedState * __this));
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (SpitterEnemyStunnedState * __this, SpitterEnemy * Enemy2D));
IL2CPP_REGISTER_METHOD(0x009A1400, void, UpdateState, (SpitterEnemyStunnedState * __this));
IL2CPP_REGISTER_METHOD(0x009A1500, void, OnEnter, (SpitterEnemyStunnedState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (SpitterEnemyStunnedState * __this));
}
