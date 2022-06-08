#include <interception_macros.h>

namespace app::methods::System::Net::Semaphore {
IL2CPP_REGISTER_METHOD(0x01BD32D0, void, __ctor, (Semaphore_1 * __this, int32_t initialCount, int32_t maxCount));
IL2CPP_REGISTER_METHOD(0x01BD34A0, bool, ReleaseSemaphore, (Semaphore_1 * __this));
}
