#include <interception_macros.h>

namespace app::methods::System::Net::Http::Headers::StringWithQualityHeaderValue {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (StringWithQualityHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x01349560, Nullable_1_Double_, get_Quality, (StringWithQualityHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x011927A0, void, set_Quality, (StringWithQualityHeaderValue * __this, Nullable_1_Double_ value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Value, (StringWithQualityHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Value, (StringWithQualityHeaderValue * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, ICloneable_Clone, (StringWithQualityHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D17810, bool, Equals, (StringWithQualityHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D17A10, int32_t, GetHashCode, (StringWithQualityHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D17B00, bool, TryParse, (String * input, int32_t minimalCount, List_1_System_Net_Http_Headers_StringWithQualityHeaderValue_ * * result));
IL2CPP_REGISTER_METHODINFO(0x0470F640, StringWithQualityHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D17C80, bool, TryParseElement, (Lexer * lexer, StringWithQualityHeaderValue * * parsedValue, Token * t));
IL2CPP_REGISTER_METHODINFO(0x047079E8, StringWithQualityHeaderValue_TryParseElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D18150, String *, ToString, (StringWithQualityHeaderValue * __this));
}
