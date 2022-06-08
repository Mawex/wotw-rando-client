using namespace app;

namespace app::methods::SeinLockOnSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinLockOnSpell * __this));
IL2CPP_REGISTER_METHOD(0x00892870, void, ChangeState, (SeinLockOnSpell * __this, SeinLockOnSpell_State__Enum state));
IL2CPP_REGISTER_METHOD(0x008928B0, void, OnSetReferenceToSein, (SeinLockOnSpell * __this));
IL2CPP_REGISTER_METHOD(0x008928E0, void, OnDestroy, (SeinLockOnSpell * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (SeinLockOnSpell * __this));
IL2CPP_REGISTER_METHOD(0x008929C0, bool, get_IsStatePerforming, (SeinLockOnSpell * __this));
IL2CPP_REGISTER_METHOD(0x008929D0, void, UpdateCharacterState, (SeinLockOnSpell * __this));
IL2CPP_REGISTER_METHOD(0x00892A00, void, BeginFiring, (SeinLockOnSpell * __this));
IL2CPP_REGISTER_METHOD(0x008930C0, void, OnLockOnFromGroundAnimationEnd, (SeinLockOnSpell * __this));
IL2CPP_REGISTER_METHODINFO(0x047276D8, SeinLockOnSpell_OnLockOnFromGroundAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008933F0, void, OnLockOnFromAirAnimationEnd, (SeinLockOnSpell * __this));
IL2CPP_REGISTER_METHODINFO(0x047705F8, SeinLockOnSpell_OnLockOnFromAirAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishFiring, (SeinLockOnSpell * __this));
IL2CPP_REGISTER_METHOD(0x00893720, void, UpdateFiring, (SeinLockOnSpell * __this));
IL2CPP_REGISTER_METHOD(0x00893B20, void, UpdateNormalState, (SeinLockOnSpell * __this));
IL2CPP_REGISTER_METHOD(0x00893E20, void, UpdateTaggingState, (SeinLockOnSpell * __this));
IL2CPP_REGISTER_METHOD(0x008944B0, void, Tag, (SeinLockOnSpell * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x00894680, void, Untag, (SeinLockOnSpell * __this, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x008947E0, void, OnProcessRootMotionLockOnFromGround, (SeinLockOnSpell * __this, Vector3 rootVelocity));
IL2CPP_REGISTER_METHODINFO(0x0478F080, SeinLockOnSpell_OnProcessRootMotionLockOnFromGround__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00894A30, void, OnProcessRootMotionLockOnFromAir, (SeinLockOnSpell * __this, Vector3 rootVelocity));
IL2CPP_REGISTER_METHODINFO(0x04724E70, SeinLockOnSpell_OnProcessRootMotionLockOnFromAir__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00894C80, void, __ctor, (SeinLockOnSpell * __this));
}
