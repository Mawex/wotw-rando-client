#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::Demos::SlowMo {
    IL2CPP_REGISTER_METHOD(0x02046090, void, Update, (app::SlowMo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02046270, bool, IsSlowMotion, (app::SlowMo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02046400, void, ctor, (app::SlowMo * this_ptr))
}
