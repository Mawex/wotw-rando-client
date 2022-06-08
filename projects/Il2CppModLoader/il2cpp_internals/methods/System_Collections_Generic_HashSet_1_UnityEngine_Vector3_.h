#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::HashSet_1_UnityEngine::Vector3_ {
IL2CPP_REGISTER_METHOD(0x02AB4370, void, __ctor, (HashSet_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04794190, HashSet_1_UnityEngine_Vector3___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03016DB0, bool, Contains, (HashSet_1_UnityEngine_Vector3_ * __this, Vector3 item));
IL2CPP_REGISTER_METHODINFO(0x04791A78, HashSet_1_UnityEngine_Vector3__Contains__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03016D70, bool, Add, (HashSet_1_UnityEngine_Vector3_ * __this, Vector3 item));
IL2CPP_REGISTER_METHODINFO(0x0471ACE8, HashSet_1_UnityEngine_Vector3__Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB43D0, void, __ctor, (HashSet_1_UnityEngine_Vector3_ * __this, IEqualityComparer_1_UnityEngine_Vector3_ * comparer));
IL2CPP_REGISTER_METHOD(0x02AB4420, void, __ctor, (HashSet_1_UnityEngine_Vector3_ * __this, IEnumerable_1_UnityEngine_Vector3_ * collection));
IL2CPP_REGISTER_METHOD(0x030167A0, void, __ctor, (HashSet_1_UnityEngine_Vector3_ * __this, IEnumerable_1_UnityEngine_Vector3_ * collection, IEqualityComparer_1_UnityEngine_Vector3_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x0478BEA8, HashSet_1_UnityEngine_Vector3___ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB46E0, void, __ctor, (HashSet_1_UnityEngine_Vector3_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x030169F0, void, CopyFrom, (HashSet_1_UnityEngine_Vector3_ * __this, HashSet_1_UnityEngine_Vector3_ * source));
IL2CPP_REGISTER_METHOD(0x03016D70, void, System_Collections_Generic_ICollection_T__Add, (HashSet_1_UnityEngine_Vector3_ * __this, Vector3 item));
IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (HashSet_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x02AB4C70, void, CopyTo, (HashSet_1_UnityEngine_Vector3_ * __this, Vector3__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x03016F80, bool, Remove, (HashSet_1_UnityEngine_Vector3_ * __this, Vector3 item));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (HashSet_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (HashSet_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x030172C0, HashSet_1_T_Enumerator_UnityEngine_Vector3_, GetEnumerator, (HashSet_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x03017300, IEnumerator_1_UnityEngine_Vector3_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (HashSet_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x03017300, IEnumerator *, IEnumerable_GetEnumerator, (HashSet_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x03017390, void, GetObjectData, (HashSet_1_UnityEngine_Vector3_ * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0474FBB0, HashSet_1_UnityEngine_Vector3__GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030175B0, void, OnDeserialization, (HashSet_1_UnityEngine_Vector3_ * __this, Object * sender));
IL2CPP_REGISTER_METHODINFO(0x04727808, HashSet_1_UnityEngine_Vector3__OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030178E0, void, UnionWith, (HashSet_1_UnityEngine_Vector3_ * __this, IEnumerable_1_UnityEngine_Vector3_ * other));
IL2CPP_REGISTER_METHODINFO(0x0472B668, HashSet_1_UnityEngine_Vector3__UnionWith__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AB5840, void, CopyTo, (HashSet_1_UnityEngine_Vector3_ * __this, Vector3__Array * array));
IL2CPP_REGISTER_METHOD(0x03017B50, void, CopyTo, (HashSet_1_UnityEngine_Vector3_ * __this, Vector3__Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0471A440, HashSet_1_UnityEngine_Vector3__CopyTo_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03017DD0, int32_t, RemoveWhere, (HashSet_1_UnityEngine_Vector3_ * __this, Predicate_1_UnityEngine_Vector3_ * match));
IL2CPP_REGISTER_METHODINFO(0x047585F8, HashSet_1_UnityEngine_Vector3__RemoveWhere__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB990, IEqualityComparer_1_UnityEngine_Vector3_ *, get_Comparer, (HashSet_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x03017F90, void, TrimExcess, (HashSet_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x030181E0, void, Initialize, (HashSet_1_UnityEngine_Vector3_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x030182E0, void, IncreaseCapacity, (HashSet_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04741AD8, HashSet_1_UnityEngine_Vector3__IncreaseCapacity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030183E0, void, SetCapacity, (HashSet_1_UnityEngine_Vector3_ * __this, int32_t newSize));
IL2CPP_REGISTER_METHOD(0x03018580, bool, AddIfNotPresent, (HashSet_1_UnityEngine_Vector3_ * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x03018960, void, AddValue, (HashSet_1_UnityEngine_Vector3_ * __this, int32_t index, int32_t hashCode, Vector3 value));
IL2CPP_REGISTER_METHOD(0x02AB6720, bool, AreEqualityComparersEqual, (HashSet_1_UnityEngine_Vector3_ * set1, HashSet_1_UnityEngine_Vector3_ * set2));
IL2CPP_REGISTER_METHOD(0x03018AC0, int32_t, InternalGetHashCode, (HashSet_1_UnityEngine_Vector3_ * __this, Vector3 item));
}
