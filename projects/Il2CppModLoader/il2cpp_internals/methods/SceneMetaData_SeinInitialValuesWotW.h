using namespace app;

namespace app::methods::SceneMetaData_SeinInitialValuesWotW {
IL2CPP_REGISTER_METHOD(0x00BAF570, void, ApplyInitialValues, (SceneMetaData_SeinInitialValuesWotW * __this));
IL2CPP_REGISTER_METHOD(0x00BAFE70, void, AssignAbilities, (PlayerAbilities * abilities, SceneMetaData_SeinAbilitiesWotW * Abilities));
IL2CPP_REGISTER_METHOD(0x00BB0240, void, AssignSpells, (SceneMetaData_SeinEquipmentWotW__Array * otherEquipment));
IL2CPP_REGISTER_METHOD(0x00BB02A0, void, RegisterDefaultEquipment, (SceneMetaData_SeinEquipmentWotW * equipment, SpellInventory_Binding__Enum binding));
IL2CPP_REGISTER_METHOD(0x00BB0450, PlayerUberStateInventory_InventoryItem *, RegisterEquipment, (SceneMetaData_SeinEquipmentWotW * equipment));
IL2CPP_REGISTER_METHOD(0x00BB0530, void, __ctor, (SceneMetaData_SeinInitialValuesWotW * __this));
}
