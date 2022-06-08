#include <interception_macros.h>

namespace app::methods::SeinChakramSpell_BalancingData {
IL2CPP_REGISTER_METHOD(0x00A3F1B0, SeinChakramSpell_BalancingData_ChakramSettings *, GetCurrentChakramSettings, (SeinChakramSpell_BalancingData * __this));
IL2CPP_REGISTER_METHOD(0x00A3F2C0, bool, get_CanSpin, (SeinChakramSpell_BalancingData * __this));
IL2CPP_REGISTER_METHOD(0x00A3F2E0, float, get_EnergyCost, (SeinChakramSpell_BalancingData * __this));
IL2CPP_REGISTER_METHOD(0x00A3F300, SeinChakramSpell_BalancingData_ChakramDamageSettings *, GetDamage, (SeinChakramSpell_BalancingData * __this, int32_t hitNumber));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (SeinChakramSpell_BalancingData * __this));
}
