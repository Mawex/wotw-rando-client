#include <interception_macros.h>

namespace app::methods::AkXBoxOneSettings {
IL2CPP_REGISTER_METHOD(0x027084F0, void, __ctor, (app::AkXBoxOneSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, AkCommonUserSettings *, GetUserSettings, (app::AkXBoxOneSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, AkCommonAdvancedSettings *, GetAdvancedSettings, (app::AkXBoxOneSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9D0, AkCommonCommSettings *, GetCommsSettings, (app::AkXBoxOneSettings * this_ptr));
}
