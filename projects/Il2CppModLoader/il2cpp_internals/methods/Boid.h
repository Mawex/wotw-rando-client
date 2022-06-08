#include <interception_macros.h>

namespace app::methods::Boid {
IL2CPP_REGISTER_METHOD(0x00D34C70, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00D34D50, float, get_MaxSpeed, (Boid * __this));
IL2CPP_REGISTER_METHOD(0x00D34D70, float, get_MaxAcceleration, (Boid * __this));
IL2CPP_REGISTER_METHOD(0x00D34D90, void, OnEnable, (Boid * __this));
IL2CPP_REGISTER_METHOD(0x00D34E50, void, OnDisable, (Boid * __this));
IL2CPP_REGISTER_METHOD(0x00D34F10, void, Awake, (Boid * __this));
IL2CPP_REGISTER_METHOD(0x00D34FA0, void, Start, (Boid * __this));
IL2CPP_REGISTER_METHOD(0x00D350D0, Vector2, SeekPosition, (Boid * __this, Vector2 target));
IL2CPP_REGISTER_METHOD(0x00D351F0, Vector2, SeekSpeed, (Boid * __this, Vector2 speed));
IL2CPP_REGISTER_METHOD(0x00D35310, void, Update, (Boid * __this));
IL2CPP_REGISTER_METHOD(0x00D354A0, void, FixedUpdate, (Boid * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (Boid * __this));
IL2CPP_REGISTER_METHOD(0x00D364F0, void, __cctor, ());
}
