using namespace app;

namespace app::methods::Moon::MeleeAttackTimelineBehaviourNew {
IL2CPP_REGISTER_METHOD(0x011135D0, Vector3, get_TargetPosition, (MeleeAttackTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x011135F0, void, set_TargetPosition, (MeleeAttackTimelineBehaviourNew * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x003FD590, float, get_AnimationSpeed, (MeleeAttackTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00A479F0, void, set_AnimationSpeed, (MeleeAttackTimelineBehaviourNew * __this, float value));
IL2CPP_REGISTER_METHOD(0x01113610, void, OnEntityInitialized, (MeleeAttackTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01114080, void, ProcessWallRecoil, (MeleeAttackTimelineBehaviourNew * __this, Collider * collider, Vector3 overlapCenter));
IL2CPP_REGISTER_METHODINFO(0x047079D0, MeleeAttackTimelineBehaviourNew_ProcessWallRecoil__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01114650, float, MinimumDist, (MeleeAttackTimelineBehaviourNew * __this, Vector2 v, Vector2 w, Vector2 p));
IL2CPP_REGISTER_METHOD(0x01114870, void, OnEnter, (MeleeAttackTimelineBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01114890, void, ExecuteAttack, (MeleeAttackTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01114CE0, BehaviourStatus__Enum, OnExecute, (MeleeAttackTimelineBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01114DB0, void, OnExit, (MeleeAttackTimelineBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011151E0, void, StartTimeline, (MeleeAttackTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x011153D0, void, OnTimelineSequenceStopEvent, (MeleeAttackTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x011153E0, void, OnWeaponStickCollision, (MeleeAttackTimelineBehaviourNew * __this, Collider * collider, Vector3 overlapCenter));
IL2CPP_REGISTER_METHODINFO(0x04768350, MeleeAttackTimelineBehaviourNew_OnWeaponStickCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DCB630, EffectSpawn, ProvideDamageEffect, (MeleeAttackTimelineBehaviourNew * __this, DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x04724AA0, MeleeAttackTimelineBehaviourNew_ProvideDamageEffect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011159B0, Vector3, RootMotionModifier, (MeleeAttackTimelineBehaviourNew * __this, Vector3 motion));
IL2CPP_REGISTER_METHOD(0x01115AE0, bool, ShouldBlockTree, (MeleeAttackTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01115B00, void, OnDestroy, (MeleeAttackTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01115C60, void, OnDisable, (MeleeAttackTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01115DB0, void, OnDrawGizmosSelected, (MeleeAttackTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01116090, void, __ctor, (MeleeAttackTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01116320, void, _OnEntityInitialized_b__46_2, (MeleeAttackTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04711E68, MeleeAttackTimelineBehaviourNew__OnEntityInitialized_b__46_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01116330, void, _OnEntityInitialized_b__46_3, (MeleeAttackTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04726808, MeleeAttackTimelineBehaviourNew__OnEntityInitialized_b__46_3__MethodInfo);
}
