#include <interception_macros.h>

namespace app::methods::SeinPowerslideSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005C9560, void, OnSetReferenceToSein, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005C95B0, void, OnDestroy, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005C9600, void, Start, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005C9730, void, UpdateCharacterState, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005C9A70, void, DealFireTrailDamage, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005C9E80, bool, PointInsideFire, (SeinPowerslideSpell * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x005CA030, void, UpdateNormalState, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CA190, void, DebugDrawFireTrail, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CA230, bool, UpdateFirePoint, (SeinPowerslideSpell * __this, SeinPowerslideSpell_FireTrailPoint * fire));
IL2CPP_REGISTER_METHODINFO(0x0470CE50, SeinPowerslideSpell_UpdateFirePoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005CA480, void, UpdateFireTrail, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CA600, void, SpawnFire, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CAD40, void, UpdatePowerslidingState, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CB1A0, void, StopPowersliding, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CB2B0, bool, HasEnoughEnergy, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CB2F0, void, SpendEnergy, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CB330, void, ReturnEnergy, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CB370, void, ShowNotEnoughEnergy, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CB580, bool, IsAgainstWall, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CB730, bool, CanPerformPowerslide, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CB7B0, bool, KeepAnimationPlaying, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E7C0, SeinPowerslideSpell_KeepAnimationPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005CB850, void, PerformPowerslide, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CBC20, void, ChangeState, (SeinPowerslideSpell * __this, SeinPowerslideSpell_State__Enum state));
IL2CPP_REGISTER_METHOD(0x005CBD10, void, KnockNearbyEnemies, (SeinPowerslideSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CC320, void, __ctor, (SeinPowerslideSpell * __this));
}
