using namespace app;

namespace app::methods::PlayFab::PlayFabMatchmakerAPI {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A2DB40, void, ForgetAllCredentials, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A2DBD0, void, AuthUser, (AuthUserRequest * request, Action_1_PlayFab_MatchmakerModels_AuthUserResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A2DCE0, void, PlayerJoined, (PlayerJoinedRequest * request, Action_1_PlayFab_MatchmakerModels_PlayerJoinedResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A2DDF0, void, PlayerLeft, (PlayerLeftRequest * request, Action_1_PlayFab_MatchmakerModels_PlayerLeftResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A2DF00, void, StartGame, (StartGameRequest_1 * request, Action_1_PlayFab_MatchmakerModels_StartGameResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A2E010, void, UserInfo, (UserInfoRequest * request, Action_1_PlayFab_MatchmakerModels_UserInfoResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
}
