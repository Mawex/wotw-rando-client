using namespace app;

namespace app::methods::StomperAnimator {
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonSetupVisuals *, get_MoonSetupVisuals, (StomperAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00658D10, void, set_MoonSetupVisuals, (StomperAnimator * __this, IMoonSetupVisuals * value));
IL2CPP_REGISTER_METHOD(0x00658DE0, void, PlaySound, (StomperAnimator * __this, StomperVisuals_SoundEvent__Enum soundEvent));
IL2CPP_REGISTER_METHOD(0x00658EB0, void, StopSound, (StomperAnimator * __this, StomperVisuals_SoundEvent__Enum soundEvent));
IL2CPP_REGISTER_METHOD(0x00658FA0, void, SpawnStompDust, (StomperAnimator * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00659170, void, SetVisualsFixedJoint, (StomperAnimator * __this, Rigidbody * body));
IL2CPP_REGISTER_METHOD(0x00659320, void, PlayTriggerStomperTimeline, (StomperAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00659440, void, PlayStomperFallingTimeline, (StomperAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (StomperAnimator * __this));
}
