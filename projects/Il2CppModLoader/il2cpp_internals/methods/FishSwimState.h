#include <interception_macros.h>

namespace app::methods::FishSwimState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (FishSwimState * __this, FishEnemy * fish));
IL2CPP_REGISTER_METHOD(0x0126C9A0, void, UpdateState, (FishSwimState * __this));
IL2CPP_REGISTER_METHOD(0x0126D110, void, OnEnter, (FishSwimState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (FishSwimState * __this));
}
