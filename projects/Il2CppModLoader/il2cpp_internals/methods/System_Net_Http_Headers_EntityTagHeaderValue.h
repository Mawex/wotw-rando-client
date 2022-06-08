using namespace app;

namespace app::methods::System::Net::Http::Headers::EntityTagHeaderValue {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EntityTagHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsWeak, (EntityTagHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_IsWeak, (EntityTagHeaderValue * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Tag, (EntityTagHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Tag, (EntityTagHeaderValue * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, ICloneable_Clone, (EntityTagHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D07810, bool, Equals, (EntityTagHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D079B0, int32_t, GetHashCode, (EntityTagHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D079F0, bool, TryParse, (String * input, EntityTagHeaderValue * * parsedValue));
IL2CPP_REGISTER_METHODINFO(0x04714D78, EntityTagHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D07BB0, bool, TryParseElement, (Lexer * lexer, EntityTagHeaderValue * * parsedValue, Token * t));
IL2CPP_REGISTER_METHODINFO(0x04706688, EntityTagHeaderValue_TryParseElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D07F40, bool, TryParse, (String * input, int32_t minimalCount, List_1_System_Net_Http_Headers_EntityTagHeaderValue_ * * result));
IL2CPP_REGISTER_METHODINFO(0x047530F0, EntityTagHeaderValue_TryParse_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D080C0, String *, ToString, (EntityTagHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D08160, void, __cctor, (MethodInfo * method));
}
