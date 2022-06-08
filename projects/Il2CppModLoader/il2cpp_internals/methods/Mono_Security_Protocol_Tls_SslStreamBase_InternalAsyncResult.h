using namespace app;

namespace app::methods::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult {
IL2CPP_REGISTER_METHOD(0x0291A490, void, __ctor, (SslStreamBase_InternalAsyncResult * __this, AsyncCallback * userCallback, Object * userState, Byte__Array * buffer, int32_t offset, int32_t count, bool fromWrite, bool proceedAfterHandshake));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_ProceedAfterHandshake, (SslStreamBase_InternalAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_FromWrite, (SslStreamBase_InternalAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Byte__Array *, get_Buffer, (SslStreamBase_InternalAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_Offset, (SslStreamBase_InternalAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x003FDCE0, int32_t, get_Count, (SslStreamBase_InternalAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_BytesRead, (SslStreamBase_InternalAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Object *, get_AsyncState, (SslStreamBase_InternalAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Exception *, get_AsyncException, (SslStreamBase_InternalAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0291A620, bool, get_CompletedWithError, (SslStreamBase_InternalAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0291A650, WaitHandle *, get_AsyncWaitHandle, (SslStreamBase_InternalAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CompletedSynchronously, (SslStreamBase_InternalAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0291A8A0, bool, get_IsCompleted, (SslStreamBase_InternalAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0291A990, void, SetComplete, (SslStreamBase_InternalAsyncResult * __this, Exception * ex, int32_t bytesRead));
IL2CPP_REGISTER_METHOD(0x0291AAE0, void, SetComplete, (SslStreamBase_InternalAsyncResult * __this, Exception * ex));
IL2CPP_REGISTER_METHOD(0x0291AAF0, void, SetComplete, (SslStreamBase_InternalAsyncResult * __this, int32_t bytesRead));
IL2CPP_REGISTER_METHOD(0x0291AB00, void, SetComplete, (SslStreamBase_InternalAsyncResult * __this));
}
