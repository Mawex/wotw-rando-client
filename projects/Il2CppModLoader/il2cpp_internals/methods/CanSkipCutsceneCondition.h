#include <interception_macros.h>

namespace app::methods::CanSkipCutsceneCondition {
    IL2CPP_REGISTER_METHOD(0x00B22180, bool, Validate, (app::CanSkipCutsceneCondition * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::CanSkipCutsceneCondition * this_ptr));
}
