#include <interception_macros.h>

namespace app::methods::MapmakerUIItem {
IL2CPP_REGISTER_METHOD(0x002FBB60, MapmakerItem *, get_Item, (MapmakerUIItem * __this));
IL2CPP_REGISTER_METHOD(0x00A0EC20, void, SetItemContext, (MapmakerUIItem * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00A0EE80, void, OnItemContextDirty, (MapmakerUIItem * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00A0F020, void, UpdateIconsFromShard, (MapmakerUIItem * __this, MapmakerItem * upgradeItem, bool initialize));
IL2CPP_REGISTER_METHOD(0x00A0F030, void, UpdateMapmakerItem, (MapmakerUIItem * __this, MapmakerItem * upgradeItem));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (MapmakerUIItem * __this));
}
