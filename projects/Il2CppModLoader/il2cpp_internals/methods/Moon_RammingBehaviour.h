using namespace app;

namespace app::methods::Moon::RammingBehaviour {
IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00C4CC00, bool, IsBlockingInterruption, (RammingBehaviour * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x00C4CD30, void, OnEntityInitialized, (RammingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C4D7F0, void, OnEnter, (RammingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C4DAF0, void, CacheSerializedComponents, (RammingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C4DBD0, void, Awake, (RammingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C4DED0, void, OnDisable, (RammingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C4DFC0, BehaviourStatus__Enum, OnExecute, (RammingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C4E080, void, OnExit, (RammingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C4E190, void, StartTimeline, (RammingBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00C4E290, void, ResetTimeline, (RammingBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00C4E4C0, float, GetLookDirection, (RammingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C4E5A0, float, GetDirectionToTarget, (RammingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C4E6C0, bool, HasHitWall, (RammingBehaviour * __this, Vector3 * wallNormal));
IL2CPP_REGISTER_METHOD(0x00C4EC00, void, OnHitByHeavyAttack, (RammingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C4EC60, void, SpawnSlamChargeEffect, (RammingBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04796BA0, RammingBehaviour_SpawnSlamChargeEffect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C4EDA0, void, SpawnHitWallEffect, (RammingBehaviour * __this, Vector3 wallNormal, Vector3 position, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHOD(0x00C4F470, bool, IsPointInsideAllowedArea, (RammingBehaviour * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00C4F510, void, OnRammingTurnStart, (RammingBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0471D788, RammingBehaviour_OnRammingTurnStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C4F520, void, OnRammingTurnEnd, (RammingBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047774B8, RammingBehaviour_OnRammingTurnEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C4F570, void, OnRammingTurnFlipEvent, (RammingBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0475AF68, RammingBehaviour_OnRammingTurnFlipEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C4E080, void, Stop, (RammingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C4F5C0, void, __ctor, (RammingBehaviour * __this));
}
