using namespace app;

namespace app::methods::System::Net::TimerThread_Timer {
IL2CPP_REGISTER_METHOD(0x020A8FC0, void, __ctor, (TimerThread_Timer * __this, int32_t durationMilliseconds));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Duration, (TimerThread_Timer * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_StartTime, (TimerThread_Timer * __this));
IL2CPP_REGISTER_METHOD(0x020A9010, int32_t, get_Expiration, (TimerThread_Timer * __this));
IL2CPP_REGISTER_METHOD(0x020A9020, int32_t, get_TimeRemaining, (TimerThread_Timer * __this));
IL2CPP_REGISTER_METHOD(0x00CC2AF0, void, Dispose, (TimerThread_Timer * __this));
}
