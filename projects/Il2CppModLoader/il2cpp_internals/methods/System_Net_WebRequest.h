using namespace app;

namespace app::methods::System::Net::WebRequest {
IL2CPP_REGISTER_METHOD(0x021B35D0, IWebRequestCreate *, get_CreatorInstance, (WebRequest * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterPortableWebRequestCreator, (IWebRequestCreate * creator));
IL2CPP_REGISTER_METHOD(0x021B3670, Object *, get_InternalSyncObject, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x021B3850, TimerThread_Queue *, get_DefaultTimerQueue, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x021B38F0, WebRequest *, Create, (Uri * requestUri, bool useUriBase));
IL2CPP_REGISTER_METHODINFO(0x047703B0, WebRequest_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B3C40, WebRequest *, Create, (String * requestUriString));
IL2CPP_REGISTER_METHODINFO(0x04760D80, WebRequest_Create_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B3DF0, WebRequest *, Create, (Uri * requestUri));
IL2CPP_REGISTER_METHODINFO(0x0470DD00, WebRequest_Create_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B3EE0, WebRequest *, CreateDefault, (Uri * requestUri));
IL2CPP_REGISTER_METHODINFO(0x04785218, WebRequest_CreateDefault__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B3FD0, HttpWebRequest *, CreateHttp, (String * requestUriString));
IL2CPP_REGISTER_METHODINFO(0x0478BA30, WebRequest_CreateHttp__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B4180, HttpWebRequest *, CreateHttp, (Uri * requestUri));
IL2CPP_REGISTER_METHODINFO(0x04793C88, WebRequest_CreateHttp_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B4470, bool, RegisterPrefix, (String * prefix, IWebRequestCreate * creator));
IL2CPP_REGISTER_METHODINFO(0x04700E18, WebRequest_RegisterPrefix__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B4B80, ArrayList *, get_PrefixList, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x021B4DC0, void, set_PrefixList, (ArrayList * value));
IL2CPP_REGISTER_METHOD(0x021B4E70, ArrayList *, PopulatePrefixList, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x021B5580, void, __ctor, (WebRequest * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (WebRequest * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x01D28380, void, ISerializable_GetObjectData, (WebRequest * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x002FA000, void, GetObjectData, (WebRequest * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x021B5590, RequestCachePolicy *, get_DefaultCachePolicy, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x021B5650, void, set_DefaultCachePolicy, (RequestCachePolicy * value));
IL2CPP_REGISTER_METHOD(0x002FB950, RequestCachePolicy *, get_CachePolicy, (WebRequest * __this));
IL2CPP_REGISTER_METHOD(0x021B5810, void, set_CachePolicy, (WebRequest * __this, RequestCachePolicy * value));
IL2CPP_REGISTER_METHOD(0x021B5820, void, InternalSetCachePolicy, (WebRequest * __this, RequestCachePolicy * policy));
IL2CPP_REGISTER_METHOD(0x021B5910, String *, get_Method, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x047428B8, WebRequest_get_Method__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5950, void, set_Method, (WebRequest * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04741338, WebRequest_set_Method__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5990, Uri *, get_RequestUri, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x0475B280, WebRequest_get_RequestUri__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B59D0, String *, get_ConnectionGroupName, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x047490D0, WebRequest_get_ConnectionGroupName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5A10, void, set_ConnectionGroupName, (WebRequest * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x047510A8, WebRequest_set_ConnectionGroupName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5A50, WebHeaderCollection *, get_Headers, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x0474D938, WebRequest_get_Headers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5A90, void, set_Headers, (WebRequest * __this, WebHeaderCollection * value));
IL2CPP_REGISTER_METHODINFO(0x04731AA0, WebRequest_set_Headers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5AD0, int64_t, get_ContentLength, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x04793AE0, WebRequest_get_ContentLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5B10, void, set_ContentLength, (WebRequest * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x0471CB88, WebRequest_set_ContentLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5B50, String *, get_ContentType, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x0472A8D0, WebRequest_get_ContentType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5B90, void, set_ContentType, (WebRequest * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04715550, WebRequest_set_ContentType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5BD0, ICredentials *, get_Credentials, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x047449E0, WebRequest_get_Credentials__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5C10, void, set_Credentials, (WebRequest * __this, ICredentials * value));
IL2CPP_REGISTER_METHODINFO(0x04757088, WebRequest_set_Credentials__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5C50, bool, get_UseDefaultCredentials, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x0472E2C8, WebRequest_get_UseDefaultCredentials__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5C90, void, set_UseDefaultCredentials, (WebRequest * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x0471E9B0, WebRequest_set_UseDefaultCredentials__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5CD0, IWebProxy *, get_Proxy, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x04701E88, WebRequest_get_Proxy__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5D10, void, set_Proxy, (WebRequest * __this, IWebProxy * value));
IL2CPP_REGISTER_METHODINFO(0x04789248, WebRequest_set_Proxy__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5D50, bool, get_PreAuthenticate, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x0470D5A0, WebRequest_get_PreAuthenticate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5D90, void, set_PreAuthenticate, (WebRequest * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x04737C38, WebRequest_set_PreAuthenticate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5DD0, int32_t, get_Timeout, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x047153C8, WebRequest_get_Timeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5E10, void, set_Timeout, (WebRequest * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04757A30, WebRequest_set_Timeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5E50, Stream *, GetRequestStream, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x0474D8D8, WebRequest_GetRequestStream__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5E90, WebResponse *, GetResponse, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x04797678, WebRequest_GetResponse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5ED0, IAsyncResult *, BeginGetResponse, (WebRequest * __this, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x047328C0, WebRequest_BeginGetResponse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5F10, WebResponse *, EndGetResponse, (WebRequest * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x0477C2D8, WebRequest_EndGetResponse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5F50, IAsyncResult *, BeginGetRequestStream, (WebRequest * __this, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0477B810, WebRequest_BeginGetRequestStream__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5F90, Stream *, EndGetRequestStream, (WebRequest * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x04771640, WebRequest_EndGetRequestStream__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B5FD0, Task_1_System_IO_Stream_ *, GetRequestStreamAsync, (WebRequest * __this));
IL2CPP_REGISTER_METHOD(0x021B6400, Task_1_System_Net_WebResponse_ *, GetResponseAsync, (WebRequest * __this));
IL2CPP_REGISTER_METHOD(0x021B6830, WindowsIdentity *, SafeCaptureIdenity, (WebRequest * __this));
IL2CPP_REGISTER_METHOD(0x021B68C0, void, Abort, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E850, WebRequest_Abort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBB00, RequestCacheProtocol *, get_CacheProtocol, (WebRequest * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_CacheProtocol, (WebRequest * __this, RequestCacheProtocol * value));
IL2CPP_REGISTER_METHOD(0x00529FF0, AuthenticationLevel__Enum, get_AuthenticationLevel, (WebRequest * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_AuthenticationLevel, (WebRequest * __this, AuthenticationLevel__Enum value));
IL2CPP_REGISTER_METHOD(0x0052A010, TokenImpersonationLevel__Enum, get_ImpersonationLevel, (WebRequest * __this));
IL2CPP_REGISTER_METHOD(0x0052A020, void, set_ImpersonationLevel, (WebRequest * __this, TokenImpersonationLevel__Enum value));
IL2CPP_REGISTER_METHOD(0x021B6900, void, RequestCallback, (WebRequest * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x04793EA8, WebRequest_RequestCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B6940, IWebProxy *, get_InternalDefaultWebProxy, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x021B6BC0, void, set_InternalDefaultWebProxy, (IWebProxy * value));
IL2CPP_REGISTER_METHOD(0x021B6DF0, IWebProxy *, get_DefaultWebProxy, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x021B6E80, void, set_DefaultWebProxy, (IWebProxy * value));
IL2CPP_REGISTER_METHOD(0x021B6F20, IWebProxy *, GetSystemWebProxy, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02018EF0, IWebProxy *, InternalGetSystemWebProxy, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x021B6FB0, void, SetupCacheProtocol, (WebRequest * __this, Uri * uri));
IL2CPP_REGISTER_METHOD(0x021B7170, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x021B72F0, Task_1_System_IO_Stream_ *, _GetRequestStreamAsync_b__78_0, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x04782518, WebRequest__GetRequestStreamAsync_b__78_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B75A0, Task_1_System_Net_WebResponse_ *, _GetResponseAsync_b__79_0, (WebRequest * __this));
IL2CPP_REGISTER_METHODINFO(0x047159A8, WebRequest__GetResponseAsync_b__79_0__MethodInfo);
}
