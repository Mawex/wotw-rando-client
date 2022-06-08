using namespace app;

namespace app::methods::System::Net::Configuration::ProxyElement {
IL2CPP_REGISTER_METHOD(0x02019FE0, void, __ctor, (ProxyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x047390A0, ProxyElement__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201A010, ProxyElement_AutoDetectValues__Enum, get_AutoDetect, (ProxyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04767B38, ProxyElement_get_AutoDetect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201A040, void, set_AutoDetect, (ProxyElement * __this, ProxyElement_AutoDetectValues__Enum value));
IL2CPP_REGISTER_METHODINFO(0x04706DA8, ProxyElement_set_AutoDetect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201A070, ProxyElement_BypassOnLocalValues__Enum, get_BypassOnLocal, (ProxyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x047250A0, ProxyElement_get_BypassOnLocal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201A0A0, void, set_BypassOnLocal, (ProxyElement * __this, ProxyElement_BypassOnLocalValues__Enum value));
IL2CPP_REGISTER_METHODINFO(0x04766128, ProxyElement_set_BypassOnLocal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201A0D0, ConfigurationPropertyCollection *, get_Properties, (ProxyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04702ED0, ProxyElement_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201A100, Uri *, get_ProxyAddress, (ProxyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04746908, ProxyElement_get_ProxyAddress__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201A130, void, set_ProxyAddress, (ProxyElement * __this, Uri * value));
IL2CPP_REGISTER_METHODINFO(0x04731250, ProxyElement_set_ProxyAddress__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201A160, Uri *, get_ScriptLocation, (ProxyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04792C90, ProxyElement_get_ScriptLocation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201A190, void, set_ScriptLocation, (ProxyElement * __this, Uri * value));
IL2CPP_REGISTER_METHODINFO(0x0470CE38, ProxyElement_set_ScriptLocation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201A1C0, ProxyElement_UseSystemDefaultValues__Enum, get_UseSystemDefault, (ProxyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0471D790, ProxyElement_get_UseSystemDefault__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201A1F0, void, set_UseSystemDefault, (ProxyElement * __this, ProxyElement_UseSystemDefaultValues__Enum value));
IL2CPP_REGISTER_METHODINFO(0x04746D10, ProxyElement_set_UseSystemDefault__MethodInfo);
}
