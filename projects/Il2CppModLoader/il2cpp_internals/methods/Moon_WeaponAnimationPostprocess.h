#include <interception_macros.h>

namespace app::methods::Moon::WeaponAnimationPostprocess {
IL2CPP_REGISTER_METHOD(0x00F2A6C0, void, OnAddedToAnimator, (WeaponAnimationPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x00F2A700, void, OnDrawGizmosSelected, (WeaponAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x00F2A710, void, OnDrawGizmos, (WeaponAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x00F2AE00, void, CastTerrain, (WeaponAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x00F2B3F0, void, Process, (WeaponAnimationPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00F2BFA0, void, __ctor, (WeaponAnimationPostprocess * __this));
}
