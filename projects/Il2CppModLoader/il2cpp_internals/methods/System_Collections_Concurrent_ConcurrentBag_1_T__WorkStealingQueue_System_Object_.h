#include <interception_macros.h>

namespace app::methods::System::Collections::Concurrent::ConcurrentBag_1_T__WorkStealingQueue_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02ADB040, int32_t, get_DangerousCount, (ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ADA500, void, __ctor, (ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * __this, ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * nextQueue));
IL2CPP_REGISTER_METHOD(0x02ADA5B0, void, LocalPush, (ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHODINFO(0x04781188, ConcurrentBag_1_T_WorkStealingQueue_System_Object__LocalPush__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ADAA70, bool, TryLocalPop, (ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * __this, Object * * result));
IL2CPP_REGISTER_METHOD(0x02ADAD10, bool, TrySteal, (ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * __this, Object * * result, bool take));
IL2CPP_REGISTER_METHOD(0x02ADAF60, int32_t, DangerousCopyTo, (ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * __this, Object__Array * array, int32_t arrayIndex));
}
