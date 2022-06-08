#include <interception_macros.h>

namespace app::methods::System::Net::Http::Headers::ViaHeaderValue {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ViaHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Comment, (ViaHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Comment, (ViaHeaderValue * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_ProtocolName, (ViaHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ProtocolName, (ViaHeaderValue * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_ProtocolVersion, (ViaHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_ProtocolVersion, (ViaHeaderValue * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_ReceivedBy, (ViaHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_ReceivedBy, (ViaHeaderValue * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, ICloneable_Clone, (ViaHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D19700, bool, Equals, (ViaHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D19B90, int32_t, GetHashCode, (ViaHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D19CB0, bool, TryParse, (String * input, int32_t minimalCount, List_1_System_Net_Http_Headers_ViaHeaderValue_ * * result));
IL2CPP_REGISTER_METHODINFO(0x0471DA08, ViaHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D19E30, bool, TryParseElement, (Lexer * lexer, ViaHeaderValue * * parsedValue, Token * t));
IL2CPP_REGISTER_METHODINFO(0x0476CF50, ViaHeaderValue_TryParseElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D1A290, String *, ToString, (ViaHeaderValue * __this));
}
