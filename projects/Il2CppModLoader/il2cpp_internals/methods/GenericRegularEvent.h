#include <interception_macros.h>

namespace app::methods::GenericRegularEvent {
IL2CPP_REGISTER_METHOD(0x02E91620, void, __ctor, (GenericRegularEvent * __this, String * message, String * stacktrace, String * group, LogType__Enum logType));
IL2CPP_REGISTER_METHOD(0x02E91640, DatadogEvent *, GetCompatibleEvent, (GenericRegularEvent * __this));
}
