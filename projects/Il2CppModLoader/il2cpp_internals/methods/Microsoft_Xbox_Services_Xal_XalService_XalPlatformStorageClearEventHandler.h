#include <interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::XalService_XalPlatformStorageClearEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XalService_XalPlatformStorageClearEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x012DDED0, void, Invoke, (XalService_XalPlatformStorageClearEventHandler * __this, void * context, void * userContext, void * operation, String * key));
IL2CPP_REGISTER_METHOD(0x0143E430, IAsyncResult *, BeginInvoke, (XalService_XalPlatformStorageClearEventHandler * __this, void * context, void * userContext, void * operation, String * key, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XalService_XalPlatformStorageClearEventHandler * __this, IAsyncResult * result));
}
