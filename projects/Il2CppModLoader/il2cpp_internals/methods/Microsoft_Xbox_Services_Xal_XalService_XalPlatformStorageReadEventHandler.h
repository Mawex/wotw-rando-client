using namespace app;

namespace app::methods::Microsoft::Xbox::Services::Xal::XalService_XalPlatformStorageReadEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XalService_XalPlatformStorageReadEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x012DDED0, void, Invoke, (XalService_XalPlatformStorageReadEventHandler * __this, void * context, void * userContext, void * operation, String * key));
IL2CPP_REGISTER_METHOD(0x0143E530, IAsyncResult *, BeginInvoke, (XalService_XalPlatformStorageReadEventHandler * __this, void * context, void * userContext, void * operation, String * key, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XalService_XalPlatformStorageReadEventHandler * __this, IAsyncResult * result));
}
