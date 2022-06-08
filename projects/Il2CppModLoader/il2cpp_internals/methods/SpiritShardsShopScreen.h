using namespace app;

namespace app::methods::SpiritShardsShopScreen {
IL2CPP_REGISTER_METHOD(0x006B8940, CleverMenuItemSelectionManager *, get_NavigationManager, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417920, MenuTabBackground__Enum, get_BackgroundMode, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptTab, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_NeedsExperienceUI, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D76830, void, HideExistingHint, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D76920, void, ShowHint, (SpiritShardsShopScreen * __this, MessageProvider * messageProvider));
IL2CPP_REGISTER_METHOD(0x00D76B40, void, Awake, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D76C10, void, OnDestroy, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D770C0, void, OnGlobalShardsUpdated, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x04748A10, SpiritShardsShopScreen_OnGlobalShardsUpdated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D771B0, void, OnBindingsUpdated, (SpiritShardsShopScreen * __this, SpellInventory_Binding__Enum binding));
IL2CPP_REGISTER_METHODINFO(0x04746308, SpiritShardsShopScreen_OnBindingsUpdated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D772A0, void, OnNewItemHighlighted, (SpiritShardsShopScreen * __this, bool firstAfterPopulating));
IL2CPP_REGISTER_METHODINFO(0x04707270, SpiritShardsShopScreen_OnNewItemHighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D774C0, void, OnItemActivatedCallback, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x047984B8, SpiritShardsShopScreen_OnItemActivatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D77700, void, OnConfirmationSelected, (SpiritShardsShopScreen * __this, SpiritShardUIConfirmationOverlay_Selection__Enum selection));
IL2CPP_REGISTER_METHODINFO(0x04750310, SpiritShardsShopScreen_OnConfirmationSelected__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D77860, void, OnShardInventoryUpdatedCallback, (SpiritShardsShopScreen * __this, PlayerUberStateShards_Shard * item));
IL2CPP_REGISTER_METHODINFO(0x04784208, SpiritShardsShopScreen_OnShardInventoryUpdatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D77870, SpellUIItem *, get_SelectedSpellUIItem, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D77970, PlayerUberStateInventory_InventoryItem *, get_SelectedSpell, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D77B10, SpiritShardShopUIItem *, get_SelectedSpiritShardUIItem, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D77C10, PlayerUberStateShards_Shard *, get_SelectedSpiritShard, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D77CE0, bool, get_IsSuspended, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D77CF0, void, set_IsSuspended, (SpiritShardsShopScreen * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00C1F020, SuspendableMask__Enum, get_Mask, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D77D00, void, set_Mask, (SpiritShardsShopScreen * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00D77DC0, void, Hide, (SpiritShardsShopScreen * __this, bool change));
IL2CPP_REGISTER_METHOD(0x006B93E0, void, HideImmediate, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D77F60, void, Show, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B9600, void, ShowImmediate, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D781B0, void, FocusOnShard, (SpiritShardsShopScreen * __this, PlayerUberStateShards_Shard * item));
IL2CPP_REGISTER_METHOD(0x00D784F0, void, FocusOnPreviousSelection, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D78830, void, FixedUpdate, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D78A90, void, OnCategoryChanged, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D78C70, void, UpdateContextCanvasShards, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D78E80, void, PopulateInventoryCanvasWithShards, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D795A0, PlayerUberStateShards_Shard *, GetActualInventoryItem, (SpiritShardsShopScreen * __this, SpiritShardType__Enum typ));
IL2CPP_REGISTER_METHOD(0x00D79790, void, OnPostTimeSlicedEnable, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D798A0, void, Init, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D79D60, void, OnInstantiate, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x002FBCC0, GameObject *, get_EffectTarget, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D7A820, Event_1 *, get_PurchaseCompleteSound, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D7A840, Event_1 *, get_PurchaseBeginSound, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D7A860, RTPC *, get_PurchaseRTPC, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D7A880, void, PurchaseUpdate, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D7AB30, bool, CanPurchase, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D7AF70, void, CompletePurchase, (SpiritShardsShopScreen * __this));
IL2CPP_REGISTER_METHOD(0x00D7B590, void, __ctor, (SpiritShardsShopScreen * __this));
}
