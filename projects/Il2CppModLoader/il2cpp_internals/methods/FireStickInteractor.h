#include <interception_macros.h>

namespace app::methods::FireStickInteractor {
IL2CPP_REGISTER_METHOD(0x0125C150, void, OnEnable, (FireStickInteractor * __this));
IL2CPP_REGISTER_METHOD(0x0125C1E0, void, OnDisable, (FireStickInteractor * __this));
IL2CPP_REGISTER_METHOD(0x0125C270, void, OnTriggerEnter, (FireStickInteractor * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x0125C500, void, OnTriggerExit, (FireStickInteractor * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x0125C6D0, void, OnUsed, (FireStickInteractor * __this));
IL2CPP_REGISTER_METHODINFO(0x0478A618, FireStickInteractor_OnUsed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0125C7A0, FireStick *, GetFireStick, (FireStickInteractor * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x0125C980, void, ShowMessage, (FireStickInteractor * __this));
IL2CPP_REGISTER_METHOD(0x0125CB70, String *, get_StressTestName, (FireStickInteractor * __this));
IL2CPP_REGISTER_METHOD(0x0125CBF0, void, StartStressTest, (FireStickInteractor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, (FireStickInteractor * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (FireStickInteractor * __this));
IL2CPP_REGISTER_METHOD(0x002FD490, StressTestStatus__Enum, get_StressTestStatus, (FireStickInteractor * __this));
IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_StressTestStatus, (FireStickInteractor * __this, StressTestStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x0125CCD0, bool, get_CanExecuteStressTest, (FireStickInteractor * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (FireStickInteractor * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (FireStickInteractor * __this));
}
