#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::Queue_1_System::Single_ {
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (Queue_1_System_Single_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04775FF0, Queue_1_System_Single__get_Count__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CA7FB0, void, Enqueue, (Queue_1_System_Single_ * __this, float item));
IL2CPP_REGISTER_METHODINFO(0x0470B700, Queue_1_System_Single__Enqueue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CA6970, void, Clear, (Queue_1_System_Single_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04728AD8, Queue_1_System_Single__Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CA8080, float, Dequeue, (Queue_1_System_Single_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0473A848, Queue_1_System_Single__Dequeue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0243CB70, void, __ctor, (Queue_1_System_Single_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04730860, Queue_1_System_Single___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CA7A20, void, __ctor, (Queue_1_System_Single_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x04761340, Queue_1_System_Single___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (Queue_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA7B50, Object *, ICollection_get_SyncRoot, (Queue_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA7CB0, void, ICollection_CopyTo, (Queue_1_System_Single_ * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0477C870, Queue_1_System_Single__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CA6D60, Queue_1_T_Enumerator_System_Single_, GetEnumerator, (Queue_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA6DA0, IEnumerator_1_System_Single_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (Queue_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA6DA0, IEnumerator *, IEnumerable_GetEnumerator, (Queue_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA8120, float, Peek, (Queue_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA8180, bool, Contains, (Queue_1_System_Single_ * __this, float item));
IL2CPP_REGISTER_METHOD(0x0243D5D0, Single__Array *, ToArray, (Queue_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, (Queue_1_System_Single_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, (Queue_1_System_Single_ * __this, int32_t * index));
IL2CPP_REGISTER_METHOD(0x02CA8280, void, ThrowForEmptyQueue, (Queue_1_System_Single_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0474E9C8, Queue_1_System_Single__ThrowForEmptyQueue__MethodInfo);
}
