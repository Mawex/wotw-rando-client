using namespace app;

namespace app::methods::System::Net::Http::Headers::ContentDispositionHeaderValue {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ContentDispositionHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D059F0, void, __ctor, (ContentDispositionHeaderValue * __this, ContentDispositionHeaderValue * source));
IL2CPP_REGISTER_METHODINFO(0x0478C328, ContentDispositionHeaderValue__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D05E20, ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_ *, get_Parameters, (ContentDispositionHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D05F80, Object *, ICloneable_Clone, (ContentDispositionHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D060D0, bool, Equals, (ContentDispositionHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D06310, int32_t, GetHashCode, (ContentDispositionHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D063E0, String *, ToString, (ContentDispositionHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D06480, bool, TryParse, (String * input, ContentDispositionHeaderValue * * parsedValue));
IL2CPP_REGISTER_METHODINFO(0x04745AB0, ContentDispositionHeaderValue_TryParse__MethodInfo);
}
