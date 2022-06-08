using namespace app;

namespace app::methods::InGameState {
IL2CPP_REGISTER_METHOD(0x00627560, void, OnEnterState, (InGameState * __this));
IL2CPP_REGISTER_METHOD(0x00627990, void, OnExitState, (InGameState * __this));
IL2CPP_REGISTER_METHOD(0x00627C30, void, OnStartMenuRace, (InGameState * __this));
IL2CPP_REGISTER_METHODINFO(0x04766A60, InGameState_OnStartMenuRace__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00627D70, bool, CanTransition, (InGameState * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, IState *, GetNextState, (InGameState * __this));
IL2CPP_REGISTER_METHOD(0x00627D80, void, OnGameReset, (InGameState * __this));
IL2CPP_REGISTER_METHODINFO(0x047474D0, InGameState_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (InGameState * __this));
}
