#include <interception_macros.h>

namespace app::methods::PlayFab::PlayFabEmitEventCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (PlayFabEmitEventCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (PlayFabEmitEventCallback * __this, IPlayFabEvent * playFabEvent, IPlayFabEmitEventResponse * emitEventResponse));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (PlayFabEmitEventCallback * __this, IPlayFabEvent * playFabEvent, IPlayFabEmitEventResponse * emitEventResponse, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (PlayFabEmitEventCallback * __this, IAsyncResult * result));
}
