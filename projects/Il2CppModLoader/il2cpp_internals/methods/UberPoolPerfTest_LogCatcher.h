#include <interception_macros.h>

namespace app::methods::UberPoolPerfTest_LogCatcher {
IL2CPP_REGISTER_METHOD(0x00FEC180, void, __ctor, (UberPoolPerfTest_LogCatcher * __this));
IL2CPP_REGISTER_METHOD(0x00FEC3B0, void, OnLogMessageReceived, (UberPoolPerfTest_LogCatcher * __this, String * condition, String * stacktrace, LogType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x04768460, UberPoolPerfTest_LogCatcher_OnLogMessageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FEC6D0, void, Dispose, (UberPoolPerfTest_LogCatcher * __this));
IL2CPP_REGISTER_METHOD(0x00FEC860, void, Finalize, (UberPoolPerfTest_LogCatcher * __this));
}
