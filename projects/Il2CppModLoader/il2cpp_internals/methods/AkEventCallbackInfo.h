#include <interception_macros.h>

namespace app::methods::AkEventCallbackInfo {
IL2CPP_REGISTER_METHOD(0x026E3EB0, void, __ctor, (AkEventCallbackInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026E3F70, void *, getCPtr, (AkEventCallbackInfo * obj));
IL2CPP_REGISTER_METHOD(0x026E4000, void, setCPtr, (AkEventCallbackInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026E40D0, void, Finalize, (AkEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E4170, void, Dispose, (AkEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E4390, uint32_t, get_playingID, (AkEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E44B0, uint32_t, get_eventID, (AkEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E45D0, void, __ctor, (AkEventCallbackInfo * __this));
}
