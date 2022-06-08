using namespace app;

namespace app::methods::Microsoft::Xbox::Services::Xal::PlatformStorageWriteEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (PlatformStorageWriteEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01434D20, Task *, Invoke, (PlatformStorageWriteEventHandler * __this, String * key, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (PlatformStorageWriteEventHandler * __this, String * key, Byte__Array * data, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Task *, EndInvoke, (PlatformStorageWriteEventHandler * __this, IAsyncResult * result));
}
