#include <interception_macros.h>

namespace app::methods::LaserShooterMinibossPlaceholder {
IL2CPP_REGISTER_METHOD(0x006253D0, GameObject *, get_Prefab, (LaserShooterMinibossPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x006253E0, void, ClearPrefabLinks, (LaserShooterMinibossPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00F1C880, void, Spawn, (LaserShooterMinibossPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsUsingVariations, (LaserShooterMinibossPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00F1CB00, void, OnHealthZero, (LaserShooterMinibossPlaceholder * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHOD(0x00F1CB60, void, CreateCheckpoint, (LaserShooterMinibossPlaceholder * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00F1CCD0, void, __ctor, (LaserShooterMinibossPlaceholder * __this));
}
