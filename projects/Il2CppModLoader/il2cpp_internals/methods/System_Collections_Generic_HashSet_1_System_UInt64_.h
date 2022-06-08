using namespace app;

namespace app::methods::System::Collections::Generic::HashSet_1_System::UInt64_ {
IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (HashSet_1_System_UInt64_ * __this, uint64_t item));
IL2CPP_REGISTER_METHODINFO(0x0478E720, HashSet_1_System_UInt64__Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ABCA70, bool, Remove, (HashSet_1_System_UInt64_ * __this, uint64_t item));
IL2CPP_REGISTER_METHODINFO(0x04771E00, HashSet_1_System_UInt64__Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ABC8E0, bool, Contains, (HashSet_1_System_UInt64_ * __this, uint64_t item));
IL2CPP_REGISTER_METHODINFO(0x04796110, HashSet_1_System_UInt64__Contains__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB4370, void, __ctor, (HashSet_1_System_UInt64_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04797400, HashSet_1_System_UInt64___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB43D0, void, __ctor, (HashSet_1_System_UInt64_ * __this, IEqualityComparer_1_System_UInt64_ * comparer));
IL2CPP_REGISTER_METHOD(0x02AB4420, void, __ctor, (HashSet_1_System_UInt64_ * __this, IEnumerable_1_System_UInt64_ * collection));
IL2CPP_REGISTER_METHOD(0x02AC1C70, void, __ctor, (HashSet_1_System_UInt64_ * __this, IEnumerable_1_System_UInt64_ * collection, IEqualityComparer_1_System_UInt64_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0476D950, HashSet_1_System_UInt64___ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB46E0, void, __ctor, (HashSet_1_System_UInt64_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02AC1EC0, void, CopyFrom, (HashSet_1_System_UInt64_ * __this, HashSet_1_System_UInt64_ * source));
IL2CPP_REGISTER_METHOD(0x02AB4A60, void, System_Collections_Generic_ICollection_T__Add, (HashSet_1_System_UInt64_ * __this, uint64_t item));
IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (HashSet_1_System_UInt64_ * __this));
IL2CPP_REGISTER_METHOD(0x02AB4C70, void, CopyTo, (HashSet_1_System_UInt64_ * __this, UInt64__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (HashSet_1_System_UInt64_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (HashSet_1_System_UInt64_ * __this));
IL2CPP_REGISTER_METHOD(0x02ABCD80, HashSet_1_T_Enumerator_System_UInt64_, GetEnumerator, (HashSet_1_System_UInt64_ * __this));
IL2CPP_REGISTER_METHOD(0x02ABCDC0, IEnumerator_1_System_UInt64_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (HashSet_1_System_UInt64_ * __this));
IL2CPP_REGISTER_METHOD(0x02ABCDC0, IEnumerator *, IEnumerable_GetEnumerator, (HashSet_1_System_UInt64_ * __this));
IL2CPP_REGISTER_METHOD(0x02AC2220, void, GetObjectData, (HashSet_1_System_UInt64_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0472DBB8, HashSet_1_System_UInt64__GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AC2440, void, OnDeserialization, (HashSet_1_System_UInt64_ * __this, Object * sender));
IL2CPP_REGISTER_METHODINFO(0x04732C30, HashSet_1_System_UInt64__OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AC2760, void, UnionWith, (HashSet_1_System_UInt64_ * __this, IEnumerable_1_System_UInt64_ * other));
IL2CPP_REGISTER_METHODINFO(0x04795F80, HashSet_1_System_UInt64__UnionWith__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB5840, void, CopyTo, (HashSet_1_System_UInt64_ * __this, UInt64__Array * array));
IL2CPP_REGISTER_METHOD(0x02AC29C0, void, CopyTo, (HashSet_1_System_UInt64_ * __this, UInt64__Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0473FB60, HashSet_1_System_UInt64__CopyTo_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AC2C30, int32_t, RemoveWhere, (HashSet_1_System_UInt64_ * __this, Predicate_1_UInt64_ * match));
IL2CPP_REGISTER_METHODINFO(0x0477E448, HashSet_1_System_UInt64__RemoveWhere__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB990, IEqualityComparer_1_System_UInt64_ *, get_Comparer, (HashSet_1_System_UInt64_ * __this));
IL2CPP_REGISTER_METHOD(0x02AC2DC0, void, TrimExcess, (HashSet_1_System_UInt64_ * __this));
IL2CPP_REGISTER_METHOD(0x02AC3010, void, Initialize, (HashSet_1_System_UInt64_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02AC3110, void, IncreaseCapacity, (HashSet_1_System_UInt64_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04769358, HashSet_1_System_UInt64__IncreaseCapacity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AC3210, void, SetCapacity, (HashSet_1_System_UInt64_ * __this, int32_t newSize));
IL2CPP_REGISTER_METHOD(0x02ABDFF0, bool, AddIfNotPresent, (HashSet_1_System_UInt64_ * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x02ABE370, void, AddValue, (HashSet_1_System_UInt64_ * __this, int32_t index, int32_t hashCode, uint64_t value));
IL2CPP_REGISTER_METHOD(0x02AB6720, bool, AreEqualityComparersEqual, (HashSet_1_System_UInt64_ * set1, HashSet_1_System_UInt64_ * set2));
IL2CPP_REGISTER_METHOD(0x02ABE4A0, int32_t, InternalGetHashCode, (HashSet_1_System_UInt64_ * __this, uint64_t item));
}
