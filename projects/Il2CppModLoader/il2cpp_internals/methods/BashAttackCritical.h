using namespace app;

namespace app::methods::BashAttackCritical {
IL2CPP_REGISTER_METHOD(0x00F8CC30, void, OnPoolSpawned, (BashAttackCritical * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (BashAttackCritical * __this));
IL2CPP_REGISTER_METHOD(0x00F8CC40, void, ChangeState, (BashAttackCritical * __this, BashAttackCritical_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F8CC50, void, UpdateState, (BashAttackCritical * __this));
IL2CPP_REGISTER_METHOD(0x00F8CCF0, void, UpdateFailedState, (BashAttackCritical * __this));
IL2CPP_REGISTER_METHOD(0x00F8CEE0, void, UpdateCriticalState, (BashAttackCritical * __this));
IL2CPP_REGISTER_METHOD(0x00F8D210, void, UpdateChargingState, (BashAttackCritical * __this));
IL2CPP_REGISTER_METHOD(0x00F8D420, void, Awake, (BashAttackCritical * __this));
IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_IsSuspended, (BashAttackCritical * __this));
IL2CPP_REGISTER_METHOD(0x004F2330, void, set_IsSuspended, (BashAttackCritical * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F8D510, void, FixedUpdate, (BashAttackCritical * __this));
IL2CPP_REGISTER_METHOD(0x00F8D5C0, void, __ctor, (BashAttackCritical * __this));
}
