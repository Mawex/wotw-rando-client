#include <interception_macros.h>

namespace app::methods::AkWindowsSettings {
IL2CPP_REGISTER_METHOD(0x002FB990, AkCommonUserSettings *, GetUserSettings, (app::AkWindowsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, AkCommonAdvancedSettings *, GetAdvancedSettings, (app::AkWindowsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9D0, AkCommonCommSettings *, GetCommsSettings, (app::AkWindowsSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x02702C80, void, __ctor, (app::AkWindowsSettings * this_ptr));
}
