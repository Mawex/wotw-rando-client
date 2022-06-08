using namespace app;

namespace app::methods::SeinLightSpearSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinLightSpearSpell * __this));
IL2CPP_REGISTER_METHOD(0x00891A30, void, OnSetReferenceToSein, (SeinLightSpearSpell * __this));
IL2CPP_REGISTER_METHOD(0x00891A60, void, OnDestroy, (SeinLightSpearSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CB2B0, bool, get_HasEnoughEnergy, (SeinLightSpearSpell * __this));
IL2CPP_REGISTER_METHOD(0x005CB2F0, void, SpendEnergy, (SeinLightSpearSpell * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinLightSpearSpell * __this));
IL2CPP_REGISTER_METHOD(0x00891AA0, void, UpdateCharacterState, (SeinLightSpearSpell * __this));
IL2CPP_REGISTER_METHOD(0x00891BF0, void, ShootSpear, (SeinLightSpearSpell * __this));
IL2CPP_REGISTER_METHOD(0x00891F90, void, SpawnSpear, (SeinLightSpearSpell * __this));
IL2CPP_REGISTER_METHOD(0x008925C0, void, __ctor, (SeinLightSpearSpell * __this));
}
