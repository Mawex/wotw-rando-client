using namespace app;

namespace app::methods::Moon::SimpleGroundNavigation {
IL2CPP_REGISTER_METHOD(0x00E27620, void, Awake, (SimpleGroundNavigation * __this));
IL2CPP_REGISTER_METHOD(0x00E27820, void, FixedUpdate, (SimpleGroundNavigation * __this));
IL2CPP_REGISTER_METHOD(0x00E278A0, Vector3, Navigate, (SimpleGroundNavigation * __this, Vector3 target, Vector3 * nextMovePoint));
IL2CPP_REGISTER_METHOD(0x00E29C40, bool, CanJumpTo, (SimpleGroundNavigation * __this, Vector3 jumpPosition));
IL2CPP_REGISTER_METHOD(0x00E2A5C0, void, __ctor, (SimpleGroundNavigation * __this));
}
