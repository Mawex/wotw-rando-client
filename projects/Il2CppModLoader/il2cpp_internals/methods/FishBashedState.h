#include <interception_macros.h>

namespace app::methods::FishBashedState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (FishBashedState * __this, FishEnemy * fish));
IL2CPP_REGISTER_METHOD(0x01267060, void, UpdateState, (FishBashedState * __this));
IL2CPP_REGISTER_METHOD(0x01267270, void, OnEnter, (FishBashedState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (FishBashedState * __this));
}
