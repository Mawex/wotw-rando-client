#include <interception_macros.h>

namespace app::methods::System::ComponentModel::ListSortDescriptionCollection {
IL2CPP_REGISTER_METHOD(0x01FF4BC0, void, __ctor, (ListSortDescriptionCollection * __this));
IL2CPP_REGISTER_METHOD(0x01FF4D10, void, __ctor, (ListSortDescriptionCollection * __this, ListSortDescription__Array * sorts));
IL2CPP_REGISTER_METHOD(0x01FF4EB0, ListSortDescription *, get_Item, (ListSortDescriptionCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01FF4FB0, void, set_Item, (ListSortDescriptionCollection * __this, int32_t index, ListSortDescription * value));
IL2CPP_REGISTER_METHODINFO(0x04730848, ListSortDescriptionCollection_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize, (ListSortDescriptionCollection * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly, (ListSortDescriptionCollection * __this));
IL2CPP_REGISTER_METHOD(0x01FF4EB0, Object *, IList_get_Item, (ListSortDescriptionCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01FF5020, void, IList_set_Item, (ListSortDescriptionCollection * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0473C988, ListSortDescriptionCollection_System_Collections_IList_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF5090, int32_t, IList_Add, (ListSortDescriptionCollection * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04704708, ListSortDescriptionCollection_System_Collections_IList_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF5100, void, IList_Clear, (ListSortDescriptionCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x047881E8, ListSortDescriptionCollection_System_Collections_IList_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF5170, bool, Contains, (ListSortDescriptionCollection * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01FF5220, int32_t, IndexOf, (ListSortDescriptionCollection * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01FF52D0, void, IList_Insert, (ListSortDescriptionCollection * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04779BB8, ListSortDescriptionCollection_System_Collections_IList_Insert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF5340, void, IList_Remove, (ListSortDescriptionCollection * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04795A90, ListSortDescriptionCollection_System_Collections_IList_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF53B0, void, IList_RemoveAt, (ListSortDescriptionCollection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0476FBA8, ListSortDescriptionCollection_System_Collections_IList_RemoveAt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016D95F0, int32_t, get_Count, (ListSortDescriptionCollection * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ICollection_get_IsSynchronized, (ListSortDescriptionCollection * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, ICollection_get_SyncRoot, (ListSortDescriptionCollection * __this));
IL2CPP_REGISTER_METHOD(0x01FF5420, void, CopyTo, (ListSortDescriptionCollection * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x01BDD500, IEnumerator *, IEnumerable_GetEnumerator, (ListSortDescriptionCollection * __this));
}
