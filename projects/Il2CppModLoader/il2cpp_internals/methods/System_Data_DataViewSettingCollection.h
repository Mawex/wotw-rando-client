#include <interception_macros.h>

namespace app::methods::System::Data::DataViewSettingCollection {
IL2CPP_REGISTER_METHOD(0x01F4BE20, void, __ctor, (DataViewSettingCollection * __this, DataViewManager * dataViewManager));
IL2CPP_REGISTER_METHODINFO(0x0476E828, DataViewSettingCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F4BFA0, DataViewSetting *, get_Item, (DataViewSettingCollection * __this, DataTable * table));
IL2CPP_REGISTER_METHODINFO(0x0475B1C8, DataViewSettingCollection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F4C230, void, set_Item, (DataViewSettingCollection * __this, DataTable * table, DataViewSetting * value));
IL2CPP_REGISTER_METHODINFO(0x047187D8, DataViewSettingCollection_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F4C330, void, CopyTo, (DataViewSettingCollection * __this, Array * ar, int32_t index));
IL2CPP_REGISTER_METHOD(0x01F4C4F0, int32_t, get_Count, (DataViewSettingCollection * __this));
IL2CPP_REGISTER_METHOD(0x01F4C540, IEnumerator *, GetEnumerator, (DataViewSettingCollection * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (DataViewSettingCollection * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, get_SyncRoot, (DataViewSettingCollection * __this));
IL2CPP_REGISTER_METHOD(0x01F4C750, void, Remove, (DataViewSettingCollection * __this, DataTable * table));
}
