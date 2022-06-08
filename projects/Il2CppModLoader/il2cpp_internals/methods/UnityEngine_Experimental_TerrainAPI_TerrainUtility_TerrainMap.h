#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap {
IL2CPP_REGISTER_METHOD(0x031981E0, void, __ctor, (TerrainUtility_TerrainMap * __this));
IL2CPP_REGISTER_METHOD(0x03198350, Terrain_1 *, GetTerrain, (TerrainUtility_TerrainMap * __this, int32_t tileX, int32_t tileZ));
IL2CPP_REGISTER_METHOD(0x03198460, TerrainUtility_TerrainMap *, CreateFromPlacement, (Terrain_1 * originTerrain, TerrainUtility_TerrainMap_TerrainFilter * filter, bool fullValidation));
IL2CPP_REGISTER_METHOD(0x031988E0, TerrainUtility_TerrainMap *, CreateFromPlacement, (Vector2 gridOrigin, Vector2 gridSize, TerrainUtility_TerrainMap_TerrainFilter * filter, bool fullValidation));
IL2CPP_REGISTER_METHOD(0x03198D30, void, AddTerrainInternal, (TerrainUtility_TerrainMap * __this, int32_t x, int32_t z, Terrain_1 * terrain));
IL2CPP_REGISTER_METHOD(0x031990A0, bool, TryToAddTerrain, (TerrainUtility_TerrainMap * __this, int32_t tileX, int32_t tileZ, Terrain_1 * terrain));
IL2CPP_REGISTER_METHOD(0x03199210, void, ValidateTerrain, (TerrainUtility_TerrainMap * __this, int32_t tileX, int32_t tileZ));
IL2CPP_REGISTER_METHOD(0x03199F70, TerrainUtility_TerrainMap_ErrorCode__Enum, Validate, (TerrainUtility_TerrainMap * __this));
}
