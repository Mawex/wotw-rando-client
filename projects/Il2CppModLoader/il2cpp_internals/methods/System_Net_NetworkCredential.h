#include <interception_macros.h>

namespace app::methods::System::Net::NetworkCredential {
IL2CPP_REGISTER_METHOD(0x01E75AC0, void, __ctor, (NetworkCredential * __this));
IL2CPP_REGISTER_METHOD(0x01E75B80, void, __ctor, (NetworkCredential * __this, String * userName, String * password));
IL2CPP_REGISTER_METHOD(0x01E75C50, void, __ctor, (NetworkCredential * __this, String * userName, SecureString * password));
IL2CPP_REGISTER_METHOD(0x01E75D10, void, __ctor, (NetworkCredential * __this, String * userName, String * password, String * domain));
IL2CPP_REGISTER_METHOD(0x01E75D60, void, __ctor, (NetworkCredential * __this, String * userName, SecureString * password, String * domain));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_UserName, (NetworkCredential * __this));
IL2CPP_REGISTER_METHOD(0x01E75EE0, void, set_UserName, (NetworkCredential * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01E75F90, String *, get_Password, (NetworkCredential * __this));
IL2CPP_REGISTER_METHOD(0x01E75FA0, void, set_Password, (NetworkCredential * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01E75FC0, SecureString *, get_SecurePassword, (NetworkCredential * __this));
IL2CPP_REGISTER_METHOD(0x01E75FE0, void, set_SecurePassword, (NetworkCredential * __this, SecureString * value));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Domain, (NetworkCredential * __this));
IL2CPP_REGISTER_METHOD(0x01E76150, void, set_Domain, (NetworkCredential * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, InternalGetUserName, (NetworkCredential * __this));
IL2CPP_REGISTER_METHOD(0x01E75F90, String *, InternalGetPassword, (NetworkCredential * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, SecureString *, InternalGetSecurePassword, (NetworkCredential * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, InternalGetDomain, (NetworkCredential * __this));
IL2CPP_REGISTER_METHOD(0x01E76200, String *, InternalGetDomainUserName, (NetworkCredential * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, NetworkCredential *, GetCredential, (NetworkCredential * __this, Uri * uri, String * authType));
IL2CPP_REGISTER_METHOD(0x004C50A0, NetworkCredential *, GetCredential, (NetworkCredential * __this, String * host, int32_t port, String * authenticationType));
}
