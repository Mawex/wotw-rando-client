#include <interception_macros.h>

namespace app::methods::System_Data::DataViewSettingCollection_DataViewSettingsEnumerator {
    IL2CPP_REGISTER_METHOD(0x01F4C780, void, __ctor, (app::DataViewSettingCollection_DataViewSettingsEnumerator * this_ptr, app::DataViewManager * dvm));
    IL2CPP_REGISTER_METHOD(0x01F4C880, bool, MoveNext, (app::DataViewSettingCollection_DataViewSettingsEnumerator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F4C910, void, Reset, (app::DataViewSettingCollection_DataViewSettingsEnumerator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F4C9A0, app::Object *, get_Current, (app::DataViewSettingCollection_DataViewSettingsEnumerator * this_ptr));
}
