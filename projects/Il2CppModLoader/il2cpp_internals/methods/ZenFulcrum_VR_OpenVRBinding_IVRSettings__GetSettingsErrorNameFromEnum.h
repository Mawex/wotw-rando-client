#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSettings__GetSettingsErrorNameFromEnum {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSettings_GetSettingsErrorNameFromEnum * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F52080, void *, Invoke, (app::IVRSettings_GetSettingsErrorNameFromEnum * this_ptr, app::EVRSettingsError__Enum e_error));
IL2CPP_REGISTER_METHOD(0x02CE7920, IAsyncResult *, BeginInvoke, (app::IVRSettings_GetSettingsErrorNameFromEnum * this_ptr, app::EVRSettingsError__Enum e_error, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, void *, EndInvoke, (app::IVRSettings_GetSettingsErrorNameFromEnum * this_ptr, app::IAsyncResult * result));
}
