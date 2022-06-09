#include <interception_macros.h>

namespace app::methods::System::Net::ServicePointManager {
    IL2CPP_REGISTER_METHOD(0x01BD77A0, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ServicePointManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BD7970, app::ICertificatePolicy *, get_CertificatePolicy, ());
    IL2CPP_REGISTER_METHOD(0x01BD7B50, void, set_CertificatePolicy, (app::ICertificatePolicy * value));
    IL2CPP_REGISTER_METHOD(0x01BD7C00, app::ICertificatePolicy *, GetLegacyCertificatePolicy, ());
    IL2CPP_REGISTER_METHOD(0x01BD7CA0, bool, get_CheckCertificateRevocationList, ());
    IL2CPP_REGISTER_METHOD(0x01BD7D40, void, set_CheckCertificateRevocationList, (bool value));
    IL2CPP_REGISTER_METHOD(0x01BD7DE0, int32_t, get_DefaultConnectionLimit, ());
    IL2CPP_REGISTER_METHOD(0x01BD7E80, void, set_DefaultConnectionLimit, (int32_t value));
    IL2CPP_REGISTER_METHODINFO(0x0476D5E0, ServicePointManager_set_DefaultConnectionLimit__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BD7F60, app::Exception *, GetMustImplement, ());
    IL2CPP_REGISTER_METHOD(0x01BD80A0, int32_t, get_DnsRefreshTimeout, ());
    IL2CPP_REGISTER_METHOD(0x01BD8140, void, set_DnsRefreshTimeout, (int32_t value));
    IL2CPP_REGISTER_METHOD(0x01BD8230, bool, get_EnableDnsRoundRobin, ());
    IL2CPP_REGISTER_METHODINFO(0x0470D4F8, ServicePointManager_get_EnableDnsRoundRobin__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BD82D0, void, set_EnableDnsRoundRobin, (bool value));
    IL2CPP_REGISTER_METHODINFO(0x0472AE08, ServicePointManager_set_EnableDnsRoundRobin__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BD8370, int32_t, get_MaxServicePointIdleTime, ());
    IL2CPP_REGISTER_METHOD(0x01BD8410, void, set_MaxServicePointIdleTime, (int32_t value));
    IL2CPP_REGISTER_METHODINFO(0x04778998, ServicePointManager_set_MaxServicePointIdleTime__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BD84F0, int32_t, get_MaxServicePoints, ());
    IL2CPP_REGISTER_METHOD(0x01BD8590, void, set_MaxServicePoints, (int32_t value));
    IL2CPP_REGISTER_METHODINFO(0x047860E0, ServicePointManager_set_MaxServicePoints__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ReusePort, ());
    IL2CPP_REGISTER_METHOD(0x01BD8670, void, set_ReusePort, (bool value));
    IL2CPP_REGISTER_METHODINFO(0x04776868, ServicePointManager_set_ReusePort__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BD86C0, app::SecurityProtocolType__Enum, get_SecurityProtocol, ());
    IL2CPP_REGISTER_METHOD(0x01BD8760, void, set_SecurityProtocol, (app::SecurityProtocolType__Enum value));
    IL2CPP_REGISTER_METHOD(0x01BD8810, app::ServerCertValidationCallback *, get_ServerCertValidationCallback, ());
    IL2CPP_REGISTER_METHOD(0x01BD88B0, app::RemoteCertificateValidationCallback *, get_ServerCertificateValidationCallback, ());
    IL2CPP_REGISTER_METHOD(0x01BD8990, void, set_ServerCertificateValidationCallback, (app::RemoteCertificateValidationCallback * value));
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::EncryptionPolicy__Enum, get_EncryptionPolicy, ());
    IL2CPP_REGISTER_METHOD(0x01BD8B60, bool, get_Expect100Continue, ());
    IL2CPP_REGISTER_METHOD(0x01BD8C00, void, set_Expect100Continue, (bool value));
    IL2CPP_REGISTER_METHOD(0x01BD8CB0, bool, get_UseNagleAlgorithm, ());
    IL2CPP_REGISTER_METHOD(0x01BD8D50, void, set_UseNagleAlgorithm, (bool value));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DisableStrongCrypto, ());
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DisableSendAuxRecord, ());
    IL2CPP_REGISTER_METHOD(0x01BD8E00, void, SetTcpKeepAlive, (bool enabled, int32_t keep_alive_time, int32_t keep_alive_interval));
    IL2CPP_REGISTER_METHODINFO(0x0476A190, ServicePointManager_SetTcpKeepAlive__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BD8F60, app::ServicePoint *, FindServicePoint_1, (app::Uri * address));
    IL2CPP_REGISTER_METHOD(0x01BD9000, app::ServicePoint *, FindServicePoint_2, (app::String * uri_string, app::IWebProxy * proxy));
    IL2CPP_REGISTER_METHOD(0x01BD9180, app::ServicePoint *, FindServicePoint_3, (app::Uri * address, app::IWebProxy * proxy));
    IL2CPP_REGISTER_METHODINFO(0x04751A98, ServicePointManager_FindServicePoint_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BD9C30, void, CloseConnectionGroup, (app::String * connection_group_name));
}
