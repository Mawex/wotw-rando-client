#include <interception_macros.h>

namespace app::methods::AreaMapIconManager {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (AreaMapIconManager * __this));
IL2CPP_REGISTER_METHOD(0x0050D8B0, MessageProvider *, GetCurrentFilterMessageProvider, (AreaMapIconManager * __this));
IL2CPP_REGISTER_METHOD(0x0050D920, void, ShowAreaIcons, (AreaMapIconManager * __this));
IL2CPP_REGISTER_METHOD(0x0050DC30, bool, IsIconShownByFilter, (WorldMapIconType__Enum icon, AreaMapIconFilter__Enum filter));
IL2CPP_REGISTER_METHOD(0x0050DCE0, void, UpdateLabelState, (AreaMapIconManager * __this));
IL2CPP_REGISTER_METHOD(0x0050DF70, GameObject *, GetIcon, (AreaMapIconManager * __this, WorldMapIconType__Enum iconType));
IL2CPP_REGISTER_METHOD(0x0050E8C0, void, HideNonTeleportIcons, (AreaMapIconManager * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (AreaMapIconManager * __this));
}
