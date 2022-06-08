using namespace app;

namespace app::methods::Mono::Net::Security::MonoTlsStream {
IL2CPP_REGISTER_METHOD(0x002FB950, HttpWebRequest *, get_Request, (MonoTlsStream * __this));
IL2CPP_REGISTER_METHOD(0x003FC7F0, WebExceptionStatus__Enum, get_ExceptionStatus, (MonoTlsStream * __this));
IL2CPP_REGISTER_METHOD(0x004E5A00, bool, get_CertificateValidationFailed, (MonoTlsStream * __this));
IL2CPP_REGISTER_METHOD(0x004E5A10, void, set_CertificateValidationFailed, (MonoTlsStream * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02184DA0, void, __ctor, (MonoTlsStream * __this, HttpWebRequest * request, NetworkStream * networkStream));
IL2CPP_REGISTER_METHOD(0x02184EA0, Stream *, CreateStream, (MonoTlsStream * __this, Byte__Array * buffer));
IL2CPP_REGISTER_METHODINFO(0x04781F30, MonoTlsStream_CreateStream__MethodInfo);
}
