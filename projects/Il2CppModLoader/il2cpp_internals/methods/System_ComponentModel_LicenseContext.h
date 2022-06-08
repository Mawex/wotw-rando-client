using namespace app;

namespace app::methods::System::ComponentModel::LicenseContext {
IL2CPP_REGISTER_METHOD(0x00420EE0, LicenseUsageMode__Enum, get_UsageMode, (LicenseContext * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, GetSavedLicenseKey, (LicenseContext * __this, Type * type, Assembly * resourceAssembly));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, GetService, (LicenseContext * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetSavedLicenseKey, (LicenseContext * __this, Type * type, String * key));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LicenseContext * __this));
}
