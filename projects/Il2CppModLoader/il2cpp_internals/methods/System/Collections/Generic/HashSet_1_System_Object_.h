#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::HashSet_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::HashSet_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::HashSet_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Object_ *, get_Comparer, (app::HashSet_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, __ctor_1, (app::HashSet_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047522A8, HashSet_1_System_Object___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AB43D0, void, __ctor_2, (app::HashSet_1_System_Object_ * this_ptr, app::IEqualityComparer_1_System_Object_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02AB4420, void, __ctor_3, (app::HashSet_1_System_Object_ * this_ptr, app::IEnumerable_1_System_Object_ * collection));
    IL2CPP_REGISTER_METHOD(0x02ABE510, void, __ctor_4, (app::HashSet_1_System_Object_ * this_ptr, app::IEnumerable_1_System_Object_ * collection, app::IEqualityComparer_1_System_Object_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x047337E8, HashSet_1_System_Object___ctor_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AB46E0, void, __ctor_5, (app::HashSet_1_System_Object_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x02ABE760, void, CopyFrom, (app::HashSet_1_System_Object_ * this_ptr, app::HashSet_1_System_Object_ * source));
    IL2CPP_REGISTER_METHOD(0x02AB4A60, void, System_Collections_Generic_ICollection_T__Add, (app::HashSet_1_System_Object_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02ABEAC0, bool, Contains, (app::HashSet_1_System_Object_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHODINFO(0x0478E990, HashSet_1_System_Object__Contains__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AB4C70, void, CopyTo_1, (app::HashSet_1_System_Object_ * this_ptr, app::Object__Array * array, int32_t array_index));
    IL2CPP_REGISTER_METHOD(0x02ABEC50, bool, Remove, (app::HashSet_1_System_Object_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x02ABCD80, app::HashSet_1_T_Enumerator_System_Object_, GetEnumerator, (app::HashSet_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02ABCDC0, app::IEnumerator_1_System_Object_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::HashSet_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02ABCDC0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::HashSet_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02ABEF90, void, GetObjectData, (app::HashSet_1_System_Object_ * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x04702D28, HashSet_1_System_Object__GetObjectData__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02ABF1B0, void, OnDeserialization, (app::HashSet_1_System_Object_ * this_ptr, app::Object * sender));
    IL2CPP_REGISTER_METHODINFO(0x0473BA38, HashSet_1_System_Object__OnDeserialization__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_System_Object_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHODINFO(0x0473F630, HashSet_1_System_Object__Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02ABF4D0, void, UnionWith, (app::HashSet_1_System_Object_ * this_ptr, app::IEnumerable_1_System_Object_ * other));
    IL2CPP_REGISTER_METHODINFO(0x04734790, HashSet_1_System_Object__UnionWith__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02AB5840, void, CopyTo_2, (app::HashSet_1_System_Object_ * this_ptr, app::Object__Array * array));
    IL2CPP_REGISTER_METHOD(0x02ABF730, void, CopyTo_3, (app::HashSet_1_System_Object_ * this_ptr, app::Object__Array * array, int32_t array_index, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x047911B0, HashSet_1_System_Object__CopyTo_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02ABF9A0, int32_t, RemoveWhere, (app::HashSet_1_System_Object_ * this_ptr, app::Predicate_1_Object_ * match));
    IL2CPP_REGISTER_METHODINFO(0x0471F478, HashSet_1_System_Object__RemoveWhere__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02ABFB30, void, TrimExcess, (app::HashSet_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02ABFD80, void, Initialize, (app::HashSet_1_System_Object_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x02ABFE80, void, IncreaseCapacity, (app::HashSet_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04765C58, HashSet_1_System_Object__IncreaseCapacity__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02ABFF80, void, SetCapacity, (app::HashSet_1_System_Object_ * this_ptr, int32_t new_size));
    IL2CPP_REGISTER_METHOD(0x02AC0130, bool, AddIfNotPresent, (app::HashSet_1_System_Object_ * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02ABE370, void, AddValue, (app::HashSet_1_System_Object_ * this_ptr, int32_t index, int32_t hash_code, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02AB6720, bool, AreEqualityComparersEqual, (app::HashSet_1_System_Object_ * set1, app::HashSet_1_System_Object_ * set2));
    IL2CPP_REGISTER_METHOD(0x02AC04B0, int32_t, InternalGetHashCode, (app::HashSet_1_System_Object_ * this_ptr, app::Object * item));
}
