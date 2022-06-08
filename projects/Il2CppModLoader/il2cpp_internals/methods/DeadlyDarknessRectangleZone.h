using namespace app;

namespace app::methods::DeadlyDarknessRectangleZone {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSerialize, (DeadlyDarknessRectangleZone * __this));
IL2CPP_REGISTER_METHOD(0x00DDC750, bool, PointInsideDeadlyDarkness, (Vector3 point));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnZoneUpdate, (DeadlyDarknessRectangleZone * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00DDC930, void, OnEnableRuntime, (DeadlyDarknessRectangleZone * __this));
IL2CPP_REGISTER_METHOD(0x00DDC9F0, void, OnDisableRuntime, (DeadlyDarknessRectangleZone * __this));
IL2CPP_REGISTER_METHOD(0x0043BB90, void, __ctor, (DeadlyDarknessRectangleZone * __this));
}
