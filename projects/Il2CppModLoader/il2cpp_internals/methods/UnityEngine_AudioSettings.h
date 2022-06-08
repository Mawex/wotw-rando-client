using namespace app;

namespace app::methods::UnityEngine::AudioSettings {
IL2CPP_REGISTER_METHOD(0x031412E0, String *, GetSpatializerPluginName, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03141330, void, InvokeOnAudioConfigurationChanged, (bool deviceWasChanged));
IL2CPP_REGISTER_METHOD(0x031413D0, void, InvokeOnAudioManagerUpdate, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03141460, void, InvokeOnAudioSourcePlay, (AudioSource * source));
IL2CPP_REGISTER_METHOD(0x03141710, String *, GetAmbisonicDecoderPluginName, (MethodInfo * method));
}
