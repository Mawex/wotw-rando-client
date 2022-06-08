using namespace app;

namespace app::methods::System::Net::HttpWebResponse {
IL2CPP_REGISTER_METHOD(0x01E64990, void, __ctor, (HttpWebResponse * __this, Uri * uri, String * method_1, WebConnectionData * data, CookieContainer * container));
IL2CPP_REGISTER_METHOD(0x01E64DD0, void, __ctor, (HttpWebResponse * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x01E65080, String *, get_CharacterSet, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E651C0, String *, get_ContentEncoding, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, int64_t, get_ContentLength, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E65280, String *, get_ContentType, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E65330, CookieCollection *, get_Cookies, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E65490, void, set_Cookies, (HttpWebResponse * __this, CookieCollection * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, WebHeaderCollection *, get_Headers, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E654C0, Exception *, GetMustImplement, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01E65600, bool, get_IsMutuallyAuthenticated, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHODINFO(0x047466D0, HttpWebResponse_get_IsMutuallyAuthenticated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E65640, DateTime, get_LastModified, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E65750, String *, get_Method, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E65770, Version *, get_ProtocolVersion, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E65790, Uri *, get_ResponseUri, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E657B0, String *, get_Server, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x006410F0, HttpStatusCode__Enum, get_StatusCode, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E65870, String *, get_StatusDescription, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsHeaders, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E65890, String *, GetResponseHeader, (HttpWebResponse * __this, String * headerName));
IL2CPP_REGISTER_METHOD(0x01E65950, void, ReadAll, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E65A30, Stream *, GetResponseStream, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01D28380, void, ISerializable_GetObjectData, (HttpWebResponse * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x01E65C00, void, GetObjectData, (HttpWebResponse * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x01E65D60, void, Close, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x00E3FCE0, void, IDisposable_Dispose, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E65D90, void, Dispose, (HttpWebResponse * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01E65DA0, void, CheckDisposed, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHODINFO(0x047670C8, HttpWebResponse_CheckDisposed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E65E80, void, FillCookies, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01E66040, void, __ctor, (HttpWebResponse * __this));
IL2CPP_REGISTER_METHODINFO(0x047734F0, HttpWebResponse__ctor_2__MethodInfo);
}
