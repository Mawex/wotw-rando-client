#include <interception_macros.h>

namespace app::methods::SneezeSlugBurrowBehaviour {
IL2CPP_REGISTER_METHOD(0x00ED5050, bool, IsBlockingInterruption, (SneezeSlugBurrowBehaviour * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x00ED50B0, void, OnEntityInitialized, (SneezeSlugBurrowBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED51F0, void, CacheSerializedComponents, (SneezeSlugBurrowBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED5240, void, OnEnter, (SneezeSlugBurrowBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00ED5340, BehaviourStatus__Enum, OnExecute, (SneezeSlugBurrowBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00ED54F0, void, OnExit, (SneezeSlugBurrowBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00ED56B0, void, SetState, (SneezeSlugBurrowBehaviour * __this, SneezeSlugBurrowBehaviour_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x00ED5FB0, void, StartTimeline, (SneezeSlugBurrowBehaviour * __this, MoonTimeline * timeline, Action * onStopEvent));
IL2CPP_REGISTER_METHOD(0x00ED6010, void, StopCurrentTimeline, (SneezeSlugBurrowBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED60F0, void, TeleportToNewSpot, (SneezeSlugBurrowBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED6AE0, void, Hide, (SneezeSlugBurrowBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED6BF0, void, Show, (SneezeSlugBurrowBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED6D00, void, BlastAttack, (SneezeSlugBurrowBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047289F0, SneezeSlugBurrowBehaviour_BlastAttack__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ED7080, void, SneezeAttack, (SneezeSlugBurrowBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0477B6A8, SneezeSlugBurrowBehaviour_SneezeAttack__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ED7CA0, void, __ctor, (SneezeSlugBurrowBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00ED8280, void, _SetState_b__49_0, (SneezeSlugBurrowBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0475BEE0, SneezeSlugBurrowBehaviour__SetState_b__49_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ED8290, void, _SetState_b__49_1, (SneezeSlugBurrowBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04741E78, SneezeSlugBurrowBehaviour__SetState_b__49_1__MethodInfo);
}
