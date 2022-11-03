#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::DataViewManager {
    IL2CPP_REGISTER_METHOD(0x01F49040, void, ctor, (app::DataViewManager * this_ptr, app::DataSet* data_set, bool locked))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::DataSet*, get_DataSet, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::DataViewSettingCollection*, get_DataViewSettings, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F49590, app::IEnumerator*, IEnumerable_GetEnumerator, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, ICollection_get_Count, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, ICollection_get_SyncRoot, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F49650, void, ICollection_CopyTo, (app::DataViewManager * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Object*, IList_get_Item, (app::DataViewManager * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F497C0, void, IList_set_Item, (app::DataViewManager * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x047903B8, DataViewManager_System_Collections_IList_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F49800, int32_t, IList_Add, (app::DataViewManager * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04742528, DataViewManager_System_Collections_IList_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F49840, void, IList_Clear, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477AB70, DataViewManager_System_Collections_IList_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F49880, bool, IList_Contains, (app::DataViewManager * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01F49890, int32_t, IList_IndexOf, (app::DataViewManager * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01F498B0, void, IList_Insert, (app::DataViewManager * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04774DE8, DataViewManager_System_Collections_IList_Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F498F0, void, IList_Remove, (app::DataViewManager * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04766390, DataViewManager_System_Collections_IList_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F49930, void, IList_RemoveAt, (app::DataViewManager * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047943F0, DataViewManager_System_Collections_IList_RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IBindingList_get_AllowNew, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F49970, app::Object*, IBindingList_AddNew, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470FE20, DataViewManager_System_ComponentModel_IBindingList_AddNew__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IBindingList_get_AllowEdit, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IBindingList_get_AllowRemove, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IBindingList_get_SupportsChangeNotification, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IBindingList_get_SupportsSearching, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IBindingList_get_SupportsSorting, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F49A20, bool, IBindingList_get_IsSorted, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047698B0, DataViewManager_System_ComponentModel_IBindingList_get_IsSorted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F49AD0, app::PropertyDescriptor*, IBindingList_get_SortProperty, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04721418, DataViewManager_System_ComponentModel_IBindingList_get_SortProperty__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F49B80, app::ListSortDirection__Enum, IBindingList_get_SortDirection, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756BC8, DataViewManager_System_ComponentModel_IBindingList_get_SortDirection__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F49C30, void, add_ListChanged, (app::DataViewManager * this_ptr, app::ListChangedEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x01F49D20, void, remove_ListChanged, (app::DataViewManager * this_ptr, app::ListChangedEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IBindingList_AddIndex, (app::DataViewManager * this_ptr, app::PropertyDescriptor* property))
    IL2CPP_REGISTER_METHOD(0x01F49E10, void, IBindingList_ApplySort, (app::DataViewManager * this_ptr, app::PropertyDescriptor* property, app::ListSortDirection__Enum direction))
    IL2CPP_REGISTER_METHODINFO(0x0471A650, DataViewManager_System_ComponentModel_IBindingList_ApplySort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F49EC0, int32_t, IBindingList_Find, (app::DataViewManager * this_ptr, app::PropertyDescriptor* property, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x0474DEF8, DataViewManager_System_ComponentModel_IBindingList_Find__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IBindingList_RemoveIndex, (app::DataViewManager * this_ptr, app::PropertyDescriptor* property))
    IL2CPP_REGISTER_METHOD(0x01F49F70, void, IBindingList_RemoveSort, (app::DataViewManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472CC10, DataViewManager_System_ComponentModel_IBindingList_RemoveSort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F4A020, app::String*, ITypedList_GetListName, (app::DataViewManager * this_ptr, app::PropertyDescriptor__Array* list_accessors))
    IL2CPP_REGISTER_METHODINFO(0x04782310, DataViewManager_System_ComponentModel_ITypedList_GetListName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F4A130, app::PropertyDescriptorCollection*, ITypedList_GetItemProperties, (app::DataViewManager * this_ptr, app::PropertyDescriptor__Array* list_accessors))
    IL2CPP_REGISTER_METHODINFO(0x0476D358, DataViewManager_System_ComponentModel_ITypedList_GetItemProperties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F4A3C0, app::DataView*, CreateDataView, (app::DataViewManager * this_ptr, app::DataTable* table))
    IL2CPP_REGISTER_METHODINFO(0x04796BB0, DataViewManager_CreateDataView__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F4A550, void, OnListChanged, (app::DataViewManager * this_ptr, app::ListChangedEventArgs* e))
    IL2CPP_REGISTER_METHODINFO(0x04718DD0, DataViewManager_OnListChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F4A670, void, TableCollectionChanged, (app::DataViewManager * this_ptr, app::Object* sender, app::CollectionChangeEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01F4AC30, void, RelationCollectionChanged, (app::DataViewManager * this_ptr, app::Object* sender, app::CollectionChangeEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01F4B1E0, void, cctor, ())
} // namespace app::classes::System::Data::DataViewManager
