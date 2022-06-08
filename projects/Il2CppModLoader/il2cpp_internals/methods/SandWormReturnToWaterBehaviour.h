#include <interception_macros.h>

namespace app::methods::SandWormReturnToWaterBehaviour {
IL2CPP_REGISTER_METHOD(0x00C22AF0, void, OnEntityInitialized, (SandWormReturnToWaterBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C22C10, bool, DoRaycastsForNewTargetPosition, (SandWormReturnToWaterBehaviour * __this, Vector2__Array * directionsToCheck, float targetPositionDepth));
IL2CPP_REGISTER_METHOD(0x00C231A0, void, OnEnter, (SandWormReturnToWaterBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C23600, bool, TryToFindNewTarget, (SandWormReturnToWaterBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C23E30, BehaviourStatus__Enum, OnExecute, (SandWormReturnToWaterBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (SandWormReturnToWaterBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C24430, void, Kill, (SandWormReturnToWaterBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C24610, bool, IsFullyInWater, (SandWormReturnToWaterBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C24850, bool, IsHeadTopInWater, (SandWormReturnToWaterBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C249A0, bool, IsFullOutsideWater, (SandWormReturnToWaterBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C24CC0, void, __ctor, (SandWormReturnToWaterBehaviour * __this));
}
