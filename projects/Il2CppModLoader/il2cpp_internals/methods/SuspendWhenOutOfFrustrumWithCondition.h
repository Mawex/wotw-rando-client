using namespace app;

namespace app::methods::SuspendWhenOutOfFrustrumWithCondition {
IL2CPP_REGISTER_METHOD(0x006753C0, bool, get_IsBlockedFromSuspending, (SuspendWhenOutOfFrustrumWithCondition * __this));
IL2CPP_REGISTER_METHOD(0x00675450, void, AddLock, (SuspendWhenOutOfFrustrumWithCondition * __this, Object_1 * lockingObject));
IL2CPP_REGISTER_METHOD(0x00675500, void, ReleaseLock, (SuspendWhenOutOfFrustrumWithCondition * __this, Object_1 * lockingObject));
IL2CPP_REGISTER_METHOD(0x006755A0, void, ReleaseAllLocks, (SuspendWhenOutOfFrustrumWithCondition * __this));
IL2CPP_REGISTER_METHOD(0x00675670, void, OnFrustumExit, (SuspendWhenOutOfFrustrumWithCondition * __this));
IL2CPP_REGISTER_METHOD(0x006757D0, void, __ctor, (SuspendWhenOutOfFrustrumWithCondition * __this));
}
