#include <interception_macros.h>

namespace app::methods::Moon::ContinuousIntegration::RecordingLogHandler {
IL2CPP_REGISTER_METHOD(0x0318BC50, void, __ctor, (RecordingLogHandler * __this, bool quickExit));
IL2CPP_REGISTER_METHOD(0x0318C2F0, void, LogFormat, (RecordingLogHandler * __this, LogType__Enum type, Object_1 * context, String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x0318C800, bool, IsCaptureString, (Object * arg));
IL2CPP_REGISTER_METHODINFO(0x04771908, RecordingLogHandler_IsCaptureString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0318C8D0, void, LogException, (RecordingLogHandler * __this, Exception * exception, Object_1 * context));
IL2CPP_REGISTER_METHOD(0x0318CAC0, void, CurrentDomainOnUnhandledException, (RecordingLogHandler * __this, Object * sender, UnhandledExceptionEventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x04740AC0, RecordingLogHandler_CurrentDomainOnUnhandledException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0318CBD0, void, ApplicationOnLogMessageReceived, (RecordingLogHandler * __this, String * condition, String * stacktrace, LogType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x04748688, RecordingLogHandler_ApplicationOnLogMessageReceived__MethodInfo);
}
