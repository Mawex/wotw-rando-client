using namespace app;

namespace app::methods::System::Data::DataViewListener {
IL2CPP_REGISTER_METHOD(0x01F47680, void, __ctor, (DataViewListener * __this, DataView * dv));
IL2CPP_REGISTER_METHOD(0x01F477F0, void, ChildRelationCollectionChanged, (DataViewListener * __this, Object * sender, CollectionChangeEventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x047748B0, DataViewListener_ChildRelationCollectionChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F47920, void, ParentRelationCollectionChanged, (DataViewListener * __this, Object * sender, CollectionChangeEventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x0476D4D8, DataViewListener_ParentRelationCollectionChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F47A50, void, ColumnCollectionChanged, (DataViewListener * __this, Object * sender, CollectionChangeEventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x0477DDC0, DataViewListener_ColumnCollectionChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F47B90, void, MaintainDataView, (DataViewListener * __this, ListChangedType__Enum changedType, DataRow * row, bool trackAddRemove));
IL2CPP_REGISTER_METHOD(0x01F47CD0, void, IndexListChanged, (DataViewListener * __this, ListChangedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01F47ED0, void, RegisterMetaDataEvents, (DataViewListener * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x01F48440, void, UnregisterMetaDataEvents, (DataViewListener * __this));
IL2CPP_REGISTER_METHOD(0x01F48450, void, UnregisterMetaDataEvents, (DataViewListener * __this, bool updateListeners));
IL2CPP_REGISTER_METHOD(0x01F48AB0, void, RegisterListChangedEvent, (DataViewListener * __this, Index * index));
IL2CPP_REGISTER_METHOD(0x01F48C10, void, UnregisterListChangedEvent, (DataViewListener * __this));
IL2CPP_REGISTER_METHOD(0x01F48E20, void, CleanUp, (DataViewListener * __this, bool updateListeners));
IL2CPP_REGISTER_METHOD(0x01F48E40, void, RegisterListener, (DataViewListener * __this, DataTable * table));
}
