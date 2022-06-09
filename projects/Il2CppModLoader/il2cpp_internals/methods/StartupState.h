#include <interception_macros.h>

namespace app::methods::StartupState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::StartupState * this_ptr, app::GameController* game_controller));
    IL2CPP_REGISTER_METHOD(0x009B33F0, void, OnEnterState, (app::StartupState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitState, (app::StartupState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009B3690, bool, CanTransition, (app::StartupState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB930, IState*, GetNextState, (app::StartupState * this_ptr));
} // namespace app::methods::StartupState
