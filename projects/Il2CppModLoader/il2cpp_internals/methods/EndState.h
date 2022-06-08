#include <interception_macros.h>

namespace app::methods::EndState {
IL2CPP_REGISTER_METHOD(0x00BFDB90, void, OnEnterState, (EndState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitState, (EndState * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanTransition, (EndState * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, IState *, GetNextState, (EndState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EndState * __this));
}
