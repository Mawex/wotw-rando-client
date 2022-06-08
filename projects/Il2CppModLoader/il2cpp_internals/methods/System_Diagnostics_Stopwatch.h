#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Stopwatch {
IL2CPP_REGISTER_METHOD(0x02004240, int64_t, GetTimestamp, ());
IL2CPP_REGISTER_METHOD(0x02004250, Stopwatch *, StartNew, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Stopwatch * __this));
IL2CPP_REGISTER_METHOD(0x020043A0, TimeSpan, get_Elapsed, (Stopwatch * __this));
IL2CPP_REGISTER_METHOD(0x02004510, int64_t, get_ElapsedMilliseconds, (Stopwatch * __this));
IL2CPP_REGISTER_METHOD(0x02004680, int64_t, get_ElapsedTicks, (Stopwatch * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsRunning, (Stopwatch * __this));
IL2CPP_REGISTER_METHOD(0x02004740, void, Reset, (Stopwatch * __this));
IL2CPP_REGISTER_METHOD(0x02004750, void, Start, (Stopwatch * __this));
IL2CPP_REGISTER_METHOD(0x02004800, void, Stop, (Stopwatch * __this));
IL2CPP_REGISTER_METHOD(0x020048D0, void, Restart, (Stopwatch * __this));
IL2CPP_REGISTER_METHOD(0x02004980, void, __cctor, ());
}
