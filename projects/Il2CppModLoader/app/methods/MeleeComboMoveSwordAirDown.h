#pragma once
#include <interception_macros.h>

namespace app::methods::MeleeComboMoveSwordAirDown {
    IL2CPP_REGISTER_METHOD(0x013A5BD0, float, get_EffectiveKnockbackAddY, (app::MeleeComboMoveSwordAirDown * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013A5BF0, void, EnterMove, (app::MeleeComboMoveSwordAirDown * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013A5C90, void, ExitMove, (app::MeleeComboMoveSwordAirDown * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013A5D00, void, ctor, (app::MeleeComboMoveSwordAirDown * this_ptr))
}
