#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::ArrayList {
    IL2CPP_REGISTER_METHOD(0x022A3560, void, ctor_1, (app::ArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A3610, void, ctor_2, (app::ArrayList * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04709B80, ArrayList__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A3770, void, ctor_3, (app::ArrayList * this_ptr, app::ICollection* c))
    IL2CPP_REGISTER_METHODINFO(0x0476D1E0, ArrayList__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A38C0, void, set_Capacity, (app::ArrayList * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04710748, ArrayList_set_Capacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::ArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFixedSize, (app::ArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::ArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::ArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A3A00, app::Object*, get_SyncRoot, (app::ArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A3B60, app::Object*, get_Item, (app::ArrayList * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04745128, ArrayList_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A3C60, void, set_Item, (app::ArrayList * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0475A0D0, ArrayList_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A3DA0, app::ArrayList*, Adapter, (app::IList * list))
    IL2CPP_REGISTER_METHODINFO(0x0478A0A8, ArrayList_Adapter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A3F30, int32_t, Add, (app::ArrayList * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x022A3FF0, void, AddRange, (app::ArrayList * this_ptr, app::ICollection* c))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::ArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4050, app::Object*, Clone, (app::ArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A41E0, bool, Contains, (app::ArrayList * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x022A42F0, void, CopyTo_1, (app::ArrayList * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x022A4310, void, CopyTo_2, (app::ArrayList * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHODINFO(0x04718908, ArrayList_CopyTo_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4410, void, CopyTo_3, (app::ArrayList * this_ptr, int32_t index, app::Array* array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04727FD0, ArrayList_CopyTo_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4570, void, EnsureCapacity, (app::ArrayList * this_ptr, int32_t min))
    IL2CPP_REGISTER_METHOD(0x022A45E0, app::IEnumerator*, GetEnumerator, (app::ArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4810, int32_t, IndexOf, (app::ArrayList * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x022A4840, void, Insert, (app::ArrayList * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04714160, ArrayList_Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A49D0, void, InsertRange, (app::ArrayList * this_ptr, int32_t index, app::ICollection* c))
    IL2CPP_REGISTER_METHODINFO(0x0476C978, ArrayList_InsertRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4BB0, app::IList*, ReadOnly_1, (app::IList * list))
    IL2CPP_REGISTER_METHODINFO(0x04753E48, ArrayList_ReadOnly__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4D30, app::ArrayList*, ReadOnly_2, (app::ArrayList * list))
    IL2CPP_REGISTER_METHODINFO(0x0476F9A0, ArrayList_ReadOnly_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201BCE0, void, Remove, (app::ArrayList * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x022A4EC0, void, RemoveAt, (app::ArrayList * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047917D8, ArrayList_RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4FF0, void, RemoveRange, (app::ArrayList * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x0473BDE8, ArrayList_RemoveRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A5200, void, Sort_1, (app::ArrayList * this_ptr, app::IComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x022A5250, void, Sort_2, (app::ArrayList * this_ptr, int32_t index, int32_t count, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0470DB88, ArrayList_Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A53F0, app::Object__Array*, ToArray_1, (app::ArrayList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A54B0, app::Array*, ToArray_2, (app::ArrayList * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHODINFO(0x047805C8, ArrayList_ToArray_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A5600, void, cctor, ())
} // namespace app::classes::System::Collections::ArrayList
