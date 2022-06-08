using namespace app;

namespace app::methods::FishFlopState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (FishFlopState * __this, FishEnemy * fish));
IL2CPP_REGISTER_METHOD(0x0126BD70, void, UpdateState, (FishFlopState * __this));
IL2CPP_REGISTER_METHOD(0x0126BE00, void, OnEnter, (FishFlopState * __this));
IL2CPP_REGISTER_METHOD(0x0126BEA0, void, OnExit, (FishFlopState * __this));
}
