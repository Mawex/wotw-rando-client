using namespace app;

namespace app::methods::ValleyOfTheWindKuroGameplayController {
IL2CPP_REGISTER_METHOD(0x013B8420, void, Awake, (ValleyOfTheWindKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x013B85D0, void, OnDestroy, (ValleyOfTheWindKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x013B8780, void, OnGameSerializeLoad, (ValleyOfTheWindKuroGameplayController * __this));
IL2CPP_REGISTER_METHODINFO(0x047098F0, ValleyOfTheWindKuroGameplayController_OnGameSerializeLoad__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013B8790, void, FixedUpdate, (ValleyOfTheWindKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x00F83F60, bool, get_IsSuspended, (ValleyOfTheWindKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x00F83F70, void, set_IsSuspended, (ValleyOfTheWindKuroGameplayController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004C6660, SuspendableMask__Enum, get_Mask, (ValleyOfTheWindKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x013B8EF0, void, set_Mask, (ValleyOfTheWindKuroGameplayController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x013B8FA0, void, Serialize, (ValleyOfTheWindKuroGameplayController * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x013B8FD0, void, __ctor, (ValleyOfTheWindKuroGameplayController * __this));
}
