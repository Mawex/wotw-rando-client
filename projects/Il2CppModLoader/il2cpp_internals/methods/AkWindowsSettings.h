#include <interception_macros.h>

namespace app::methods::AkWindowsSettings {
IL2CPP_REGISTER_METHOD(0x002FB990, AkCommonUserSettings *, GetUserSettings, (AkWindowsSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, AkCommonAdvancedSettings *, GetAdvancedSettings, (AkWindowsSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, AkCommonCommSettings *, GetCommsSettings, (AkWindowsSettings * __this));
IL2CPP_REGISTER_METHOD(0x02702C80, void, __ctor, (AkWindowsSettings * __this));
}
