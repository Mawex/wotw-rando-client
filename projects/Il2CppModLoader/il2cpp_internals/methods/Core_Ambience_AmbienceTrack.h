#include <interception_macros.h>

namespace app::methods::Core::Ambience_AmbienceTrack {
IL2CPP_REGISTER_METHOD(0x00CB5CD0, ArtificialSoundHostReference, get_SoundHost, (Ambience_AmbienceTrack * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CE0, void, set_SoundHost, (Ambience_AmbienceTrack * __this, ArtificialSoundHostReference value));
IL2CPP_REGISTER_METHOD(0x011F7340, void, Play, (Ambience_AmbienceTrack * __this, float fadeInDuration, float fadeOutDuration));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Event_1 *, get_CurrentEvent, (Ambience_AmbienceTrack * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_CurrentEvent, (Ambience_AmbienceTrack * __this, Event_1 * value));
IL2CPP_REGISTER_METHOD(0x011F7900, void, Stop, (Ambience_AmbienceTrack * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Ambience_AmbienceTrack * __this));
}
