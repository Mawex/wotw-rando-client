#include <interception_macros.h>

namespace app::methods::System::Collections::Concurrent::BlockingCollection_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02AD81F0, bool, get_IsAddingCompleted, (BlockingCollection_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AD8230, bool, get_IsCompleted, (BlockingCollection_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AD82B0, int32_t, get_Count, (BlockingCollection_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AD8300, bool, ICollection_get_IsSynchronized, (BlockingCollection_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AD8330, Object *, ICollection_get_SyncRoot, (BlockingCollection_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04778C08, BlockingCollection_1_System_Object__System_Collections_ICollection_get_SyncRoot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AD8390, void, __ctor, (BlockingCollection_1_System_Object_ * __this, int32_t boundedCapacity));
IL2CPP_REGISTER_METHOD(0x02AD84D0, void, __ctor, (BlockingCollection_1_System_Object_ * __this, IProducerConsumerCollection_1_System_Object_ * collection, int32_t boundedCapacity));
IL2CPP_REGISTER_METHODINFO(0x04761C18, BlockingCollection_1_System_Object___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AD8680, void, Initialize, (BlockingCollection_1_System_Object_ * __this, IProducerConsumerCollection_1_System_Object_ * collection, int32_t boundedCapacity, int32_t collectionCount));
IL2CPP_REGISTER_METHOD(0x02AD8A90, void, Add, (BlockingCollection_1_System_Object_ * __this, Object * item, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x02AD8AD0, bool, TryAdd, (BlockingCollection_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02AD8B00, bool, TryAddWithNoTimeValidation, (BlockingCollection_1_System_Object_ * __this, Object * item, int32_t millisecondsTimeout, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHODINFO(0x0477B8A8, BlockingCollection_1_System_Object__TryAddWithNoTimeValidation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AD9130, bool, TryTake, (BlockingCollection_1_System_Object_ * __this, Object * * item, int32_t millisecondsTimeout, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x02AD91D0, bool, TryTakeWithNoTimeValidation, (BlockingCollection_1_System_Object_ * __this, Object * * item, int32_t millisecondsTimeout, CancellationToken cancellationToken, CancellationTokenSource * combinedTokenSource));
IL2CPP_REGISTER_METHODINFO(0x04767978, BlockingCollection_1_System_Object__TryTakeWithNoTimeValidation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AD96D0, void, CompleteAdding, (BlockingCollection_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AD99D0, void, CancelWaitingConsumers, (BlockingCollection_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AD9A10, void, CancelWaitingProducers, (BlockingCollection_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AD9A50, void, Dispose, (BlockingCollection_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AD9B10, void, Dispose, (BlockingCollection_1_System_Object_ * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02AD9B50, Object__Array *, ToArray, (BlockingCollection_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AD9BE0, void, ICollection_CopyTo, (BlockingCollection_1_System_Object_ * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04793C30, BlockingCollection_1_System_Object__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AD9E90, IEnumerable_1_System_Object_ *, GetConsumingEnumerable, (BlockingCollection_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AD9F60, IEnumerable_1_System_Object_ *, GetConsumingEnumerable, (BlockingCollection_1_System_Object_ * __this, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x02ADA0A0, IEnumerator_1_System_Object_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (BlockingCollection_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ADA130, IEnumerator *, IEnumerable_GetEnumerator, (BlockingCollection_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ADA190, void, ValidateMillisecondsTimeout, (int32_t millisecondsTimeout));
IL2CPP_REGISTER_METHODINFO(0x04722480, BlockingCollection_1_System_Object__ValidateMillisecondsTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ADA2D0, void, CheckDisposed, (BlockingCollection_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04799778, BlockingCollection_1_System_Object__CheckDisposed__MethodInfo);
}
