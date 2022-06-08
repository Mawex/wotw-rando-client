#include <interception_macros.h>

namespace app::methods::LocomotionAirMoveTimelineBehaviour {
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetAnimationSpeed, (LocomotionAirMoveTimelineBehaviour * __this, float speed));
IL2CPP_REGISTER_METHOD(0x00FC4B60, void, PlayAnimation, (LocomotionAirMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC4E10, void, OnMovementStoppedPlaying, (LocomotionAirMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC4E40, void, OnEnterTask, (LocomotionAirMoveTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC4F90, void, OnExitTask, (LocomotionAirMoveTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC4FF0, void, OnTraversalSpeedChange, (LocomotionAirMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC5080, float, get_EffectiveMinSpeed, (LocomotionAirMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC50A0, float, get_EffectiveMaxSpeed, (LocomotionAirMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC4B30, void, __ctor, (LocomotionAirMoveTimelineBehaviour * __this));
}
