using namespace app;

namespace app::methods::TerrainTracer {
IL2CPP_REGISTER_METHOD(0x010D85E0, void, Init, (TerrainTracer * __this, PlatformMovement * plataformMovement, Transform * origin));
IL2CPP_REGISTER_METHOD(0x010D8610, bool, SafeAreaAhead, (TerrainTracer * __this, bool isFacingLeft));
IL2CPP_REGISTER_METHOD(0x010D8DC0, bool, GroundExistsBellowPoint, (TerrainTracer * __this, Vector3 point, float maxDistance));
IL2CPP_REGISTER_METHOD(0x010D8F40, bool, IsNormalForGround, (TerrainTracer * __this, Vector3 normal));
IL2CPP_REGISTER_METHOD(0x010D9030, void, __ctor, (TerrainTracer * __this));
}
