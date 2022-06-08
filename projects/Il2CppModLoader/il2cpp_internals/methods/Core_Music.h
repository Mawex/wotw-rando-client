#include <interception_macros.h>

namespace app::methods::Core::Music {
IL2CPP_REGISTER_METHOD(0x00DAC8A0, Music_Layer *, get_CurrentMusicLayer, ());
IL2CPP_REGISTER_METHOD(0x00DACAB0, int32_t, get_HighestLayerPriority, ());
IL2CPP_REGISTER_METHOD(0x00DACCB0, void, AddMusicLayer, (Music_Layer * musicLayer));
IL2CPP_REGISTER_METHOD(0x00DACE60, void, RemoveMusicLayer, (Music_Layer * musicLayer));
IL2CPP_REGISTER_METHOD(0x00DACFF0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00DAD100, Music_MusicTrack *, PlayTrack, (SoundDescriptor * soundDescriptor, float fadeInDuration, float fadeOutDuration));
IL2CPP_REGISTER_METHOD(0x00DAD3F0, void, StopTrack, (Music_MusicTrack * track));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRestoreCheckpoint, ());
IL2CPP_REGISTER_METHOD(0x00DAD410, void, UpdateMusic, ());
IL2CPP_REGISTER_METHOD(0x00DAD690, void, __cctor, ());
}
