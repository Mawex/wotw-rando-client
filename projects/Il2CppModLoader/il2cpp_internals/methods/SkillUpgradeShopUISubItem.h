#include <interception_macros.h>

namespace app::methods::SkillUpgradeShopUISubItem {
IL2CPP_REGISTER_METHOD(0x006BC4D0, void, Update, (SkillUpgradeShopUISubItem * __this));
IL2CPP_REGISTER_METHOD(0x006BC4E0, void, SetItemContext, (SkillUpgradeShopUISubItem * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x006BC4D0, void, OnItemContextDirty, (SkillUpgradeShopUISubItem * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x006BC5C0, void, SetUpgradeItem, (SkillUpgradeShopUISubItem * __this, UpgradeAbilityItem * upgradeItem, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x006BC6B0, void, UpdateUpgradeIcon, (SkillUpgradeShopUISubItem * __this));
IL2CPP_REGISTER_METHOD(0x006BC4D0, void, UpdateUpgradeItemProperties, (SkillUpgradeShopUISubItem * __this, Object * gridContext, bool initialize));
IL2CPP_REGISTER_METHOD(0x006BC790, void, UpdateUpgradeItem, (SkillUpgradeShopUISubItem * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SkillUpgradeShopUISubItem * __this));
}
