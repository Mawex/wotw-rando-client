using namespace app;

namespace app::methods::Moon::Telemetry::GameSessionRecord {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GameSessionRecord * __this));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (GameSessionRecord * __this, EnvironmentInfo * environmentInfo, String__Array * levelsPlayed));
IL2CPP_REGISTER_METHOD(0x002FA280, EnvironmentInfo *, get_EnvironmentInfo, (GameSessionRecord * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String__Array *, get_LevelsPlayed, (GameSessionRecord * __this));
}
