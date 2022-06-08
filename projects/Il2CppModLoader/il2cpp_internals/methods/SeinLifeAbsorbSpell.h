using namespace app;

namespace app::methods::SeinLifeAbsorbSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinLifeAbsorbSpell * __this));
IL2CPP_REGISTER_METHOD(0x00890560, void, BeginCasting, (SeinLifeAbsorbSpell * __this));
IL2CPP_REGISTER_METHOD(0x008905C0, void, EndCasting, (SeinLifeAbsorbSpell * __this));
IL2CPP_REGISTER_METHOD(0x00890620, SeinLifeAbsorbArm *, ClosestFreeArm, (SeinLifeAbsorbSpell * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00890840, bool, AttackableIsTargetOfAnyArm, (SeinLifeAbsorbSpell * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x00890930, void, OnSetReferenceToSein, (SeinLifeAbsorbSpell * __this));
IL2CPP_REGISTER_METHOD(0x00890970, void, OnDestroy, (SeinLifeAbsorbSpell * __this));
IL2CPP_REGISTER_METHOD(0x008909B0, void, Start, (SeinLifeAbsorbSpell * __this));
IL2CPP_REGISTER_METHOD(0x008909B0, void, CreateArms, (SeinLifeAbsorbSpell * __this));
IL2CPP_REGISTER_METHOD(0x00890B20, bool, IsEnemy, (SeinLifeAbsorbSpell * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x00890C90, void, UpdateNotCasting, (SeinLifeAbsorbSpell * __this));
IL2CPP_REGISTER_METHOD(0x00890D30, void, UpdateCasting, (SeinLifeAbsorbSpell * __this));
IL2CPP_REGISTER_METHOD(0x008916B0, void, ReleaseAllArms, (SeinLifeAbsorbSpell * __this));
IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_IsStatePerforming, (SeinLifeAbsorbSpell * __this));
IL2CPP_REGISTER_METHOD(0x008917F0, void, UpdateCharacterState, (SeinLifeAbsorbSpell * __this));
IL2CPP_REGISTER_METHOD(0x008918A0, void, __ctor, (SeinLifeAbsorbSpell * __this));
}
