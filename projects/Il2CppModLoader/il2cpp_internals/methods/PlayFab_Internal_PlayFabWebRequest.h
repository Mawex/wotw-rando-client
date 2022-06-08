#include <interception_macros.h>

namespace app::methods::PlayFab::Internal::PlayFabWebRequest {
IL2CPP_REGISTER_METHOD(0x01841290, void, SkipCertificateValidation, ());
IL2CPP_REGISTER_METHOD(0x01841440, void, set_CustomCertValidationHook, (RemoteCertificateValidationCallback * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_AuthKey, (PlayFabWebRequest * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_AuthKey, (PlayFabWebRequest * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_EntityToken, (PlayFabWebRequest * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_EntityToken, (PlayFabWebRequest * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsInitialized, (PlayFabWebRequest * __this));
IL2CPP_REGISTER_METHOD(0x01841520, void, Initialize, (PlayFabWebRequest * __this));
IL2CPP_REGISTER_METHOD(0x01841790, void, OnDestroy, (PlayFabWebRequest * __this));
IL2CPP_REGISTER_METHOD(0x01841BE0, void, SetupCertificates, (PlayFabWebRequest * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, AcceptAllCertifications, (Object * sender, X509Certificate_1 * certificate, X509Chain * chain, SslPolicyErrors__Enum sslPolicyErrors));
IL2CPP_REGISTER_METHODINFO(0x04743A28, PlayFabWebRequest_AcceptAllCertifications__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01841D70, void, SimpleGetCall, (PlayFabWebRequest * __this, String * fullUrl, Action_1_Byte_ * successCallback, Action_1_String_ * errorCallback));
IL2CPP_REGISTER_METHOD(0x01842090, void, SimplePutCall, (PlayFabWebRequest * __this, String * fullUrl, Byte__Array * payload, Action_1_Byte_ * successCallback, Action_1_String_ * errorCallback));
IL2CPP_REGISTER_METHOD(0x018423C0, void, SimplePostCall, (PlayFabWebRequest * __this, String * fullUrl, Byte__Array * payload, Action_1_Byte_ * successCallback, Action_1_String_ * errorCallback));
IL2CPP_REGISTER_METHOD(0x018426F0, void, SimpleHttpsWorker, (PlayFabWebRequest * __this, String * httpMethod, String * fullUrl, Byte__Array * payload, Action_1_Byte_ * successCallback, Action_1_String_ * errorCallback));
IL2CPP_REGISTER_METHODINFO(0x0471CE38, PlayFabWebRequest_SimpleHttpsWorker__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01842DE0, void, MakeApiCall, (PlayFabWebRequest * __this, Object * reqContainerObj));
IL2CPP_REGISTER_METHOD(0x01843020, void, ActivateThreadWorker, ());
IL2CPP_REGISTER_METHOD(0x018433D0, void, WorkerThreadMainLoop, ());
IL2CPP_REGISTER_METHODINFO(0x04746000, PlayFabWebRequest_WorkerThreadMainLoop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01843CE0, void, Post, (CallRequestContainer * reqContainer));
IL2CPP_REGISTER_METHOD(0x01844590, void, ProcessHttpResponse, (CallRequestContainer * reqContainer));
IL2CPP_REGISTER_METHOD(0x018448C0, void, QueueRequestError, (CallRequestContainer * reqContainer));
IL2CPP_REGISTER_METHOD(0x01844CA0, void, ProcessJsonResponse, (CallRequestContainer * reqContainer));
IL2CPP_REGISTER_METHOD(0x018455E0, void, Update, (PlayFabWebRequest * __this));
IL2CPP_REGISTER_METHOD(0x018458B0, String *, ResponseToString, (WebResponse * webResponse));
IL2CPP_REGISTER_METHOD(0x01845E10, int32_t, GetPendingMessages, (PlayFabWebRequest * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlayFabWebRequest * __this));
IL2CPP_REGISTER_METHOD(0x01846110, void, __cctor, ());
}
