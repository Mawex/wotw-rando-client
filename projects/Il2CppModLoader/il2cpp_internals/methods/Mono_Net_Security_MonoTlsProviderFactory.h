#include <interception_macros.h>

namespace app::methods::Mono::Net::Security::MonoTlsProviderFactory {
IL2CPP_REGISTER_METHOD(0x021834F0, MonoTlsProvider *, GetProviderInternal, ());
IL2CPP_REGISTER_METHOD(0x021836A0, void, InitializeInternal, ());
IL2CPP_REGISTER_METHODINFO(0x047403E8, MonoTlsProviderFactory_InitializeInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02183B20, MonoTlsProvider *, LookupProvider, (String * name, bool throwOnError));
IL2CPP_REGISTER_METHODINFO(0x047351D0, MonoTlsProviderFactory_LookupProvider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021840B0, void, InitializeProviderRegistration, ());
IL2CPP_REGISTER_METHOD(0x02184A00, MonoTlsProvider *, CreateDefaultProviderImpl, ());
IL2CPP_REGISTER_METHOD(0x02184AC0, MonoTlsProvider *, GetProvider, ());
IL2CPP_REGISTER_METHODINFO(0x04726D90, MonoTlsProviderFactory_GetProvider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02184B90, void, __cctor, ());
}
