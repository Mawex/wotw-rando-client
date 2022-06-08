#include <interception_macros.h>

namespace app::methods::UnityEngine::Logger {
IL2CPP_REGISTER_METHOD(0x02530570, void, __ctor, (Logger * __this, ILogHandler * logHandler));
IL2CPP_REGISTER_METHOD(0x01F2AB40, ILogHandler *, get_logHandler, (Logger * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_logHandler, (Logger * __this, ILogHandler * value));
IL2CPP_REGISTER_METHOD(0x02530580, bool, get_logEnabled, (Logger * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_logEnabled, (Logger * __this, bool value));
IL2CPP_REGISTER_METHOD(0x024AD180, LogType__Enum, get_filterLogType, (Logger * __this));
IL2CPP_REGISTER_METHOD(0x0052A020, void, set_filterLogType, (Logger * __this, LogType__Enum value));
IL2CPP_REGISTER_METHOD(0x02530590, bool, IsLogTypeAllowed, (Logger * __this, LogType__Enum logType));
IL2CPP_REGISTER_METHOD(0x025305C0, String *, GetString, (Object * message));
IL2CPP_REGISTER_METHOD(0x025306C0, void, Log, (Logger * __this, LogType__Enum logType, Object * message));
IL2CPP_REGISTER_METHOD(0x02530820, void, Log, (Logger * __this, LogType__Enum logType, Object * message, Object_1 * context));
IL2CPP_REGISTER_METHOD(0x02530980, void, LogFormat, (Logger * __this, LogType__Enum logType, String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x02530A60, void, LogFormat, (Logger * __this, LogType__Enum logType, Object_1 * context, String * format, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x02530B40, void, LogException, (Logger * __this, Exception * exception, Object_1 * context));
}
