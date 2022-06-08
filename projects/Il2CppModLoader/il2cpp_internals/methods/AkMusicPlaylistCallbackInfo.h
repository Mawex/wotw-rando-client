#include <interception_macros.h>

namespace app::methods::AkMusicPlaylistCallbackInfo {
IL2CPP_REGISTER_METHOD(0x01881EE0, void, __ctor, (AkMusicPlaylistCallbackInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x01881FB0, void *, getCPtr, (AkMusicPlaylistCallbackInfo * obj));
IL2CPP_REGISTER_METHOD(0x01882040, void, setCPtr, (AkMusicPlaylistCallbackInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x01882100, void, Finalize, (AkMusicPlaylistCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x018821A0, void, Dispose, (AkMusicPlaylistCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x018823C0, uint32_t, get_playlistID, (AkMusicPlaylistCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x018824E0, uint32_t, get_uNumPlaylistItems, (AkMusicPlaylistCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01882600, uint32_t, get_uPlaylistSelection, (AkMusicPlaylistCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01882720, uint32_t, get_uPlaylistItemDone, (AkMusicPlaylistCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01882840, void, __ctor, (AkMusicPlaylistCallbackInfo * __this));
}
