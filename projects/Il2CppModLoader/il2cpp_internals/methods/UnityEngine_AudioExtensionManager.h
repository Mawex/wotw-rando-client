#include <interception_macros.h>

namespace app::methods::UnityEngine::AudioExtensionManager {
IL2CPP_REGISTER_METHOD(0x0313EDD0, AudioSourceExtension *, AddSpatializerExtension, (AudioSource * source));
IL2CPP_REGISTER_METHOD(0x0313F140, AudioSourceExtension *, AddAmbisonicDecoderExtension, (AudioSource * source));
IL2CPP_REGISTER_METHOD(0x0313F440, void, WriteExtensionProperties, (AudioSourceExtension * extension, String * extensionName));
IL2CPP_REGISTER_METHOD(0x0313F740, AudioListenerExtension *, AddSpatializerExtension, (AudioListener * listener));
IL2CPP_REGISTER_METHOD(0x0313FAB0, void, WriteExtensionProperties, (AudioListenerExtension * extension, String * extensionName));
IL2CPP_REGISTER_METHOD(0x0313FDB0, void, AddExtensionToManager, (AudioSourceExtension * extension));
IL2CPP_REGISTER_METHOD(0x0313FED0, void, RemoveExtensionFromManager, (AudioSourceExtension * extension));
IL2CPP_REGISTER_METHOD(0x031400C0, void, Update, ());
IL2CPP_REGISTER_METHOD(0x03140630, void, GetReadyToPlay, (AudioSourceExtension * extension));
IL2CPP_REGISTER_METHOD(0x03140820, void, RegisterBuiltinDefinitions, ());
IL2CPP_REGISTER_METHOD(0x031409D0, Object_1 *, GetAudioListener, ());
IL2CPP_REGISTER_METHOD(0x03140A20, void, __cctor, ());
}
