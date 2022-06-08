#include <interception_macros.h>

namespace app::methods::System::Net::Sockets::SocketAsyncResult {
IL2CPP_REGISTER_METHOD(0x020A1D60, void *, get_Handle, (SocketAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SocketAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x020A1E00, void, Init, (SocketAsyncResult * __this, Socket * socket, AsyncCallback * callback, Object * state, SocketOperation__Enum operation));
IL2CPP_REGISTER_METHOD(0x020A1E90, void, __ctor, (SocketAsyncResult * __this, Socket * socket, AsyncCallback * callback, Object * state, SocketOperation__Enum operation));
IL2CPP_REGISTER_METHOD(0x020A1EB0, SocketError__Enum, get_ErrorCode, (SocketAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x020A1F90, void, CheckIfThrowDelayedException, (SocketAsyncResult * __this));
IL2CPP_REGISTER_METHODINFO(0x0477F350, SocketAsyncResult_CheckIfThrowDelayedException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020A20B0, void, CompleteDisposed, (SocketAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x020A20C0, void, Complete, (SocketAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x020A2480, void, Complete, (SocketAsyncResult * __this, bool synch));
IL2CPP_REGISTER_METHOD(0x020A2490, void, Complete, (SocketAsyncResult * __this, int32_t total));
IL2CPP_REGISTER_METHOD(0x020A24A0, void, Complete, (SocketAsyncResult * __this, Exception * e, bool synch));
IL2CPP_REGISTER_METHOD(0x020A24B0, void, Complete, (SocketAsyncResult * __this, Exception * e));
IL2CPP_REGISTER_METHOD(0x020A24C0, void, Complete, (SocketAsyncResult * __this, Socket * s));
IL2CPP_REGISTER_METHOD(0x020A24D0, void, Complete, (SocketAsyncResult * __this, Socket * s, int32_t total));
}
