#include <interception_macros.h>

namespace app::methods::SeinFootsteps {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinFootsteps * __this));
IL2CPP_REGISTER_METHOD(0x00AE0DB0, SeinFootstepsPuppet *, get_Puppet, (SeinFootsteps * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinFootsteps * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_LeftRightMovement, (SeinFootsteps * __this));
IL2CPP_REGISTER_METHOD(0x005D0720, CharacterSpriteMirror *, get_SpriteMirror, (SeinFootsteps * __this));
IL2CPP_REGISTER_METHOD(0x00AE0E70, void, OnSetReferenceToSein, (SeinFootsteps * __this));
IL2CPP_REGISTER_METHOD(0x005D0850, void, Start, (SeinFootsteps * __this));
IL2CPP_REGISTER_METHOD(0x00AE0F50, void, UpdateCharacterState, (SeinFootsteps * __this));
IL2CPP_REGISTER_METHOD(0x00AE0FC0, void, OnExit, (SeinFootsteps * __this));
IL2CPP_REGISTER_METHOD(0x00AE0FD0, void, HandleFootstepEvents, (SeinFootsteps * __this));
IL2CPP_REGISTER_METHOD(0x00AE16C0, void, ExecuteGrabbingEffects, (SeinFootsteps * __this, float speed));
IL2CPP_REGISTER_METHOD(0x00AE1840, void, ExecuteFootstepEffects, (SeinFootsteps * __this, float speed));
IL2CPP_REGISTER_METHOD(0x00AE19C0, void, UpdateDustEffectsState, (SeinFootsteps * __this, bool isMoving));
IL2CPP_REGISTER_METHOD(0x00AE1B00, void, StartDustEffect, (SeinFootsteps * __this, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHOD(0x00AE1C70, void, StopDustEffect, (SeinFootsteps * __this, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHOD(0x00AE1D70, void, ForceStopAllDustEffects, (SeinFootsteps * __this));
IL2CPP_REGISTER_METHOD(0x00AE1F30, MoonTimeline *, SpawnDustEffect, (SeinFootsteps * __this, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHOD(0x00AE2440, void, __ctor, (SeinFootsteps * __this));
}
