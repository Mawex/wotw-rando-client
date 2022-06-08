#include <interception_macros.h>

namespace app::methods::NaruSounds {
IL2CPP_REGISTER_METHOD(0x00886490, PlatformMovement *, get_PlatformMovement, (NaruSounds * __this));
IL2CPP_REGISTER_METHOD(0x008864C0, SurfaceMaterialType__Enum, get_GroundSurfaceType, (NaruSounds * __this));
IL2CPP_REGISTER_METHOD(0x00886510, void, Awake, (NaruSounds * __this));
IL2CPP_REGISTER_METHOD(0x00886580, void, OnJump, (NaruSounds * __this));
IL2CPP_REGISTER_METHOD(0x00886950, void, OnLand, (NaruSounds * __this));
IL2CPP_REGISTER_METHOD(0x00886BF0, void, HandleFootstepEvents, (NaruSounds * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (NaruSounds * __this));
}
