#include <interception_macros.h>

namespace app::methods::KwolokBossCleanWaterPhaseStartBehaviour {
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionFollowAllowed, (KwolokBossCleanWaterPhaseStartBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionStayAtRangeAllowed, (KwolokBossCleanWaterPhaseStartBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (KwolokBossCleanWaterPhaseStartBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01250E20, void, OnEntityInitialized, (KwolokBossCleanWaterPhaseStartBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01251070, void, OnEnter, (KwolokBossCleanWaterPhaseStartBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01251320, BehaviourStatus__Enum, OnExecute, (KwolokBossCleanWaterPhaseStartBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012513C0, void, OnExit, (KwolokBossCleanWaterPhaseStartBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01251660, void, RequestGoToCenter, (KwolokBossCleanWaterPhaseStartBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012517A0, void, ClearMoveRequest, (KwolokBossCleanWaterPhaseStartBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01251800, void, ModifyDesiredLookAngle, (KwolokBossCleanWaterPhaseStartBehaviour * __this, float * angle));
IL2CPP_REGISTER_METHODINFO(0x047206C0, KwolokBossCleanWaterPhaseStartBehaviour_ModifyDesiredLookAngle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01251810, void, ModifyBodyHeight, (KwolokBossCleanWaterPhaseStartBehaviour * __this, float * height));
IL2CPP_REGISTER_METHODINFO(0x0478E040, KwolokBossCleanWaterPhaseStartBehaviour_ModifyBodyHeight__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01251870, void, __ctor, (KwolokBossCleanWaterPhaseStartBehaviour * __this));
}
