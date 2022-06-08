using namespace app;

namespace app::methods::WaterZone {
IL2CPP_REGISTER_METHOD(0x008E5E60, void, OnValidate, (WaterZone * __this));
IL2CPP_REGISTER_METHOD(0x008E5E80, void, OnEnable, (WaterZone * __this));
IL2CPP_REGISTER_METHOD(0x008E5F90, bool, PositionInWater, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x008E6130, bool, OverlapingWater, (Rect rect));
IL2CPP_REGISTER_METHOD(0x008E62C0, Vector2, GetPositionClosestToWaterZone, (Vector2 position));
IL2CPP_REGISTER_METHOD(0x008E6540, bool, TryGetWaterZone, (Vector3 position, WaterZone * * foundWaterZone));
IL2CPP_REGISTER_METHOD(0x008E6700, WaterZone *, GetWaterZone, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x008E68A0, bool, IsInWaterZone, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x00687BA0, bool, IsOverlapingWaterZone, (Rect rect));
IL2CPP_REGISTER_METHOD(0x008E6A40, void, OnDisable, (WaterZone * __this));
IL2CPP_REGISTER_METHOD(0x008E6B00, Vector2, GetVelocityAtPoint, (WaterZone * __this, Vector2 point));
IL2CPP_REGISTER_METHOD(0x008E6B20, bool, Contains, (WaterZone * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x008E6B70, bool, Overlaps, (WaterZone * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (WaterZone * __this, Vector2 position, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (WaterZone * __this, Vector2 position, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x008E6BD0, void, FixedUpdate, (WaterZone * __this));
IL2CPP_REGISTER_METHOD(0x008E6F70, void, RefreshBounds, (WaterZone * __this));
IL2CPP_REGISTER_METHOD(0x008E77B0, NavigationType__Enum, AreaType, (WaterZone * __this));
IL2CPP_REGISTER_METHOD(0x008E77C0, bool, ContainsPoint, (WaterZone * __this, Vector2 point));
IL2CPP_REGISTER_METHOD(0x008E78A0, Vector2, ClosestPoint, (WaterZone * __this, Vector2 point));
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (WaterZone * __this));
IL2CPP_REGISTER_METHOD(0x008E79B0, void, __ctor, (WaterZone * __this));
}
