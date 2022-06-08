using namespace app;

namespace app::methods::SpellUIShardListOverlay {
IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsSuspended, (SpellUIShardListOverlay * __this));
IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_IsSuspended, (SpellUIShardListOverlay * __this, bool value));
IL2CPP_REGISTER_METHOD(0x005065F0, SuspendableMask__Enum, get_Mask, (SpellUIShardListOverlay * __this));
IL2CPP_REGISTER_METHOD(0x0094FCF0, void, set_Mask, (SpellUIShardListOverlay * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0094FDB0, void, Awake, (SpellUIShardListOverlay * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (SpellUIShardListOverlay * __this));
IL2CPP_REGISTER_METHOD(0x009502A0, void, OnItemActivatedCallback, (SpellUIShardListOverlay * __this));
IL2CPP_REGISTER_METHODINFO(0x047447C8, SpellUIShardListOverlay_OnItemActivatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009503C0, void, OnNewItemHighlighted, (SpellUIShardListOverlay * __this, bool firstAfterPopulating));
IL2CPP_REGISTER_METHODINFO(0x0473FA68, SpellUIShardListOverlay_OnNewItemHighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009503D0, void, SetCompatibleEquipment, (SpellUIShardListOverlay * __this, EquipmentType__Enum compatibleEquipment));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, SetInitiallySelectedItem, (SpellUIShardListOverlay * __this, PlayerUberStateShards_Shard * item));
IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (SpellUIShardListOverlay * __this, bool change));
IL2CPP_REGISTER_METHOD(0x009503F0, void, HideImmediate, (SpellUIShardListOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00950430, void, Show, (SpellUIShardListOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00950610, void, ShowImmediate, (SpellUIShardListOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00950680, void, FixedUpdate, (SpellUIShardListOverlay * __this));
IL2CPP_REGISTER_METHOD(0x009507B0, void, UpdateShardContext, (SpellUIShardListOverlay * __this));
IL2CPP_REGISTER_METHOD(0x009509A0, void, PopulateAllShardsCanvas, (SpellUIShardListOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00950D80, void, __ctor, (SpellUIShardListOverlay * __this));
}
