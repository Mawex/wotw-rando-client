using namespace app;

namespace app::methods::SeinStandardSpiritFlameAbility {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinStandardSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A7C0F0, SpiritFlame *, get_CurrentSpiritFlame, (SeinStandardSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A7C180, int32_t, get_OriLevel, (SeinStandardSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A7C1B0, bool, get_LockShootingSpiritFlame, (SeinStandardSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A7C200, int32_t, get_MaxTargets, (SeinStandardSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A7C230, void, UpdateCharacterState, (SeinStandardSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A7C960, SpiritFlame *, GetStandardSpiritFlame, (SeinStandardSpiritFlameAbility * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x005E2D20, List_1_ISpiritFlameAttackable_ *, get_ClosestAttackables, (SeinStandardSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A7C9C0, void, OnSetReferenceToSein, (SeinStandardSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A7CAA0, void, UpdateTargetting, (SeinStandardSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A7CB90, void, __ctor, (SeinStandardSpiritFlameAbility * __this));
}
