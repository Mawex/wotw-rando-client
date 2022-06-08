#include <interception_macros.h>

namespace app::methods::DropSlugEntity {
IL2CPP_REGISTER_METHOD(0x00BE3E30, float, get_ExposedFallRange, (DropSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UsesHealthbar, (DropSlugEntity * __this));
IL2CPP_REGISTER_METHOD(0x00BE3E40, void, OnUpdate, (DropSlugEntity * __this, float timeDelta));
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, ModifyKickbackForce, (DropSlugEntity * __this, Vector3 force, Damage * damage, bool isOnGround));
IL2CPP_REGISTER_METHOD(0x00BE3EB0, void, ResolveDamage, (DropSlugEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x00BE3ED0, void, __ctor, (DropSlugEntity * __this));
}
