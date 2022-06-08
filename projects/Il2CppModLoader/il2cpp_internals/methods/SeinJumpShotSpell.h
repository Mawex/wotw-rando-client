using namespace app;

namespace app::methods::SeinJumpShotSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinJumpShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x0101E120, void, OnSetReferenceToSein, (SeinJumpShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x0101E2D0, void, PerformJump, (SeinJumpShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x0101E650, void, UpdateFlyingTowards, (SeinJumpShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x0101EBA0, void, OnDestroy, (SeinJumpShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x0101ED60, void, UpdateCharacterState, (SeinJumpShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x0101EED0, void, ChangeState, (SeinJumpShotSpell * __this, SeinJumpShotSpell_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x0101F780, void, Deactivate, (SeinJumpShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x0101F930, void, UpdateInactive, (SeinJumpShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x0101FC90, void, UpdateActive, (SeinJumpShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x0101FCB0, void, UpdateShieldActive, (SeinJumpShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x0101FFF0, void, OnDoubleJump, (SeinJumpShotSpell * __this, float strength));
IL2CPP_REGISTER_METHODINFO(0x0478D630, SeinJumpShotSpell_OnDoubleJump__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010200A0, float, dot, (SeinJumpShotSpell * __this, Vector3 v1, Vector3 v2));
IL2CPP_REGISTER_METHOD(0x010200F0, Vector3, reflect, (SeinJumpShotSpell * __this, Vector3 v, Vector3 axis));
IL2CPP_REGISTER_METHOD(0x01020260, void, OnShieldCollision, (SeinJumpShotSpell * __this, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x047752A8, SeinJumpShotSpell_OnShieldCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005D06C0, CharacterPlatformMovement *, get_PlatformMovement, (SeinJumpShotSpell * __this));
IL2CPP_REGISTER_METHOD(0x01020A10, void, __ctor, (SeinJumpShotSpell * __this));
}
