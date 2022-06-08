using namespace app;

namespace app::methods::Core::Ambience {
IL2CPP_REGISTER_METHOD(0x011F6690, Ambience_Layer *, get_CurrentAmbienceLayer, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F6790, void, AddAmbienceLayer, (Ambience_Layer * musicLayer));
IL2CPP_REGISTER_METHOD(0x011F6870, void, RemoveAmbienceLayer, (Ambience_Layer * musicLayer));
IL2CPP_REGISTER_METHOD(0x011F6990, void, SortLayers, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F6B50, Ambience_AmbienceTrack *, PlayTrack, (SoundProvider * soundProvider, float fadeInDuration, float fadeOutDuration, AmbienceZone * * ambienceZone, AkCurveInterpolation__Enum fadeType));
IL2CPP_REGISTER_METHOD(0x011F6E60, void, StopTrack, (Ambience_AmbienceTrack * track));
IL2CPP_REGISTER_METHOD(0x011F6ED0, void, UpdateAmbience, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011F7110, void, __cctor, (MethodInfo * method));
}
