#include <interception_macros.h>

namespace app::methods::PlatformBehaviour {
IL2CPP_REGISTER_METHOD(0x01164D30, SurfaceMaterialType__Enum, get_WallSurfaceMaterialType, (PlatformBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01164DD0, SurfaceMaterialType__Enum, get_GroundSurfaceMaterialType, (PlatformBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01164F10, SurfaceMaterialType__Enum, get_CeilingSurfaceMaterialType, (PlatformBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01165040, bool, ShouldApplyForcesToGround, (PlatformBehaviour * __this, Rigidbody * rigidbody));
IL2CPP_REGISTER_METHOD(0x01165110, void, ApplyGroundForce, (PlatformBehaviour * __this, Vector3 force, ForceMode__Enum forceMode));
IL2CPP_REGISTER_METHOD(0x01165490, void, __ctor, (PlatformBehaviour * __this));
}
