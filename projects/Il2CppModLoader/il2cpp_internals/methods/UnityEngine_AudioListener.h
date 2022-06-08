#include <interception_macros.h>

namespace app::methods::UnityEngine::AudioListener {
IL2CPP_REGISTER_METHOD(0x03140E60, int32_t, GetNumExtensionProperties, (AudioListener * __this));
IL2CPP_REGISTER_METHOD(0x03140EB0, PropertyName, ReadExtensionName, (AudioListener * __this, int32_t listenerIndex));
IL2CPP_REGISTER_METHOD(0x03140F20, void, INTERNAL_CALL_ReadExtensionName, (AudioListener * self, int32_t listenerIndex, PropertyName * value));
IL2CPP_REGISTER_METHOD(0x03140F90, PropertyName, ReadExtensionPropertyName, (AudioListener * __this, int32_t listenerIndex));
IL2CPP_REGISTER_METHOD(0x03141000, void, INTERNAL_CALL_ReadExtensionPropertyName, (AudioListener * self, int32_t listenerIndex, PropertyName * value));
IL2CPP_REGISTER_METHOD(0x03141070, float, ReadExtensionPropertyValue, (AudioListener * __this, int32_t listenerIndex));
IL2CPP_REGISTER_METHOD(0x031410D0, void, ClearExtensionProperties, (AudioListener * __this, PropertyName extensionName));
IL2CPP_REGISTER_METHOD(0x03141130, void, INTERNAL_CALL_ClearExtensionProperties, (AudioListener * self, PropertyName * extensionName));
IL2CPP_REGISTER_METHOD(0x03141190, AudioListenerExtension *, AddExtension, (AudioListener * __this, Type * extensionType));
}
