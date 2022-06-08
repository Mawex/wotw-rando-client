#include <interception_macros.h>

namespace app::methods::System::ComponentModel::Design::RuntimeLicenseContext {
IL2CPP_REGISTER_METHOD(0x01FE3840, String *, GetLocalPath, (RuntimeLicenseContext * __this, String * fileName));
IL2CPP_REGISTER_METHOD(0x01FE39C0, String *, GetSavedLicenseKey, (RuntimeLicenseContext * __this, Type * type, Assembly * resourceAssembly));
IL2CPP_REGISTER_METHOD(0x01FE4790, Stream *, CaseInsensitiveManifestResourceStreamLookup, (RuntimeLicenseContext * __this, Assembly * satellite, String * name));
IL2CPP_REGISTER_METHOD(0x01FE49C0, Stream *, OpenRead, (Uri * resourceUri));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RuntimeLicenseContext * __this));
IL2CPP_REGISTER_METHOD(0x01FE4B60, void, __cctor, ());
}
