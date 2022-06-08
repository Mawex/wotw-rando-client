using namespace app;

namespace app::methods::System::Data::DataRelationCollection_DataTableRelationCollection {
IL2CPP_REGISTER_METHOD(0x023A8560, void, __ctor, (DataRelationCollection_DataTableRelationCollection * __this, DataTable * table, bool fParentCollection));
IL2CPP_REGISTER_METHODINFO(0x0474B298, DataRelationCollection_DataTableRelationCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9D0, ArrayList *, get_List, (DataRelationCollection_DataTableRelationCollection * __this));
IL2CPP_REGISTER_METHOD(0x023A86F0, void, EnsureDataSet, (DataRelationCollection_DataTableRelationCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04747640, DataRelationCollection_DataTableRelationCollection_EnsureDataSet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A8790, DataSet *, GetDataSet, (DataRelationCollection_DataTableRelationCollection * __this));
IL2CPP_REGISTER_METHOD(0x023A8840, DataRelation *, get_Item, (DataRelationCollection_DataTableRelationCollection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04759398, DataRelationCollection_DataTableRelationCollection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A8950, DataRelation *, get_Item, (DataRelationCollection_DataTableRelationCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04727E00, DataRelationCollection_DataTableRelationCollection_get_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A8A60, void, add_RelationPropertyChanged, (DataRelationCollection_DataTableRelationCollection * __this, CollectionChangeEventHandler * value));
IL2CPP_REGISTER_METHOD(0x023A8B50, void, remove_RelationPropertyChanged, (DataRelationCollection_DataTableRelationCollection * __this, CollectionChangeEventHandler * value));
IL2CPP_REGISTER_METHOD(0x023A8C40, void, AddCache, (DataRelationCollection_DataTableRelationCollection * __this, DataRelation * relation));
IL2CPP_REGISTER_METHOD(0x023A8C90, void, AddCore, (DataRelationCollection_DataTableRelationCollection * __this, DataRelation * relation));
IL2CPP_REGISTER_METHODINFO(0x04725D48, DataRelationCollection_DataTableRelationCollection_AddCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A8E20, void, RemoveCache, (DataRelationCollection_DataTableRelationCollection * __this, DataRelation * relation));
IL2CPP_REGISTER_METHODINFO(0x04720168, DataRelationCollection_DataTableRelationCollection_RemoveCache__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A8F80, void, RemoveCore, (DataRelationCollection_DataTableRelationCollection * __this, DataRelation * relation));
IL2CPP_REGISTER_METHODINFO(0x04701920, DataRelationCollection_DataTableRelationCollection_RemoveCore__MethodInfo);
}
