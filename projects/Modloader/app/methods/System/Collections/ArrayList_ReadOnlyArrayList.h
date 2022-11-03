#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::ArrayList_ReadOnlyArrayList {
    IL2CPP_REGISTER_METHOD(0x0201C4D0, void, ctor, (app::ArrayList_ReadOnlyArrayList * this_ptr, app::ArrayList* l))
    IL2CPP_REGISTER_METHOD(0x0201C580, int32_t, get_Count, (app::ArrayList_ReadOnlyArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::ArrayList_ReadOnlyArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFixedSize, (app::ArrayList_ReadOnlyArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201C5B0, bool, get_IsSynchronized, (app::ArrayList_ReadOnlyArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201C5E0, app::Object*, get_Item, (app::ArrayList_ReadOnlyArrayList * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0201C610, void, set_Item, (app::ArrayList_ReadOnlyArrayList * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04731480, ArrayList_ReadOnlyArrayList_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201C680, app::Object*, get_SyncRoot, (app::ArrayList_ReadOnlyArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201C6B0, int32_t, Add, (app::ArrayList_ReadOnlyArrayList * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHODINFO(0x0478E6A0, ArrayList_ReadOnlyArrayList_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201C720, void, AddRange, (app::ArrayList_ReadOnlyArrayList * this_ptr, app::ICollection* c))
    IL2CPP_REGISTER_METHODINFO(0x04736210, ArrayList_ReadOnlyArrayList_AddRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201C790, void, set_Capacity, (app::ArrayList_ReadOnlyArrayList * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x0476D8F0, ArrayList_ReadOnlyArrayList_set_Capacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201C800, void, Clear, (app::ArrayList_ReadOnlyArrayList * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477A4B0, ArrayList_ReadOnlyArrayList_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201C870, app::Object*, Clone, (app::ArrayList_ReadOnlyArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01706D10, bool, Contains, (app::ArrayList_ReadOnlyArrayList * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0201CA50, void, CopyTo_1, (app::ArrayList_ReadOnlyArrayList * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0201CA80, void, CopyTo_2, (app::ArrayList_ReadOnlyArrayList * this_ptr, int32_t index, app::Array* array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0201CAB0, app::IEnumerator*, GetEnumerator, (app::ArrayList_ReadOnlyArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201CAE0, int32_t, IndexOf, (app::ArrayList_ReadOnlyArrayList * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0201CB10, void, Insert, (app::ArrayList_ReadOnlyArrayList * this_ptr, int32_t index, app::Object* obj))
    IL2CPP_REGISTER_METHODINFO(0x047615C8, ArrayList_ReadOnlyArrayList_Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201CB80, void, InsertRange, (app::ArrayList_ReadOnlyArrayList * this_ptr, int32_t index, app::ICollection* c))
    IL2CPP_REGISTER_METHODINFO(0x04731D18, ArrayList_ReadOnlyArrayList_InsertRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201CBF0, void, Remove, (app::ArrayList_ReadOnlyArrayList * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04769998, ArrayList_ReadOnlyArrayList_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201CC60, void, RemoveAt, (app::ArrayList_ReadOnlyArrayList * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474EDD0, ArrayList_ReadOnlyArrayList_RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201CCD0, void, RemoveRange, (app::ArrayList_ReadOnlyArrayList * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x0475A680, ArrayList_ReadOnlyArrayList_RemoveRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201CD40, void, Sort, (app::ArrayList_ReadOnlyArrayList * this_ptr, int32_t index, int32_t count, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04772658, ArrayList_ReadOnlyArrayList_Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201CDB0, app::Object__Array*, ToArray_1, (app::ArrayList_ReadOnlyArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201CDE0, app::Array*, ToArray_2, (app::ArrayList_ReadOnlyArrayList * this_ptr, app::Type* type))
} // namespace app::classes::System::Collections::ArrayList_ReadOnlyArrayList
