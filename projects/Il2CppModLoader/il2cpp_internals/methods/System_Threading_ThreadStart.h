using namespace app;

namespace app::methods::System::Threading::ThreadStart {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ThreadStart * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (ThreadStart * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (ThreadStart * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ThreadStart * __this, IAsyncResult * result));
}
