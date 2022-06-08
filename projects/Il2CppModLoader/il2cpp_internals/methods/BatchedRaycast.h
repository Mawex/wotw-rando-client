#include <interception_macros.h>

namespace app::methods::BatchedRaycast {
IL2CPP_REGISTER_METHOD(0x00F97A30, void, __ctor, (BatchedRaycast * __this, int32_t batchSize));
IL2CPP_REGISTER_METHOD(0x00F97BA0, JobHandle, ScheduleBatch, (BatchedRaycast * __this));
}
