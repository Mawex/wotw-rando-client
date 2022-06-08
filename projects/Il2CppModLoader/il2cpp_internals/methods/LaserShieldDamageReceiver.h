#include <interception_macros.h>

namespace app::methods::LaserShieldDamageReceiver {
IL2CPP_REGISTER_METHOD(0x00F08450, void, OnEnable, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x006D6470, bool, get_IsDestroyed, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F08460, Vector3, get_AnchorLocalPosition, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F08480, Quaternion, get_AnchorLocalRotation, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F08490, Vector3, get_DirectonToCenter, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F08530, Vector3, get_IndividualHitLocalPositionOffset, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F08550, void, set_IndividualHitLocalPositionOffset, (LaserShieldDamageReceiver * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00F08570, Vector3, get_SharedLocalPositionOffset, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F08590, void, set_SharedLocalPositionOffset, (LaserShieldDamageReceiver * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00F085B0, Vector3, get_SharedWorldPositionOffset, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F085D0, void, set_SharedWorldPositionOffset, (LaserShieldDamageReceiver * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00F085F0, Transform *, get_Pivot, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F086A0, Transform *, get_CircleRotator, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F087A0, float, get_LocalRotationZ, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F08840, void, set_LocalRotationZ, (LaserShieldDamageReceiver * __this, float value));
IL2CPP_REGISTER_METHOD(0x00F088A0, float, get_TargetAnglePosition, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F08A60, int32_t, get_Index, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F08A70, void, set_Index, (LaserShieldDamageReceiver * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00F08A80, void, SetOffset, (LaserShieldDamageReceiver * __this, Vector3 offset));
IL2CPP_REGISTER_METHOD(0x00F08FA0, void, AddAngle, (LaserShieldDamageReceiver * __this, float degree));
IL2CPP_REGISTER_METHOD(0x00F09020, void, OnDestroy, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F09170, void, OnRecieveDamage, (LaserShieldDamageReceiver * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00F095E0, void, Initialize, (LaserShieldDamageReceiver * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00F09900, void, ResetState, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F09A80, void, Repair, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F09AC0, void, ApplyPositionOffsets, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F09DC0, void, SpawnEffect, (LaserShieldDamageReceiver * __this, GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x00F09E40, void, TurnOnIdleEffect, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F0A140, void, TurnOffIdleEffect, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F0A240, void, TurnOnHeavilyDamagedEffect, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F0A430, void, TurnOffHeavilyDamagedEffect, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F0A550, void, SetSelfComponents, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F0A5F0, void, ForceDestroy, (LaserShieldDamageReceiver * __this, bool spawnEffects));
IL2CPP_REGISTER_METHOD(0x00F0A6E0, void, Destroy, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F0A7E0, void, DestroyWithoutEffects, (LaserShieldDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00F0A8C0, void, __ctor, (LaserShieldDamageReceiver * __this));
}
