using namespace app;

namespace app::methods::System::Net::Http::Headers::NameValueHeaderValue {
IL2CPP_REGISTER_METHOD(0x02D101C0, void, __ctor, (NameValueHeaderValue * __this, NameValueHeaderValue * source));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NameValueHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (NameValueHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Name, (NameValueHeaderValue * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02D101F0, NameValueHeaderValue *, Create, (String * name, String * value));
IL2CPP_REGISTER_METHOD(0x02D10350, Object *, ICloneable_Clone, (NameValueHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D02520, int32_t, GetHashCode, (NameValueHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D104B0, bool, Equals, (NameValueHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D107C0, bool, TryParsePragma, (String * input, int32_t minimalCount, List_1_System_Net_Http_Headers_NameValueHeaderValue_ * * result));
IL2CPP_REGISTER_METHODINFO(0x0475B5E8, NameValueHeaderValue_TryParsePragma__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D10940, bool, TryParseParameters, (Lexer * lexer, List_1_System_Net_Http_Headers_NameValueHeaderValue_ * * result, Token * t));
IL2CPP_REGISTER_METHOD(0x02D10E30, String *, ToString, (NameValueHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D10ED0, bool, TryParseElement, (Lexer * lexer, NameValueHeaderValue * * parsedValue, Token * t));
IL2CPP_REGISTER_METHODINFO(0x04797C28, NameValueHeaderValue_TryParseElement__MethodInfo);
}
