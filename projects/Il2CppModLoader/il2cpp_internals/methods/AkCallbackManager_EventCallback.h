#include <interception_macros.h>

namespace app::methods::AkCallbackManager_EventCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AkCallbackManager_EventCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x026D4230, void, Invoke, (AkCallbackManager_EventCallback * __this, Object * in_cookie, AkCallbackType__Enum in_type, AkCallbackInfo * in_info));
IL2CPP_REGISTER_METHOD(0x026D47A0, IAsyncResult *, BeginInvoke, (AkCallbackManager_EventCallback * __this, Object * in_cookie, AkCallbackType__Enum in_type, AkCallbackInfo * in_info, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (AkCallbackManager_EventCallback * __this, IAsyncResult * result));
}
