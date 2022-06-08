#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::SslStreamBase_AsyncHandshakeDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (SslStreamBase_AsyncHandshakeDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C712A0, void, Invoke, (SslStreamBase_AsyncHandshakeDelegate * __this, SslStreamBase_InternalAsyncResult * asyncResult, bool fromWrite));
IL2CPP_REGISTER_METHOD(0x0291A3C0, IAsyncResult *, BeginInvoke, (SslStreamBase_AsyncHandshakeDelegate * __this, SslStreamBase_InternalAsyncResult * asyncResult, bool fromWrite, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (SslStreamBase_AsyncHandshakeDelegate * __this, IAsyncResult * result));
}
