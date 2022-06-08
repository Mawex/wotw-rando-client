#include <interception_macros.h>

namespace app::methods::RammingBrakingState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (RammingBrakingState * __this, RammingEnemy * RammingEnemy));
IL2CPP_REGISTER_METHOD(0x00728830, void, OnEnter, (RammingBrakingState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (RammingBrakingState * __this));
IL2CPP_REGISTER_METHOD(0x00728A40, void, UpdateState, (RammingBrakingState * __this));
IL2CPP_REGISTER_METHOD(0x00728BF0, bool, HitWallIsAppropriate, (RammingBrakingState * __this));
}
