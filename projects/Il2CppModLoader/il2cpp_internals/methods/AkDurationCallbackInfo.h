#include <interception_macros.h>

namespace app::methods::AkDurationCallbackInfo {
IL2CPP_REGISTER_METHOD(0x026E0E40, void, __ctor, (AkDurationCallbackInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026E0F10, void *, getCPtr, (AkDurationCallbackInfo * obj));
IL2CPP_REGISTER_METHOD(0x026E0FA0, void, setCPtr, (AkDurationCallbackInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026E1060, void, Finalize, (AkDurationCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E1100, void, Dispose, (AkDurationCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E1320, float, get_fDuration, (AkDurationCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E1440, float, get_fEstimatedDuration, (AkDurationCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E1560, uint32_t, get_audioNodeID, (AkDurationCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E1680, uint32_t, get_mediaID, (AkDurationCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E17A0, bool, get_bStreaming, (AkDurationCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E18D0, void, __ctor, (AkDurationCallbackInfo * __this));
}
