#include <interception_macros.h>

namespace app::methods::System_ComponentModel_Design::RuntimeLicenseContext {
IL2CPP_REGISTER_METHOD(0x01FE3840, String *, GetLocalPath, (app::RuntimeLicenseContext * this_ptr, app::String * file_name));
IL2CPP_REGISTER_METHOD(0x01FE39C0, String *, GetSavedLicenseKey, (app::RuntimeLicenseContext * this_ptr, app::Type * type, app::Assembly * resource_assembly));
IL2CPP_REGISTER_METHOD(0x01FE4790, Stream *, CaseInsensitiveManifestResourceStreamLookup, (app::RuntimeLicenseContext * this_ptr, app::Assembly * satellite, app::String * name));
IL2CPP_REGISTER_METHOD(0x01FE49C0, Stream *, OpenRead, (app::Uri * resource_uri));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::RuntimeLicenseContext * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FE4B60, void, __cctor, ());
}
