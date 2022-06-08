#include <interception_macros.h>

namespace app::methods::Condition {
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetCondition, (Condition_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateCondition, (Condition_1 * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x004C50B0, String *, GetNiceName, (Condition_1 * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (Condition_1 * __this));
}
