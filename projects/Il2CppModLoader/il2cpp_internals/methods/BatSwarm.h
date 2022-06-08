#include <interception_macros.h>

namespace app::methods::BatSwarm {
IL2CPP_REGISTER_METHOD(0x00F943E0, Vector2, get_MainPOI, (BatSwarm * __this));
IL2CPP_REGISTER_METHOD(0x00F945A0, Vector2, get_Position, (BatSwarm * __this));
IL2CPP_REGISTER_METHOD(0x00F94700, void, set_Position, (BatSwarm * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_NavigationManagerActive, (BatSwarm * __this));
IL2CPP_REGISTER_METHOD(0x00F94880, Vector2, get_PathPOI, (BatSwarm * __this));
IL2CPP_REGISTER_METHOD(0x00F948A0, void, Awake, (BatSwarm * __this));
IL2CPP_REGISTER_METHOD(0x00F94A20, void, OnValidate, (BatSwarm * __this));
IL2CPP_REGISTER_METHOD(0x00F94AD0, void, InitFromPlaceholder, (BatSwarm * __this, BatSwarmPlaceholder_BatSwarmPlaceholderSettings * settings));
IL2CPP_REGISTER_METHOD(0x00F94BE0, void, FixedUpdate, (BatSwarm * __this));
IL2CPP_REGISTER_METHOD(0x00F94DC0, bool, ShouldUpdatePath, (BatSwarm * __this));
IL2CPP_REGISTER_METHOD(0x00F94ED0, void, UpdateSpawning, (BatSwarm * __this));
IL2CPP_REGISTER_METHODINFO(0x04798240, BatSwarm_UpdateSpawning__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F95570, Vector2, get_AvoidanceSpot, (BatSwarm * __this));
IL2CPP_REGISTER_METHOD(0x00F95630, void, set_AvoidanceSpot, (BatSwarm * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x003FDD40, float, get_AvoidanceSpotWeight, (BatSwarm * __this));
IL2CPP_REGISTER_METHOD(0x003FDD50, void, set_AvoidanceSpotWeight, (BatSwarm * __this, float value));
IL2CPP_REGISTER_METHOD(0x00F956F0, void, OnSwarmerDeath, (BatSwarm * __this, BatEnemy * bat, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00F95B90, void, OnSwarmerStickyMineStuck, (BatSwarm * __this, BatEnemy * bat));
IL2CPP_REGISTER_METHOD(0x00F95EB0, void, OnDrawGizmos, (BatSwarm * __this));
IL2CPP_REGISTER_METHOD(0x00F96070, void, __ctor, (BatSwarm * __this));
}
