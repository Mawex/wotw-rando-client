#include <interception_macros.h>

namespace app::methods::SpringAnimator {
IL2CPP_REGISTER_METHOD(0x009A6540, MoonTimeline *, get_OnLandCharacter, (app::SpringAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x009A6560, MoonTimeline *, get_OnLandGrenade, (app::SpringAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x009A6580, MoonTimeline *, get_OnLandCommon, (app::SpringAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x0092B330, MoonTimeline *, get_OnLaunchCharacter, (app::SpringAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonSetupVisuals *, get_MoonSetupVisuals, (app::SpringAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x009A65A0, void, LandCharacter, (app::SpringAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x009A6690, void, LandGrenade, (app::SpringAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x009A6780, void, LandCommon, (app::SpringAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x009A6870, void, LaunchCharacter, (app::SpringAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x009A6960, void, Stop, (app::SpringAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::SpringAnimator * this_ptr));
}
