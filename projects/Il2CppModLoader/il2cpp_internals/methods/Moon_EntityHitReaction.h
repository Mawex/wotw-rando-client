#include <interception_macros.h>

namespace app::methods::Moon::EntityHitReaction {
IL2CPP_REGISTER_METHOD(0x0121E390, bool, Play, (EntityHitReaction * __this, EntityDamageEvent * damageEvent));
IL2CPP_REGISTER_METHOD(0x0121F770, void, CalculateMultipliers, (EntityHitReaction * __this, EntityDamageEvent * damageEvent, bool instant, float * kickbackMultiplier, float * verticalMultiplier, bool * shouldSkipKickback));
IL2CPP_REGISTER_METHOD(0x0121FC70, bool, ShouldApplyForceAlongTheGround, (EntityHitReaction * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHOD(0x0121FD70, bool, CanInterruptHorizontal, (EntityHitReaction * __this, EntityDamageEvent * damageEvent, Vector2 damageDirection));
IL2CPP_REGISTER_METHOD(0x01220070, bool, CanInterruptVertical, (EntityHitReaction * __this, EntityDamageEvent * damageEvent, Vector2 damageDirection));
IL2CPP_REGISTER_METHOD(0x01220370, void, Update, (EntityHitReaction * __this));
IL2CPP_REGISTER_METHOD(0x012203E0, void, __ctor, (EntityHitReaction * __this));
}
