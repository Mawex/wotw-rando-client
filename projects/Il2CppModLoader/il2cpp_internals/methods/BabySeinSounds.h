#include <interception_macros.h>

namespace app::methods::BabySeinSounds {
IL2CPP_REGISTER_METHOD(0x00F77560, PlatformMovement *, get_PlatformMovement, (app::BabySeinSounds * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F77590, SurfaceMaterialType__Enum, get_GroundSurfaceType, (app::BabySeinSounds * this_ptr));
IL2CPP_REGISTER_METHOD(0x008543C0, void, Awake, (app::BabySeinSounds * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F775E0, void, OnJump, (app::BabySeinSounds * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F77880, void, OnLand, (app::BabySeinSounds * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F77B20, void, HandleFootstepEvents, (app::BabySeinSounds * this_ptr));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::BabySeinSounds * this_ptr));
}
