#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_Moon_Substr_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, __ctor_1, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0474E698, List_1_Moon_Substr___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025EFF90, void, Add, (app::List_1_Moon_Substr_ * this_ptr, app::Substr item));
    IL2CPP_REGISTER_METHODINFO(0x0478ECE0, List_1_Moon_Substr__Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, __ctor_2, (app::List_1_Moon_Substr_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x02DE8F80, void, __ctor_3, (app::List_1_Moon_Substr_ * this_ptr, app::IEnumerable_1_Moon_Substr_ * collection));
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (app::List_1_Moon_Substr_ * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02DE9400, app::Object *, ICollection_get_SyncRoot, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Substr, get_Item, (app::List_1_Moon_Substr_ * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, (app::List_1_Moon_Substr_ * this_ptr, int32_t index, app::Substr value));
    IL2CPP_REGISTER_METHOD(0x025EFCD0, bool, IsCompatibleObject, (app::Object * value));
    IL2CPP_REGISTER_METHOD(0x025EFDB0, app::Object *, IList_get_Item, (app::List_1_Moon_Substr_ * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x02DE9560, void, IList_set_Item, (app::List_1_Moon_Substr_ * this_ptr, int32_t index, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02DE96E0, int32_t, IList_Add, (app::List_1_Moon_Substr_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_Moon_Substr_ * this_ptr, app::IEnumerable_1_Moon_Substr_ * collection));
    IL2CPP_REGISTER_METHOD(0x025E9050, app::ReadOnlyCollection_1_Moon_Substr_ *, AsReadOnly, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025F01C0, int32_t, BinarySearch_1, (app::List_1_Moon_Substr_ * this_ptr, int32_t index, int32_t count, app::Substr item, app::IComparer_1_Moon_Substr_ * comparer));
    IL2CPP_REGISTER_METHOD(0x025F0230, int32_t, BinarySearch_2, (app::List_1_Moon_Substr_ * this_ptr, app::Substr item, app::IComparer_1_Moon_Substr_ * comparer));
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025F02B0, bool, Contains, (app::List_1_Moon_Substr_ * this_ptr, app::Substr item));
    IL2CPP_REGISTER_METHOD(0x025F0370, bool, IList_Contains, (app::List_1_Moon_Substr_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo_1, (app::List_1_Moon_Substr_ * this_ptr, app::Substr__Array * array));
    IL2CPP_REGISTER_METHOD(0x02DE9880, void, ICollection_CopyTo, (app::List_1_Moon_Substr_ * this_ptr, app::Array * array, int32_t array_index));
    IL2CPP_REGISTER_METHOD(0x025E95B0, void, CopyTo_2, (app::List_1_Moon_Substr_ * this_ptr, int32_t index, app::Substr__Array * array, int32_t array_index, int32_t count));
    IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo_3, (app::List_1_Moon_Substr_ * this_ptr, app::Substr__Array * array, int32_t array_index));
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, (app::List_1_Moon_Substr_ * this_ptr, int32_t min));
    IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, (app::List_1_Moon_Substr_ * this_ptr, app::Predicate_1_Moon_Substr_ * match));
    IL2CPP_REGISTER_METHOD(0x025F05A0, app::Substr, Find, (app::List_1_Moon_Substr_ * this_ptr, app::Predicate_1_Moon_Substr_ * match));
    IL2CPP_REGISTER_METHOD(0x025F0680, app::List_1_Moon_Substr_ *, FindAll, (app::List_1_Moon_Substr_ * this_ptr, app::Predicate_1_Moon_Substr_ * match));
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex_1, (app::List_1_Moon_Substr_ * this_ptr, app::Predicate_1_Moon_Substr_ * match));
    IL2CPP_REGISTER_METHOD(0x025F0880, int32_t, FindIndex_2, (app::List_1_Moon_Substr_ * this_ptr, int32_t start_index, int32_t count, app::Predicate_1_Moon_Substr_ * match));
    IL2CPP_REGISTER_METHOD(0x02DE9970, void, ForEach, (app::List_1_Moon_Substr_ * this_ptr, app::Action_1_Moon_Substr_ * action));
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_Substr_, GetEnumerator, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025F0B50, app::IEnumerator_1_Moon_Substr_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025F0B50, app::IEnumerator *, IEnumerable_GetEnumerator, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025E9DF0, app::List_1_Moon_Substr_ *, GetRange, (app::List_1_Moon_Substr_ * this_ptr, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, (app::List_1_Moon_Substr_ * this_ptr, app::Substr item));
    IL2CPP_REGISTER_METHOD(0x025F0C10, int32_t, IList_IndexOf, (app::List_1_Moon_Substr_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x025F0D50, void, Insert, (app::List_1_Moon_Substr_ * this_ptr, int32_t index, app::Substr item));
    IL2CPP_REGISTER_METHOD(0x02DE9B00, void, IList_Insert, (app::List_1_Moon_Substr_ * this_ptr, int32_t index, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x02DE9C80, void, InsertRange, (app::List_1_Moon_Substr_ * this_ptr, int32_t index, app::IEnumerable_1_Moon_Substr_ * collection));
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Moon_Substr_ * this_ptr, app::Substr item));
    IL2CPP_REGISTER_METHOD(0x025F1360, void, IList_Remove, (app::List_1_Moon_Substr_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x025F14A0, int32_t, RemoveAll, (app::List_1_Moon_Substr_ * this_ptr, app::Predicate_1_Moon_Substr_ * match));
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_Moon_Substr_ * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (app::List_1_Moon_Substr_ * this_ptr, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_1, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_2, (app::List_1_Moon_Substr_ * this_ptr, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_1, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort_2, (app::List_1_Moon_Substr_ * this_ptr, app::IComparer_1_Moon_Substr_ * comparer));
    IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort_3, (app::List_1_Moon_Substr_ * this_ptr, int32_t index, int32_t count, app::IComparer_1_Moon_Substr_ * comparer));
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort_4, (app::List_1_Moon_Substr_ * this_ptr, app::Comparison_1_Moon_Substr_ * comparison));
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Substr__Array *, ToArray, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, (app::List_1_Moon_Substr_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, __cctor, ());
}
