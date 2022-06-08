using namespace app;

namespace app::methods::FishIdleState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (FishIdleState * __this, FishEnemy * fish));
IL2CPP_REGISTER_METHOD(0x0126BF40, Vector3, get_WanderTargetPosition, (FishIdleState * __this));
IL2CPP_REGISTER_METHOD(0x0126C0C0, void, UpdateState, (FishIdleState * __this));
IL2CPP_REGISTER_METHOD(0x0126C950, void, OnEnter, (FishIdleState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (FishIdleState * __this));
}
