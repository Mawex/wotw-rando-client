#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::HashSet_1_System::Int32Enum_ {
IL2CPP_REGISTER_METHOD(0x02AB4370, void, __ctor, (HashSet_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02AB43D0, void, __ctor, (HashSet_1_System_Int32Enum_ * __this, IEqualityComparer_1_System_Int32Enum_ * comparer));
IL2CPP_REGISTER_METHOD(0x02AB4420, void, __ctor, (HashSet_1_System_Int32Enum_ * __this, IEnumerable_1_System_Int32Enum_ * collection));
IL2CPP_REGISTER_METHOD(0x02ABABF0, void, __ctor, (HashSet_1_System_Int32Enum_ * __this, IEnumerable_1_System_Int32Enum_ * collection, IEqualityComparer_1_System_Int32Enum_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0476F218, HashSet_1_System_Int32Enum___ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB46E0, void, __ctor, (HashSet_1_System_Int32Enum_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02ABAE40, void, CopyFrom, (HashSet_1_System_Int32Enum_ * __this, HashSet_1_System_Int32Enum_ * source));
IL2CPP_REGISTER_METHOD(0x02AB4A60, void, System_Collections_Generic_ICollection_T__Add, (HashSet_1_System_Int32Enum_ * __this, Int32Enum__Enum item));
IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (HashSet_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02AB90A0, bool, Contains, (HashSet_1_System_Int32Enum_ * __this, Int32Enum__Enum item));
IL2CPP_REGISTER_METHOD(0x02AB4C70, void, CopyTo, (HashSet_1_System_Int32Enum_ * __this, Int32Enum__Enum__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x02AB9220, bool, Remove, (HashSet_1_System_Int32Enum_ * __this, Int32Enum__Enum item));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (HashSet_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (HashSet_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02AB4FD0, HashSet_1_T_Enumerator_System_Int32Enum_, GetEnumerator, (HashSet_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02AB5010, IEnumerator_1_System_Int32Enum_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (HashSet_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02AB5010, IEnumerator *, IEnumerable_GetEnumerator, (HashSet_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02ABB1A0, void, GetObjectData, (HashSet_1_System_Int32Enum_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0475D520, HashSet_1_System_Int32Enum__GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ABB3C0, void, OnDeserialization, (HashSet_1_System_Int32Enum_ * __this, Object * sender));
IL2CPP_REGISTER_METHODINFO(0x04750130, HashSet_1_System_Int32Enum__OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (HashSet_1_System_Int32Enum_ * __this, Int32Enum__Enum item));
IL2CPP_REGISTER_METHOD(0x02ABB6E0, void, UnionWith, (HashSet_1_System_Int32Enum_ * __this, IEnumerable_1_System_Int32Enum_ * other));
IL2CPP_REGISTER_METHODINFO(0x04764718, HashSet_1_System_Int32Enum__UnionWith__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB5840, void, CopyTo, (HashSet_1_System_Int32Enum_ * __this, Int32Enum__Enum__Array * array));
IL2CPP_REGISTER_METHOD(0x02ABB940, void, CopyTo, (HashSet_1_System_Int32Enum_ * __this, Int32Enum__Enum__Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04786D78, HashSet_1_System_Int32Enum__CopyTo_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ABBBA0, int32_t, RemoveWhere, (HashSet_1_System_Int32Enum_ * __this, Predicate_1_Int32Enum_ * match));
IL2CPP_REGISTER_METHODINFO(0x04717828, HashSet_1_System_Int32Enum__RemoveWhere__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB990, IEqualityComparer_1_System_Int32Enum_ *, get_Comparer, (HashSet_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02ABBD20, void, TrimExcess, (HashSet_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02ABBF80, void, Initialize, (HashSet_1_System_Int32Enum_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02ABC080, void, IncreaseCapacity, (HashSet_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C410, HashSet_1_System_Int32Enum__IncreaseCapacity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ABC180, void, SetCapacity, (HashSet_1_System_Int32Enum_ * __this, int32_t newSize));
IL2CPP_REGISTER_METHOD(0x02ABA6C0, bool, AddIfNotPresent, (HashSet_1_System_Int32Enum_ * __this, Int32Enum__Enum value));
IL2CPP_REGISTER_METHOD(0x02ABAA40, void, AddValue, (HashSet_1_System_Int32Enum_ * __this, int32_t index, int32_t hashCode, Int32Enum__Enum value));
IL2CPP_REGISTER_METHOD(0x02AB6720, bool, AreEqualityComparersEqual, (HashSet_1_System_Int32Enum_ * set1, HashSet_1_System_Int32Enum_ * set2));
IL2CPP_REGISTER_METHOD(0x02ABAB80, int32_t, InternalGetHashCode, (HashSet_1_System_Int32Enum_ * __this, Int32Enum__Enum item));
}
