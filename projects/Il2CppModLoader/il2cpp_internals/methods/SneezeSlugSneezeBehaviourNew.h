#include <interception_macros.h>

namespace app::methods::SneezeSlugSneezeBehaviourNew {
IL2CPP_REGISTER_METHOD(0x00EE0070, void, Awake, (SneezeSlugSneezeBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00EE00A0, void, CacheSerializedComponents, (SneezeSlugSneezeBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00EE00D0, bool, IsBlockingInterruption, (SneezeSlugSneezeBehaviourNew * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x00EE0100, void, OnEnter, (SneezeSlugSneezeBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00EE04B0, BehaviourStatus__Enum, OnExecute, (SneezeSlugSneezeBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00EE04D0, void, OnExit, (SneezeSlugSneezeBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00EE06F0, void, StartTimeline, (SneezeSlugSneezeBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00EE0970, void, OnTimelineSequenceStopEvent, (SneezeSlugSneezeBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04708C08, SneezeSlugSneezeBehaviourNew_OnTimelineSequenceStopEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EE0B30, void, Flip, (SneezeSlugSneezeBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x0474AB30, SneezeSlugSneezeBehaviourNew_Flip__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EE0C40, void, Shoot, (SneezeSlugSneezeBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04724098, SneezeSlugSneezeBehaviourNew_Shoot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EE1C10, bool, IsStandingBackToLedge, (SneezeSlugSneezeBehaviourNew * __this, bool isFacingLeft, float checkDistance, float checkDepth));
IL2CPP_REGISTER_METHOD(0x00EE1ED0, void, __ctor, (SneezeSlugSneezeBehaviourNew * __this));
}
