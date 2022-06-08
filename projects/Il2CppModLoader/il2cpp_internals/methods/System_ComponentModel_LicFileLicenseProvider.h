#include <interception_macros.h>

namespace app::methods::System::ComponentModel::LicFileLicenseProvider {
IL2CPP_REGISTER_METHOD(0x01FEFF90, bool, IsKeyValid, (LicFileLicenseProvider * __this, String * key, Type * type));
IL2CPP_REGISTER_METHOD(0x01FEFFD0, String *, GetKey, (LicFileLicenseProvider * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01FF00F0, License *, GetLicense, (LicFileLicenseProvider * __this, LicenseContext * context, Type * type, Object * instance, bool allowExceptions));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LicFileLicenseProvider * __this));
}
