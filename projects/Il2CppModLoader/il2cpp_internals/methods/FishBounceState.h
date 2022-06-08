#include <interception_macros.h>

namespace app::methods::FishBounceState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (FishBounceState * __this, FishEnemy * fish));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (FishBounceState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (FishBounceState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (FishBounceState * __this));
}
