using namespace app;

namespace app::methods::DashOwlEnemy {
IL2CPP_REGISTER_METHOD(0x00DCD570, bool, CanBeOptimized, (DashOwlEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DCD5B0, void, Awake, (DashOwlEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DCFBC0, void, Start, (DashOwlEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00BE3440, void, FixedUpdate, (DashOwlEnemy * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashBounce, (DashOwlEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x047822B8, DashOwlEnemy_OnBashBounce__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A1FC00, bool, CurrentStateTimeGreaterThan, (DashOwlEnemy * __this, float duration));
IL2CPP_REGISTER_METHOD(0x00DCFC10, bool, NearPlayer, (DashOwlEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DCFC10, bool, PlayerInAggressiveRange, (DashOwlEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DCFC30, bool, PlayerOutsideAggressiveRange, (DashOwlEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DCFC60, bool, PlayerInDashRange, (DashOwlEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04723118, DashOwlEnemy_PlayerInDashRange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DCFD30, bool, IsWithinDistanceFromStartPosition, (DashOwlEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00DCFD90, bool, DamageTypeIsBash, (DashOwlEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04759E70, DashOwlEnemy_DamageTypeIsBash__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DCFEE0, bool, DamageTypeIsHurt, (DashOwlEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04756640, DashOwlEnemy_DamageTypeIsHurt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DD0030, void, __ctor, (DashOwlEnemy * __this));
IL2CPP_REGISTER_METHOD(0x004C40F0, bool, _Awake_b__8_1, (DashOwlEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04742CB8, DashOwlEnemy__Awake_b__8_1__MethodInfo);
}
