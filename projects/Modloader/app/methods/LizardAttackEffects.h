#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LizardAttackEffects {
    IL2CPP_REGISTER_METHOD(0x00FA94C0, app::GameObject*, Get, (app::LizardAttackEffects * this_ptr, app::LizardAttackEffects_Type__Enum type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LizardAttackEffects * this_ptr))
} // namespace app::classes::LizardAttackEffects
