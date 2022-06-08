#include <interception_macros.h>

namespace app::methods::StartupState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (StartupState * __this, GameController * gameController));
IL2CPP_REGISTER_METHOD(0x009B33F0, void, OnEnterState, (StartupState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitState, (StartupState * __this));
IL2CPP_REGISTER_METHOD(0x009B3690, bool, CanTransition, (StartupState * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, IState *, GetNextState, (StartupState * __this));
}
