#include <interception_macros.h>

namespace app::methods::SeinFootsteps {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinFootsteps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00AE0DB0, SeinFootstepsPuppet*, get_Puppet, (app::SeinFootsteps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement*, get_PlatformMovement, (app::SeinFootsteps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement*, get_LeftRightMovement, (app::SeinFootsteps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D0720, CharacterSpriteMirror*, get_SpriteMirror, (app::SeinFootsteps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00AE0E70, void, OnSetReferenceToSein, (app::SeinFootsteps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D0850, void, Start, (app::SeinFootsteps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00AE0F50, void, UpdateCharacterState, (app::SeinFootsteps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00AE0FC0, void, OnExit, (app::SeinFootsteps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00AE0FD0, void, HandleFootstepEvents, (app::SeinFootsteps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00AE16C0, void, ExecuteGrabbingEffects, (app::SeinFootsteps * this_ptr, float speed));
    IL2CPP_REGISTER_METHOD(0x00AE1840, void, ExecuteFootstepEffects, (app::SeinFootsteps * this_ptr, float speed));
    IL2CPP_REGISTER_METHOD(0x00AE19C0, void, UpdateDustEffectsState, (app::SeinFootsteps * this_ptr, bool is_moving));
    IL2CPP_REGISTER_METHOD(0x00AE1B00, void, StartDustEffect, (app::SeinFootsteps * this_ptr, app::SurfaceMaterialType__Enum surface_type));
    IL2CPP_REGISTER_METHOD(0x00AE1C70, void, StopDustEffect, (app::SeinFootsteps * this_ptr, app::SurfaceMaterialType__Enum surface_type));
    IL2CPP_REGISTER_METHOD(0x00AE1D70, void, ForceStopAllDustEffects, (app::SeinFootsteps * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00AE1F30, MoonTimeline*, SpawnDustEffect, (app::SeinFootsteps * this_ptr, app::SurfaceMaterialType__Enum surface_type));
    IL2CPP_REGISTER_METHOD(0x00AE2440, void, __ctor, (app::SeinFootsteps * this_ptr));
} // namespace app::methods::SeinFootsteps
