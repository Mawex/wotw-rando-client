#include <interception_macros.h>

namespace app::methods::System::Net::CreateConnectionDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CreateConnectionDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x014347E0, PooledStream *, Invoke, (CreateConnectionDelegate * __this, ConnectionPool * pool));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (CreateConnectionDelegate * __this, ConnectionPool * pool, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, PooledStream *, EndInvoke, (CreateConnectionDelegate * __this, IAsyncResult * result));
}
