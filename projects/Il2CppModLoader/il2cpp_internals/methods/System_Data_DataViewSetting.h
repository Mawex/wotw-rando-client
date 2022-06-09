#include <interception_macros.h>

namespace app::methods::System_Data::DataViewSetting {
IL2CPP_REGISTER_METHOD(0x01F4BD50, void, __ctor, (app::DataViewSetting * this_ptr));
IL2CPP_REGISTER_METHOD(0x00446970, bool, get_ApplyDefaultSort, (app::DataViewSetting * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F4BE00, void, SetDataViewManager, (app::DataViewSetting * this_ptr, app::DataViewManager * data_view_manager));
IL2CPP_REGISTER_METHOD(0x01F4BE10, void, SetDataTable, (app::DataViewSetting * this_ptr, app::DataTable * table));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_RowFilter, (app::DataViewSetting * this_ptr));
IL2CPP_REGISTER_METHOD(0x00654950, DataViewRowState__Enum, get_RowStateFilter, (app::DataViewSetting * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Sort, (app::DataViewSetting * this_ptr));
}
