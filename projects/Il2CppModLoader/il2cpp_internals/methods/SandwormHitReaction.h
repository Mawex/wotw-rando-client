#include <interception_macros.h>

namespace app::methods::SandwormHitReaction {
IL2CPP_REGISTER_METHOD(0x00C2A890, bool, CanInterrupt, (SandwormHitReaction * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x00C2A9B0, void, HandleReasonToNotInterrupt, (SandwormHitReaction * __this, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x00C2AAE0, void, OnEnterTask, (SandwormHitReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C2AC20, void, __ctor, (SandwormHitReaction * __this));
}
