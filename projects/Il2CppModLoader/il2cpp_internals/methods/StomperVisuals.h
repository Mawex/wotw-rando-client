using namespace app;

namespace app::methods::StomperVisuals {
IL2CPP_REGISTER_METHOD(0x0065C4A0, void, Start, (StomperVisuals * __this));
IL2CPP_REGISTER_METHOD(0x0065C530, void, PlaySound, (StomperVisuals * __this, StomperVisuals_SoundEvent__Enum soundEvent));
IL2CPP_REGISTER_METHOD(0x0065C750, void, StopSound, (StomperVisuals * __this, StomperVisuals_SoundEvent__Enum soundEvent));
IL2CPP_REGISTER_METHOD(0x0065C790, void, SpawnStompDust, (StomperVisuals * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0065C8B0, void, SetFixedJointRigidbody, (StomperVisuals * __this, Rigidbody * body));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (StomperVisuals * __this));
}
