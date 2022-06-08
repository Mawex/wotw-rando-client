using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::SslClientStream_NegotiateAsyncResult {
IL2CPP_REGISTER_METHOD(0x01F81210, void, __ctor, (SslClientStream_NegotiateAsyncResult * __this, AsyncCallback * userCallback, Object * userState, SslClientStream_NegotiateState__Enum state));
IL2CPP_REGISTER_METHOD(0x003FC7F0, SslClientStream_NegotiateState__Enum, get_State, (SslClientStream_NegotiateAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_State, (SslClientStream_NegotiateAsyncResult * __this, SslClientStream_NegotiateState__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB950, Object *, get_AsyncState, (SslClientStream_NegotiateAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Exception *, get_AsyncException, (SslClientStream_NegotiateAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01F81370, bool, get_CompletedWithError, (SslClientStream_NegotiateAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01F813A0, WaitHandle *, get_AsyncWaitHandle, (SslClientStream_NegotiateAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CompletedSynchronously, (SslClientStream_NegotiateAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01F815F0, bool, get_IsCompleted, (SslClientStream_NegotiateAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01F816E0, void, SetComplete, (SslClientStream_NegotiateAsyncResult * __this, Exception * ex));
IL2CPP_REGISTER_METHOD(0x01F81800, void, SetComplete, (SslClientStream_NegotiateAsyncResult * __this));
}
