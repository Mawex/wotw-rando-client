#include <interception_macros.h>

namespace app::methods::System::Net::CredentialCache {
IL2CPP_REGISTER_METHOD(0x01EA98F0, bool, get_IsDefaultInCache, (CredentialCache * __this));
IL2CPP_REGISTER_METHOD(0x01EA9900, void, __ctor, (CredentialCache * __this));
IL2CPP_REGISTER_METHOD(0x01EA9B30, void, Add, (CredentialCache * __this, Uri * uriPrefix, String * authType, NetworkCredential * cred));
IL2CPP_REGISTER_METHODINFO(0x04744850, CredentialCache_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EA9E30, void, Add, (CredentialCache * __this, String * host, int32_t port, String * authenticationType, NetworkCredential * credential));
IL2CPP_REGISTER_METHODINFO(0x04709A70, CredentialCache_Add_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EAA1B0, void, Remove, (CredentialCache * __this, Uri * uriPrefix, String * authType));
IL2CPP_REGISTER_METHOD(0x01EAA3E0, void, Remove, (CredentialCache * __this, String * host, int32_t port, String * authenticationType));
IL2CPP_REGISTER_METHOD(0x01EAA5C0, NetworkCredential *, GetCredential, (CredentialCache * __this, Uri * uriPrefix, String * authType));
IL2CPP_REGISTER_METHODINFO(0x0472C9D0, CredentialCache_GetCredential__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EAA8E0, NetworkCredential *, GetCredential, (CredentialCache * __this, String * host, int32_t port, String * authenticationType));
IL2CPP_REGISTER_METHODINFO(0x04789400, CredentialCache_GetCredential_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EAAC70, IEnumerator *, GetEnumerator, (CredentialCache * __this));
IL2CPP_REGISTER_METHOD(0x01EAADF0, ICredentials *, get_DefaultCredentials, ());
IL2CPP_REGISTER_METHOD(0x01EAAE90, NetworkCredential *, get_DefaultNetworkCredentials, ());
}
