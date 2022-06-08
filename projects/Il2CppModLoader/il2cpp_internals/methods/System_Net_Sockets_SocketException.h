#include <interception_macros.h>

namespace app::methods::System::Net::Sockets::SocketException {
IL2CPP_REGISTER_METHOD(0x020A2700, int32_t, WSAGetLastError_internal, ());
IL2CPP_REGISTER_METHOD(0x020A2730, void, __ctor, (SocketException * __this));
IL2CPP_REGISTER_METHOD(0x020A2800, void, __ctor, (SocketException * __this, int32_t error, String * message));
IL2CPP_REGISTER_METHOD(0x020A28C0, void, __ctor, (SocketException * __this, int32_t errorCode));
IL2CPP_REGISTER_METHOD(0x020A2970, void, __ctor, (SocketException * __this, SocketError__Enum socketError));
IL2CPP_REGISTER_METHOD(0x020A2A20, void, __ctor, (SocketException * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_ErrorCode, (SocketException * __this));
IL2CPP_REGISTER_METHOD(0x020A2AE0, String *, get_Message, (SocketException * __this));
IL2CPP_REGISTER_METHOD(0x00989BF0, SocketError__Enum, get_SocketErrorCode, (SocketException * __this));
}
