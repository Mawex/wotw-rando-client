#include <interception_macros.h>

namespace app::methods::PlayFab::PlayFabMatchmakerInstanceAPI {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlayFabMatchmakerInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (PlayFabMatchmakerInstanceAPI * __this, PlayFabApiSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (PlayFabMatchmakerInstanceAPI * __this, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (PlayFabMatchmakerInstanceAPI * __this, PlayFabApiSettings * settings, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, (PlayFabMatchmakerInstanceAPI * __this, PlayFabAuthenticationContext * context));
IL2CPP_REGISTER_METHOD(0x002FB930, PlayFabAuthenticationContext *, GetAuthenticationContext, (PlayFabMatchmakerInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, (PlayFabMatchmakerInstanceAPI * __this));
IL2CPP_REGISTER_METHOD(0x01A2E120, void, AuthUser, (PlayFabMatchmakerInstanceAPI * __this, AuthUserRequest * request, Action_1_PlayFab_MatchmakerModels_AuthUserResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A2E240, void, PlayerJoined, (PlayFabMatchmakerInstanceAPI * __this, PlayerJoinedRequest * request, Action_1_PlayFab_MatchmakerModels_PlayerJoinedResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A2E360, void, PlayerLeft, (PlayFabMatchmakerInstanceAPI * __this, PlayerLeftRequest * request, Action_1_PlayFab_MatchmakerModels_PlayerLeftResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A2E480, void, StartGame, (PlayFabMatchmakerInstanceAPI * __this, StartGameRequest_1 * request, Action_1_PlayFab_MatchmakerModels_StartGameResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A2E5A0, void, UserInfo, (PlayFabMatchmakerInstanceAPI * __this, UserInfoRequest * request, Action_1_PlayFab_MatchmakerModels_UserInfoResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
}
