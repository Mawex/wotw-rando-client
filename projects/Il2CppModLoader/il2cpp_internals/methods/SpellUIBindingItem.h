using namespace app;

namespace app::methods::SpellUIBindingItem {
IL2CPP_REGISTER_METHOD(0x00944D80, void, Awake, (SpellUIBindingItem * __this));
IL2CPP_REGISTER_METHOD(0x00944F70, void, OnDestroy, (SpellUIBindingItem * __this));
IL2CPP_REGISTER_METHOD(0x00945170, void, OnBindingsUpdatedCallback, (SpellUIBindingItem * __this, SpellInventory_Binding__Enum binding));
IL2CPP_REGISTER_METHODINFO(0x04748A78, SpellUIBindingItem_OnBindingsUpdatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00945180, void, OnBindingsUpdated, (SpellUIBindingItem * __this, bool runOnChangedAction));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SpellUIBindingItem * __this));
}
