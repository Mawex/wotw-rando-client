#include <interception_macros.h>

namespace app::methods::System_ComponentModel::LicenseContext {
IL2CPP_REGISTER_METHOD(0x00420EE0, LicenseUsageMode__Enum, get_UsageMode, (app::LicenseContext * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, GetSavedLicenseKey, (app::LicenseContext * this_ptr, app::Type * type, app::Assembly * resource_assembly));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, GetService, (app::LicenseContext * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetSavedLicenseKey, (app::LicenseContext * this_ptr, app::Type * type, app::String * key));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::LicenseContext * this_ptr));
}
