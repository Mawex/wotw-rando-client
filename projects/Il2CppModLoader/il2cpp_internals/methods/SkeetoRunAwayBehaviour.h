#include <interception_macros.h>

namespace app::methods::SkeetoRunAwayBehaviour {
IL2CPP_REGISTER_METHOD(0x006AF270, SkeetoLocomotion *, get_Locomotion, (SkeetoRunAwayBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006AF350, bool, GetValidAnticipationPosition, (SkeetoRunAwayBehaviour * __this, Vector3 * refTarget));
IL2CPP_REGISTER_METHOD(0x006AF5A0, bool, TryGetValidAnticipationSidePosition, (SkeetoRunAwayBehaviour * __this, float sign, Vector3 * refTarget));
IL2CPP_REGISTER_METHOD(0x006AFB10, void, OnEnterApproach, (SkeetoRunAwayBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006AFC80, void, OnEnter, (SkeetoRunAwayBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006AFF50, bool, IsFacingTarget, (SkeetoRunAwayBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B00D0, BehaviourStatus__Enum, UpdateApproach, (SkeetoRunAwayBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B0610, void, OnExit, (SkeetoRunAwayBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006B0670, BehaviourStatus__Enum, OnExecute, (SkeetoRunAwayBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006B0680, void, __ctor, (SkeetoRunAwayBehaviour * __this));
}
