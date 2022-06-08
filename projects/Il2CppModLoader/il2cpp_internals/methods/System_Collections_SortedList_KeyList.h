#include <interception_macros.h>

namespace app::methods::System::Collections::SortedList_KeyList {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (SortedList_KeyList * __this, SortedList * sortedList));
IL2CPP_REGISTER_METHOD(0x004F0AC0, int32_t, get_Count, (SortedList_KeyList * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (SortedList_KeyList * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFixedSize, (SortedList_KeyList * __this));
IL2CPP_REGISTER_METHOD(0x017173C0, bool, get_IsSynchronized, (SortedList_KeyList * __this));
IL2CPP_REGISTER_METHOD(0x017173F0, Object *, get_SyncRoot, (SortedList_KeyList * __this));
IL2CPP_REGISTER_METHOD(0x0202EF90, int32_t, Add, (SortedList_KeyList * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04756338, SortedList_KeyList_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0202F000, void, Clear, (SortedList_KeyList * __this));
IL2CPP_REGISTER_METHODINFO(0x04764C18, SortedList_KeyList_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFFCE0, bool, Contains, (SortedList_KeyList * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x0202F070, void, CopyTo, (SortedList_KeyList * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHODINFO(0x047811A8, SortedList_KeyList_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0202F190, void, Insert, (SortedList_KeyList * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHODINFO(0x047785D8, SortedList_KeyList_Insert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0202F200, Object *, get_Item, (SortedList_KeyList * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0202F230, void, set_Item, (SortedList_KeyList * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHODINFO(0x047053B8, SortedList_KeyList_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0202F2A0, IEnumerator *, GetEnumerator, (SortedList_KeyList * __this));
IL2CPP_REGISTER_METHOD(0x0202F440, int32_t, IndexOf, (SortedList_KeyList * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04754DA8, SortedList_KeyList_IndexOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0202F580, void, Remove, (SortedList_KeyList * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x0478B7F8, SortedList_KeyList_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0202F5F0, void, RemoveAt, (SortedList_KeyList * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047371D0, SortedList_KeyList_RemoveAt__MethodInfo);
}
