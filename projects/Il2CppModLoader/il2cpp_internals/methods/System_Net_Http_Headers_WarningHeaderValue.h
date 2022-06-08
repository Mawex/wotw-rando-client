using namespace app;

namespace app::methods::System::Net::Http::Headers::WarningHeaderValue {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (WarningHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Agent, (WarningHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Agent, (WarningHeaderValue * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Code, (WarningHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Code, (WarningHeaderValue * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02AF4D20, Nullable_1_DateTimeOffset_, get_Date, (WarningHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02AF4D40, void, set_Date, (WarningHeaderValue * __this, Nullable_1_DateTimeOffset_ value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_Text, (WarningHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Text, (WarningHeaderValue * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02D1A530, bool, IsCodeValid, (int32_t code));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, ICloneable_Clone, (WarningHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D1A550, bool, Equals, (WarningHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D1A820, int32_t, GetHashCode, (WarningHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D1A960, bool, TryParse, (String * input, int32_t minimalCount, List_1_System_Net_Http_Headers_WarningHeaderValue_ * * result));
IL2CPP_REGISTER_METHODINFO(0x0470DE38, WarningHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D1AAE0, bool, TryParseElement, (Lexer * lexer, WarningHeaderValue * * parsedValue, Token * t));
IL2CPP_REGISTER_METHODINFO(0x04761F30, WarningHeaderValue_TryParseElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D1B010, String *, ToString, (WarningHeaderValue * __this));
}
