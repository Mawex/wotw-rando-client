using namespace app;

namespace app::methods::SeinHomingMissileSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6D240, Vector3, get_SeinPosition, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x010090A0, void, OnSetReferenceToSein, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, KeepMissileAnimationPlaying, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x010090D0, void, Start, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x01009190, void, OnDestroy, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x01009280, void, ChangeState, (SeinHomingMissileSpell * __this, SeinHomingMissileSpell_State__Enum state));
IL2CPP_REGISTER_METHOD(0x010092F0, bool, get_IsStatePerforming, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x01009300, void, UpdateCharacterState, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x010093B0, void, UpdateIdle, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x01009550, void, StartTagging, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x010095A0, void, UpdateTagging, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x01009C60, void, UpdateAttacking, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A73300, bool, CanAttack, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x0100A080, bool, SetSingleShotTarget, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x0100A3F0, void, Tag, (SeinHomingMissileSpell * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x0100A5C0, void, Untag, (SeinHomingMissileSpell * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x0100A730, void, UntagAll, (SeinHomingMissileSpell * __this));
IL2CPP_REGISTER_METHOD(0x0100A960, void, Serialize, (SeinHomingMissileSpell * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0100A9A0, void, __ctor, (SeinHomingMissileSpell * __this));
}
