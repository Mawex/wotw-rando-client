#include <interception_macros.h>

namespace app::methods::CollisionSoundSource {
IL2CPP_REGISTER_METHOD(0x012D0AA0, ISoundHost *, get_SoundHost, (CollisionSoundSource * __this));
IL2CPP_REGISTER_METHOD(0x012D0B90, void, Awake, (CollisionSoundSource * __this));
IL2CPP_REGISTER_METHOD(0x012D0C30, void, OnEnable, (CollisionSoundSource * __this));
IL2CPP_REGISTER_METHOD(0x012D0D80, void, OnDisable, (CollisionSoundSource * __this));
IL2CPP_REGISTER_METHOD(0x012D0F30, void, StopSlidingSound, (CollisionSoundSource * __this));
IL2CPP_REGISTER_METHOD(0x012D0F80, void, StartSlidingSound, (CollisionSoundSource * __this));
IL2CPP_REGISTER_METHOD(0x012D10E0, void, OnCollisionEnter, (CollisionSoundSource * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x012D13B0, void, OnCollisionExit, (CollisionSoundSource * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x012D1610, void, OnUpdate, (CollisionSoundSource * __this));
IL2CPP_REGISTER_METHOD(0x012D1900, float, ContinousSoundRtpcGetValue, (CollisionSoundSource * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolSpawned, (CollisionSoundSource * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (CollisionSoundSource * __this));
IL2CPP_REGISTER_METHOD(0x012D1A70, void, __ctor, (CollisionSoundSource * __this));
}
