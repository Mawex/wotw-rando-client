using namespace app;

namespace app::methods::System::Threading::WaitOrTimerCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (WaitOrTimerCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D19FD0, void, Invoke, (WaitOrTimerCallback * __this, Object * state, bool timedOut));
IL2CPP_REGISTER_METHOD(0x027AB930, IAsyncResult *, BeginInvoke, (WaitOrTimerCallback * __this, Object * state, bool timedOut, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (WaitOrTimerCallback * __this, IAsyncResult * result));
}
