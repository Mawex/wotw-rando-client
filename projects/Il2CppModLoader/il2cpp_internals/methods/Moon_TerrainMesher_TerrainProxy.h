#include <interception_macros.h>

namespace app::methods::Moon::TerrainMesher_TerrainProxy {
IL2CPP_REGISTER_METHOD(0x0064EB90, Vector3, get_Bounds, (TerrainMesher_TerrainProxy * __this));
IL2CPP_REGISTER_METHOD(0x02567480, void, __ctor, (TerrainMesher_TerrainProxy * __this, Terrain * terrain));
IL2CPP_REGISTER_METHOD(0x025674A0, float, GetHeight, (TerrainMesher_TerrainProxy * __this, float x, float z));
IL2CPP_REGISTER_METHOD(0x02567500, Vector3, GetPointAt, (TerrainMesher_TerrainProxy * __this, float x, float z));
IL2CPP_REGISTER_METHOD(0x02567520, Vector3, GetPointBetween, (TerrainMesher_TerrainProxy * __this, Vector3 p0, Vector3 p1));
}
