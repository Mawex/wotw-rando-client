#include <interception_macros.h>

namespace app::methods::ShopkeeperUIItem {
IL2CPP_REGISTER_METHOD(0x002FBB60, ShopkeeperItem *, get_Item, (ShopkeeperUIItem * __this));
IL2CPP_REGISTER_METHOD(0x005C2B70, void, SetItemContext, (ShopkeeperUIItem * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x005C2D30, void, OnItemContextDirty, (ShopkeeperUIItem * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x005C2ED0, void, UpdateIcons, (ShopkeeperUIItem * __this, ShopkeeperItem * upgradeItem, bool initialize));
IL2CPP_REGISTER_METHOD(0x005C2EE0, void, UpdateItem, (ShopkeeperUIItem * __this, ShopkeeperItem * upgradeItem));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ShopkeeperUIItem * __this));
}
