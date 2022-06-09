#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSettings__GetString {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSettings_GetString * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE79E0, void, Invoke, (app::IVRSettings_GetString * this_ptr, app::String * pch_section, app::String * pch_settings_key, app::StringBuilder * pch_value, uint32_t un_value_len, app::EVRSettingsError__Enum * pe_error));
IL2CPP_REGISTER_METHOD(0x02CE80C0, IAsyncResult *, BeginInvoke, (app::IVRSettings_GetString * this_ptr, app::String * pch_section, app::String * pch_settings_key, app::StringBuilder * pch_value, uint32_t un_value_len, app::EVRSettingsError__Enum * pe_error, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::IVRSettings_GetString * this_ptr, app::EVRSettingsError__Enum * pe_error, app::IAsyncResult * result));
}
