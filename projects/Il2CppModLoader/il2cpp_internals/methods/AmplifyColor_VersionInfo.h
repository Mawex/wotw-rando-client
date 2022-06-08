#include <interception_macros.h>

namespace app::methods::AmplifyColor::VersionInfo {
IL2CPP_REGISTER_METHOD(0x030CCAE0, String *, StaticToString, ());
IL2CPP_REGISTER_METHOD(0x030CCC60, String *, ToString, (VersionInfo * __this));
IL2CPP_REGISTER_METHOD(0x030CCDE0, int32_t, get_Number, (VersionInfo * __this));
IL2CPP_REGISTER_METHOD(0x030CCE00, void, __ctor, (VersionInfo * __this));
IL2CPP_REGISTER_METHOD(0x030CCE20, void, __ctor, (VersionInfo * __this, uint8_t major, uint8_t minor, uint8_t release));
IL2CPP_REGISTER_METHOD(0x030CCE40, VersionInfo *, Current, ());
IL2CPP_REGISTER_METHOD(0x030CCF90, bool, Matches, (VersionInfo * version));
IL2CPP_REGISTER_METHOD(0x030CCFC0, void, __cctor, ());
}
