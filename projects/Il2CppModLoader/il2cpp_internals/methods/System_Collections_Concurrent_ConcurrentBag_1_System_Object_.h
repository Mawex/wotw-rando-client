using namespace app;

namespace app::methods::System::Collections::Concurrent::ConcurrentBag_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02ADBFD0, int32_t, get_Count, (ConcurrentBag_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ADC100, int32_t, get_DangerousCount, (ConcurrentBag_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047865F8, ConcurrentBag_1_System_Object__get_DangerousCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (ConcurrentBag_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ADC210, Object *, ICollection_get_SyncRoot, (ConcurrentBag_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0475FCB8, ConcurrentBag_1_System_Object__System_Collections_ICollection_get_SyncRoot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_GlobalQueuesLock, (ConcurrentBag_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02776BF0, void, __ctor, (ConcurrentBag_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ADB050, void, Add, (ConcurrentBag_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02ADB0C0, bool, System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd, (ConcurrentBag_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02ADB0F0, bool, TryTake, (ConcurrentBag_1_System_Object_ * __this, Object * * result));
IL2CPP_REGISTER_METHOD(0x02ADB190, ConcurrentBag_1_T_WorkStealingQueue_System_Object_ *, GetCurrentThreadWorkStealingQueue, (ConcurrentBag_1_System_Object_ * __this, bool forceCreate));
IL2CPP_REGISTER_METHOD(0x02ADB210, ConcurrentBag_1_T_WorkStealingQueue_System_Object_ *, CreateWorkStealingQueueForCurrentThread, (ConcurrentBag_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ADB4A0, ConcurrentBag_1_T_WorkStealingQueue_System_Object_ *, GetUnownedWorkStealingQueue, (ConcurrentBag_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ADB520, bool, TrySteal, (ConcurrentBag_1_System_Object_ * __this, Object * * result, bool take));
IL2CPP_REGISTER_METHOD(0x02ADB740, bool, TryStealFromTo, (ConcurrentBag_1_System_Object_ * __this, ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * startInclusive, ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * endExclusive, Object * * result, bool take));
IL2CPP_REGISTER_METHOD(0x02ADB7D0, void, CopyTo, (ConcurrentBag_1_System_Object_ * __this, Object__Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047225D8, ConcurrentBag_1_System_Object__CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ADBA80, int32_t, CopyFromEachQueueToArray, (ConcurrentBag_1_System_Object_ * __this, Object__Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x02ADBB00, void, ICollection_CopyTo, (ConcurrentBag_1_System_Object_ * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04708BE8, ConcurrentBag_1_System_Object__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ADBC90, Object__Array *, ToArray, (ConcurrentBag_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ADBE50, IEnumerator_1_System_Object_ *, GetEnumerator, (ConcurrentBag_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ADBFA0, IEnumerator *, IEnumerable_GetEnumerator, (ConcurrentBag_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ADC270, void, FreezeBag, (ConcurrentBag_1_System_Object_ * __this, bool * lockTaken));
IL2CPP_REGISTER_METHOD(0x02ADC370, void, UnfreezeBag, (ConcurrentBag_1_System_Object_ * __this, bool lockTaken));
}
