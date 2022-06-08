using namespace app;

namespace app::methods::PlayFab::Internal::PlayFabUnityHttp {
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_AuthKey, (PlayFabUnityHttp * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_AuthKey, (PlayFabUnityHttp * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_EntityToken, (PlayFabUnityHttp * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_EntityToken, (PlayFabUnityHttp * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsInitialized, (PlayFabUnityHttp * __this));
IL2CPP_REGISTER_METHOD(0x00B80D80, void, Initialize, (PlayFabUnityHttp * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (PlayFabUnityHttp * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (PlayFabUnityHttp * __this));
IL2CPP_REGISTER_METHOD(0x0183D730, void, SimpleGetCall, (PlayFabUnityHttp * __this, String * fullUrl, Action_1_Byte_ * successCallback, Action_1_String_ * errorCallback));
IL2CPP_REGISTER_METHOD(0x0183D890, void, SimplePutCall, (PlayFabUnityHttp * __this, String * fullUrl, Byte__Array * payload, Action_1_Byte_ * successCallback, Action_1_String_ * errorCallback));
IL2CPP_REGISTER_METHOD(0x0183DA00, void, SimplePostCall, (PlayFabUnityHttp * __this, String * fullUrl, Byte__Array * payload, Action_1_Byte_ * successCallback, Action_1_String_ * errorCallback));
IL2CPP_REGISTER_METHOD(0x0183DB70, IEnumerator *, SimpleCallCoroutine, (String * method_1, String * fullUrl, Byte__Array * payload, Action_1_Byte_ * successCallback, Action_1_String_ * errorCallback));
IL2CPP_REGISTER_METHOD(0x0183DCF0, void, MakeApiCall, (PlayFabUnityHttp * __this, Object * reqContainerObj));
IL2CPP_REGISTER_METHOD(0x0183E460, IEnumerator *, Post, (PlayFabUnityHttp * __this, CallRequestContainer * reqContainer));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, GetPendingMessages, (PlayFabUnityHttp * __this));
IL2CPP_REGISTER_METHOD(0x0183E5C0, void, OnResponse, (PlayFabUnityHttp * __this, String * response, CallRequestContainer * reqContainer));
IL2CPP_REGISTER_METHOD(0x0183E980, void, OnError, (PlayFabUnityHttp * __this, String * error, CallRequestContainer * reqContainer));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlayFabUnityHttp * __this));
}
