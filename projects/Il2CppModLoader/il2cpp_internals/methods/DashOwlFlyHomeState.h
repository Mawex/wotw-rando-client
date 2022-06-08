using namespace app;

namespace app::methods::DashOwlFlyHomeState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (DashOwlFlyHomeState * __this, DashOwlEnemy * dashOwl));
IL2CPP_REGISTER_METHOD(0x00DD0A00, bool, IsHome, (DashOwlFlyHomeState * __this));
IL2CPP_REGISTER_METHODINFO(0x0476FF58, DashOwlFlyHomeState_IsHome__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DD0A50, void, UpdateState, (DashOwlFlyHomeState * __this));
IL2CPP_REGISTER_METHOD(0x00DD0E10, void, OnEnter, (DashOwlFlyHomeState * __this));
IL2CPP_REGISTER_METHOD(0x00DD10F0, void, OnExit, (DashOwlFlyHomeState * __this));
}
