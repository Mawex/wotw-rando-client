using namespace app;

namespace app::methods::System::Net::TimerThread_Callback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (TimerThread_Callback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x020A87A0, void, Invoke, (TimerThread_Callback * __this, TimerThread_Timer * timer, int32_t timeNoticed, Object * context));
IL2CPP_REGISTER_METHOD(0x020A8CF0, IAsyncResult *, BeginInvoke, (TimerThread_Callback * __this, TimerThread_Timer * timer, int32_t timeNoticed, Object * context, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (TimerThread_Callback * __this, IAsyncResult * result));
}
