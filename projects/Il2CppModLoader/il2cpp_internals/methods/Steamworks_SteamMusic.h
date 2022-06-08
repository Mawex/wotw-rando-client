using namespace app;

namespace app::methods::Steamworks::SteamMusic {
IL2CPP_REGISTER_METHOD(0x0278B9C0, bool, BIsEnabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0278BA70, bool, BIsPlaying, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0278BB20, AudioPlayback_Status__Enum, GetPlaybackStatus, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0278BBD0, void, Play, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0278BC80, void, Pause, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0278BD30, void, PlayPrevious, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0278BDE0, void, PlayNext, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0278BE90, void, SetVolume, (float flVolume));
IL2CPP_REGISTER_METHOD(0x0278BF50, float, GetVolume, (MethodInfo * method));
}
