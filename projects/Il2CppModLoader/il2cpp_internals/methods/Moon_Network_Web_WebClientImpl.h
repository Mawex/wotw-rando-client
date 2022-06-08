using namespace app;

namespace app::methods::Moon::Network::Web::WebClientImpl {
IL2CPP_REGISTER_METHOD(0x02E98710, void, __ctor, (WebClientImpl * __this));
IL2CPP_REGISTER_METHOD(0x02E98950, void, AddHeader, (WebClientImpl * __this, String * key, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, SetData, (WebClientImpl * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x02E989F0, void, AddParam, (WebClientImpl * __this, String * key, String * value));
IL2CPP_REGISTER_METHOD(0x002FA490, void, SetURL, (WebClientImpl * __this, String * url));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasTimeout, (WebClientImpl * __this));
IL2CPP_REGISTER_METHOD(0x02E98AB0, float, get_Timeout, (WebClientImpl * __this));
IL2CPP_REGISTER_METHOD(0x02E98AC0, void, SteamTest, (WebClientImpl * __this));
IL2CPP_REGISTER_METHOD(0x02E98D30, void, Send, (WebClientImpl * __this, Method__Enum methods, Action_1_Moon_Network_Web_WebResponse_ * callback));
IL2CPP_REGISTER_METHOD(0x002FA000, void, M_client_UploadProgressChanged, (WebClientImpl * __this, Object * sender, UploadProgressChangedEventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x04718098, WebClientImpl_M_client_UploadProgressChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, M_client_DownloadProgressChanged, (WebClientImpl * __this, Object * sender, DownloadProgressChangedEventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x04754600, WebClientImpl_M_client_DownloadProgressChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02E99520, String *, ParamsString, (WebClientImpl * __this));
IL2CPP_REGISTER_METHOD(0x02E996F0, void, OnUploadDataCompleted, (WebClientImpl * __this, Object * sender, UploadDataCompletedEventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x04703778, WebClientImpl_OnUploadDataCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02E996F0, void, OnDownloadDataCompleted, (WebClientImpl * __this, Object * sender, DownloadDataCompletedEventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x04754FD8, WebClientImpl_OnDownloadDataCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02E99750, void, Finish, (WebClientImpl * __this, Byte__Array * result, Exception * e));
IL2CPP_REGISTER_METHOD(0x02E998D0, void, Init, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E99AB0, bool, OnRemoteCertificateValidation, (Object * sender, X509Certificate_1 * certificate, X509Chain * chain, SslPolicyErrors__Enum sslPolicyErrors));
IL2CPP_REGISTER_METHODINFO(0x04726DD8, WebClientImpl_OnRemoteCertificateValidation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
