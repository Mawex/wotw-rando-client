#include <interception_macros.h>

namespace app::methods::SeinLifeAbsorbArm {
IL2CPP_REGISTER_METHOD(0x0088EB90, SeinLifeAbsorbSpell *, get_Spell, (SeinLifeAbsorbArm * __this));
IL2CPP_REGISTER_METHOD(0x0088EBD0, bool, get_HasTarget, (SeinLifeAbsorbArm * __this));
IL2CPP_REGISTER_METHOD(0x0088ECC0, bool, get_IsAbsorbing, (SeinLifeAbsorbArm * __this));
IL2CPP_REGISTER_METHOD(0x0088ED30, void, Awake, (SeinLifeAbsorbArm * __this));
IL2CPP_REGISTER_METHOD(0x0088EF30, Vector3, Biezer, (SeinLifeAbsorbArm * __this, Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4, float x));
IL2CPP_REGISTER_METHOD(0x0088F600, void, FixedUpdate, (SeinLifeAbsorbArm * __this));
IL2CPP_REGISTER_METHOD(0x0088FA20, void, UpdateLineRenderer, (SeinLifeAbsorbArm * __this));
IL2CPP_REGISTER_METHOD(0x00890230, void, SetTarget, (SeinLifeAbsorbArm * __this, IAttackable * target));
IL2CPP_REGISTER_METHOD(0x008903B0, void, ReleaseTarget, (SeinLifeAbsorbArm * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetReferenceToSein, (SeinLifeAbsorbArm * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x008903D0, void, PlaySound, (SeinLifeAbsorbArm * __this, SoundProvider * sound));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SeinLifeAbsorbArm * __this));
}
