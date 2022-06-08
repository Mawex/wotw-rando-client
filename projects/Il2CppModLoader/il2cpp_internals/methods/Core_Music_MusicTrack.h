#include <interception_macros.h>

namespace app::methods::Core::Music_MusicTrack {
IL2CPP_REGISTER_METHOD(0x00DAE690, void, Play, (Music_MusicTrack * __this, float fadeInDuration, float fadeOutDuration));
IL2CPP_REGISTER_METHOD(0x00DAE6B0, void, Play, (Music_MusicTrack * __this));
IL2CPP_REGISTER_METHOD(0x00DAEAB0, void, Stop, (Music_MusicTrack * __this));
IL2CPP_REGISTER_METHOD(0x00DAEB90, void, PlayDescriptor, (Music_MusicTrack * __this, SoundDescriptor * soundDescriptor));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Music_MusicTrack * __this));
IL2CPP_REGISTER_METHOD(0x002FBAF0, void, _Play_b__8_0, (Music_MusicTrack * __this));
IL2CPP_REGISTER_METHODINFO(0x04744AA0, Music_MusicTrack__Play_b__8_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBAF0, void, _PlayDescriptor_b__10_0, (Music_MusicTrack * __this));
IL2CPP_REGISTER_METHODINFO(0x04707D68, Music_MusicTrack__PlayDescriptor_b__10_0__MethodInfo);
}
