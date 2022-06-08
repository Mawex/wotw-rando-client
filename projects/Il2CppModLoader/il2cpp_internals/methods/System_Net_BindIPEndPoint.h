#include <interception_macros.h>

namespace app::methods::System::Net::BindIPEndPoint {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BindIPEndPoint * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02014F60, IPEndPoint *, Invoke, (BindIPEndPoint * __this, ServicePoint * servicePoint, IPEndPoint * remoteEndPoint, int32_t retryCount));
IL2CPP_REGISTER_METHOD(0x020154D0, IAsyncResult *, BeginInvoke, (BindIPEndPoint * __this, ServicePoint * servicePoint, IPEndPoint * remoteEndPoint, int32_t retryCount, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, IPEndPoint *, EndInvoke, (BindIPEndPoint * __this, IAsyncResult * result));
}
