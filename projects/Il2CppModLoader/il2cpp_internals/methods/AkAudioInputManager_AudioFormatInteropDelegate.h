#include <interception_macros.h>

namespace app::methods::AkAudioInputManager_AudioFormatInteropDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::AkAudioInputManager_AudioFormatInteropDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::AkAudioInputManager_AudioFormatInteropDelegate * this_ptr, uint32_t playing_i_d, app::void * format));
IL2CPP_REGISTER_METHOD(0x026C8380, IAsyncResult *, BeginInvoke, (app::AkAudioInputManager_AudioFormatInteropDelegate * this_ptr, uint32_t playing_i_d, app::void * format, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AkAudioInputManager_AudioFormatInteropDelegate * this_ptr, app::IAsyncResult * result));
}
