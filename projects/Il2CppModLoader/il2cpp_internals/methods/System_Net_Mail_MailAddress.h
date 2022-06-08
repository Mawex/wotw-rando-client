#include <interception_macros.h>

namespace app::methods::System::Net::Mail::MailAddress {
IL2CPP_REGISTER_METHOD(0x01E6E080, void, __ctor, (MailAddress * __this, String * address));
IL2CPP_REGISTER_METHOD(0x01E6E180, void, __ctor, (MailAddress * __this, String * address, String * displayName));
IL2CPP_REGISTER_METHOD(0x01E6E2B0, void, __ctor, (MailAddress * __this, String * address, String * displayName, Encoding * displayNameEncoding));
IL2CPP_REGISTER_METHODINFO(0x047584A0, MailAddress__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E6E3D0, void, ParseAddress, (MailAddress * __this, String * address));
IL2CPP_REGISTER_METHODINFO(0x04783578, MailAddress_ParseAddress__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Address, (MailAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E6E7E0, String *, get_DisplayName, (MailAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E6E870, bool, Equals, (MailAddress * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01D25F50, int32_t, GetHashCode, (MailAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E6EA20, String *, ToString, (MailAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E6EBA0, FormatException *, CreateFormatException, ());
}
