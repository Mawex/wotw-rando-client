using namespace app;

namespace app::methods::DashOwlState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (DashOwlState * __this, DashOwlEnemy * dashOwl));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (DashOwlState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (DashOwlState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (DashOwlState * __this));
IL2CPP_REGISTER_METHOD(0x0058F9C0, float, get_CurrentStateTime, (DashOwlState * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (DashOwlState * __this));
}
