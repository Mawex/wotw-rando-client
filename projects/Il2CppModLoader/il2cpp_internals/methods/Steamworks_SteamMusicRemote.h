#include <interception_macros.h>

namespace app::methods::Steamworks::SteamMusicRemote {
IL2CPP_REGISTER_METHOD(0x0278C000, bool, RegisterSteamMusicRemote, (String * pchName));
IL2CPP_REGISTER_METHOD(0x0278C2E0, bool, DeregisterSteamMusicRemote, ());
IL2CPP_REGISTER_METHOD(0x0278C390, bool, BIsCurrentMusicRemote, ());
IL2CPP_REGISTER_METHOD(0x0278C440, bool, BActivationSuccess, (bool bValue));
IL2CPP_REGISTER_METHOD(0x0278C500, bool, SetDisplayName, (String * pchDisplayName));
IL2CPP_REGISTER_METHOD(0x0278C7E0, bool, SetPNGIcon_64x64, (Byte__Array * pvBuffer, uint32_t cbBufferLength));
IL2CPP_REGISTER_METHOD(0x0278C8B0, bool, EnablePlayPrevious, (bool bValue));
IL2CPP_REGISTER_METHOD(0x0278C970, bool, EnablePlayNext, (bool bValue));
IL2CPP_REGISTER_METHOD(0x0278CA30, bool, EnableShuffled, (bool bValue));
IL2CPP_REGISTER_METHOD(0x0278CAF0, bool, EnableLooped, (bool bValue));
IL2CPP_REGISTER_METHOD(0x0278CBB0, bool, EnableQueue, (bool bValue));
IL2CPP_REGISTER_METHOD(0x0278CC70, bool, EnablePlaylists, (bool bValue));
IL2CPP_REGISTER_METHOD(0x0278CD30, bool, UpdatePlaybackStatus, (AudioPlayback_Status__Enum nStatus));
IL2CPP_REGISTER_METHOD(0x0278CDF0, bool, UpdateShuffled, (bool bValue));
IL2CPP_REGISTER_METHOD(0x0278CEB0, bool, UpdateLooped, (bool bValue));
IL2CPP_REGISTER_METHOD(0x0278CF70, bool, UpdateVolume, (float flValue));
IL2CPP_REGISTER_METHOD(0x0278D030, bool, CurrentEntryWillChange, ());
IL2CPP_REGISTER_METHOD(0x0278D0E0, bool, CurrentEntryIsAvailable, (bool bAvailable));
IL2CPP_REGISTER_METHOD(0x0278D1A0, bool, UpdateCurrentEntryText, (String * pchText));
IL2CPP_REGISTER_METHOD(0x0278D480, bool, UpdateCurrentEntryElapsedSeconds, (int32_t nValue));
IL2CPP_REGISTER_METHOD(0x0278D540, bool, UpdateCurrentEntryCoverArt, (Byte__Array * pvBuffer, uint32_t cbBufferLength));
IL2CPP_REGISTER_METHOD(0x0278D610, bool, CurrentEntryDidChange, ());
IL2CPP_REGISTER_METHOD(0x0278D6C0, bool, QueueWillChange, ());
IL2CPP_REGISTER_METHOD(0x0278D770, bool, ResetQueueEntries, ());
IL2CPP_REGISTER_METHOD(0x0278D820, bool, SetQueueEntry, (int32_t nID, int32_t nPosition, String * pchEntryText));
IL2CPP_REGISTER_METHOD(0x0278DB20, bool, SetCurrentQueueEntry, (int32_t nID));
IL2CPP_REGISTER_METHOD(0x0278DBE0, bool, QueueDidChange, ());
IL2CPP_REGISTER_METHOD(0x0278DC90, bool, PlaylistWillChange, ());
IL2CPP_REGISTER_METHOD(0x0278DD40, bool, ResetPlaylistEntries, ());
IL2CPP_REGISTER_METHOD(0x0278DDF0, bool, SetPlaylistEntry, (int32_t nID, int32_t nPosition, String * pchEntryText));
IL2CPP_REGISTER_METHOD(0x0278E0F0, bool, SetCurrentPlaylistEntry, (int32_t nID));
IL2CPP_REGISTER_METHOD(0x0278E1B0, bool, PlaylistDidChange, ());
}
