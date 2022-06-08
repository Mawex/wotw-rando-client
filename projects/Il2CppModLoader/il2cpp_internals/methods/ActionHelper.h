#include <interception_macros.h>

namespace app::methods::ActionHelper {
IL2CPP_REGISTER_METHOD(0x004C4E30, String *, GetName, (ActionMethod * action));
IL2CPP_REGISTER_METHOD(0x004C4F00, String *, GetName, (Condition_1 * condition));
IL2CPP_REGISTER_METHOD(0x004C4FD0, String *, GetName, (Object_1 * target));
IL2CPP_REGISTER_METHOD(0x004C50A0, String *, GetName, (String * s));
}
