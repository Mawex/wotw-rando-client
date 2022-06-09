#include <interception_macros.h>

namespace app::methods::System::Net::Semaphore {
    IL2CPP_REGISTER_METHOD(0x01BD32D0, void, __ctor, (app::Semaphore_1 * this_ptr, int32_t initial_count, int32_t max_count));
    IL2CPP_REGISTER_METHOD(0x01BD34A0, bool, ReleaseSemaphore, (app::Semaphore_1 * this_ptr));
}
