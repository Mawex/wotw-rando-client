#include <interception_macros.h>

namespace app::methods::AkAudioInputManager_AudioSamplesInteropDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AkAudioInputManager_AudioSamplesInteropDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x026C88D0, bool, Invoke, (AkAudioInputManager_AudioSamplesInteropDelegate * __this, uint32_t playingID, Single__Array * samples, uint32_t channelIndex, uint32_t frames));
IL2CPP_REGISTER_METHOD(0x026C8CE0, IAsyncResult *, BeginInvoke, (AkAudioInputManager_AudioSamplesInteropDelegate * __this, uint32_t playingID, Single__Array * samples, uint32_t channelIndex, uint32_t frames, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (AkAudioInputManager_AudioSamplesInteropDelegate * __this, IAsyncResult * result));
}
