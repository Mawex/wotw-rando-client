using namespace app;

namespace app::methods::AkAudioInputManager_AudioFormatDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AkAudioInputManager_AudioFormatDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (AkAudioInputManager_AudioFormatDelegate * __this, uint32_t playingID, AkAudioFormat * format));
IL2CPP_REGISTER_METHOD(0x026C82B0, IAsyncResult *, BeginInvoke, (AkAudioInputManager_AudioFormatDelegate * __this, uint32_t playingID, AkAudioFormat * format, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (AkAudioInputManager_AudioFormatDelegate * __this, IAsyncResult * result));
}
