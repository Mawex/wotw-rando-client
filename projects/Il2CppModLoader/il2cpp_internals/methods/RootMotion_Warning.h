#include <interception_macros.h>

namespace app::methods::RootMotion::Warning {
IL2CPP_REGISTER_METHOD(0x02A2EF60, void, Log, (String * message, Warning_Logger * logger, bool logInEditMode));
IL2CPP_REGISTER_METHOD(0x02A2F020, void, Log, (String * message, Transform * context, bool logInEditMode));
}
