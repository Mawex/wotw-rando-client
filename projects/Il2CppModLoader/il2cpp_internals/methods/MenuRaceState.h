#include <interception_macros.h>

namespace app::methods::MenuRaceState {
IL2CPP_REGISTER_METHOD(0x009D9F20, void, OnEnterState, (MenuRaceState * __this));
IL2CPP_REGISTER_METHOD(0x009DA210, void, OnExitState, (MenuRaceState * __this));
IL2CPP_REGISTER_METHOD(0x00627D70, bool, CanTransition, (MenuRaceState * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, IState *, GetNextState, (MenuRaceState * __this));
IL2CPP_REGISTER_METHOD(0x009DA3A0, void, OnGameReset, (MenuRaceState * __this));
IL2CPP_REGISTER_METHODINFO(0x04704318, MenuRaceState_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MenuRaceState * __this));
}
