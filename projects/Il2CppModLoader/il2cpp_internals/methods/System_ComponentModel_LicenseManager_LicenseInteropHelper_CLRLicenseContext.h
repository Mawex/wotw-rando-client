#include <interception_macros.h>

namespace app::methods::System::ComponentModel::LicenseManager_LicenseInteropHelper_CLRLicenseContext {
IL2CPP_REGISTER_METHOD(0x0091DD30, void, __ctor, (LicenseManager_LicenseInteropHelper_CLRLicenseContext * __this, LicenseUsageMode__Enum usageMode, Type * type));
IL2CPP_REGISTER_METHOD(0x002FC6D0, LicenseUsageMode__Enum, get_UsageMode, (LicenseManager_LicenseInteropHelper_CLRLicenseContext * __this));
IL2CPP_REGISTER_METHOD(0x01FF3FA0, String *, GetSavedLicenseKey, (LicenseManager_LicenseInteropHelper_CLRLicenseContext * __this, Type * type, Assembly * resourceAssembly));
IL2CPP_REGISTER_METHOD(0x01FF4070, void, SetSavedLicenseKey, (LicenseManager_LicenseInteropHelper_CLRLicenseContext * __this, Type * type, String * key));
}
