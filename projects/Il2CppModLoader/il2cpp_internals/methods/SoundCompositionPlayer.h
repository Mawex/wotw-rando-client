#include <interception_macros.h>

namespace app::methods::SoundCompositionPlayer {
IL2CPP_REGISTER_METHOD(0x00EE6150, void, Awake, (SoundCompositionPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EE62F0, void, OnGameReset, (SoundCompositionPlayer * __this));
IL2CPP_REGISTER_METHODINFO(0x0475E528, SoundCompositionPlayer_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EE65A0, void, OnDestroy, (SoundCompositionPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EE6960, void, SetSoundComposition, (SoundCompositionPlayer * __this, SoundComposition * soundComposition));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Play, (SoundCompositionPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EE6C10, void, FixedUpdate, (SoundCompositionPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00EE75A0, void, __ctor, (SoundCompositionPlayer * __this));
}
