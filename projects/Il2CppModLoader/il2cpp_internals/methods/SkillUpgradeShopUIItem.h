using namespace app;

namespace app::methods::SkillUpgradeShopUIItem {
IL2CPP_REGISTER_METHOD(0x002FBB40, UpgradeAbilityItem *, get_UpgradeItem, (SkillUpgradeShopUIItem * __this));
IL2CPP_REGISTER_METHOD(0x006BBCE0, void, SetItemContext, (SkillUpgradeShopUIItem * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x006BBF00, void, OnItemContextDirty, (SkillUpgradeShopUIItem * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x006BC050, void, UpdateIconsFromShard, (SkillUpgradeShopUIItem * __this, UpgradeAbilityItem * upgradeItem, bool initialize));
IL2CPP_REGISTER_METHOD(0x006BC060, void, UpdateShard, (SkillUpgradeShopUIItem * __this, UpgradeAbilityItem * upgradeItem));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SkillUpgradeShopUIItem * __this));
}
