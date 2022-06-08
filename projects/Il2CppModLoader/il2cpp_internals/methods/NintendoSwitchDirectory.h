#include <interception_macros.h>

namespace app::methods::NintendoSwitchDirectory {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, Exists, (String * path));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CreateDirectory, (String * path));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NintendoSwitchDirectory * __this));
}
