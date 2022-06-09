#include <interception_macros.h>

namespace app::methods::EndState {
    IL2CPP_REGISTER_METHOD(0x00BFDB90, void, OnEnterState, (app::EndState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitState, (app::EndState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanTransition, (app::EndState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, IState*, GetNextState, (app::EndState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::EndState * this_ptr));
} // namespace app::methods::EndState
