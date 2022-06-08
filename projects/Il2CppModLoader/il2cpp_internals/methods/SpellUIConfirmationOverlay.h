using namespace app;

namespace app::methods::SpellUIConfirmationOverlay {
IL2CPP_REGISTER_METHOD(0x003FF8B0, SpellUIConfirmationOverlay_Context__Enum, get_CurrentContext, (SpellUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00945600, void, FixedUpdate, (SpellUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00945800, void, InitializeUpgradeShard, (SpellUIConfirmationOverlay * __this, PlayerUberStateShards_Shard * shard));
IL2CPP_REGISTER_METHOD(0x00945C70, void, InitializeAddShardSocket, (SpellUIConfirmationOverlay * __this, int32_t xpCost));
IL2CPP_REGISTER_METHOD(0x00945DB0, void, InitializeMoveShard, (SpellUIConfirmationOverlay * __this, PlayerUberStateInventory_InventoryItem * fromSpell));
IL2CPP_REGISTER_METHOD(0x00945E20, void, Clear, (SpellUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00945E40, void, Initialize, (SpellUIConfirmationOverlay * __this, EquipmentType__Enum equipmentType, String * title, String * description));
IL2CPP_REGISTER_METHOD(0x00946100, void, SetTitle, (SpellUIConfirmationOverlay * __this, String * message));
IL2CPP_REGISTER_METHOD(0x00946260, void, SetDescription, (SpellUIConfirmationOverlay * __this, String * message));
IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (SpellUIConfirmationOverlay * __this, bool change));
IL2CPP_REGISTER_METHOD(0x002FA000, void, HideImmediate, (SpellUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x009463C0, void, Show, (SpellUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ShowImmediate, (SpellUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00946590, void, __ctor, (SpellUIConfirmationOverlay * __this));
}
