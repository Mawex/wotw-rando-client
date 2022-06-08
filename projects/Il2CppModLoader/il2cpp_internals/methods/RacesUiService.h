using namespace app;

namespace app::methods::RacesUiService {
IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_LockedByUi, (RacesUiService * __this));
IL2CPP_REGISTER_METHOD(0x00724AF0, bool, get_HidingSeinUI, (RacesUiService * __this));
IL2CPP_REGISTER_METHOD(0x00724B00, void, __ctor, (RacesUiService * __this));
IL2CPP_REGISTER_METHOD(0x00724BC0, void, Reset, (RacesUiService * __this));
IL2CPP_REGISTER_METHOD(0x00724C80, MessageDescriptor, GetStartPedestalBottomHintMessage, (RacesUiService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x00724DE0, void, EnablePedestalActiveHelpUi, (RacesUiService * __this, RaceStateMachineContext * ctx, bool raceBeaten));
IL2CPP_REGISTER_METHOD(0x00725070, void, UpdateStartPedestalBottomHint, (RacesUiService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x00725190, void, DisablePedestalHelpUi, (RacesUiService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x007251A0, void, EnableEndPedestalUi, (RacesUiService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x00725350, void, EnableFlythroughUi, (RacesUiService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x00725190, void, DisableFlythroughUi, (RacesUiService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x00725500, void, EnableRaceFinishedUi, (RacesUiService * __this, RaceStateMachineContext * ctx, float elapsedTime, bool forceExit));
IL2CPP_REGISTER_METHOD(0x00725BF0, void, EnableRaceTimeoutUi, (RacesUiService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x00725E80, void, EnableRaceInterruptedUi, (RacesUiService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x00726130, void, ShowOfflineMessage, (RacesUiService * __this, RaceStateMachineContext * ctx, bool noToken));
IL2CPP_REGISTER_METHOD(0x007262F0, MessageDescriptor, GetRaceLeaveDescriptor, (RacesUiService * __this, MessageProvider * provider, float time));
IL2CPP_REGISTER_METHOD(0x00726560, void, EnableRaceLeaveUi, (RacesUiService * __this, RaceStateMachineContext * ctx, float time));
IL2CPP_REGISTER_METHOD(0x00726820, void, UpdateRaceLeaveUi, (RacesUiService * __this, RaceStateMachineContext * ctx, float time));
IL2CPP_REGISTER_METHOD(0x00725190, void, DisableRaceLeaveUi, (RacesUiService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x00725190, void, DisableTimeoutUi, (RacesUiService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x00725190, void, DisableRaceFinishedUi, (RacesUiService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x00726960, void, DisableTempCommon, (RacesUiService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x00726A40, void, DisposeAllManagedUI, (RacesUiService * __this, RaceStateMachineContext * ctx));
}
