#include <interception_macros.h>

namespace app::methods::Moon_ComboSystem::GlobalComboDefinition {
IL2CPP_REGISTER_METHOD(0x00CC6E10, void, InitializeDictionary, (app::GlobalComboDefinition * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CC7450, ComboDataEntry *, GetComboDataEntryByType, (app::GlobalComboDefinition * this_ptr, app::Type * combo_type));
IL2CPP_REGISTER_METHOD(0x00CC7530, MeleeComboMoveSettings *, GetMeleeSpecificComboSettings, (app::GlobalComboDefinition * this_ptr, app::Type * combo_type));
IL2CPP_REGISTER_METHOD(0x00CC7620, ComboMoveSettings *, GetComboSettings, (app::GlobalComboDefinition * this_ptr, app::Type * combo_type));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (app::GlobalComboDefinition * this_ptr));
}
