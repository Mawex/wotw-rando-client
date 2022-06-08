#include <interception_macros.h>

namespace app::methods::Pushables {
IL2CPP_REGISTER_METHOD(0x00E86C50, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00E86D20, void, Add, (IPushable * pushable));
IL2CPP_REGISTER_METHOD(0x00E86DE0, void, Remove, (IPushable * pushable));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Pushables * __this));
IL2CPP_REGISTER_METHOD(0x00E86EC0, void, __cctor, ());
}
