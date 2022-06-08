#include <interception_macros.h>

namespace app::methods::MothSwarmer {
IL2CPP_REGISTER_METHOD(0x00866A40, Vector2, get_Position, (MothSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x00866B50, void, set_Position, (MothSwarmer * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00866C70, Vector2, get_Velocity, (MothSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x00866D80, void, set_Velocity, (MothSwarmer * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00866EB0, bool, get_IsActive, (MothSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, UberSwarmerSettings *, get_Settings, (MothSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Settings, (MothSwarmer * __this, UberSwarmerSettings * value));
IL2CPP_REGISTER_METHOD(0x00866F70, MothSwarm *, get_Swarm, (MothSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, MothEnemy *, get_Enemy, (MothSwarmer * __this));
IL2CPP_REGISTER_METHOD(0x00867030, void, __ctor, (MothSwarmer * __this, MothEnemy * mothEnemy));
IL2CPP_REGISTER_METHOD(0x008671F0, Vector2, CalculateExtraVelocities, (MothSwarmer * __this));
}
