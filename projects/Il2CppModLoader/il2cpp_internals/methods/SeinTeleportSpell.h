#include <interception_macros.h>

namespace app::methods::SeinTeleportSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinTeleportSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A9C4D0, AbilityType__Enum, get_AbilityType, (SeinTeleportSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A9C4E0, bool, get_HasLiveBeacon, (SeinTeleportSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A9C610, void, OnSetReferenceToSein, (SeinTeleportSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A9C6F0, bool, get_CanAim, (SeinTeleportSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A9C7F0, void, OnGrenadeSpawn, (SeinTeleportSpell * __this, IGreanade * grenade, Vector2 velocity, bool bashable, float damage, bool canFracture, bool isFracturedPiece));
IL2CPP_REGISTER_METHOD(0x00A9CA50, void, SpawnQuickGrenade, (SeinTeleportSpell * __this, Vector2 velocity, bool bashable));
IL2CPP_REGISTER_METHOD(0x00A9CAE0, void, SpawnAimingGrenade, (SeinTeleportSpell * __this, Vector2 velocity, bool bashable));
IL2CPP_REGISTER_METHOD(0x00A9CB80, void, UpdateNormal, (SeinTeleportSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A9D400, void, UpdateAiming, (SeinTeleportSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A9DBB0, void, TeleportOri, (SeinTeleportSpell * __this, Vector2 newPosition));
IL2CPP_REGISTER_METHOD(0x00A7EB30, void, __ctor, (SeinTeleportSpell * __this));
}
