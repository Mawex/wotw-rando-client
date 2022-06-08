#include <interception_macros.h>

namespace app::methods::RacePrepareState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (RacePrepareState * __this, RaceSystem * raceSystem));
IL2CPP_REGISTER_METHOD(0x00712170, void, OnEnter, (RacePrepareState * __this));
IL2CPP_REGISTER_METHOD(0x00712B60, void, OnExit, (RacePrepareState * __this));
IL2CPP_REGISTER_METHOD(0x00712EB0, void, UpdateState, (RacePrepareState * __this));
IL2CPP_REGISTER_METHOD(0x007134B0, void, PrepareRace, (RacePrepareState * __this));
IL2CPP_REGISTER_METHOD(0x007148C0, IEnumerator *, ShowFlythroughUi, (RacePrepareState * __this));
IL2CPP_REGISTER_METHOD(0x00714A10, void, FadeIn, (RacePrepareState * __this, Action * onComplete));
IL2CPP_REGISTER_METHOD(0x00714B30, void, FlythroughFinished, (RacePrepareState * __this));
IL2CPP_REGISTER_METHODINFO(0x04702A98, RacePrepareState_FlythroughFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00714C40, void, FlythroughSkipCompleted, (RacePrepareState * __this));
IL2CPP_REGISTER_METHODINFO(0x0473CE50, RacePrepareState_FlythroughSkipCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00714F80, void, LockEquipment, (RacePrepareState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, (RacePrepareState * __this, RaceConfiguration * config));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (RacePrepareState * __this));
IL2CPP_REGISTER_METHOD(0x00715190, void, RestartRaceRequested, (RacePrepareState * __this));
IL2CPP_REGISTER_METHOD(0x007151F0, void, CancelRaceRequested, (RacePrepareState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, (RacePrepareState * __this));
}
