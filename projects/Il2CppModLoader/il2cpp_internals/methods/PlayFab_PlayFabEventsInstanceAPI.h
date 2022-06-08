using namespace app;

namespace app::methods::PlayFab::PlayFabEventsInstanceAPI {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlayFabEventsInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (PlayFabEventsInstanceAPI * __this, PlayFabApiSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (PlayFabEventsInstanceAPI * __this, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (PlayFabEventsInstanceAPI * __this, PlayFabApiSettings * settings, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, (PlayFabEventsInstanceAPI * __this, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x002FB930, PlayFabAuthenticationContext *, GetAuthenticationContext, (PlayFabEventsInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, (PlayFabEventsInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x01A29F60, void, WriteEvents, (PlayFabEventsInstanceAPI * __this, WriteEventsRequest * request, Action_1_PlayFab_EventsModels_WriteEventsResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
}
