using namespace app;

namespace app::methods::System::Net::Http::Headers::MediaTypeHeaderValue {
IL2CPP_REGISTER_METHOD(0x02D0ECF0, void, __ctor, (MediaTypeHeaderValue * __this, MediaTypeHeaderValue * source));
IL2CPP_REGISTER_METHODINFO(0x04711EF0, MediaTypeHeaderValue__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MediaTypeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D0F120, ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_ *, get_Parameters, (MediaTypeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D0F280, Object *, ICloneable_Clone, (MediaTypeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D0F3D0, bool, Equals, (MediaTypeHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D0F610, int32_t, GetHashCode, (MediaTypeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D0F6E0, String *, ToString, (MediaTypeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D0F790, bool, TryParse, (String * input, MediaTypeHeaderValue * * parsedValue));
IL2CPP_REGISTER_METHODINFO(0x04721B78, MediaTypeHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D0FAE0, Nullable_1_System_Net_Http_Headers_Token_, TryParseMediaType, (Lexer * lexer, String * * media));
}
