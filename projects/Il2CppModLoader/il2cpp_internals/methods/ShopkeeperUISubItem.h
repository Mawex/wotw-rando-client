using namespace app;

namespace app::methods::ShopkeeperUISubItem {
IL2CPP_REGISTER_METHOD(0x005C3260, void, Update, (ShopkeeperUISubItem * __this));
IL2CPP_REGISTER_METHOD(0x005C3270, void, SetItemContext, (ShopkeeperUISubItem * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x005C3260, void, OnItemContextDirty, (ShopkeeperUISubItem * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x005C3310, void, SetItem, (ShopkeeperUISubItem * __this, ShopkeeperItem * upgradeItem, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x005C3320, void, UpdateIcon, (ShopkeeperUISubItem * __this));
IL2CPP_REGISTER_METHOD(0x005C3260, void, UpdateUpgradeItemProperties, (ShopkeeperUISubItem * __this, Object * gridContext, bool initialize));
IL2CPP_REGISTER_METHOD(0x005C3410, void, UpdateItem, (ShopkeeperUISubItem * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ShopkeeperUISubItem * __this));
}
