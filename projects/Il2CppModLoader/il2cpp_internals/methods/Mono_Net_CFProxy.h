#include <interception_macros.h>

namespace app::methods::Mono_Net::CFProxy {
IL2CPP_REGISTER_METHOD(0x02178A10, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::CFProxy * this_ptr, app::CFDictionary * settings));
IL2CPP_REGISTER_METHOD(0x02178C70, CFProxyType__Enum, CFProxyTypeToEnum, (app::void * type));
IL2CPP_REGISTER_METHOD(0x02178E60, void *, get_AutoConfigurationJavaScript, (app::CFProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x02178F50, void *, get_AutoConfigurationUrl, (app::CFProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x02179040, String *, get_HostName, (app::CFProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x02179140, String *, get_Password, (app::CFProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x02179240, int32_t, get_Port, (app::CFProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x02179450, CFProxyType__Enum, get_ProxyType, (app::CFProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x02179730, String *, get_Username, (app::CFProxy * this_ptr));
}
