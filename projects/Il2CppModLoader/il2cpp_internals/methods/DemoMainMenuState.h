using namespace app;

namespace app::methods::DemoMainMenuState {
IL2CPP_REGISTER_METHOD(0x00B822F0, void, OnEnterState, (DemoMainMenuState * __this));
IL2CPP_REGISTER_METHOD(0x00B825B0, void, OnQuit, (DemoMainMenuState * __this));
IL2CPP_REGISTER_METHODINFO(0x04791DF8, DemoMainMenuState_OnQuit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B826F0, void, OnPlay, (DemoMainMenuState * __this));
IL2CPP_REGISTER_METHODINFO(0x0475D380, DemoMainMenuState_OnPlay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (DemoMainMenuState * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00B82830, void, OnExitState, (DemoMainMenuState * __this));
IL2CPP_REGISTER_METHOD(0x00627D70, bool, CanTransition, (DemoMainMenuState * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, IState *, GetNextState, (DemoMainMenuState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DemoMainMenuState * __this));
}
