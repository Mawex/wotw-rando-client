#include <interception_macros.h>

namespace app::methods::Moon_Telemetry::GameSessionRecord {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::GameSessionRecord * this_ptr));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor_2, (app::GameSessionRecord * this_ptr, app::EnvironmentInfo * environment_info, app::String__Array * levels_played));
IL2CPP_REGISTER_METHOD(0x002FA280, EnvironmentInfo *, get_EnvironmentInfo, (app::GameSessionRecord * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, String__Array *, get_LevelsPlayed, (app::GameSessionRecord * this_ptr));
}
