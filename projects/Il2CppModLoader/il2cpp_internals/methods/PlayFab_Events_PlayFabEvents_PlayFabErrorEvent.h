#include <interception_macros.h>

namespace app::methods::PlayFab::Events::PlayFabEvents_PlayFabErrorEvent {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (PlayFabEvents_PlayFabErrorEvent * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (PlayFabEvents_PlayFabErrorEvent * __this, PlayFabRequestCommon * request, PlayFabError * error));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (PlayFabEvents_PlayFabErrorEvent * __this, PlayFabRequestCommon * request, PlayFabError * error, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (PlayFabEvents_PlayFabErrorEvent * __this, IAsyncResult * result));
}
