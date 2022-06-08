using namespace app;

namespace app::methods::EntityReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RunInParallel, (EntityReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptSelf, (EntityReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnCacheSerializedComponents, (EntityReactionBehaviour * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x00CA0090, void, OnInitializeTask, (EntityReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FBC00, EntityEvent *, get_ReactionEvent, (EntityReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, SetReactionEvent, (EntityReactionBehaviour * __this, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x00CA02E0, bool, CanInterrupt, (EntityReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleReasonToNotInterrupt, (EntityReactionBehaviour * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (EntityReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (EntityReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x015E8300, Object *, GetReactionEvent, (EntityReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x015E8300, EntityDeathEvent *, GetReactionEvent, (EntityReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04723360, EntityReactionBehaviour_GetReactionEvent_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E8300, EntityDamageEvent *, GetReactionEvent, (EntityReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047657D8, EntityReactionBehaviour_GetReactionEvent_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E8300, EntityKickbackEvent *, GetReactionEvent, (EntityReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04744E00, EntityReactionBehaviour_GetReactionEvent_3__MethodInfo);
}
