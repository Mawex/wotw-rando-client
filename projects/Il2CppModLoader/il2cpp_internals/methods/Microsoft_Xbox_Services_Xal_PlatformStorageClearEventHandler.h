using namespace app;

namespace app::methods::Microsoft::Xbox::Services::Xal::PlatformStorageClearEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (PlatformStorageClearEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x014347E0, Task *, Invoke, (PlatformStorageClearEventHandler * __this, String * key));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (PlatformStorageClearEventHandler * __this, String * key, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Task *, EndInvoke, (PlatformStorageClearEventHandler * __this, IAsyncResult * result));
}
