using namespace app;

namespace app::methods::System::Net::Http::Headers::AuthenticationHeaderValue {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AuthenticationHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Parameter, (AuthenticationHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Parameter, (AuthenticationHeaderValue * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Scheme, (AuthenticationHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Scheme, (AuthenticationHeaderValue * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, ICloneable_Clone, (AuthenticationHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D02310, bool, Equals, (AuthenticationHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D02520, int32_t, GetHashCode, (AuthenticationHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D025C0, bool, TryParse, (String * input, AuthenticationHeaderValue * * parsedValue));
IL2CPP_REGISTER_METHODINFO(0x04758600, AuthenticationHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D02760, bool, TryParse, (String * input, int32_t minimalCount, List_1_System_Net_Http_Headers_AuthenticationHeaderValue_ * * result));
IL2CPP_REGISTER_METHODINFO(0x04729B78, AuthenticationHeaderValue_TryParse_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D028E0, bool, TryParseElement, (Lexer * lexer, AuthenticationHeaderValue * * parsedValue, Token * t));
IL2CPP_REGISTER_METHODINFO(0x0473F7B8, AuthenticationHeaderValue_TryParseElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D02B90, String *, ToString, (AuthenticationHeaderValue * __this));
}
