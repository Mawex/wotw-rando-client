#include <interception_macros.h>

namespace app::methods::SeinSpells {
    IL2CPP_REGISTER_METHOD(0x004173F0, SeinGlowSpell*, get_Glow, (app::SeinSpells * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005E0070, void, set_Glow, (app::SeinSpells * this_ptr, app::SeinGlowSpell* value));
    IL2CPP_REGISTER_METHOD(0x005E0120, SeinInvisibilitySpell*, get_Invisibility, (app::SeinSpells * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005E0140, void, set_Invisibility, (app::SeinSpells * this_ptr, app::SeinInvisibilitySpell* value));
    IL2CPP_REGISTER_METHOD(0x005E01F0, SeinStickyMineSpell*, get_StickyMine, (app::SeinSpells * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005E0210, void, set_StickyMine, (app::SeinSpells * this_ptr, app::SeinStickyMineSpell* value));
    IL2CPP_REGISTER_METHOD(0x005E02C0, SeinSpiritSpearSpell*, get_SpiritSpearSpell, (app::SeinSpells * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005E02E0, void, set_SpiritSpearSpell, (app::SeinSpells * this_ptr, app::SeinSpiritSpearSpell* value));
    IL2CPP_REGISTER_METHOD(0x005E0390, SeinLifeAbsorbSpell*, get_LifeAbsorbSpell, (app::SeinSpells * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005E03B0, void, set_LifeAbsorbSpell, (app::SeinSpells * this_ptr, app::SeinLifeAbsorbSpell* value));
    IL2CPP_REGISTER_METHOD(0x005E0460, SeinMeditateSpell*, get_MeditateSpell, (app::SeinSpells * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005E0480, void, set_MeditateSpell, (app::SeinSpells * this_ptr, app::SeinMeditateSpell* value));
    IL2CPP_REGISTER_METHOD(0x005E0530, SeinChargeShotSpell*, get_ChargeShotSpell, (app::SeinSpells * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005E0550, void, set_ChargeShotSpell, (app::SeinSpells * this_ptr, app::SeinChargeShotSpell* value));
    IL2CPP_REGISTER_METHOD(0x005E0600, SeinJumpShotSpell*, get_JumpShotSpell, (app::SeinSpells * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005E0620, void, set_JumpShotSpell, (app::SeinSpells * this_ptr, app::SeinJumpShotSpell* value));
    IL2CPP_REGISTER_METHOD(0x005E06D0, SeinChakramSpell*, get_ChakramSpell, (app::SeinSpells * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005E06F0, void, set_ChakramSpell, (app::SeinSpells * this_ptr, app::SeinChakramSpell* value));
    IL2CPP_REGISTER_METHOD(0x005E07A0, SeinBlazeSpell*, get_BlazeSpell, (app::SeinSpells * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005E07C0, void, set_BlazeSpell, (app::SeinSpells * this_ptr, app::SeinBlazeSpell* value));
    IL2CPP_REGISTER_METHOD(0x005E0870, void, RefreshStateCache, (app::SeinSpells * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005E0A10, void, __ctor, (app::SeinSpells * this_ptr));
} // namespace app::methods::SeinSpells
