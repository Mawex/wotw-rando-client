#include <interception_macros.h>

namespace app::methods::MovingPlatformController {
IL2CPP_REGISTER_METHOD(0x0086D7E0, void, Awake, (MovingPlatformController * __this));
IL2CPP_REGISTER_METHOD(0x0086D7F0, void, OnEnable, (MovingPlatformController * __this));
IL2CPP_REGISTER_METHOD(0x0086DBD0, void, OnDisable, (MovingPlatformController * __this));
IL2CPP_REGISTER_METHOD(0x0086DFB0, void, ActivateSmushDamageDealers, (MovingPlatformController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0086E0B0, void, ActivatePlatformColliders, (MovingPlatformController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0086E2E0, void, EnablePlatformColliders, (MovingPlatformController * __this));
IL2CPP_REGISTER_METHODINFO(0x0470FB28, MovingPlatformController_EnablePlatformColliders__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0086E2F0, void, IgnoreCollisionWithObject, (MovingPlatformController * __this, Collider * other, bool value));
IL2CPP_REGISTER_METHOD(0x0086E4D0, void, OnSmushOri, (MovingPlatformController * __this, DamageDealer * dealer, DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x04725398, MovingPlatformController_OnSmushOri__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0086E8D0, bool, CanEnablePlatforms, (MovingPlatformController * __this));
IL2CPP_REGISTER_METHODINFO(0x0474F060, MovingPlatformController_CanEnablePlatforms__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0086E980, void, FillUpData, (MovingPlatformController * __this));
IL2CPP_REGISTER_METHOD(0x0086F440, void, CopyCollidersToRig, (MovingPlatformController * __this));
IL2CPP_REGISTER_METHOD(0x0086F640, void, Project, (MovingPlatformController * __this, Transform * onRig, Transform * proj, bool instant));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetBottonColliderToTrigger, (MovingPlatformController * __this));
IL2CPP_REGISTER_METHODINFO(0x0477F140, MovingPlatformController_SetBottonColliderToTrigger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetBottonColliderToNotTrigger, (MovingPlatformController * __this));
IL2CPP_REGISTER_METHODINFO(0x047318D8, MovingPlatformController_SetBottonColliderToNotTrigger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0086FB00, void, FixedUpdate, (MovingPlatformController * __this));
IL2CPP_REGISTER_METHOD(0x00870100, void, __ctor, (MovingPlatformController * __this));
IL2CPP_REGISTER_METHOD(0x00870410, bool, _FillUpData_b__32_0, (MovingPlatformController * __this, Collider * c));
IL2CPP_REGISTER_METHODINFO(0x0474B5B8, MovingPlatformController__FillUpData_b__32_0__MethodInfo);
}
