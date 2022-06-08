#include <interception_macros.h>

namespace app::methods::GroundMovingEntity {
IL2CPP_REGISTER_METHOD(0x00864A60, GroundEntityLocomotion *, get_GroundLocomotion, (GroundMovingEntity * __this));
IL2CPP_REGISTER_METHOD(0x01097610, void, HandleFootstepEvents, (GroundMovingEntity * __this));
IL2CPP_REGISTER_METHOD(0x010979D0, void, OnAwake, (GroundMovingEntity * __this));
IL2CPP_REGISTER_METHOD(0x01097AC0, void, OnFixedUpdate, (GroundMovingEntity * __this));
IL2CPP_REGISTER_METHOD(0x01097ED0, void, OnEnable, (GroundMovingEntity * __this));
IL2CPP_REGISTER_METHOD(0x01097FB0, bool, get_ShouldPlayFootsteps, (GroundMovingEntity * __this));
IL2CPP_REGISTER_METHOD(0x01098020, bool, TryGetPlatformMovement, (GroundMovingEntity * __this, CharacterPlatformMovement * * platformMovement));
IL2CPP_REGISTER_METHOD(0x01098030, void, OnCacheSerializedComponents, (GroundMovingEntity * __this));
IL2CPP_REGISTER_METHOD(0x010980D0, bool, get_TargetIsRunningAway, (GroundMovingEntity * __this));
IL2CPP_REGISTER_METHOD(0x01098310, void, __ctor, (GroundMovingEntity * __this));
}
