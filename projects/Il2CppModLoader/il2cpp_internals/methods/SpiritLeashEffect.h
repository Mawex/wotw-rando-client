#include <interception_macros.h>

namespace app::methods::SpiritLeashEffect {
IL2CPP_REGISTER_METHOD(0x00D5BCE0, void, Awake, (SpiritLeashEffect * __this));
IL2CPP_REGISTER_METHOD(0x00D5BD70, void, Update, (SpiritLeashEffect * __this));
IL2CPP_REGISTER_METHOD(0x00D5BEA0, void, UpdateLeashEffect, (SpiritLeashEffect * __this));
IL2CPP_REGISTER_METHOD(0x00D5C420, void, UpdateTargetCircleEffect, (SpiritLeashEffect * __this));
IL2CPP_REGISTER_METHOD(0x00D5C780, void, SetTarget, (SpiritLeashEffect * __this, SeinCharacter * sein, IAttackable * target, float effectDuration));
IL2CPP_REGISTER_METHOD(0x00D5C820, void, __ctor, (SpiritLeashEffect * __this));
}
