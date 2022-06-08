using namespace app;

namespace app::methods::DrillZone {
IL2CPP_REGISTER_METHOD(0x00BDBE30, Collider *, get_GetCollider, (DrillZone * __this));
IL2CPP_REGISTER_METHOD(0x00BDBF00, void, Awake, (DrillZone * __this));
IL2CPP_REGISTER_METHOD(0x00BDC150, void, OnDestroy, (DrillZone * __this));
IL2CPP_REGISTER_METHOD(0x00BDC210, void, Update, (DrillZone * __this));
IL2CPP_REGISTER_METHOD(0x00BDC2C0, void, StartDrill, (DrillZone * __this, GameObject * entity, SeinDrill * drillAbility));
IL2CPP_REGISTER_METHOD(0x00BDC6E0, void, StopDrill, (DrillZone * __this, GameObject * entity, SeinDrill * drillAbility));
IL2CPP_REGISTER_METHOD(0x00BDC9B0, void, StartIgnoringColliders, (DrillZone * __this, GameObject * entity));
IL2CPP_REGISTER_METHOD(0x00BDCB10, void, StopIgnoringColliders, (DrillZone * __this));
IL2CPP_REGISTER_METHOD(0x00BDCCA0, bool, IsDrilled, (DrillZone * __this));
IL2CPP_REGISTER_METHOD(0x00BDCCC0, bool, HasDrillAbility, (DrillZone * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsCircleOverlapping, (DrillZone * __this, Vector3 center, float radius));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReleaseEvent, (DrillZone * __this));
IL2CPP_REGISTER_METHODINFO(0x0473E878, DrillZone_OnReleaseEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BDCD80, void, __ctor, (DrillZone * __this));
}
