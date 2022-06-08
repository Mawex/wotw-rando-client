#include <interception_macros.h>

namespace app::methods::RammingHitWallState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (RammingHitWallState * __this, RammingEnemy * RammingEnemy));
IL2CPP_REGISTER_METHOD(0x0072D9C0, void, OnEnter, (RammingHitWallState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (RammingHitWallState * __this));
IL2CPP_REGISTER_METHOD(0x0072DCE0, void, UpdateState, (RammingHitWallState * __this));
}
