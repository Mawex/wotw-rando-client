#include <interception_macros.h>

namespace app::methods::Moon::HitReactionBehaviourOld {
IL2CPP_REGISTER_METHOD(0x014AB990, void, Awake, (HitReactionBehaviourOld * __this));
IL2CPP_REGISTER_METHOD(0x014ABE60, void, OnReceiveEvent, (HitReactionBehaviourOld * __this, EntityEvent * eventInfo));
IL2CPP_REGISTER_METHOD(0x014AC060, bool, PlayHitReaction, (HitReactionBehaviourOld * __this, EntityDamageEvent * damageEvent));
IL2CPP_REGISTER_METHOD(0x014ABD70, void, FixedUpdate, (HitReactionBehaviourOld * __this));
IL2CPP_REGISTER_METHOD(0x014ABDB0, StaggerSettings *, GetStaggerSetting, (HitReactionBehaviourOld * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (HitReactionBehaviourOld * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (HitReactionBehaviourOld * __this));
}
