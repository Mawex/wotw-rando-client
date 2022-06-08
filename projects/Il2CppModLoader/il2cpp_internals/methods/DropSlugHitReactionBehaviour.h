#include <interception_macros.h>

namespace app::methods::DropSlugHitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00BE4BC0, void, OnInitializeTask, (DropSlugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00BE4C90, void, OnEnterTask, (DropSlugHitReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00BE5060, float, GetKickbackMultiplier, (DropSlugHitReactionBehaviour * __this, DamageType__Enum damageType));
IL2CPP_REGISTER_METHOD(0x00BE50A0, void, __ctor, (DropSlugHitReactionBehaviour * __this));
}
