#include <interception_macros.h>

namespace app::methods::GameStateMachine {
IL2CPP_REGISTER_METHOD(0x00403F70, GameStateMachine *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x002FC6D0, GameStateMachine_State__Enum, get_CurrentState, (GameStateMachine * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_CurrentState, (GameStateMachine * __this, GameStateMachine_State__Enum value));
IL2CPP_REGISTER_METHOD(0x004040D0, bool, get_IsGame, ());
IL2CPP_REGISTER_METHOD(0x00404110, bool, IsInExtendedTitleScreen, (GameStateMachine * __this));
IL2CPP_REGISTER_METHOD(0x002FC780, void, SetToLogos, (GameStateMachine * __this));
IL2CPP_REGISTER_METHOD(0x00404170, void, SetToStartScreen, (GameStateMachine * __this));
IL2CPP_REGISTER_METHOD(0x00404250, void, SetToTitleScreen, (GameStateMachine * __this));
IL2CPP_REGISTER_METHOD(0x00404330, void, SetToGame, (GameStateMachine * __this));
IL2CPP_REGISTER_METHOD(0x00404490, void, SetToWatchCutscene, (GameStateMachine * __this));
IL2CPP_REGISTER_METHOD(0x00404580, void, SetToTrialEnd, (GameStateMachine * __this));
IL2CPP_REGISTER_METHOD(0x00404590, void, SetToPrologue, (GameStateMachine * __this));
IL2CPP_REGISTER_METHOD(0x004046B0, void, SetToMenuRace, (GameStateMachine * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GameStateMachine * __this));
}
