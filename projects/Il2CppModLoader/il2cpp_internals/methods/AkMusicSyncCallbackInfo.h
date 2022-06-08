#include <interception_macros.h>

namespace app::methods::AkMusicSyncCallbackInfo {
IL2CPP_REGISTER_METHOD(0x01882FF0, void, __ctor, (AkMusicSyncCallbackInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x018830B0, void *, getCPtr, (AkMusicSyncCallbackInfo * obj));
IL2CPP_REGISTER_METHOD(0x01883140, void, setCPtr, (AkMusicSyncCallbackInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x01883210, void, Finalize, (AkMusicSyncCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x018832B0, void, Dispose, (AkMusicSyncCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x018834D0, uint32_t, get_playingID, (AkMusicSyncCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x018835F0, int32_t, get_segmentInfo_iCurrentPosition, (AkMusicSyncCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01883710, int32_t, get_segmentInfo_iPreEntryDuration, (AkMusicSyncCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01883830, int32_t, get_segmentInfo_iActiveDuration, (AkMusicSyncCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01883950, int32_t, get_segmentInfo_iPostExitDuration, (AkMusicSyncCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01883A70, int32_t, get_segmentInfo_iRemainingLookAheadTime, (AkMusicSyncCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01883B90, float, get_segmentInfo_fBeatDuration, (AkMusicSyncCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01883CB0, float, get_segmentInfo_fBarDuration, (AkMusicSyncCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01883DD0, float, get_segmentInfo_fGridDuration, (AkMusicSyncCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01883EF0, float, get_segmentInfo_fGridOffset, (AkMusicSyncCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01884010, AkCallbackType__Enum, get_musicSyncType, (AkMusicSyncCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01884130, String *, get_userCueName, (AkMusicSyncCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x01884280, void, __ctor, (AkMusicSyncCallbackInfo * __this));
}
