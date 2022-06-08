using namespace app;

namespace app::methods::Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation {
IL2CPP_REGISTER_METHOD(0x00F35560, int64_t, get_Size, (PlayerUberStateAreaMapInformation * __this));
IL2CPP_REGISTER_METHOD(0x00F35710, void, Save, (PlayerUberStateAreaMapInformation * __this, UberStateArchive * archive, PlayerUberStateAreaMapInformation * mapInfo));
IL2CPP_REGISTER_METHOD(0x00F35A50, void, Load, (PlayerUberStateAreaMapInformation * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x00F35DC0, void, __ctor, (PlayerUberStateAreaMapInformation * __this, PlayerUberStateDescriptor * desc, Action * dirtyCallBack));
IL2CPP_REGISTER_METHOD(0x00F363F0, void, InitializeMap, (PlayerUberStateAreaMapInformation * __this, PlayerUberStateDescriptor * desc));
IL2CPP_REGISTER_METHOD(0x00F36600, void, OnGui, (PlayerUberStateAreaMapInformation * __this, NavigableOnGUI * gui));
IL2CPP_REGISTER_METHOD(0x00F366D0, void, RunSetDirtyCallback, (PlayerUberStateAreaMapInformation * __this));
IL2CPP_REGISTER_METHOD(0x00F36860, WorldMapAreaState__Enum, GetAreaState, (PlayerUberStateAreaMapInformation * __this, GameWorldAreaID__Enum areaID, int32_t index));
IL2CPP_REGISTER_METHOD(0x00F369E0, void, SetAreaState, (PlayerUberStateAreaMapInformation * __this, GameWorldAreaID__Enum areaID, int32_t index, WorldMapAreaState__Enum state, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00F36E40, Dictionary_2_System_Int32_WorldMapAreaState_ *, GetAreaStates, (PlayerUberStateAreaMapInformation * __this, GameWorldAreaID__Enum areaID));
IL2CPP_REGISTER_METHOD(0x00F36EE0, void, AddTrailPoint, (PlayerUberStateAreaMapInformation * __this, Vector2 point, int32_t time));
IL2CPP_REGISTER_METHOD(0x00F371E0, bool, IsWithinMapTrailEntryBounds, (PlayerUberStateAreaMapInformation * __this, PlayerUberStateAreaMapInformation_MapTrailEntry * entry, Vector2 point));
IL2CPP_REGISTER_METHOD(0x00F37270, PlayerUberStateAreaMapInformation_MapTrailEntry *, GetTrailEntryContainingPoint, (PlayerUberStateAreaMapInformation * __this, Vector2 point, int32_t * index));
IL2CPP_REGISTER_METHOD(0x002FB930, List_1_Moon_uberSerializationWisp_PlayerUberStateAreaMapInformation_MapTrailEntry_ *, GetTrailPoints, (PlayerUberStateAreaMapInformation * __this));
IL2CPP_REGISTER_METHOD(0x00F37410, void, Initialize, (PlayerUberStateAreaMapInformation * __this, GameWorldArea * area));
IL2CPP_REGISTER_METHOD(0x00F377D0, void, Reset, (PlayerUberStateAreaMapInformation * __this, GameWorldArea * area));
}
