using namespace app;

namespace app::methods::System::Data::DataViewSetting {
IL2CPP_REGISTER_METHOD(0x01F4BD50, void, __ctor, (DataViewSetting * __this));
IL2CPP_REGISTER_METHOD(0x00446970, bool, get_ApplyDefaultSort, (DataViewSetting * __this));
IL2CPP_REGISTER_METHOD(0x01F4BE00, void, SetDataViewManager, (DataViewSetting * __this, DataViewManager * dataViewManager));
IL2CPP_REGISTER_METHOD(0x01F4BE10, void, SetDataTable, (DataViewSetting * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_RowFilter, (DataViewSetting * __this));
IL2CPP_REGISTER_METHOD(0x00654950, DataViewRowState__Enum, get_RowStateFilter, (DataViewSetting * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Sort, (DataViewSetting * __this));
}
