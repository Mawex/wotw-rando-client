#include <interception_macros.h>

namespace app::methods::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnityTls_unitytls_tlsctx_trace_callback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x012DDED0, void, Invoke, (UnityTls_unitytls_tlsctx_trace_callback * __this, Void * userData, UnityTls_unitytls_tlsctx * ctx, uint8_t * traceMessage, void * traceMessageLen));
IL2CPP_REGISTER_METHOD(0x0248CB70, IAsyncResult *, BeginInvoke, (UnityTls_unitytls_tlsctx_trace_callback * __this, Void * userData, UnityTls_unitytls_tlsctx * ctx, uint8_t * traceMessage, void * traceMessageLen, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (UnityTls_unitytls_tlsctx_trace_callback * __this, IAsyncResult * result));
}
