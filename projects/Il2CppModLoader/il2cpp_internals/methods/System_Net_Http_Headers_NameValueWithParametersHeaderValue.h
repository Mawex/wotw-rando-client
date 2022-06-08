#include <interception_macros.h>

namespace app::methods::System::Net::Http::Headers::NameValueWithParametersHeaderValue {
IL2CPP_REGISTER_METHOD(0x02D11210, void, __ctor, (NameValueWithParametersHeaderValue * __this, NameValueWithParametersHeaderValue * source));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NameValueWithParametersHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D11540, ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_ *, get_Parameters, (NameValueWithParametersHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D116A0, Object *, ICloneable_Clone, (NameValueWithParametersHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D117F0, bool, Equals, (NameValueWithParametersHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D11970, int32_t, GetHashCode, (NameValueWithParametersHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D11A80, String *, ToString, (NameValueWithParametersHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D11B50, bool, TryParse, (String * input, int32_t minimalCount, List_1_System_Net_Http_Headers_NameValueWithParametersHeaderValue_ * * result));
IL2CPP_REGISTER_METHODINFO(0x0474F760, NameValueWithParametersHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D11CD0, bool, TryParseElement, (Lexer * lexer, NameValueWithParametersHeaderValue * * parsedValue, Token * t));
IL2CPP_REGISTER_METHODINFO(0x04707030, NameValueWithParametersHeaderValue_TryParseElement__MethodInfo);
}
