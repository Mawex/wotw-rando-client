#include <interception_macros.h>

namespace app::methods::System::Collections::Concurrent::ConcurrentQueue_1_T__Segment_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (ConcurrentQueue_1_T_Segment_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02F26D20, int32_t, get_FreezeOffset, (ConcurrentQueue_1_T_Segment_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02F26C60, void, __ctor, (ConcurrentQueue_1_T_Segment_System_Object_ * __this, int32_t boundedLength));
IL2CPP_REGISTER_METHOD(0x02F26D40, void, EnsureFrozenForEnqueues, (ConcurrentQueue_1_T_Segment_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02F26E70, bool, TryDequeue, (ConcurrentQueue_1_T_Segment_System_Object_ * __this, Object * * item));
IL2CPP_REGISTER_METHOD(0x02F270E0, bool, TryEnqueue, (ConcurrentQueue_1_T_Segment_System_Object_ * __this, Object * item));
}
