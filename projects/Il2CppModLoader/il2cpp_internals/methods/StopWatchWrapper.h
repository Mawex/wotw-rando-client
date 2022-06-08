using namespace app;

namespace app::methods::StopWatchWrapper {
IL2CPP_REGISTER_METHOD(0x0065CAB0, void, __ctor, (StopWatchWrapper * __this, bool shouldStart));
IL2CPP_REGISTER_METHOD(0x0065CC10, double, GetElapasedMiliseconds, (StopWatchWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0065CC60, double, GetElapasedSeconds, (StopWatchWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0065CC90, void, Finalize, (StopWatchWrapper * __this, String * message, StopWatchWrapper_LogType__Enum logType, StopWatchWrapper_Unit__Enum unit));
IL2CPP_REGISTER_METHOD(0x0065CE50, double, FinalizeStopWatch, (StopWatchWrapper * __this));
}
