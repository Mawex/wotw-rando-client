#include <interception_macros.h>

namespace app::methods::System::Net::Sockets::SocketAsyncEventArgs {
IL2CPP_REGISTER_METHOD(0x002FB990, Socket *, get_AcceptSocket, (SocketAsyncEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_AcceptSocket, (SocketAsyncEventArgs * __this, Socket * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IList_1_System_ArraySegment_1_ *, get_BufferList, (SocketAsyncEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x004E57B0, void, set_BytesTransferred, (SocketAsyncEventArgs * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0057AAC0, int32_t, get_Count, (SocketAsyncEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x008F7CD0, void, set_LastOperation, (SocketAsyncEventArgs * __this, SocketAsyncOperation__Enum value));
IL2CPP_REGISTER_METHOD(0x00843E80, void, set_SendPacketsSendSize, (SocketAsyncEventArgs * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FD490, SocketError__Enum, get_SocketError, (SocketAsyncEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_SocketError, (SocketAsyncEventArgs * __this, SocketError__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBB60, Object *, get_UserToken, (SocketAsyncEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_UserToken, (SocketAsyncEventArgs * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x020A1770, void, add_Completed, (SocketAsyncEventArgs * __this, EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x020A1860, void, remove_Completed, (SocketAsyncEventArgs * __this, EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x020A1950, void, __ctor, (SocketAsyncEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x020A1AC0, void, Finalize, (SocketAsyncEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x020A1AE0, void, Dispose, (SocketAsyncEventArgs * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x020A1AF0, void, Dispose, (SocketAsyncEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x020A1BA0, void, SetLastOperation, (SocketAsyncEventArgs * __this, SocketAsyncOperation__Enum op));
IL2CPP_REGISTER_METHODINFO(0x047468C8, SocketAsyncEventArgs_SetLastOperation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020A1CA0, void, Complete, (SocketAsyncEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x020A1CC0, void, OnCompleted, (SocketAsyncEventArgs * __this, SocketAsyncEventArgs * e));
}
