#include <interception_macros.h>

namespace app::methods::System::Net::Security::SslStream {
IL2CPP_REGISTER_METHOD(0x01BD1C90, IMonoSslStream *, get_Impl, (SslStream * __this));
IL2CPP_REGISTER_METHOD(0x01BD1D40, void, __ctor, (SslStream * __this, Stream * innerStream, bool leaveInnerStreamOpen, MonoTlsProvider * provider, MonoTlsSettings * settings));
IL2CPP_REGISTER_METHOD(0x01BD1DC0, IMonoSslStream *, CreateMonoSslStream, (Stream * innerStream, bool leaveInnerStreamOpen, MonoTlsProvider * provider, MonoTlsSettings * settings));
IL2CPP_REGISTER_METHOD(0x01BD1F50, void, AuthenticateAsServer, (SslStream * __this, X509Certificate_1 * serverCertificate, bool clientCertificateRequired, SslProtocols__Enum enabledSslProtocols, bool checkCertificateRevocation));
IL2CPP_REGISTER_METHOD(0x01BD20A0, bool, get_IsAuthenticated, (SslStream * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (SslStream * __this));
IL2CPP_REGISTER_METHOD(0x01BD2140, bool, get_CanRead, (SslStream * __this));
IL2CPP_REGISTER_METHOD(0x01BD21E0, bool, get_CanTimeout, (SslStream * __this));
IL2CPP_REGISTER_METHOD(0x01BD2210, bool, get_CanWrite, (SslStream * __this));
IL2CPP_REGISTER_METHOD(0x01BD22B0, int32_t, get_ReadTimeout, (SslStream * __this));
IL2CPP_REGISTER_METHOD(0x01BD2350, void, set_ReadTimeout, (SslStream * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01BD2400, int32_t, get_WriteTimeout, (SslStream * __this));
IL2CPP_REGISTER_METHOD(0x01BD24A0, void, set_WriteTimeout, (SslStream * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01BD2550, int64_t, get_Length, (SslStream * __this));
IL2CPP_REGISTER_METHOD(0x01BD25F0, int64_t, get_Position, (SslStream * __this));
IL2CPP_REGISTER_METHOD(0x01BD2690, void, set_Position, (SslStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04753288, SslStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD2700, void, SetLength, (SslStream * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x01BD27B0, int64_t, Seek, (SslStream * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x04768680, SslStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD2820, Task *, FlushAsync, (SslStream * __this, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x01706BF0, void, Flush, (SslStream * __this));
IL2CPP_REGISTER_METHOD(0x01BD2850, void, CheckDisposed, (SslStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0475C808, SslStream_CheckDisposed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD2900, void, Dispose, (SslStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01BD2A40, int32_t, Read, (SslStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x01BD2B10, void, Write, (SslStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x01BD2BE0, IAsyncResult *, BeginRead, (SslStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * asyncCallback, Object * asyncState));
IL2CPP_REGISTER_METHOD(0x01BD2CC0, int32_t, EndRead, (SslStream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHOD(0x01BD2D70, IAsyncResult *, BeginWrite, (SslStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * asyncCallback, Object * asyncState));
IL2CPP_REGISTER_METHOD(0x01BD2E50, void, EndWrite, (SslStream * __this, IAsyncResult * asyncResult));
}
