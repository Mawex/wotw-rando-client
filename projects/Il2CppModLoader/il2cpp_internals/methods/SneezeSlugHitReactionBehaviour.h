using namespace app;

namespace app::methods::SneezeSlugHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00756A30, EntityDamageEvent *, get_DamageEvent, (SneezeSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00756A40, void, set_DamageEvent, (SneezeSlugHitReactionBehaviour * __this, EntityDamageEvent * value));
IL2CPP_REGISTER_METHOD(0x00EDD210, void, OnCacheSerializedComponents, (SneezeSlugHitReactionBehaviour * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x00EDD430, void, OnInitializeTask, (SneezeSlugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00EDDD60, void, OnEnterTask, (SneezeSlugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00EDDE80, void, OnHit, (SneezeSlugHitReactionBehaviour * __this, EntityDamageEvent * damageEvent, bool canInterrupt));
IL2CPP_REGISTER_METHOD(0x00EDE3C0, BehaviourStatus__Enum, OnExecuteTask, (SneezeSlugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00EDE450, void, OnExitTask, (SneezeSlugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00EDE460, void, StartTimeline, (SneezeSlugHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00EDE600, void, StartAdditiveTimeline, (SneezeSlugHitReactionBehaviour * __this, MoonTimeline * timeline, float damageAmount));
IL2CPP_REGISTER_METHOD(0x00EDE7A0, void, ResetTimeline, (SneezeSlugHitReactionBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00EDE9C0, void, HandleReasonToNotInterrupt, (SneezeSlugHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x00EDEAD0, void, ProcessKickback, (SneezeSlugHitReactionBehaviour * __this, Vector2 force));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SneezeSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDEBD0, bool, PlayedAdditiveAnim, (SneezeSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00EDEBE0, void, TimelineFinished, (SneezeSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0473B2E8, SneezeSlugHitReactionBehaviour_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EDEC00, bool, CanInterrupt, (SneezeSlugHitReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x00B667A0, void, FlipEventStart, (SneezeSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0478A8C8, SneezeSlugHitReactionBehaviour_FlipEventStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EDEF40, void, SetBlastinflateStart, (SneezeSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04751370, SneezeSlugHitReactionBehaviour_SetBlastinflateStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EDEF50, void, SetBlastinflateStop, (SneezeSlugHitReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04703580, SneezeSlugHitReactionBehaviour_SetBlastinflateStop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EDEF60, void, __ctor, (SneezeSlugHitReactionBehaviour * __this));
}
