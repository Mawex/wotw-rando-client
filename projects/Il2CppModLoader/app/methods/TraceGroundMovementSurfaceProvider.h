#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TraceGroundMovementSurfaceProvider {
    IL2CPP_REGISTER_METHOD(0x00B02010, app::SurfaceMaterialType__Enum, GetSurfaceType, (app::TraceGroundMovementSurfaceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TraceGroundMovementSurfaceProvider * this_ptr))
}
