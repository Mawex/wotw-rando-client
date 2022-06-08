#include <interception_macros.h>

namespace app::methods::SurfaceMaterialTimelinePlayer {
IL2CPP_REGISTER_METHOD(0x00672AD0, void, Update, (SurfaceMaterialTimelinePlayer * __this, bool isMoving));
IL2CPP_REGISTER_METHOD(0x00672BD0, void, Update, (SurfaceMaterialTimelinePlayer * __this, bool isMoving, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHOD(0x00672CD0, void, ForceStopAllEffects, (SurfaceMaterialTimelinePlayer * __this));
IL2CPP_REGISTER_METHOD(0x00672E80, MoonTimeline *, SpawnEffect, (SurfaceMaterialTimelinePlayer * __this, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHOD(0x006732E0, void, StartEffect, (SurfaceMaterialTimelinePlayer * __this, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHOD(0x00673440, void, StopEffect, (SurfaceMaterialTimelinePlayer * __this, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHOD(0x00673540, void, __ctor, (SurfaceMaterialTimelinePlayer * __this));
}
