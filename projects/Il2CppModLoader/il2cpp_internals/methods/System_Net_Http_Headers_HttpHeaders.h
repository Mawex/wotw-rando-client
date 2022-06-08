using namespace app;

namespace app::methods::System::Net::Http::Headers::HttpHeaders {
IL2CPP_REGISTER_METHOD(0x02D083E0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02D0C270, void, __ctor, (HttpHeaders * __this));
IL2CPP_REGISTER_METHOD(0x02D0C410, void, __ctor, (HttpHeaders * __this, HttpHeaderKind__Enum headerKind));
IL2CPP_REGISTER_METHOD(0x02D0C440, IEnumerator_1_KeyValuePair_2_System_String_IEnumerable_1_System_String_ *, GetEnumerator, (HttpHeaders * __this));
IL2CPP_REGISTER_METHOD(0x02D0C590, IEnumerator *, IEnumerable_GetEnumerator, (HttpHeaders * __this));
IL2CPP_REGISTER_METHOD(0x02D0C5A0, String *, GetSingleHeaderString, (String * key, IEnumerable_1_System_String_ * values));
IL2CPP_REGISTER_METHOD(0x02D0C9D0, String *, ToString, (HttpHeaders * __this));
IL2CPP_REGISTER_METHOD(0x02D0CD20, List_1_System_String_ *, GetAllHeaderValues, (HttpHeaders * __this, HttpHeaders_HeaderBucket * bucket, HeaderInfo_1 * headerInfo));
}
