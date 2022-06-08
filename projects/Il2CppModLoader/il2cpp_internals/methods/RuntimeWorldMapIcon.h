#include <interception_macros.h>

namespace app::methods::RuntimeWorldMapIcon {
IL2CPP_REGISTER_METHOD(0x00C058E0, void, __ctor, (RuntimeWorldMapIcon * __this, GameWorldArea_WorldMapIcon * icon, RuntimeGameWorldArea * area));
IL2CPP_REGISTER_METHOD(0x00C05AD0, bool, IsVisible, (RuntimeWorldMapIcon * __this, AreaMapUI * areaMap));
IL2CPP_REGISTER_METHOD(0x00C05FB0, void, Show, (RuntimeWorldMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x00C06AF0, bool, IsStateOrConditionMet, (RuntimeWorldMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x00C06C20, void, Hide, (RuntimeWorldMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x00C06D20, void, UpdateLabelState, (RuntimeWorldMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x00C07020, bool, IsMapmakerPinPurchased, (RuntimeWorldMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x00C073B0, bool, IsOfDiscoverableType, (RuntimeWorldMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x00C073E0, bool, IsTeleportType, (RuntimeWorldMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x00C073F0, bool, IsNPCType, (RuntimeWorldMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x00C07410, void, SetAttentionMarker, (RuntimeWorldMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x00C07540, bool, CanBeTeleportedTo, (RuntimeWorldMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x00C07660, void, SetIconActiveMode, (RuntimeWorldMapIcon * __this, bool active));
IL2CPP_REGISTER_METHOD(0x00C07760, void, SetIconSpecialMode, (RuntimeWorldMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x00C07830, bool, IsIconActive, (RuntimeWorldMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x00C07950, void, SetIcon, (RuntimeWorldMapIcon * __this, WorldMapIconType__Enum icon));
}
