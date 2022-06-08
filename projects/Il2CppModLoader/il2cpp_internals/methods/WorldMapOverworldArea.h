using namespace app;

namespace app::methods::WorldMapOverworldArea {
IL2CPP_REGISTER_METHOD(0x002FBBC0, CleverMenuItem *, get_CleverMenu, (WorldMapOverworldArea * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_CleverMenu, (WorldMapOverworldArea * __this, CleverMenuItem * value));
IL2CPP_REGISTER_METHOD(0x00583EC0, void, Awake, (WorldMapOverworldArea * __this));
IL2CPP_REGISTER_METHOD(0x00583FB0, bool, get_IsDiscovered, (WorldMapOverworldArea * __this));
IL2CPP_REGISTER_METHOD(0x00583FD0, Vector3, get_ScrollPosition, (WorldMapOverworldArea * __this));
IL2CPP_REGISTER_METHOD(0x005840B0, void, OnEnable, (WorldMapOverworldArea * __this));
IL2CPP_REGISTER_METHOD(0x00584220, void, UpdateBounds, (WorldMapOverworldArea * __this));
IL2CPP_REGISTER_METHOD(0x00584620, bool, ContainsPointUiSpace, (WorldMapOverworldArea * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x005846A0, bool, ContainsPointWorldSpace, (WorldMapOverworldArea * __this, Vector3 worldPoint));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (WorldMapOverworldArea * __this));
}
