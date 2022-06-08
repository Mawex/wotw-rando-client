#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRSettings {
IL2CPP_REGISTER_METHOD(0x0167B6E0, void, __ctor, (CVRSettings * __this, void * pInterface));
IL2CPP_REGISTER_METHOD(0x0167B820, String *, GetSettingsErrorNameFromEnum, (CVRSettings * __this, EVRSettingsError__Enum eError));
IL2CPP_REGISTER_METHOD(0x0167B900, bool, Sync, (CVRSettings * __this, bool bForce, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x0167B920, void, SetBool, (CVRSettings * __this, String * pchSection, String * pchSettingsKey, bool bValue, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x0167B950, void, SetInt32, (CVRSettings * __this, String * pchSection, String * pchSettingsKey, int32_t nValue, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x0167B980, void, SetFloat, (CVRSettings * __this, String * pchSection, String * pchSettingsKey, float flValue, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x0167B9B0, void, SetString, (CVRSettings * __this, String * pchSection, String * pchSettingsKey, String * pchValue, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x0167B9E0, bool, GetBool, (CVRSettings * __this, String * pchSection, String * pchSettingsKey, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x0167BA10, int32_t, GetInt32, (CVRSettings * __this, String * pchSection, String * pchSettingsKey, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x0167BA40, float, GetFloat, (CVRSettings * __this, String * pchSection, String * pchSettingsKey, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x0167BA70, void, GetString, (CVRSettings * __this, String * pchSection, String * pchSettingsKey, StringBuilder * pchValue, uint32_t unValueLen, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x0167BAA0, void, RemoveSection, (CVRSettings * __this, String * pchSection, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x0167BAC0, void, RemoveKeyInSection, (CVRSettings * __this, String * pchSection, String * pchSettingsKey, EVRSettingsError__Enum * peError));
}
