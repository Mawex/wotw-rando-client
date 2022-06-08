#include <interception_macros.h>

namespace app::methods::LanguageToggler {
IL2CPP_REGISTER_METHOD(0x00F05330, String *, get_Path, (LanguageToggler * __this));
IL2CPP_REGISTER_METHOD(0x00F053B0, String *, get_Name, (LanguageToggler * __this));
IL2CPP_REGISTER_METHOD(0x00F05430, String *, get_HelpText, (LanguageToggler * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (LanguageToggler * __this));
IL2CPP_REGISTER_METHOD(0x00F054B0, String__Array *, get_ToggleOptions, (LanguageToggler * __this));
IL2CPP_REGISTER_METHOD(0x00F05CE0, int32_t, get_CurrentToggleOptionId, (LanguageToggler * __this));
IL2CPP_REGISTER_METHOD(0x00F05D90, void, set_CurrentToggleOptionId, (LanguageToggler * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (LanguageToggler * __this));
}
