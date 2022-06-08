#include <interception_macros.h>

namespace app::methods::RaceStopState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (RaceStopState * __this, RaceSystem * raceSystem));
IL2CPP_REGISTER_METHOD(0x0071BC20, void, OnEnter, (RaceStopState * __this));
IL2CPP_REGISTER_METHODINFO(0x0475D140, RaceStopState_OnEnter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0071C190, void, OnPlayerArrivedUpdate, (RaceStopState * __this));
IL2CPP_REGISTER_METHOD(0x0071C670, void, OnPlayerInterruptedUpdate, (RaceStopState * __this));
IL2CPP_REGISTER_METHOD(0x0071C980, void, LogException, (RaceStopState * __this, Exception * ex));
IL2CPP_REGISTER_METHOD(0x0071CA20, void, OnRaceFinished, (RaceStopState * __this));
IL2CPP_REGISTER_METHOD(0x0071D1C0, void, PlayOutcomeTimeline, (RaceStopState * __this));
IL2CPP_REGISTER_METHOD(0x0071D2C0, float, CalculatePreciseFinishTime, (RaceStopState * __this, float time));
IL2CPP_REGISTER_METHOD(0x0071D520, void, CancelRecording, (RaceStopState * __this));
IL2CPP_REGISTER_METHOD(0x0071D610, void, RepositionOriToEndline, (RaceStopState * __this));
IL2CPP_REGISTER_METHOD(0x0071D830, bool, get_IsOutcomeTimelineFinished, (RaceStopState * __this));
IL2CPP_REGISTER_METHOD(0x0071D910, void, UpdateState, (RaceStopState * __this));
IL2CPP_REGISTER_METHOD(0x0071E030, void, UpdateOutcomeVisuals, (RaceStopState * __this));
IL2CPP_REGISTER_METHOD(0x0071E160, void, OnExit, (RaceStopState * __this));
IL2CPP_REGISTER_METHOD(0x0071E290, void, StopRelatedTimelines, (RaceStopState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, (RaceStopState * __this, RaceConfiguration * config));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (RaceStopState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestartRaceRequested, (RaceStopState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CancelRaceRequested, (RaceStopState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, (RaceStopState * __this));
}
