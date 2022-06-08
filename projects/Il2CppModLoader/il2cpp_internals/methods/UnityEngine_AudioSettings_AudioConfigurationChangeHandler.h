#include <interception_macros.h>

namespace app::methods::UnityEngine::AudioSettings_AudioConfigurationChangeHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AudioSettings_AudioConfigurationChangeHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (AudioSettings_AudioConfigurationChangeHandler * __this, bool deviceWasChanged));
IL2CPP_REGISTER_METHOD(0x03141760, IAsyncResult *, BeginInvoke, (AudioSettings_AudioConfigurationChangeHandler * __this, bool deviceWasChanged, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (AudioSettings_AudioConfigurationChangeHandler * __this, IAsyncResult * result));
}
