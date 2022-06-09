#include <interception_macros.h>

namespace app::methods::BatchedRaycast {
IL2CPP_REGISTER_METHOD(0x00F97A30, void, __ctor, (app::BatchedRaycast * this_ptr, int32_t batch_size));
IL2CPP_REGISTER_METHOD(0x00F97BA0, JobHandle, ScheduleBatch, (app::BatchedRaycast * this_ptr));
}
