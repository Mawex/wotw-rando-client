using namespace app;

namespace app::methods::Moon::ComboSystem::GlobalComboDefinition {
IL2CPP_REGISTER_METHOD(0x00CC6E10, void, InitializeDictionary, (GlobalComboDefinition * __this));
IL2CPP_REGISTER_METHOD(0x00CC7450, ComboDataEntry *, GetComboDataEntryByType, (GlobalComboDefinition * __this, Type * comboType));
IL2CPP_REGISTER_METHOD(0x00CC7530, MeleeComboMoveSettings *, GetMeleeSpecificComboSettings, (GlobalComboDefinition * __this, Type * comboType));
IL2CPP_REGISTER_METHOD(0x00CC7620, ComboMoveSettings *, GetComboSettings, (GlobalComboDefinition * __this, Type * comboType));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (GlobalComboDefinition * __this));
}
