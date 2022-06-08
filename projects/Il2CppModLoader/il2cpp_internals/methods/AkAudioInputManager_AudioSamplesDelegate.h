using namespace app;

namespace app::methods::AkAudioInputManager_AudioSamplesDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AkAudioInputManager_AudioSamplesDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x026C8450, bool, Invoke, (AkAudioInputManager_AudioSamplesDelegate * __this, uint32_t playingID, uint32_t channelIndex, Single__Array * samples));
IL2CPP_REGISTER_METHOD(0x026C87F0, IAsyncResult *, BeginInvoke, (AkAudioInputManager_AudioSamplesDelegate * __this, uint32_t playingID, uint32_t channelIndex, Single__Array * samples, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (AkAudioInputManager_AudioSamplesDelegate * __this, IAsyncResult * result));
}
