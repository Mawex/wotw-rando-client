#include <interception_macros.h>

namespace app::methods::SeinFirewhirlSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinFirewhirlSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADF2D0, void, OnSetReferenceToSein, (SeinFirewhirlSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADF320, bool, get_HasEnoughEnergy, (SeinFirewhirlSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADF360, void, SpendEnergy, (SeinFirewhirlSpell * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinFirewhirlSpell * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatePerforming, (SeinFirewhirlSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADF3A0, void, UpdateCharacterState, (SeinFirewhirlSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADF910, void, UpdateBeamDamageDealing, (SeinFirewhirlSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADFD00, void, UpdateSpawningBeams, (SeinFirewhirlSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AE0360, void, DealDamage, (SeinFirewhirlSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AE0780, bool, PointInsideListOfRect, (SeinFirewhirlSpell * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00AE08B0, void, __ctor, (SeinFirewhirlSpell * __this));
}
