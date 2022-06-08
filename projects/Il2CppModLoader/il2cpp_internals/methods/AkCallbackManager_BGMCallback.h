#include <interception_macros.h>

namespace app::methods::AkCallbackManager_BGMCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AkCallbackManager_BGMCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x026D3740, AKRESULT__Enum, Invoke, (AkCallbackManager_BGMCallback * __this, bool in_bOtherAudioPlaying, Object * in_Cookie));
IL2CPP_REGISTER_METHOD(0x026D3AC0, IAsyncResult *, BeginInvoke, (AkCallbackManager_BGMCallback * __this, bool in_bOtherAudioPlaying, Object * in_Cookie, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, AKRESULT__Enum, EndInvoke, (AkCallbackManager_BGMCallback * __this, IAsyncResult * result));
}
