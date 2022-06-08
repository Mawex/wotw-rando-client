using namespace app;

namespace app::methods::Game::Zones {
IL2CPP_REGISTER_METHOD(0x00687630, EnemyNoGoZone *, GetNoGoZoneAtPoint, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x006877E0, bool, IsInNoGoZone, (Vector3 position, bool includeNotLoadedPhysicSetups));
IL2CPP_REGISTER_METHOD(0x00687B10, bool, TryGetWaterZoneAtPoint, (Vector3 position, WaterZone * * foundWaterZone));
IL2CPP_REGISTER_METHOD(0x00687B40, WaterZone *, GetWaterZoneAtPoint, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x00687B70, bool, IsInWaterZone, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x00687BA0, bool, IsOverlapingWaterZone, (Rect rect));
IL2CPP_REGISTER_METHOD(0x00687D30, bool, TryGetDigZoneAtPoint, (Vector3 position, DigZone * * foundDigZone));
IL2CPP_REGISTER_METHOD(0x00687ED0, DigZone *, GetDigZoneAtPoint, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x00688060, bool, IsInDigZone, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x006881F0, DigZone *, GetDigZoneWithinCircle, (Vector3 center, float radius));
IL2CPP_REGISTER_METHOD(0x00688380, void, GetDigZonesWithinCircle, (List_1_DigZone_ * zones, Vector3 center, float radius));
IL2CPP_REGISTER_METHOD(0x00688560, void, GetWaterZonesWithinRect, (List_1_WaterZone_ * zones, Vector3 center, float size));
IL2CPP_REGISTER_METHOD(0x006887A0, void, GetDigZonesWithinCircle, (List_1_DigZone_ * zones, Vector3 center, float radius, float predictionTime));
IL2CPP_REGISTER_METHOD(0x00688AA0, bool, IsZoneTypeAtPoint, (Vector3 point, NavigationType__Enum zoneType));
IL2CPP_REGISTER_METHOD(0x00688CD0, NavigationType__Enum, GetZoneTypeAtPoint, (Vector3 point));
IL2CPP_REGISTER_METHOD(0x00688DD0, void, __cctor, (MethodInfo * method));
}
