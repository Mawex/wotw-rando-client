#include <interception_macros.h>

namespace app::methods::DemoInGameState {
IL2CPP_REGISTER_METHOD(0x00B81060, void, OnEnterState, (DemoInGameState * __this));
IL2CPP_REGISTER_METHOD(0x00B81450, void, Update, (DemoInGameState * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00B81930, void, OnExitState, (DemoInGameState * __this));
IL2CPP_REGISTER_METHOD(0x00627D70, bool, CanTransition, (DemoInGameState * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, IState *, GetNextState, (DemoInGameState * __this));
IL2CPP_REGISTER_METHOD(0x00B81BD0, void, OnDemoEnd, (DemoInGameState * __this));
IL2CPP_REGISTER_METHODINFO(0x04757128, DemoInGameState_OnDemoEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B81D60, void, OnGameReset, (DemoInGameState * __this));
IL2CPP_REGISTER_METHODINFO(0x04710C78, DemoInGameState_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B81EA0, bool, IsIdle, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DemoInGameState * __this));
}
