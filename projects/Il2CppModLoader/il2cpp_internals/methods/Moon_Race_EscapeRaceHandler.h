using namespace app;

namespace app::methods::Moon::Race::EscapeRaceHandler {
IL2CPP_REGISTER_METHOD(0x00C419B0, RaceStateMachineContext *, get_Context, (EscapeRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00C41A60, void, Awake, (EscapeRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00C41C20, void, OnDestroy, (EscapeRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00C41DE0, void, OnEnterEndTrigger, (EscapeRaceHandler * __this, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x04765CA0, EscapeRaceHandler_OnEnterEndTrigger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C41FE0, void, OnStart, (EscapeRaceHandler * __this, bool spectate));
IL2CPP_REGISTER_METHOD(0x00C420F0, void, OnFinished, (EscapeRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00C421C0, void, PlaceOriAtStart, (EscapeRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGhostFinished, (EscapeRaceHandler * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlayerFinished, (EscapeRaceHandler * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00C423D0, void, OnRaceFinished, (EscapeRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00C424E0, void, OnRaceFailed, (EscapeRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00C425F0, void, SetRaceInProgressState, (EscapeRaceHandler * __this, bool inProgress));
IL2CPP_REGISTER_METHOD(0x00C42780, bool, IsInsideRaceArea, (EscapeRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00C42880, void, StartMenuRace, (EscapeRaceHandler * __this, Action * onStart));
IL2CPP_REGISTER_METHOD(0x00C42970, IEnumerator *, StartMenuRaceNextFrame, (EscapeRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00C42AC0, void, OnEnable, (EscapeRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (EscapeRaceHandler * __this));
}
