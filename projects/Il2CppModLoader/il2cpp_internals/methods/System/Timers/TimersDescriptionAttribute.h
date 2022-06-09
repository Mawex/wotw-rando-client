#include <interception_macros.h>

namespace app::methods::System::Timers::TimersDescriptionAttribute {
    IL2CPP_REGISTER_METHOD(0x02A7C090, void, __ctor, (app::TimersDescriptionAttribute * this_ptr, app::String * description));
    IL2CPP_REGISTER_METHOD(0x021BC650, app::String *, get_Description, (app::TimersDescriptionAttribute * this_ptr));
}
