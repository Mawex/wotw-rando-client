#include <interception_macros.h>

namespace app::methods::KwolokBossDryPhaseStartBehaviour {
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionFollowAllowed, (KwolokBossDryPhaseStartBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionStayAtRangeAllowed, (KwolokBossDryPhaseStartBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (KwolokBossDryPhaseStartBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012D6580, void, OnEnter, (KwolokBossDryPhaseStartBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012D6A10, BehaviourStatus__Enum, OnExecute, (KwolokBossDryPhaseStartBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012D6AB0, void, OnExit, (KwolokBossDryPhaseStartBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012D6DA0, void, RequestGoToCenter, (KwolokBossDryPhaseStartBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012D6EE0, void, ClearMoveRequest, (KwolokBossDryPhaseStartBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012D6F40, void, ModifyBodyHeight, (KwolokBossDryPhaseStartBehaviour * __this, float * height));
IL2CPP_REGISTER_METHODINFO(0x04707D98, KwolokBossDryPhaseStartBehaviour_ModifyBodyHeight__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012D6F50, void, ModifyLookAngle, (KwolokBossDryPhaseStartBehaviour * __this, float * angle));
IL2CPP_REGISTER_METHODINFO(0x04778728, KwolokBossDryPhaseStartBehaviour_ModifyLookAngle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012D6F70, void, __ctor, (KwolokBossDryPhaseStartBehaviour * __this));
}
