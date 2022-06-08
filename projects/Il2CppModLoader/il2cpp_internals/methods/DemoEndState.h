using namespace app;

namespace app::methods::DemoEndState {
IL2CPP_REGISTER_METHOD(0x00B80BD0, void, OnEnterState, (DemoEndState * __this));
IL2CPP_REGISTER_METHOD(0x00B80D80, void, OnGameReset, (DemoEndState * __this));
IL2CPP_REGISTER_METHODINFO(0x0470AD40, DemoEndState_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B80D90, void, OnExitState, (DemoEndState * __this));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, CanTransition, (DemoEndState * __this));
IL2CPP_REGISTER_METHOD(0x00B80F20, IState *, GetNextState, (DemoEndState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DemoEndState * __this));
}
