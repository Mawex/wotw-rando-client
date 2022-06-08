using namespace app;

namespace app::methods::MapmakerUISubItem {
IL2CPP_REGISTER_METHOD(0x00A0F4A0, void, Update, (MapmakerUISubItem * __this));
IL2CPP_REGISTER_METHOD(0x00A0F4B0, void, SetItemContext, (MapmakerUISubItem * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00A0F4A0, void, OnItemContextDirty, (MapmakerUISubItem * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00A0F590, void, SetUpgradeItem, (MapmakerUISubItem * __this, MapmakerItem * upgradeItem, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00A0F680, void, UpdateUpgradeIcon, (MapmakerUISubItem * __this));
IL2CPP_REGISTER_METHOD(0x00A0F4A0, void, UpdateUpgradeItemProperties, (MapmakerUISubItem * __this, Object * gridContext, bool initialize));
IL2CPP_REGISTER_METHOD(0x00A0F760, void, UpdateItem, (MapmakerUISubItem * __this));
IL2CPP_REGISTER_METHOD(0x00A0FD30, void, __ctor, (MapmakerUISubItem * __this));
}
