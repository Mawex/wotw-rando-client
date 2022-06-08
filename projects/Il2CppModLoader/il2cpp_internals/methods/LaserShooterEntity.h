#include <interception_macros.h>

namespace app::methods::LaserShooterEntity {
IL2CPP_REGISTER_METHOD(0x00F13770, bool, LaserEnabled, (LaserShooterEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F13780, bool, ProjectilesEnabled, (LaserShooterEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFlyingEnemy, (LaserShooterEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F13790, void, OnAwake, (LaserShooterEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F137F0, void, OnDied, (LaserShooterEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x00F13AF0, void, __ctor, (LaserShooterEntity * __this));
}
