#include <interception_macros.h>

namespace app::methods::System::Threading::ThreadPoolWorkQueue_QueueSegment {
IL2CPP_REGISTER_METHOD(0x02347C40, void, GetIndexes, (ThreadPoolWorkQueue_QueueSegment * __this, int32_t * upper, int32_t * lower));
IL2CPP_REGISTER_METHOD(0x02347C60, bool, CompareExchangeIndexes, (ThreadPoolWorkQueue_QueueSegment * __this, int32_t * prevUpper, int32_t newUpper, int32_t * prevLower, int32_t newLower));
IL2CPP_REGISTER_METHOD(0x02347CA0, void, __ctor, (ThreadPoolWorkQueue_QueueSegment * __this));
IL2CPP_REGISTER_METHOD(0x02347D30, bool, IsUsedUp, (ThreadPoolWorkQueue_QueueSegment * __this));
IL2CPP_REGISTER_METHOD(0x02347D80, bool, TryEnqueue, (ThreadPoolWorkQueue_QueueSegment * __this, IThreadPoolWorkItem * node));
IL2CPP_REGISTER_METHOD(0x02347E30, bool, TryDequeue, (ThreadPoolWorkQueue_QueueSegment * __this, IThreadPoolWorkItem * * node));
}
