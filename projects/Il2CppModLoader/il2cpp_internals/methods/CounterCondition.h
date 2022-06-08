#include <interception_macros.h>

namespace app::methods::CounterCondition {
IL2CPP_REGISTER_METHOD(0x00DB1AC0, bool, Validate, (CounterCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DB1B60, String *, GetNiceName, (CounterCondition * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CounterCondition * __this));
}
