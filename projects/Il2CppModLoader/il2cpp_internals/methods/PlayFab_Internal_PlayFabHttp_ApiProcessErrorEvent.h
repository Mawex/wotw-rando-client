#include <interception_macros.h>

namespace app::methods::PlayFab::Internal::PlayFabHttp_ApiProcessErrorEvent {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (PlayFabHttp_ApiProcessErrorEvent * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (PlayFabHttp_ApiProcessErrorEvent * __this, PlayFabRequestCommon * request, PlayFabError * error));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (PlayFabHttp_ApiProcessErrorEvent * __this, PlayFabRequestCommon * request, PlayFabError * error, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (PlayFabHttp_ApiProcessErrorEvent * __this, IAsyncResult * result));
}
