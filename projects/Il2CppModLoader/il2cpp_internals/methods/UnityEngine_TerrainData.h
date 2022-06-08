#include <interception_macros.h>

namespace app::methods::UnityEngine::TerrainData {
IL2CPP_REGISTER_METHOD(0x0319A460, void, __ctor, (TerrainData_1 * __this));
IL2CPP_REGISTER_METHOD(0x0319A550, int32_t, GetBoundaryValue, (TerrainData_BoundaryValueType__Enum type));
IL2CPP_REGISTER_METHOD(0x0319A5A0, void, Internal_Create, (TerrainData_1 * terrainData));
IL2CPP_REGISTER_METHOD(0x0319A5F0, Vector3, get_size, (TerrainData_1 * __this));
IL2CPP_REGISTER_METHOD(0x0319A670, float, GetAlphamapResolutionInternal, (TerrainData_1 * __this));
IL2CPP_REGISTER_METHOD(0x0319A6C0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x0319A9F0, void, get_size_Injected, (TerrainData_1 * __this, Vector3 * ret));
}
