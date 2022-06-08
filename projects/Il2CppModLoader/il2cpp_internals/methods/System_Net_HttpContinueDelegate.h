#include <interception_macros.h>

namespace app::methods::System::Net::HttpContinueDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (HttpContinueDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (HttpContinueDelegate * __this, int32_t StatusCode, WebHeaderCollection * httpHeaders));
IL2CPP_REGISTER_METHOD(0x01D406D0, IAsyncResult *, BeginInvoke, (HttpContinueDelegate * __this, int32_t StatusCode, WebHeaderCollection * httpHeaders, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (HttpContinueDelegate * __this, IAsyncResult * result));
}
