using namespace app;

namespace app::methods::System::Collections::Concurrent::ConcurrentQueue_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (ConcurrentQueue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02F27690, Object *, ICollection_get_SyncRoot, (ConcurrentQueue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04731980, ConcurrentQueue_1_System_Object__System_Collections_ICollection_get_SyncRoot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F27A80, int32_t, get_Count, (ConcurrentQueue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02F272B0, void, __ctor, (ConcurrentQueue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02F27510, void, ICollection_CopyTo, (ConcurrentQueue_1_System_Object_ * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047295D8, ConcurrentQueue_1_System_Object__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F276F0, IEnumerator *, IEnumerable_GetEnumerator, (ConcurrentQueue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02F27740, bool, System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd, (ConcurrentQueue_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02AD65B0, bool, System_Collections_Concurrent_IProducerConsumerCollection_T__TryTake, (ConcurrentQueue_1_System_Object_ * __this, Object * * item));
IL2CPP_REGISTER_METHOD(0x02F27770, Object__Array *, ToArray, (ConcurrentQueue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047408E0, ConcurrentQueue_1_System_Object__ToArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F27E30, int32_t, GetCount, (ConcurrentQueue_1_T_Segment_System_Object_ * s, int32_t head, int32_t tail));
IL2CPP_REGISTER_METHOD(0x02F27F20, int64_t, GetCount, (ConcurrentQueue_1_T_Segment_System_Object_ * head, int32_t headHead, ConcurrentQueue_1_T_Segment_System_Object_ * tail, int32_t tailTail));
IL2CPP_REGISTER_METHOD(0x02F28110, void, CopyTo, (ConcurrentQueue_1_System_Object_ * __this, Object__Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04758F88, ConcurrentQueue_1_System_Object__CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F28420, IEnumerator_1_System_Object_ *, GetEnumerator, (ConcurrentQueue_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02F284C0, void, SnapForObservation, (ConcurrentQueue_1_System_Object_ * __this, ConcurrentQueue_1_T_Segment_System_Object_ * * head, int32_t * headHead, ConcurrentQueue_1_T_Segment_System_Object_ * * tail, int32_t * tailTail));
IL2CPP_REGISTER_METHOD(0x02F28660, Object *, GetItemWhenAvailable, (ConcurrentQueue_1_System_Object_ * __this, ConcurrentQueue_1_T_Segment_System_Object_ * segment, int32_t i));
IL2CPP_REGISTER_METHOD(0x02F28800, IEnumerator_1_System_Object_ *, Enumerate, (ConcurrentQueue_1_System_Object_ * __this, ConcurrentQueue_1_T_Segment_System_Object_ * head, int32_t headHead, ConcurrentQueue_1_T_Segment_System_Object_ * tail, int32_t tailTail));
IL2CPP_REGISTER_METHOD(0x02F28970, void, Enqueue, (ConcurrentQueue_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02F289F0, void, EnqueueSlow, (ConcurrentQueue_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02F28D50, bool, TryDequeue, (ConcurrentQueue_1_System_Object_ * __this, Object * * result));
IL2CPP_REGISTER_METHOD(0x02F28DE0, bool, TryDequeueSlow, (ConcurrentQueue_1_System_Object_ * __this, Object * * item));
}
