#include <interception_macros.h>

namespace app::methods::EnemyShield {
IL2CPP_REGISTER_METHOD(0x00C838F0, bool, IsProtecting, (EnemyShield * shield));
IL2CPP_REGISTER_METHOD(0x00C839B0, bool, DoesExist, (EnemyShield * shield));
IL2CPP_REGISTER_METHOD(0x00C83A70, Vector2, GetShieldDirection, (EnemyShield * __this));
IL2CPP_REGISTER_METHOD(0x00C83D10, void, Awake, (EnemyShield * __this));
IL2CPP_REGISTER_METHOD(0x00C840D0, void, OnDestroy, (EnemyShield * __this));
IL2CPP_REGISTER_METHOD(0x00C84360, void, ResolveDamage, (EnemyShield * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x00C844F0, void, SetHasShield, (EnemyShield * __this, bool hasShield));
IL2CPP_REGISTER_METHOD(0x00C84500, void, SetProtectionState, (EnemyShield * __this, bool isOn));
IL2CPP_REGISTER_METHOD(0x00C84550, void, OnEntityReset, (EnemyShield * __this));
IL2CPP_REGISTER_METHOD(0x00C845F0, void, OnResolveDamageProtecting, (EnemyShield * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x00C84770, Vector2, GetDamageToProtectionConeOriginOffset, (EnemyShield * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00C84A00, void, ChangeState, (EnemyShield * __this, EnemyShield_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00C84CD0, void, OnShieldDestroyed, (EnemyShield * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x00C85000, void, SetShieldModelVisibility, (EnemyShield * __this, bool on));
IL2CPP_REGISTER_METHOD(0x00C85170, bool, ShouldReflectArrow, (EnemyShield * __this, ArrowHitData arrowHitData));
IL2CPP_REGISTER_METHODINFO(0x047260B8, EnemyShield_ShouldReflectArrow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C85370, Vector3, ProcessDamagePosition, (EnemyShield * __this, Vector3 damageOriginPoint, DamageType__Enum damageType));
IL2CPP_REGISTER_METHOD(0x00C85650, void, OnDrawGizmos, (EnemyShield * __this));
IL2CPP_REGISTER_METHOD(0x00C858E0, void, __ctor, (EnemyShield * __this));
IL2CPP_REGISTER_METHOD(0x00C85CD0, void, _OnShieldDestroyed_b__38_0, (EnemyShield * __this));
IL2CPP_REGISTER_METHODINFO(0x04754E98, EnemyShield__OnShieldDestroyed_b__38_0__MethodInfo);
}
