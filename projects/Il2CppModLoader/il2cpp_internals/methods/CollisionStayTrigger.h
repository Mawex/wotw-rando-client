using namespace app;

namespace app::methods::CollisionStayTrigger {
IL2CPP_REGISTER_METHOD(0x012D1AA0, void, Awake, (CollisionStayTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (CollisionStayTrigger * __this));
IL2CPP_REGISTER_METHOD(0x012D1CB0, void, FixedUpdate, (CollisionStayTrigger * __this));
IL2CPP_REGISTER_METHOD(0x012D1E90, void, TurnOn, (CollisionStayTrigger * __this));
IL2CPP_REGISTER_METHOD(0x012D2210, void, TurnOff, (CollisionStayTrigger * __this));
IL2CPP_REGISTER_METHOD(0x012D2590, void, OnTriggerEnter, (CollisionStayTrigger * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x012D2670, void, OnTriggerExit, (CollisionStayTrigger * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x012D2730, void, __ctor, (CollisionStayTrigger * __this));
}
