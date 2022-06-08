#include <interception_macros.h>

namespace app::methods::AkPlaylist {
IL2CPP_REGISTER_METHOD(0x0188A780, void, __ctor, (AkPlaylist * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x0188A840, void *, getCPtr, (AkPlaylist * obj));
IL2CPP_REGISTER_METHOD(0x0188A8D0, void, setCPtr, (AkPlaylist * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x0188A9A0, void, Finalize, (AkPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x0188AA40, void, Dispose, (AkPlaylist * __this));
IL2CPP_REGISTER_METHOD(0x0188AC60, AKRESULT__Enum, Enqueue, (AkPlaylist * __this, uint32_t in_audioNodeID, int32_t in_msDelay, void * in_pCustomInfo, uint32_t in_cExternals, AkExternalSourceInfoArray * in_pExternalSources));
IL2CPP_REGISTER_METHOD(0x0188ADE0, AKRESULT__Enum, Enqueue, (AkPlaylist * __this, uint32_t in_audioNodeID, int32_t in_msDelay, void * in_pCustomInfo, uint32_t in_cExternals));
IL2CPP_REGISTER_METHOD(0x0188AF30, AKRESULT__Enum, Enqueue, (AkPlaylist * __this, uint32_t in_audioNodeID, int32_t in_msDelay, void * in_pCustomInfo));
IL2CPP_REGISTER_METHOD(0x0188B080, AKRESULT__Enum, Enqueue, (AkPlaylist * __this, uint32_t in_audioNodeID, int32_t in_msDelay));
IL2CPP_REGISTER_METHOD(0x0188B1C0, AKRESULT__Enum, Enqueue, (AkPlaylist * __this, uint32_t in_audioNodeID));
IL2CPP_REGISTER_METHOD(0x0188B2F0, void, __ctor, (AkPlaylist * __this));
}
