using namespace app;

namespace app::methods::System::Net::WebException {
IL2CPP_REGISTER_METHOD(0x01D6FAD0, void, __ctor, (WebException * __this));
IL2CPP_REGISTER_METHOD(0x01D6FAF0, void, __ctor, (WebException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x01D6FB20, void, __ctor, (WebException * __this, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x01D6FB50, void, __ctor, (WebException * __this, String * message, WebExceptionStatus__Enum status));
IL2CPP_REGISTER_METHOD(0x01D6FB70, void, __ctor, (WebException * __this, String * message, WebExceptionStatus__Enum status, WebExceptionInternalStatus__Enum internalStatus, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x01D6FC60, void, __ctor, (WebException * __this, String * message, Exception * innerException, WebExceptionStatus__Enum status, WebResponse * response));
IL2CPP_REGISTER_METHOD(0x01D6FD40, void, __ctor, (WebException * __this, String * message, String * data, Exception * innerException, WebExceptionStatus__Enum status, WebResponse * response));
IL2CPP_REGISTER_METHOD(0x01D6FE40, void, __ctor, (WebException * __this, String * message, Exception * innerException, WebExceptionStatus__Enum status, WebResponse * response, WebExceptionInternalStatus__Enum internalStatus));
IL2CPP_REGISTER_METHOD(0x01D6FF30, void, __ctor, (WebException * __this, String * message, String * data, Exception * innerException, WebExceptionStatus__Enum status, WebResponse * response, WebExceptionInternalStatus__Enum internalStatus));
IL2CPP_REGISTER_METHOD(0x01D70040, void, __ctor, (WebException * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x00C53AA0, void, ISerializable_GetObjectData, (WebException * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x01BCD870, void, GetObjectData, (WebException * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x00989BF0, WebExceptionStatus__Enum, get_Status, (WebException * __this));
IL2CPP_REGISTER_METHOD(0x002FBC40, WebResponse *, get_Response, (WebException * __this));
IL2CPP_REGISTER_METHOD(0x00736620, WebExceptionInternalStatus__Enum, get_InternalStatus, (WebException * __this));
}
