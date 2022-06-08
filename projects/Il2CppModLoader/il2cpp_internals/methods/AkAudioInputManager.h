using namespace app;

namespace app::methods::AkAudioInputManager {
IL2CPP_REGISTER_METHOD(0x026C6E70, uint32_t, PostAudioInputEvent, (Event_1 * akEvent, GameObject * gameObject, AkAudioInputManager_AudioSamplesDelegate * sampleDelegate, AkAudioInputManager_AudioFormatDelegate * formatDelegate));
IL2CPP_REGISTER_METHOD(0x026C70E0, uint32_t, PostAudioInputEvent, (uint32_t akEventID, GameObject * gameObject, AkAudioInputManager_AudioSamplesDelegate * sampleDelegate, AkAudioInputManager_AudioFormatDelegate * formatDelegate));
IL2CPP_REGISTER_METHOD(0x026C72D0, uint32_t, PostAudioInputEvent, (String * akEventName, GameObject * gameObject, AkAudioInputManager_AudioSamplesDelegate * sampleDelegate, AkAudioInputManager_AudioFormatDelegate * formatDelegate));
IL2CPP_REGISTER_METHOD(0x026C74C0, bool, InternalAudioSamplesDelegate, (uint32_t playingID, Single__Array * samples, uint32_t channelIndex, uint32_t frames));
IL2CPP_REGISTER_METHODINFO(0x0475D118, AkAudioInputManager_InternalAudioSamplesDelegate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026C7630, void, InternalAudioFormatDelegate, (uint32_t playingID, void * format));
IL2CPP_REGISTER_METHODINFO(0x04735500, AkAudioInputManager_InternalAudioFormatDelegate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026C77C0, void, TryInitialize, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x026C79E0, void, AddPlayingID, (uint32_t playingID, AkAudioInputManager_AudioSamplesDelegate * sampleDelegate, AkAudioInputManager_AudioFormatDelegate * formatDelegate));
IL2CPP_REGISTER_METHOD(0x026C7B50, void, EventCallback, (Object * cookie, AkCallbackType__Enum type, AkCallbackInfo * callbackInfo));
IL2CPP_REGISTER_METHODINFO(0x04773AE8, AkAudioInputManager_EventCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026C7CC0, void, __cctor, (MethodInfo * method));
}
