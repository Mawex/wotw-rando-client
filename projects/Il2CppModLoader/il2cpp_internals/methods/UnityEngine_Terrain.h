using namespace app;

namespace app::methods::UnityEngine::Terrain {
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (Terrain_1 * __this));
IL2CPP_REGISTER_METHOD(0x0319A290, TerrainData_1 *, get_terrainData, (Terrain_1 * __this));
IL2CPP_REGISTER_METHOD(0x0319A2E0, bool, get_allowAutoConnect, (Terrain_1 * __this));
IL2CPP_REGISTER_METHOD(0x0319A330, int32_t, get_groupingID, (Terrain_1 * __this));
IL2CPP_REGISTER_METHOD(0x0319A380, void, SetNeighbors, (Terrain_1 * __this, Terrain_1 * left, Terrain_1 * top, Terrain_1 * right, Terrain_1 * bottom));
IL2CPP_REGISTER_METHOD(0x0319A410, Terrain_1__Array *, get_activeTerrains, (MethodInfo * method));
}
