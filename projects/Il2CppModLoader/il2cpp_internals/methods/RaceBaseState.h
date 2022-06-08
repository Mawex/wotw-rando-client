using namespace app;

namespace app::methods::RaceBaseState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (RaceBaseState * __this, RaceSystem * raceSystem));
IL2CPP_REGISTER_METHOD(0x00E97210, RaceStateMachineContext *, get_Context, (RaceBaseState * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, RaceSystem *, get_RaceSystem, (RaceBaseState * __this));
IL2CPP_REGISTER_METHOD(0x00E97230, float, get_StateTime, (RaceBaseState * __this));
IL2CPP_REGISTER_METHOD(0x00E97290, RaceConfiguration *, get_Configuration, (RaceBaseState * __this));
IL2CPP_REGISTER_METHOD(0x00E972C0, RaceData *, get_RaceData, (RaceBaseState * __this));
IL2CPP_REGISTER_METHOD(0x00E973A0, RaceHandler *, get_RaceHandler, (RaceBaseState * __this));
IL2CPP_REGISTER_METHOD(0x00E97480, ITrialData *, get_Data, (RaceBaseState * __this));
IL2CPP_REGISTER_METHOD(0x00E974C0, ITrialHandler *, get_Handler, (RaceBaseState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (RaceBaseState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (RaceBaseState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (RaceBaseState * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (RaceBaseState * __this));
IL2CPP_REGISTER_METHOD(0x00E97500, String *, get_RaceName, (RaceBaseState * __this));
}
