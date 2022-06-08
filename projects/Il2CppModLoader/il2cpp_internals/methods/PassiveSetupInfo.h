using namespace app;

namespace app::methods::PassiveSetupInfo {
IL2CPP_REGISTER_METHOD(0x004465A0, int32_t, get_CurrentStateGUID, (PassiveSetupInfo * __this));
IL2CPP_REGISTER_METHOD(0x004465C0, SetupState *, get_State0, (PassiveSetupInfo * __this));
IL2CPP_REGISTER_METHOD(0x004465F0, SetupState *, get_State1, (PassiveSetupInfo * __this));
IL2CPP_REGISTER_METHOD(0x00446620, SetupState *, GetState, (PassiveSetupInfo * __this, PassiveSetupInfo_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00446670, MoonTimeline *, GetTransition, (PassiveSetupInfo * __this, PassiveSetupInfo_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00446690, void, SetState, (PassiveSetupInfo * __this, PassiveSetupInfo_State__Enum desiredState));
IL2CPP_REGISTER_METHOD(0x00446700, void, DoTransition, (PassiveSetupInfo * __this, PassiveSetupInfo_State__Enum desiredState));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (PassiveSetupInfo * __this));
}
