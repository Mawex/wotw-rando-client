#pragma once
#include <interception_macros.h>

namespace app::methods::PlatformBehaviour {
    IL2CPP_REGISTER_METHOD(0x01164D30, app::SurfaceMaterialType__Enum, get_WallSurfaceMaterialType, (app::PlatformBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01164DD0, app::SurfaceMaterialType__Enum, get_GroundSurfaceMaterialType, (app::PlatformBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01164F10, app::SurfaceMaterialType__Enum, get_CeilingSurfaceMaterialType, (app::PlatformBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01165040, bool, ShouldApplyForcesToGround, (app::PlatformBehaviour * this_ptr, app::Rigidbody * rigidbody))
    IL2CPP_REGISTER_METHOD(0x01165110, void, ApplyGroundForce, (app::PlatformBehaviour * this_ptr, app::Vector3 force, app::ForceMode__Enum force_mode))
    IL2CPP_REGISTER_METHOD(0x01165490, void, ctor, (app::PlatformBehaviour * this_ptr))
}
