#include <interception_macros.h>

namespace app::methods::System::Net::AuthenticationManager {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AuthenticationManager * __this));
IL2CPP_REGISTER_METHOD(0x0200E810, void, EnsureModules, ());
IL2CPP_REGISTER_METHOD(0x0200EEC0, ICredentialPolicy *, get_CredentialPolicy, ());
IL2CPP_REGISTER_METHOD(0x0200EF60, void, set_CredentialPolicy, (ICredentialPolicy * value));
IL2CPP_REGISTER_METHOD(0x0200F010, Exception *, GetMustImplement, ());
IL2CPP_REGISTER_METHOD(0x0200F150, StringDictionary *, get_CustomTargetNameDictionary, ());
IL2CPP_REGISTER_METHODINFO(0x0474D6A8, AuthenticationManager_get_CustomTargetNameDictionary__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0200F1F0, IEnumerator *, get_RegisteredModules, ());
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_OSSupportsExtendedProtection, ());
IL2CPP_REGISTER_METHOD(0x0200F2B0, void, Clear, ());
IL2CPP_REGISTER_METHOD(0x0200F460, Authorization *, Authenticate, (String * challenge, WebRequest * request, ICredentials * credentials));
IL2CPP_REGISTER_METHODINFO(0x0471F160, AuthenticationManager_Authenticate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0200F5C0, Authorization *, DoAuthenticate, (String * challenge, WebRequest * request, ICredentials * credentials));
IL2CPP_REGISTER_METHOD(0x0200F8E0, Authorization *, PreAuthenticate, (WebRequest * request, ICredentials * credentials));
IL2CPP_REGISTER_METHODINFO(0x047469D8, AuthenticationManager_PreAuthenticate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0200FCD0, void, Register, (IAuthenticationModule * authenticationModule));
IL2CPP_REGISTER_METHODINFO(0x04732C38, AuthenticationManager_Register__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0200FED0, void, Unregister, (IAuthenticationModule * authenticationModule));
IL2CPP_REGISTER_METHODINFO(0x047990B0, AuthenticationManager_Unregister__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0200FFC0, void, Unregister, (String * authenticationScheme));
IL2CPP_REGISTER_METHODINFO(0x0470BE28, AuthenticationManager_Unregister_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020100A0, void, DoUnregister, (String * authenticationScheme, bool throwEx));
IL2CPP_REGISTER_METHODINFO(0x04744190, AuthenticationManager_DoUnregister__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02010450, void, __cctor, ());
}
