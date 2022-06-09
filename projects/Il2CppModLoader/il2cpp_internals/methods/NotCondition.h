#include <interception_macros.h>

namespace app::methods::NotCondition {
    IL2CPP_REGISTER_METHOD(0x0060C300, bool, Validate, (app::NotCondition * this_ptr, app::IContext* context));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::NotCondition * this_ptr));
} // namespace app::methods::NotCondition
