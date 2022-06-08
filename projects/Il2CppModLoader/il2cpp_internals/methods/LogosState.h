using namespace app;

namespace app::methods::LogosState {
IL2CPP_REGISTER_METHOD(0x009ECA10, void, OnEnterState, (LogosState * __this));
IL2CPP_REGISTER_METHOD(0x009ECBB0, void, OnLogosFinished, (LogosState * __this));
IL2CPP_REGISTER_METHODINFO(0x04775FE8, LogosState_OnLogosFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009ECC60, void, OnExitState, (LogosState * __this));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, CanTransition, (LogosState * __this));
IL2CPP_REGISTER_METHOD(0x009ECDF0, IState *, GetNextState, (LogosState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LogosState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
