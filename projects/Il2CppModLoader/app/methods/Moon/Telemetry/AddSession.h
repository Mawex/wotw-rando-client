#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::AddSession {
    IL2CPP_REGISTER_METHOD(0x00E32460, void, ctor, (app::AddSession * this_ptr, app::GameSessionRecord * game_session))
}
