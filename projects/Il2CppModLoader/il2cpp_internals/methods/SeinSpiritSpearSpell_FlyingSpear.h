#include <interception_macros.h>

namespace app::methods::SeinSpiritSpearSpell_FlyingSpear {
IL2CPP_REGISTER_METHOD(0x0011C410, Vector3, get_Direction, (SeinSpiritSpearSpell_FlyingSpear__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011C440, void, __ctor, (SeinSpiritSpearSpell_FlyingSpear__Boxed * __this, Transform * spearTransform, Vector3 target, float duration, IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x0011C480, void, Step, (SeinSpiritSpearSpell_FlyingSpear__Boxed * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0011C490, bool, get_IsDone, (SeinSpiritSpearSpell_FlyingSpear__Boxed * __this));
}
