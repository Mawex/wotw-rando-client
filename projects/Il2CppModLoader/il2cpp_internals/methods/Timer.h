#include <interception_macros.h>

namespace app::methods::Timer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::Timer_2 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Report, (app::Timer_2 * this_ptr, app::String* message));
} // namespace app::methods::Timer
