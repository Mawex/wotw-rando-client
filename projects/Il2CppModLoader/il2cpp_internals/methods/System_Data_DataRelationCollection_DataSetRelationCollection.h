using namespace app;

namespace app::methods::System::Data::DataRelationCollection_DataSetRelationCollection {
IL2CPP_REGISTER_METHOD(0x023A7010, void, __ctor, (DataRelationCollection_DataSetRelationCollection * __this, DataSet * dataSet));
IL2CPP_REGISTER_METHODINFO(0x04734D60, DataRelationCollection_DataSetRelationCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9D0, ArrayList *, get_List, (DataRelationCollection_DataSetRelationCollection * __this));
IL2CPP_REGISTER_METHOD(0x023A7190, void, Clear, (DataRelationCollection_DataSetRelationCollection * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, DataSet *, GetDataSet, (DataRelationCollection_DataSetRelationCollection * __this));
IL2CPP_REGISTER_METHOD(0x023A71D0, DataRelation *, get_Item, (DataRelationCollection_DataSetRelationCollection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04792428, DataRelationCollection_DataSetRelationCollection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A72E0, DataRelation *, get_Item, (DataRelationCollection_DataSetRelationCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x0476F790, DataRelationCollection_DataSetRelationCollection_get_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A73F0, void, AddCore, (DataRelationCollection_DataSetRelationCollection * __this, DataRelation * relation));
IL2CPP_REGISTER_METHODINFO(0x0474D170, DataRelationCollection_DataSetRelationCollection_AddCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A7BA0, void, RemoveCore, (DataRelationCollection_DataSetRelationCollection * __this, DataRelation * relation));
IL2CPP_REGISTER_METHODINFO(0x04785C30, DataRelationCollection_DataSetRelationCollection_RemoveCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A7F60, void, FinishInitRelations, (DataRelationCollection_DataSetRelationCollection * __this));
}
