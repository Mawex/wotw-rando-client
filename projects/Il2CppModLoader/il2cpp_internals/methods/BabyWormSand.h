using namespace app;

namespace app::methods::BabyWormSand {
IL2CPP_REGISTER_METHOD(0x00F7FED0, void, Awake, (BabyWormSand * __this));
IL2CPP_REGISTER_METHOD(0x00F7FEF0, void, OnPoolSpawned, (BabyWormSand * __this));
IL2CPP_REGISTER_METHOD(0x00F7FF00, void, ResetCollisionWithSandState, (BabyWormSand * __this));
IL2CPP_REGISTER_METHOD(0x00F80240, bool, DigEdgeZoneEdgeAhead, (BabyWormSand * __this));
IL2CPP_REGISTER_METHOD(0x00F80290, void, SetDigZoneIntersectingPoint, (BabyWormSand * __this, Vector3 center));
IL2CPP_REGISTER_METHOD(0x009C0FE0, bool, IsDigZoneValid, (BabyWormSand * __this));
IL2CPP_REGISTER_METHOD(0x00F80360, void, SpawnTrailEffect, (BabyWormSand * __this));
IL2CPP_REGISTER_METHOD(0x00F80580, void, RefreshTrailEffectPosition, (BabyWormSand * __this));
IL2CPP_REGISTER_METHOD(0x00F80880, void, StopTrailEffect, (BabyWormSand * __this, int32_t frameDelay));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplySpeedModifiers, (BabyWormSand * __this));
IL2CPP_REGISTER_METHOD(0x00F809A0, void, __ctor, (BabyWormSand * __this));
}
