using namespace app;

namespace app::methods::SneezeSlugBlastBehaviour {
IL2CPP_REGISTER_METHOD(0x00ED4200, bool, IsBlockingInterruption, (SneezeSlugBlastBehaviour * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x00ED4240, void, CacheSerializedComponents, (SneezeSlugBlastBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED4270, void, OnEntityInitialized, (SneezeSlugBlastBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED4390, void, OnEnter, (SneezeSlugBlastBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00ED4470, BehaviourStatus__Enum, OnExecute, (SneezeSlugBlastBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00ED44F0, void, OnExit, (SneezeSlugBlastBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00ED4600, void, SetState, (SneezeSlugBlastBehaviour * __this, SneezeSlugBlastBehaviour_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x00ED4960, void, StartTimeline, (SneezeSlugBlastBehaviour * __this, MoonTimeline * timeline, Action * onStopEvent));
IL2CPP_REGISTER_METHOD(0x00ED49C0, void, StopCurrentTimeline, (SneezeSlugBlastBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED4AA0, void, BlastAttack, (SneezeSlugBlastBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047276E8, SneezeSlugBlastBehaviour_BlastAttack__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ED4E20, void, __ctor, (SneezeSlugBlastBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED4F80, void, _SetState_b__19_0, (SneezeSlugBlastBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04749118, SneezeSlugBlastBehaviour__SetState_b__19_0__MethodInfo);
}
