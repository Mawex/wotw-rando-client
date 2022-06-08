using namespace app;

namespace app::methods::System::Collections::Generic::Queue_1_System::Int32_ {
IL2CPP_REGISTER_METHOD(0x0243CB70, void, __ctor, (Queue_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0478B580, Queue_1_System_Int32___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (Queue_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0476A518, Queue_1_System_Int32__get_Count__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CA6E30, int32_t, Dequeue, (Queue_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04709068, Queue_1_System_Int32__Dequeue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CA66E0, void, __ctor, (Queue_1_System_Int32_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x04785F08, Queue_1_System_Int32___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (Queue_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA6810, Object *, ICollection_get_SyncRoot, (Queue_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA6970, void, Clear, (Queue_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA6990, void, ICollection_CopyTo, (Queue_1_System_Int32_ * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04768868, Queue_1_System_Int32__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CA6C90, void, Enqueue, (Queue_1_System_Int32_ * __this, int32_t item));
IL2CPP_REGISTER_METHOD(0x02CA6D60, Queue_1_T_Enumerator_System_Int32_, GetEnumerator, (Queue_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA6DA0, IEnumerator_1_System_Int32_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (Queue_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA6DA0, IEnumerator *, IEnumerable_GetEnumerator, (Queue_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA6EC0, int32_t, Peek, (Queue_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA6F20, bool, Contains, (Queue_1_System_Int32_ * __this, int32_t item));
IL2CPP_REGISTER_METHOD(0x0243D5D0, Int32__Array *, ToArray, (Queue_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, (Queue_1_System_Int32_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, (Queue_1_System_Int32_ * __this, int32_t * index));
IL2CPP_REGISTER_METHOD(0x02CA7020, void, ThrowForEmptyQueue, (Queue_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04776850, Queue_1_System_Int32__ThrowForEmptyQueue__MethodInfo);
}
