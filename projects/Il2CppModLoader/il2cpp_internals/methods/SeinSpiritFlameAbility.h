#include <interception_macros.h>

namespace app::methods::SeinSpiritFlameAbility {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x005E2B40, bool, get_LockShootingSpiritFlame, (SeinSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x005E2BD0, void, AddLock, (SeinSpiritFlameAbility * __this, String * lockName));
IL2CPP_REGISTER_METHOD(0x005E2C80, void, RemoveLock, (SeinSpiritFlameAbility * __this, String * lockName));
IL2CPP_REGISTER_METHOD(0x005E2D20, List_1_ISpiritFlameAttackable_ *, get_ClosestAttackables, (SeinSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x005E2D70, void, OnSetReferenceToSein, (SeinSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x005D0850, void, Start, (SeinSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x005E2E50, void, UpdateCharacterState, (SeinSpiritFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x005E2EB0, void, ThrowSpiritFlames, (SeinSpiritFlameAbility * __this, SpiritFlame * spiritFlame));
IL2CPP_REGISTER_METHOD(0x005E39A0, void, __ctor, (SeinSpiritFlameAbility * __this));
}
