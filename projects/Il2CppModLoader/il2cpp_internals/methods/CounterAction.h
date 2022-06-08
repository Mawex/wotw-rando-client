#include <interception_macros.h>

namespace app::methods::CounterAction {
IL2CPP_REGISTER_METHOD(0x00DB1490, void, Perform, (CounterAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DB1500, String *, GetNiceName, (CounterAction * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (CounterAction * __this));
}
