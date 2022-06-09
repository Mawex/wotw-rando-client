#include <interception_macros.h>

namespace app::methods::System::ComponentModel::LicFileLicenseProvider {
    IL2CPP_REGISTER_METHOD(0x01FEFF90, bool, IsKeyValid, (app::LicFileLicenseProvider * this_ptr, app::String * key, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x01FEFFD0, app::String *, GetKey, (app::LicFileLicenseProvider * this_ptr, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x01FF00F0, app::License *, GetLicense, (app::LicFileLicenseProvider * this_ptr, app::LicenseContext * context, app::Type * type, app::Object * instance, bool allow_exceptions));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::LicFileLicenseProvider * this_ptr));
}
