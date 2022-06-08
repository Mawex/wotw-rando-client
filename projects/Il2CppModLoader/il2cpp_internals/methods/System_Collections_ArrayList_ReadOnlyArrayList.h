#include <interception_macros.h>

namespace app::methods::System::Collections::ArrayList_ReadOnlyArrayList {
IL2CPP_REGISTER_METHOD(0x0201C4D0, void, __ctor, (ArrayList_ReadOnlyArrayList * __this, ArrayList * l));
IL2CPP_REGISTER_METHOD(0x0201C580, int32_t, get_Count, (ArrayList_ReadOnlyArrayList * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (ArrayList_ReadOnlyArrayList * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFixedSize, (ArrayList_ReadOnlyArrayList * __this));
IL2CPP_REGISTER_METHOD(0x0201C5B0, bool, get_IsSynchronized, (ArrayList_ReadOnlyArrayList * __this));
IL2CPP_REGISTER_METHOD(0x0201C5E0, Object *, get_Item, (ArrayList_ReadOnlyArrayList * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0201C610, void, set_Item, (ArrayList_ReadOnlyArrayList * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04731480, ArrayList_ReadOnlyArrayList_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201C680, Object *, get_SyncRoot, (ArrayList_ReadOnlyArrayList * __this));
IL2CPP_REGISTER_METHOD(0x0201C6B0, int32_t, Add, (ArrayList_ReadOnlyArrayList * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x0478E6A0, ArrayList_ReadOnlyArrayList_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201C720, void, AddRange, (ArrayList_ReadOnlyArrayList * __this, ICollection * c));
IL2CPP_REGISTER_METHODINFO(0x04736210, ArrayList_ReadOnlyArrayList_AddRange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201C790, void, set_Capacity, (ArrayList_ReadOnlyArrayList * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x0476D8F0, ArrayList_ReadOnlyArrayList_set_Capacity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201C800, void, Clear, (ArrayList_ReadOnlyArrayList * __this));
IL2CPP_REGISTER_METHODINFO(0x0477A4B0, ArrayList_ReadOnlyArrayList_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201C870, Object *, Clone, (ArrayList_ReadOnlyArrayList * __this));
IL2CPP_REGISTER_METHOD(0x01706D10, bool, Contains, (ArrayList_ReadOnlyArrayList * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0201CA50, void, CopyTo, (ArrayList_ReadOnlyArrayList * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x0201CA80, void, CopyTo, (ArrayList_ReadOnlyArrayList * __this, int32_t index, Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x0201CAB0, IEnumerator *, GetEnumerator, (ArrayList_ReadOnlyArrayList * __this));
IL2CPP_REGISTER_METHOD(0x0201CAE0, int32_t, IndexOf, (ArrayList_ReadOnlyArrayList * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0201CB10, void, Insert, (ArrayList_ReadOnlyArrayList * __this, int32_t index, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x047615C8, ArrayList_ReadOnlyArrayList_Insert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201CB80, void, InsertRange, (ArrayList_ReadOnlyArrayList * __this, int32_t index, ICollection * c));
IL2CPP_REGISTER_METHODINFO(0x04731D18, ArrayList_ReadOnlyArrayList_InsertRange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201CBF0, void, Remove, (ArrayList_ReadOnlyArrayList * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04769998, ArrayList_ReadOnlyArrayList_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201CC60, void, RemoveAt, (ArrayList_ReadOnlyArrayList * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0474EDD0, ArrayList_ReadOnlyArrayList_RemoveAt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201CCD0, void, RemoveRange, (ArrayList_ReadOnlyArrayList * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0475A680, ArrayList_ReadOnlyArrayList_RemoveRange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201CD40, void, Sort, (ArrayList_ReadOnlyArrayList * __this, int32_t index, int32_t count, IComparer * comparer));
IL2CPP_REGISTER_METHODINFO(0x04772658, ArrayList_ReadOnlyArrayList_Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201CDB0, Object__Array *, ToArray, (ArrayList_ReadOnlyArrayList * __this));
IL2CPP_REGISTER_METHOD(0x0201CDE0, Array *, ToArray, (ArrayList_ReadOnlyArrayList * __this, Type * type));
}
