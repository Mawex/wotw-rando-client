using namespace app;

namespace app::methods::System::Net::Http::Headers::TransferCodingHeaderValue {
IL2CPP_REGISTER_METHOD(0x02D18450, void, __ctor, (TransferCodingHeaderValue * __this, TransferCodingHeaderValue * source));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TransferCodingHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D18860, ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_ *, get_Parameters, (TransferCodingHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D189C0, Object *, ICloneable_Clone, (TransferCodingHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D18B10, bool, Equals, (TransferCodingHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D18D50, int32_t, GetHashCode, (TransferCodingHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D18E20, String *, ToString, (TransferCodingHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D18EC0, bool, TryParse, (String * input, int32_t minimalCount, List_1_System_Net_Http_Headers_TransferCodingHeaderValue_ * * result));
IL2CPP_REGISTER_METHODINFO(0x04793CA0, TransferCodingHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D19040, bool, TryParseElement, (Lexer * lexer, TransferCodingHeaderValue * * parsedValue, Token * t));
IL2CPP_REGISTER_METHODINFO(0x0476F930, TransferCodingHeaderValue_TryParseElement__MethodInfo);
}
