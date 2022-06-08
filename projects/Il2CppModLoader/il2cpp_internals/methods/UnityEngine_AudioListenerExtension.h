#include <interception_macros.h>

namespace app::methods::UnityEngine::AudioListenerExtension {
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (AudioListenerExtension * __this));
IL2CPP_REGISTER_METHOD(0x01F25880, AudioListener *, get_audioListener, (AudioListenerExtension * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_audioListener, (AudioListenerExtension * __this, AudioListener * value));
IL2CPP_REGISTER_METHOD(0x024BF590, float, ReadExtensionProperty, (AudioListenerExtension * __this, PropertyName propertyName));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteExtensionProperty, (AudioListenerExtension * __this, PropertyName propertyName, float propertyValue));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ExtensionUpdate, (AudioListenerExtension * __this));
}
