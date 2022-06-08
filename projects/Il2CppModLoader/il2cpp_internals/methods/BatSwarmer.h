using namespace app;

namespace app::methods::BatSwarmer {
IL2CPP_REGISTER_METHOD(0x00F96AF0, Vector2, get_Position, (BatSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x00F96C00, void, set_Position, (BatSwarmer * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00F96D20, Vector2, get_Velocity, (BatSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x00F96E30, void, set_Velocity, (BatSwarmer * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00866EB0, bool, get_IsActive, (BatSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x00F96F60, BatSwarmerSettings *, get_Settings, (BatSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Settings, (BatSwarmer * __this, BatSwarmerSettings * value));
IL2CPP_REGISTER_METHOD(0x00F97020, BatSwarm *, get_Swarm, (BatSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, BatEnemy *, get_Enemy, (BatSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x00F970E0, void, __ctor, (BatSwarmer * __this, BatEnemy * batEnemy));
IL2CPP_REGISTER_METHOD(0x00F972B0, Vector2, CalculateExtraVelocities, (BatSwarmer * __this));
}
