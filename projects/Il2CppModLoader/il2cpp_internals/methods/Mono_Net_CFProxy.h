using namespace app;

namespace app::methods::Mono::Net::CFProxy {
IL2CPP_REGISTER_METHOD(0x02178A10, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (CFProxy * __this, CFDictionary * settings));
IL2CPP_REGISTER_METHOD(0x02178C70, CFProxyType__Enum, CFProxyTypeToEnum, (void * type));
IL2CPP_REGISTER_METHOD(0x02178E60, void *, get_AutoConfigurationJavaScript, (CFProxy * __this));
IL2CPP_REGISTER_METHOD(0x02178F50, void *, get_AutoConfigurationUrl, (CFProxy * __this));
IL2CPP_REGISTER_METHOD(0x02179040, String *, get_HostName, (CFProxy * __this));
IL2CPP_REGISTER_METHOD(0x02179140, String *, get_Password, (CFProxy * __this));
IL2CPP_REGISTER_METHOD(0x02179240, int32_t, get_Port, (CFProxy * __this));
IL2CPP_REGISTER_METHOD(0x02179450, CFProxyType__Enum, get_ProxyType, (CFProxy * __this));
IL2CPP_REGISTER_METHOD(0x02179730, String *, get_Username, (CFProxy * __this));
}
