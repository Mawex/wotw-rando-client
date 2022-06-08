using namespace app;

namespace app::methods::System::Collections::Generic::Queue_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (Queue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04721B88, Queue_1_System_Object__get_Count__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (Queue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA71B0, Object *, ICollection_get_SyncRoot, (Queue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0243CB70, void, __ctor, (Queue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA7080, void, __ctor, (Queue_1_System_Object_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x04705B08, Queue_1_System_Object___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, (Queue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA7310, void, ICollection_CopyTo, (Queue_1_System_Object_ * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047663E8, Queue_1_System_Object__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (Queue_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHODINFO(0x0475E3F0, Queue_1_System_Object__Enqueue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CA76E0, Queue_1_T_Enumerator_System_Object_, GetEnumerator, (Queue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA7720, IEnumerator_1_System_Object_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (Queue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA7720, IEnumerator *, IEnumerable_GetEnumerator, (Queue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CA77B0, Object *, Dequeue, (Queue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047824F8, Queue_1_System_Object__Dequeue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CA7860, Object *, Peek, (Queue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04705830, Queue_1_System_Object__Peek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CA78C0, bool, Contains, (Queue_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x0243D5D0, Object__Array *, ToArray, (Queue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0243D6C0, void, SetCapacity, (Queue_1_System_Object_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0243D7A0, void, MoveNext, (Queue_1_System_Object_ * __this, int32_t * index));
IL2CPP_REGISTER_METHOD(0x02CA79C0, void, ThrowForEmptyQueue, (Queue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04731B10, Queue_1_System_Object__ThrowForEmptyQueue__MethodInfo);
}
