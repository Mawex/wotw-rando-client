#include <interception_macros.h>

namespace app::methods::AkCallbackManager_BGMCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::AkCallbackManager_BGMCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x026D3740, AKRESULT__Enum, Invoke, (app::AkCallbackManager_BGMCallback * this_ptr, bool in_b_other_audio_playing, app::Object * in__cookie));
IL2CPP_REGISTER_METHOD(0x026D3AC0, IAsyncResult *, BeginInvoke, (app::AkCallbackManager_BGMCallback * this_ptr, bool in_b_other_audio_playing, app::Object * in__cookie, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, AKRESULT__Enum, EndInvoke, (app::AkCallbackManager_BGMCallback * this_ptr, app::IAsyncResult * result));
}
