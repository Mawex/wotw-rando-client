#pragma once
#include <interception_macros.h>

namespace app::methods::RaceGetReadyState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::RaceGetReadyState * this_ptr, app::RaceSystem * race_system))
    IL2CPP_REGISTER_METHOD(0x00E98DA0, void, OnEnter, (app::RaceGetReadyState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E98ED0, void, UpdateState, (app::RaceGetReadyState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E99030, void, UpdateRegular, (app::RaceGetReadyState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, (app::RaceGetReadyState * this_ptr, app::RaceConfiguration * config))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (app::RaceGetReadyState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestartRaceRequested, (app::RaceGetReadyState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CancelRaceRequested, (app::RaceGetReadyState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00715190, void, SkipRequested, (app::RaceGetReadyState * this_ptr))
}
