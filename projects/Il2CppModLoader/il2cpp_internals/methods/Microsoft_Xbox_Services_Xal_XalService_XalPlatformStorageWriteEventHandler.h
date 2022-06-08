using namespace app;

namespace app::methods::Microsoft::Xbox::Services::Xal::XalService_XalPlatformStorageWriteEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XalService_XalPlatformStorageWriteEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0143E630, void, Invoke, (XalService_XalPlatformStorageWriteEventHandler * __this, void * context, void * userContext, void * operation, String * key, void * dataSize, void * data));
IL2CPP_REGISTER_METHOD(0x0143EB40, IAsyncResult *, BeginInvoke, (XalService_XalPlatformStorageWriteEventHandler * __this, void * context, void * userContext, void * operation, String * key, void * dataSize, void * data, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XalService_XalPlatformStorageWriteEventHandler * __this, IAsyncResult * result));
}
