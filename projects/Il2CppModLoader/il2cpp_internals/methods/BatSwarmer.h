#include <interception_macros.h>

namespace app::methods::BatSwarmer {
    IL2CPP_REGISTER_METHOD(0x00F96AF0, Vector2, get_Position, (app::BatSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F96C00, void, set_Position, (app::BatSwarmer * this_ptr, app::Vector2 value));
    IL2CPP_REGISTER_METHOD(0x00F96D20, Vector2, get_Velocity, (app::BatSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F96E30, void, set_Velocity, (app::BatSwarmer * this_ptr, app::Vector2 value));
    IL2CPP_REGISTER_METHOD(0x00866EB0, bool, get_IsActive, (app::BatSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F96F60, BatSwarmerSettings*, get_Settings, (app::BatSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Settings, (app::BatSwarmer * this_ptr, app::BatSwarmerSettings* value));
    IL2CPP_REGISTER_METHOD(0x00F97020, BatSwarm*, get_Swarm, (app::BatSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBBC0, BatEnemy*, get_Enemy, (app::BatSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F970E0, void, __ctor, (app::BatSwarmer * this_ptr, app::BatEnemy* bat_enemy));
    IL2CPP_REGISTER_METHOD(0x00F972B0, Vector2, CalculateExtraVelocities, (app::BatSwarmer * this_ptr));
} // namespace app::methods::BatSwarmer
