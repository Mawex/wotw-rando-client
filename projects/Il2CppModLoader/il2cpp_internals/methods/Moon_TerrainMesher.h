using namespace app;

namespace app::methods::Moon::TerrainMesher {
IL2CPP_REGISTER_METHOD(0x025669C0, void, ProcessTerrain, (TerrainMesherData data));
IL2CPP_REGISTER_METHOD(0x02566A30, void, SubDivide, (Stack_1_UnityEngine_Vector3_ * vertices, TerrainMesher_TerrainProxy * terrain, TerrainMesherSettings settings, int32_t subdivisionCount, IRng * rng));
IL2CPP_REGISTER_METHOD(0x02566B80, bool, ShouldSubdivide, (Vector3 a, Vector3 b, Vector3 c, TerrainMesher_TerrainProxy * terrain, TerrainMesherSettings settings, IRng * rng));
IL2CPP_REGISTER_METHOD(0x02566EA0, Vector3, RandomPointInsideTriangle, (Vector3 a, Vector3 b, Vector3 c, IRng * rng));
IL2CPP_REGISTER_METHOD(0x025672F0, Vector2, UniformSampleTriangle, (Vector2 u));
}
