#include <interception_macros.h>

namespace app::methods::System::Net::CookieTokenizer {
IL2CPP_REGISTER_METHOD(0x01EA8A40, void, __ctor, (CookieTokenizer * __this, String * tokenStream));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_EndOfCookie, (CookieTokenizer * __this));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_EndOfCookie, (CookieTokenizer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01EA8A60, bool, get_Eof, (CookieTokenizer * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Name, (CookieTokenizer * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Name, (CookieTokenizer * __this, String * value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Quoted, (CookieTokenizer * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_Quoted, (CookieTokenizer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00654950, CookieToken__Enum, get_Token, (CookieTokenizer * __this));
IL2CPP_REGISTER_METHOD(0x00654960, void, set_Token, (CookieTokenizer * __this, CookieToken__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_Value, (CookieTokenizer * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Value, (CookieTokenizer * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01EA8A70, String *, Extract, (CookieTokenizer * __this));
IL2CPP_REGISTER_METHOD(0x01EA8B40, CookieToken__Enum, FindNext, (CookieTokenizer * __this, bool ignoreComma, bool ignoreEquals));
IL2CPP_REGISTER_METHOD(0x01EA8E20, CookieToken__Enum, Next, (CookieTokenizer * __this, bool first, bool parseResponseCookies));
IL2CPP_REGISTER_METHOD(0x01EA8FD0, void, Reset, (CookieTokenizer * __this));
IL2CPP_REGISTER_METHOD(0x01EA9090, CookieToken__Enum, TokenFromName, (CookieTokenizer * __this, bool parseResponseCookies));
IL2CPP_REGISTER_METHOD(0x01EA9380, void, __cctor, ());
}
