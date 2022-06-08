using namespace app;

namespace app::methods::PlayFab::PlayFabCloudScriptInstanceAPI {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlayFabCloudScriptInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (PlayFabCloudScriptInstanceAPI * __this, PlayFabApiSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (PlayFabCloudScriptInstanceAPI * __this, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (PlayFabCloudScriptInstanceAPI * __this, PlayFabApiSettings * settings, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, (PlayFabCloudScriptInstanceAPI * __this, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x002FB930, PlayFabAuthenticationContext *, GetAuthenticationContext, (PlayFabCloudScriptInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, (PlayFabCloudScriptInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x01A25750, void, ExecuteEntityCloudScript, (PlayFabCloudScriptInstanceAPI * __this, ExecuteEntityCloudScriptRequest * request, Action_1_PlayFab_CloudScriptModels_ExecuteCloudScriptResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
}
