#include <interception_macros.h>

namespace app::methods::AreaMapUI {
IL2CPP_REGISTER_METHOD(0x002FBCE0, GameObject *, get_PlayerPositionMarker, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_PlayerPositionMarker, (AreaMapUI * __this, GameObject * value));
IL2CPP_REGISTER_METHOD(0x002FBD00, GameObject *, get_SoulFlamePositionMarker, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_SoulFlamePositionMarker, (AreaMapUI * __this, GameObject * value));
IL2CPP_REGISTER_METHOD(0x002FBD20, AreaMapDebugNavigation *, get_DebugNavigation, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_DebugNavigation, (AreaMapUI * __this, AreaMapDebugNavigation * value));
IL2CPP_REGISTER_METHOD(0x002FBD40, AreaMapNavigation *, get_Navigation, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x002FBD50, void, set_Navigation, (AreaMapUI * __this, AreaMapNavigation * value));
IL2CPP_REGISTER_METHOD(0x002FBD60, AreaMapIconManager *, get_IconManager, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_IconManager, (AreaMapUI * __this, AreaMapIconManager * value));
IL2CPP_REGISTER_METHOD(0x00660430, IconPlacementScaler *, get_IconScaler, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x00660440, void, set_IconScaler, (AreaMapUI * __this, IconPlacementScaler * value));
IL2CPP_REGISTER_METHOD(0x0083AEA0, AreaMapIconFilter__Enum, get_IconFilter, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083AEC0, void, set_IconFilter, (AreaMapUI * __this, AreaMapIconFilter__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBC20, Transform *, get_FadeOutGroup, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083B000, void, Hide, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083B2A0, void, Show, (AreaMapUI * __this, bool setMenuAudioState));
IL2CPP_REGISTER_METHOD(0x0083B440, void, AllowResetMaps, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083B450, void, ResetImmediatelyNextTime, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083B460, void, ResetMaps, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083B720, void, Awake, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083B7F0, void, OnDestroy, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083B8B0, AreaMapCanvas *, FindCanvas, (AreaMapUI * __this, GameWorldArea * area));
IL2CPP_REGISTER_METHOD(0x0083BAF0, void, Init, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083C080, void, UpdateTrail, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083C9D0, void, PlaceDot, (AreaMapUI * __this, int32_t dotIndex, int32_t timeSinceCreation, Vector2 point));
IL2CPP_REGISTER_METHOD(0x0083CF30, void, FixedUpdate, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083D580, void, LateUpdate, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083D6C0, void, UpdateCurrentArea, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083D9D0, Vector3, get_PlayerMarkerWorldPosition, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083DC60, Vector3, get_SoulFlameMarkerWorldPosition, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083DE90, void, UpdateAllIconPositions, (AreaMapUI * __this, bool forceUpdate));
IL2CPP_REGISTER_METHOD(0x0083DF30, void, UpdatePlayerPositionMarker, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083E210, void, UpdateSoulFlamePositionMarker, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083E520, void, CycleFilter, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083E560, MessageProvider *, GetFilterMessage, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083E5E0, void, OnIconFilterChange, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083E700, void, AddIcon, (AreaMapUI * __this, GameObject * icon, Vector3 location, bool convert, bool isTeleportable));
IL2CPP_REGISTER_METHOD(0x0083E8A0, bool, get_IsSuspended, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083E8B0, void, set_IsSuspended, (AreaMapUI * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0083E8C0, SuspendableMask__Enum, get_Mask, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083E8D0, void, set_Mask, (AreaMapUI * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0083E990, void, OnPostTimeSlicedEnable, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083EA60, void, OnInstantiate, (AreaMapUI * __this));
IL2CPP_REGISTER_METHOD(0x0083EDB0, void, __ctor, (AreaMapUI * __this));
}
