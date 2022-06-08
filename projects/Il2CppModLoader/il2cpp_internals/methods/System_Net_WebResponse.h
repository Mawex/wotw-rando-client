using namespace app;

namespace app::methods::System::Net::WebResponse {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (WebResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (WebResponse * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x01D28380, void, ISerializable_GetObjectData, (WebResponse * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x002FA000, void, GetObjectData, (WebResponse * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Close, (WebResponse * __this));
IL2CPP_REGISTER_METHOD(0x021B8730, void, Dispose, (WebResponse * __this));
IL2CPP_REGISTER_METHOD(0x021B87E0, void, Dispose, (WebResponse * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x00533160, bool, get_IsFromCache, (WebResponse * __this));
IL2CPP_REGISTER_METHOD(0x00533170, void, set_InternalSetFromCache, (WebResponse * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsCacheFresh, (WebResponse * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_InternalSetIsCacheFresh, (WebResponse * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsMutuallyAuthenticated, (WebResponse * __this));
IL2CPP_REGISTER_METHOD(0x021B8890, int64_t, get_ContentLength, (WebResponse * __this));
IL2CPP_REGISTER_METHODINFO(0x04756A88, WebResponse_get_ContentLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B88D0, void, set_ContentLength, (WebResponse * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x047558B0, WebResponse_set_ContentLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B8910, String *, get_ContentType, (WebResponse * __this));
IL2CPP_REGISTER_METHODINFO(0x04799818, WebResponse_get_ContentType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B8950, void, set_ContentType, (WebResponse * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0475DED0, WebResponse_set_ContentType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B8990, Stream *, GetResponseStream, (WebResponse * __this));
IL2CPP_REGISTER_METHODINFO(0x0476D1D8, WebResponse_GetResponseStream__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B89D0, Uri *, get_ResponseUri, (WebResponse * __this));
IL2CPP_REGISTER_METHODINFO(0x04758790, WebResponse_get_ResponseUri__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B8A10, WebHeaderCollection *, get_Headers, (WebResponse * __this));
IL2CPP_REGISTER_METHODINFO(0x04706CE0, WebResponse_get_Headers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsHeaders, (WebResponse * __this));
}
