#include <interception_macros.h>

namespace app::methods::System::Runtime::CompilerServices::ConfiguredTaskAwaitable {
    IL2CPP_REGISTER_METHOD(0x0018EE90, void, __ctor, (app::ConfiguredTaskAwaitable__Boxed * this_ptr, app::Task * task, bool continue_on_captured_context));
    IL2CPP_REGISTER_METHOD(0x0010A980, app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter, GetAwaiter, (app::ConfiguredTaskAwaitable__Boxed * this_ptr));
}
