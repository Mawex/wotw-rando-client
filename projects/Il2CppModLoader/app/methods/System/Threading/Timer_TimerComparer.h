#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::Timer_TimerComparer {
    IL2CPP_REGISTER_METHOD(0x0234B600, int32_t, Compare, (app::Timer_TimerComparer * this_ptr, app::Object * x, app::Object * y))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Timer_TimerComparer * this_ptr))
}
