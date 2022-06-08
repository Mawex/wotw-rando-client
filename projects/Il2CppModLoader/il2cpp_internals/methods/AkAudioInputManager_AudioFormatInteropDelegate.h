#include <interception_macros.h>

namespace app::methods::AkAudioInputManager_AudioFormatInteropDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AkAudioInputManager_AudioFormatInteropDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (AkAudioInputManager_AudioFormatInteropDelegate * __this, uint32_t playingID, void * format));
IL2CPP_REGISTER_METHOD(0x026C8380, IAsyncResult *, BeginInvoke, (AkAudioInputManager_AudioFormatInteropDelegate * __this, uint32_t playingID, void * format, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (AkAudioInputManager_AudioFormatInteropDelegate * __this, IAsyncResult * result));
}
