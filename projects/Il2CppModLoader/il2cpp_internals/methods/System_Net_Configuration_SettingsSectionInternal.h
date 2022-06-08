#include <interception_macros.h>

namespace app::methods::System::Net::Configuration::SettingsSectionInternal {
IL2CPP_REGISTER_METHOD(0x01E98AE0, SettingsSectionInternal *, get_Section, ());
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_UseNagleAlgorithm, (SettingsSectionInternal * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_UseNagleAlgorithm, (SettingsSectionInternal * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00533160, bool, get_Expect100Continue, (SettingsSectionInternal * __this));
IL2CPP_REGISTER_METHOD(0x00533170, void, set_Expect100Continue, (SettingsSectionInternal * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F43310, bool, get_CheckCertificateName, (SettingsSectionInternal * __this));
IL2CPP_REGISTER_METHOD(0x01E98B80, void, set_CheckCertificateName, (SettingsSectionInternal * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_DnsRefreshTimeout, (SettingsSectionInternal * __this));
IL2CPP_REGISTER_METHOD(0x0052A020, void, set_DnsRefreshTimeout, (SettingsSectionInternal * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_EnableDnsRoundRobin, (SettingsSectionInternal * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_EnableDnsRoundRobin, (SettingsSectionInternal * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00DF3DF0, bool, get_CheckCertificateRevocationList, (SettingsSectionInternal * __this));
IL2CPP_REGISTER_METHOD(0x00DF3E00, void, set_CheckCertificateRevocationList, (SettingsSectionInternal * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00529E80, EncryptionPolicy__Enum, get_EncryptionPolicy, (SettingsSectionInternal * __this));
IL2CPP_REGISTER_METHOD(0x00529E90, void, set_EncryptionPolicy, (SettingsSectionInternal * __this, EncryptionPolicy__Enum value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Ipv6Enabled, (SettingsSectionInternal * __this));
IL2CPP_REGISTER_METHOD(0x01E98B90, void, __ctor, (SettingsSectionInternal * __this));
IL2CPP_REGISTER_METHOD(0x01E98BA0, void, __cctor, ());
}
