#include <interception_macros.h>

namespace app::methods::GrenadeBurst {
IL2CPP_REGISTER_METHOD(0x002FD750, DamageLayerMask__Enum, get_DamageLayerMask, (GrenadeBurst * __this));
IL2CPP_REGISTER_METHOD(0x002FD760, void, set_DamageLayerMask, (GrenadeBurst * __this, DamageLayerMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0108B100, void, Finalize, (GrenadeBurst * __this));
IL2CPP_REGISTER_METHOD(0x0108B190, void, OnPoolSpawned, (GrenadeBurst * __this));
IL2CPP_REGISTER_METHOD(0x0108B1A0, void, OnPoolDespawned, (GrenadeBurst * __this));
IL2CPP_REGISTER_METHOD(0x0108B1B0, void, IgnoreOnLastInstance, (IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x0108B2C0, void, Awake, (GrenadeBurst * __this));
IL2CPP_REGISTER_METHOD(0x0108B370, void, OnDestroy, (GrenadeBurst * __this));
IL2CPP_REGISTER_METHOD(0x0108B410, void, OnEnable, (GrenadeBurst * __this));
IL2CPP_REGISTER_METHOD(0x0108B1A0, void, OnDisable, (GrenadeBurst * __this));
IL2CPP_REGISTER_METHOD(0x0108B4A0, void, MoonCleanup, (GrenadeBurst * __this));
IL2CPP_REGISTER_METHOD(0x0108B5E0, void, Start, (GrenadeBurst * __this));
IL2CPP_REGISTER_METHOD(0x0108B600, void, DealDamage, (GrenadeBurst * __this));
IL2CPP_REGISTER_METHOD(0x0108C910, void, DamageTicked, (GrenadeBurst * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x04718530, GrenadeBurst_DamageTicked__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0108CB10, void, FixedUpdate, (GrenadeBurst * __this));
IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_IsSuspended, (GrenadeBurst * __this));
IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_IsSuspended, (GrenadeBurst * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0070DEC0, SuspendableMask__Enum, get_Mask, (GrenadeBurst * __this));
IL2CPP_REGISTER_METHOD(0x0108CBF0, void, set_Mask, (GrenadeBurst * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0108CC00, void, __ctor, (GrenadeBurst * __this));
}
