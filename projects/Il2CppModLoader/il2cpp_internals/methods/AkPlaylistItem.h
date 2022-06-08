#include <interception_macros.h>

namespace app::methods::AkPlaylistItem {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkPlaylistItem * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x0188E380, void *, getCPtr, (AkPlaylistItem * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkPlaylistItem * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x0188E410, void, Finalize, (AkPlaylistItem * __this));
IL2CPP_REGISTER_METHOD(0x0188E490, void, Dispose, (AkPlaylistItem * __this));
IL2CPP_REGISTER_METHOD(0x0188E6A0, void, __ctor, (AkPlaylistItem * __this));
IL2CPP_REGISTER_METHOD(0x0188E7C0, void, __ctor, (AkPlaylistItem * __this, AkPlaylistItem * in_rCopy));
IL2CPP_REGISTER_METHOD(0x0188E900, AkPlaylistItem *, Assign, (AkPlaylistItem * __this, AkPlaylistItem * in_rCopy));
IL2CPP_REGISTER_METHOD(0x0188EB70, bool, IsEqualTo, (AkPlaylistItem * __this, AkPlaylistItem * in_rCopy));
IL2CPP_REGISTER_METHOD(0x0188ED10, AKRESULT__Enum, SetExternalSources, (AkPlaylistItem * __this, uint32_t in_nExternalSrc, AkExternalSourceInfoArray * in_pExternalSrc));
IL2CPP_REGISTER_METHOD(0x0188EE60, void, set_audioNodeID, (AkPlaylistItem * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x0188EF90, uint32_t, get_audioNodeID, (AkPlaylistItem * __this));
IL2CPP_REGISTER_METHOD(0x0188F0B0, void, set_msDelay, (AkPlaylistItem * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0188F1E0, int32_t, get_msDelay, (AkPlaylistItem * __this));
IL2CPP_REGISTER_METHOD(0x0188F300, void, set_pCustomInfo, (AkPlaylistItem * __this, void * value));
IL2CPP_REGISTER_METHOD(0x0188F430, void *, get_pCustomInfo, (AkPlaylistItem * __this));
}
