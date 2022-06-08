#include <interception_macros.h>

namespace app::methods::SpiritCrescent {
IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsSuspended, (SpiritCrescent * __this));
IL2CPP_REGISTER_METHOD(0x00800850, void, set_IsSuspended, (SpiritCrescent * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0057A5A0, SuspendableMask__Enum, get_Mask, (SpiritCrescent * __this));
IL2CPP_REGISTER_METHOD(0x011D2620, void, set_Mask, (SpiritCrescent * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x011D2630, void, Awake, (SpiritCrescent * __this));
IL2CPP_REGISTER_METHOD(0x011D2980, void, OnDestroy, (SpiritCrescent * __this));
IL2CPP_REGISTER_METHOD(0x011D2C90, void, Throw, (SpiritCrescent * __this, SeinSpiritCrescentSpell * spell, Vector3 direction, float speed));
IL2CPP_REGISTER_METHOD(0x011D2E90, void, Despawn, (SpiritCrescent * __this, bool caught));
IL2CPP_REGISTER_METHOD(0x011D2FB0, void, Explode, (SpiritCrescent * __this));
IL2CPP_REGISTER_METHOD(0x011D32C0, void, PerformCatchAssist, (SpiritCrescent * __this));
IL2CPP_REGISTER_METHOD(0x011D3720, void, EnterState, (SpiritCrescent * __this, SpiritCrescent_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00BE9110, float, get_Period, (SpiritCrescent * __this));
IL2CPP_REGISTER_METHOD(0x011D3B00, void, Update, (SpiritCrescent * __this));
IL2CPP_REGISTER_METHOD(0x011D4580, bool, ShouldDealDamage, (SpiritCrescent * __this, GameObject * target));
IL2CPP_REGISTER_METHODINFO(0x04751D50, SpiritCrescent_ShouldDealDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011D4700, void, OnDamageDealt, (SpiritCrescent * __this, DamageDealer * dealer, DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x04754190, SpiritCrescent_OnDamageDealt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011D4710, void, __ctor, (SpiritCrescent * __this));
}
