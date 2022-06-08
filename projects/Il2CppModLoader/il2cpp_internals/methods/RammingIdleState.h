#include <interception_macros.h>

namespace app::methods::RammingIdleState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (RammingIdleState * __this, RammingEnemy * GroundEnemy));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (RammingIdleState * __this));
IL2CPP_REGISTER_METHOD(0x0072DE70, void, OnEnter, (RammingIdleState * __this));
IL2CPP_REGISTER_METHOD(0x0072DF60, void, OnExit, (RammingIdleState * __this));
}
