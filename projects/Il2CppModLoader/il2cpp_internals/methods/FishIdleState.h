#include <interception_macros.h>

namespace app::methods::FishIdleState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::FishIdleState * this_ptr, app::FishEnemy* fish));
    IL2CPP_REGISTER_METHOD(0x0126BF40, Vector3, get_WanderTargetPosition, (app::FishIdleState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126C0C0, void, UpdateState, (app::FishIdleState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126C950, void, OnEnter, (app::FishIdleState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::FishIdleState * this_ptr));
} // namespace app::methods::FishIdleState
