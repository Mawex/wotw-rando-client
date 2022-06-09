#include <interception_macros.h>

namespace app::methods::RaceBaseState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::RaceBaseState * this_ptr, app::RaceSystem* race_system));
    IL2CPP_REGISTER_METHOD(0x00E97210, RaceStateMachineContext*, get_Context, (app::RaceBaseState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA280, RaceSystem*, get_RaceSystem, (app::RaceBaseState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E97230, float, get_StateTime, (app::RaceBaseState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E97290, RaceConfiguration*, get_Configuration, (app::RaceBaseState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E972C0, RaceData*, get_RaceData, (app::RaceBaseState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E973A0, RaceHandler*, get_RaceHandler, (app::RaceBaseState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E97480, ITrialData*, get_Data, (app::RaceBaseState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E974C0, ITrialHandler*, get_Handler, (app::RaceBaseState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::RaceBaseState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::RaceBaseState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RaceBaseState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::RaceBaseState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E97500, String*, get_RaceName, (app::RaceBaseState * this_ptr));
} // namespace app::methods::RaceBaseState
