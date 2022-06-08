#include <interception_macros.h>

namespace app::methods::UnityEngine::AudioSourceExtension {
IL2CPP_REGISTER_METHOD(0x03144650, void, __ctor, (AudioSourceExtension * __this));
IL2CPP_REGISTER_METHOD(0x01F25880, AudioSource *, get_audioSource, (AudioSourceExtension * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_audioSource, (AudioSourceExtension * __this, AudioSource * value));
IL2CPP_REGISTER_METHOD(0x024BF590, float, ReadExtensionProperty, (AudioSourceExtension * __this, PropertyName propertyName));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteExtensionProperty, (AudioSourceExtension * __this, PropertyName propertyName, float propertyValue));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Play, (AudioSourceExtension * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (AudioSourceExtension * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ExtensionUpdate, (AudioSourceExtension * __this));
IL2CPP_REGISTER_METHOD(0x03144660, void, OnDestroy, (AudioSourceExtension * __this));
}
