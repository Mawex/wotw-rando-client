#include <interception_macros.h>

namespace app::methods::BushSetupController {
IL2CPP_REGISTER_METHOD(0x0081CD00, void, FixedUpdate, (BushSetupController * __this));
IL2CPP_REGISTER_METHOD(0x0081CD10, void, UpdateState, (BushSetupController * __this));
IL2CPP_REGISTER_METHOD(0x0081CF00, void, ChangeState, (BushSetupController * __this, BushSetupController_State__Enum state));
IL2CPP_REGISTER_METHOD(0x0081DA70, void, NoticeSeinOnAnimationEnd, (BushSetupController * __this));
IL2CPP_REGISTER_METHODINFO(0x0472FF58, BushSetupController_NoticeSeinOnAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0081DBF0, void, RockFallOnAnimatoinEnd, (BushSetupController * __this));
IL2CPP_REGISTER_METHODINFO(0x0478F978, BushSetupController_RockFallOnAnimatoinEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0081DD80, void, RockReachOnAnimatoinEnd, (BushSetupController * __this));
IL2CPP_REGISTER_METHODINFO(0x047459E0, BushSetupController_RockReachOnAnimatoinEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0081DD90, void, RockReachToLiftSeinOnAnimatoinEnd, (BushSetupController * __this));
IL2CPP_REGISTER_METHODINFO(0x04716B98, BushSetupController_RockReachToLiftSeinOnAnimatoinEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0081DDA0, void, LiftSeinToRockReachOnAnimatoinEnd, (BushSetupController * __this));
IL2CPP_REGISTER_METHODINFO(0x0477BA60, BushSetupController_LiftSeinToRockReachOnAnimatoinEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0081DD90, void, KneelingRockToLiftSeinOnAnimatoinEnd, (BushSetupController * __this));
IL2CPP_REGISTER_METHODINFO(0x04753C10, BushSetupController_KneelingRockToLiftSeinOnAnimatoinEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0081DDB0, void, PlayerCollisionTrigger, (BushSetupController * __this));
IL2CPP_REGISTER_METHOD(0x0081DFD0, void, NoticeSeinTrigger, (BushSetupController * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (BushSetupController * __this));
}
