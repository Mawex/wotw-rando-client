using namespace app;

namespace app::methods::PlayFab::PlayFabServerAPI {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A34EB0, void, ForgetAllCredentials, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A34F40, void, AddCharacterVirtualCurrency, (AddCharacterVirtualCurrencyRequest * request, Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A35050, void, AddFriend, (AddFriendRequest_1 * request, Action_1_PlayFab_ServerModels_EmptyResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A35160, void, AddPlayerTag, (AddPlayerTagRequest * request, Action_1_PlayFab_ServerModels_AddPlayerTagResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A35270, void, AddSharedGroupMembers, (AddSharedGroupMembersRequest_1 * request, Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A35380, void, AddUserVirtualCurrency, (AddUserVirtualCurrencyRequest_1 * request, Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A35490, void, AuthenticateSessionTicket, (AuthenticateSessionTicketRequest * request, Action_1_PlayFab_ServerModels_AuthenticateSessionTicketResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A355A0, void, AwardSteamAchievement, (AwardSteamAchievementRequest * request, Action_1_PlayFab_ServerModels_AwardSteamAchievementResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A356B0, void, BanUsers, (BanUsersRequest * request, Action_1_PlayFab_ServerModels_BanUsersResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A357C0, void, ConsumeItem, (ConsumeItemRequest_1 * request, Action_1_PlayFab_ServerModels_ConsumeItemResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A358D0, void, CreateSharedGroup, (CreateSharedGroupRequest_1 * request, Action_1_PlayFab_ServerModels_CreateSharedGroupResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A359E0, void, DeleteCharacterFromUser, (DeleteCharacterFromUserRequest * request, Action_1_PlayFab_ServerModels_DeleteCharacterFromUserResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A35AF0, void, DeletePlayer, (DeletePlayerRequest * request, Action_1_PlayFab_ServerModels_DeletePlayerResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A35C00, void, DeleteSharedGroup, (DeleteSharedGroupRequest * request, Action_1_PlayFab_ServerModels_EmptyResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A35D10, void, DeregisterGame, (DeregisterGameRequest * request, Action_1_PlayFab_ServerModels_DeregisterGameResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A35E20, void, EvaluateRandomResultTable, (EvaluateRandomResultTableRequest * request, Action_1_PlayFab_ServerModels_EvaluateRandomResultTableResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A35F30, void, ExecuteCloudScript, (ExecuteCloudScriptServerRequest * request, Action_1_PlayFab_ServerModels_ExecuteCloudScriptResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A36040, void, GetAllSegments, (GetAllSegmentsRequest * request, Action_1_PlayFab_ServerModels_GetAllSegmentsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A36150, void, GetAllUsersCharacters, (ListUsersCharactersRequest_1 * request, Action_1_PlayFab_ServerModels_ListUsersCharactersResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A36260, void, GetCatalogItems, (GetCatalogItemsRequest_1 * request, Action_1_PlayFab_ServerModels_GetCatalogItemsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A36370, void, GetCharacterData, (GetCharacterDataRequest_1 * request, Action_1_PlayFab_ServerModels_GetCharacterDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A36480, void, GetCharacterInternalData, (GetCharacterDataRequest_1 * request, Action_1_PlayFab_ServerModels_GetCharacterDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A36590, void, GetCharacterInventory, (GetCharacterInventoryRequest_1 * request, Action_1_PlayFab_ServerModels_GetCharacterInventoryResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A366A0, void, GetCharacterLeaderboard, (GetCharacterLeaderboardRequest_1 * request, Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A367B0, void, GetCharacterReadOnlyData, (GetCharacterDataRequest_1 * request, Action_1_PlayFab_ServerModels_GetCharacterDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A368C0, void, GetCharacterStatistics, (GetCharacterStatisticsRequest_1 * request, Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A369D0, void, GetContentDownloadUrl, (GetContentDownloadUrlRequest_1 * request, Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A36AE0, void, GetFriendLeaderboard, (GetFriendLeaderboardRequest_1 * request, Action_1_PlayFab_ServerModels_GetLeaderboardResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A36BF0, void, GetFriendsList, (GetFriendsListRequest_1 * request, Action_1_PlayFab_ServerModels_GetFriendsListResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A36D00, void, GetLeaderboard, (GetLeaderboardRequest_1 * request, Action_1_PlayFab_ServerModels_GetLeaderboardResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A36E10, void, GetLeaderboardAroundCharacter, (GetLeaderboardAroundCharacterRequest_1 * request, Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A36F20, void, GetLeaderboardAroundUser, (GetLeaderboardAroundUserRequest * request, Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A37030, void, GetLeaderboardForUserCharacters, (GetLeaderboardForUsersCharactersRequest_1 * request, Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A37140, void, GetPlayerCombinedInfo, (GetPlayerCombinedInfoRequest_1 * request, Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A37250, void, GetPlayerProfile, (GetPlayerProfileRequest_1 * request, Action_1_PlayFab_ServerModels_GetPlayerProfileResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A37360, void, GetPlayerSegments, (GetPlayersSegmentsRequest * request, Action_1_PlayFab_ServerModels_GetPlayerSegmentsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A37470, void, GetPlayersInSegment, (GetPlayersInSegmentRequest * request, Action_1_PlayFab_ServerModels_GetPlayersInSegmentResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A37580, void, GetPlayerStatistics, (GetPlayerStatisticsRequest_1 * request, Action_1_PlayFab_ServerModels_GetPlayerStatisticsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A37690, void, GetPlayerStatisticVersions, (GetPlayerStatisticVersionsRequest_1 * request, Action_1_PlayFab_ServerModels_GetPlayerStatisticVersionsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A377A0, void, GetPlayerTags, (GetPlayerTagsRequest_1 * request, Action_1_PlayFab_ServerModels_GetPlayerTagsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A378B0, void, GetPlayFabIDsFromFacebookIDs, (GetPlayFabIDsFromFacebookIDsRequest_1 * request, Action_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookIDsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A379C0, void, GetPlayFabIDsFromFacebookInstantGamesIds, (GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1 * request, Action_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A37AD0, void, GetPlayFabIDsFromNintendoSwitchDeviceIds, (GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1 * request, Action_1_PlayFab_ServerModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A37BE0, void, GetPlayFabIDsFromPSNAccountIDs, (GetPlayFabIDsFromPSNAccountIDsRequest_1 * request, Action_1_PlayFab_ServerModels_GetPlayFabIDsFromPSNAccountIDsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A37CF0, void, GetPlayFabIDsFromSteamIDs, (GetPlayFabIDsFromSteamIDsRequest_1 * request, Action_1_PlayFab_ServerModels_GetPlayFabIDsFromSteamIDsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A37E00, void, GetPlayFabIDsFromXboxLiveIDs, (GetPlayFabIDsFromXboxLiveIDsRequest_1 * request, Action_1_PlayFab_ServerModels_GetPlayFabIDsFromXboxLiveIDsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A37F10, void, GetPublisherData, (GetPublisherDataRequest_1 * request, Action_1_PlayFab_ServerModels_GetPublisherDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A38020, void, GetRandomResultTables, (GetRandomResultTablesRequest * request, Action_1_PlayFab_ServerModels_GetRandomResultTablesResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A38130, void, GetServerCustomIDsFromPlayFabIDs, (GetServerCustomIDsFromPlayFabIDsRequest * request, Action_1_PlayFab_ServerModels_GetServerCustomIDsFromPlayFabIDsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A38240, void, GetSharedGroupData, (GetSharedGroupDataRequest_1 * request, Action_1_PlayFab_ServerModels_GetSharedGroupDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A38350, void, GetTime, (GetTimeRequest_1 * request, Action_1_PlayFab_ServerModels_GetTimeResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A38460, void, GetTitleData, (GetTitleDataRequest_1 * request, Action_1_PlayFab_ServerModels_GetTitleDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A38570, void, GetTitleInternalData, (GetTitleDataRequest_1 * request, Action_1_PlayFab_ServerModels_GetTitleDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A38680, void, GetTitleNews, (GetTitleNewsRequest_1 * request, Action_1_PlayFab_ServerModels_GetTitleNewsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A38790, void, GetUserAccountInfo, (GetUserAccountInfoRequest * request, Action_1_PlayFab_ServerModels_GetUserAccountInfoResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A388A0, void, GetUserBans, (GetUserBansRequest * request, Action_1_PlayFab_ServerModels_GetUserBansResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A389B0, void, GetUserData, (GetUserDataRequest_1 * request, Action_1_PlayFab_ServerModels_GetUserDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A38AC0, void, GetUserInternalData, (GetUserDataRequest_1 * request, Action_1_PlayFab_ServerModels_GetUserDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A38BD0, void, GetUserInventory, (GetUserInventoryRequest_1 * request, Action_1_PlayFab_ServerModels_GetUserInventoryResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A38CE0, void, GetUserPublisherData, (GetUserDataRequest_1 * request, Action_1_PlayFab_ServerModels_GetUserDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A38DF0, void, GetUserPublisherInternalData, (GetUserDataRequest_1 * request, Action_1_PlayFab_ServerModels_GetUserDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A38F00, void, GetUserPublisherReadOnlyData, (GetUserDataRequest_1 * request, Action_1_PlayFab_ServerModels_GetUserDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A39010, void, GetUserReadOnlyData, (GetUserDataRequest_1 * request, Action_1_PlayFab_ServerModels_GetUserDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A39120, void, GrantCharacterToUser, (GrantCharacterToUserRequest_1 * request, Action_1_PlayFab_ServerModels_GrantCharacterToUserResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A39230, void, GrantItemsToCharacter, (GrantItemsToCharacterRequest * request, Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A39340, void, GrantItemsToUser, (GrantItemsToUserRequest * request, Action_1_PlayFab_ServerModels_GrantItemsToUserResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A39450, void, GrantItemsToUsers, (GrantItemsToUsersRequest * request, Action_1_PlayFab_ServerModels_GrantItemsToUsersResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A39560, void, LinkXboxAccount, (LinkXboxAccountRequest_1 * request, Action_1_PlayFab_ServerModels_LinkXboxAccountResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A39670, void, LoginWithServerCustomId, (LoginWithServerCustomIdRequest * request, Action_1_PlayFab_ServerModels_ServerLoginResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A39780, void, LoginWithXbox, (LoginWithXboxRequest_1 * request, Action_1_PlayFab_ServerModels_ServerLoginResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A39890, void, ModifyItemUses, (ModifyItemUsesRequest * request, Action_1_PlayFab_ServerModels_ModifyItemUsesResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A399A0, void, MoveItemToCharacterFromCharacter, (MoveItemToCharacterFromCharacterRequest * request, Action_1_PlayFab_ServerModels_MoveItemToCharacterFromCharacterResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A39AB0, void, MoveItemToCharacterFromUser, (MoveItemToCharacterFromUserRequest * request, Action_1_PlayFab_ServerModels_MoveItemToCharacterFromUserResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A39BC0, void, MoveItemToUserFromCharacter, (MoveItemToUserFromCharacterRequest * request, Action_1_PlayFab_ServerModels_MoveItemToUserFromCharacterResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A39CD0, void, NotifyMatchmakerPlayerLeft, (NotifyMatchmakerPlayerLeftRequest * request, Action_1_PlayFab_ServerModels_NotifyMatchmakerPlayerLeftResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A39DE0, void, RedeemCoupon, (RedeemCouponRequest_1 * request, Action_1_PlayFab_ServerModels_RedeemCouponResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A39EF0, void, RedeemMatchmakerTicket, (RedeemMatchmakerTicketRequest * request, Action_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3A000, void, RefreshGameServerInstanceHeartbeat, (RefreshGameServerInstanceHeartbeatRequest * request, Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3A110, void, RegisterGame, (RegisterGameRequest * request, Action_1_PlayFab_ServerModels_RegisterGameResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3A220, void, RemoveFriend, (RemoveFriendRequest_1 * request, Action_1_PlayFab_ServerModels_EmptyResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3A330, void, RemovePlayerTag, (RemovePlayerTagRequest * request, Action_1_PlayFab_ServerModels_RemovePlayerTagResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3A440, void, RemoveSharedGroupMembers, (RemoveSharedGroupMembersRequest_1 * request, Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3A550, void, ReportPlayer, (ReportPlayerServerRequest * request, Action_1_PlayFab_ServerModels_ReportPlayerServerResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3A660, void, RevokeAllBansForUser, (RevokeAllBansForUserRequest * request, Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3A770, void, RevokeBans, (RevokeBansRequest * request, Action_1_PlayFab_ServerModels_RevokeBansResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3A880, void, RevokeInventoryItem, (RevokeInventoryItemRequest * request, Action_1_PlayFab_ServerModels_RevokeInventoryResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3A990, void, RevokeInventoryItems, (RevokeInventoryItemsRequest * request, Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3AAA0, void, SendCustomAccountRecoveryEmail, (SendCustomAccountRecoveryEmailRequest * request, Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3ABB0, void, SendEmailFromTemplate, (SendEmailFromTemplateRequest * request, Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3ACC0, void, SendPushNotification, (SendPushNotificationRequest * request, Action_1_PlayFab_ServerModels_SendPushNotificationResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3ADD0, void, SetFriendTags, (SetFriendTagsRequest_1 * request, Action_1_PlayFab_ServerModels_EmptyResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3AEE0, void, SetGameServerInstanceData, (SetGameServerInstanceDataRequest * request, Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3AFF0, void, SetGameServerInstanceState, (SetGameServerInstanceStateRequest * request, Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3B100, void, SetGameServerInstanceTags, (SetGameServerInstanceTagsRequest * request, Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3B210, void, SetPlayerSecret, (SetPlayerSecretRequest_1 * request, Action_1_PlayFab_ServerModels_SetPlayerSecretResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3B320, void, SetPublisherData, (SetPublisherDataRequest * request, Action_1_PlayFab_ServerModels_SetPublisherDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3B430, void, SetTitleData, (SetTitleDataRequest * request, Action_1_PlayFab_ServerModels_SetTitleDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3B540, void, SetTitleInternalData, (SetTitleDataRequest * request, Action_1_PlayFab_ServerModels_SetTitleDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3B650, void, SubtractCharacterVirtualCurrency, (SubtractCharacterVirtualCurrencyRequest * request, Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3B760, void, SubtractUserVirtualCurrency, (SubtractUserVirtualCurrencyRequest_1 * request, Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3B870, void, UnlinkXboxAccount, (UnlinkXboxAccountRequest_1 * request, Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3B980, void, UnlockContainerInstance, (UnlockContainerInstanceRequest_1 * request, Action_1_PlayFab_ServerModels_UnlockContainerItemResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3BA90, void, UnlockContainerItem, (UnlockContainerItemRequest_1 * request, Action_1_PlayFab_ServerModels_UnlockContainerItemResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3BBA0, void, UpdateAvatarUrl, (UpdateAvatarUrlRequest_1 * request, Action_1_PlayFab_ServerModels_EmptyResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3BCB0, void, UpdateBans, (UpdateBansRequest * request, Action_1_PlayFab_ServerModels_UpdateBansResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3BDC0, void, UpdateCharacterData, (UpdateCharacterDataRequest_1 * request, Action_1_PlayFab_ServerModels_UpdateCharacterDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3BED0, void, UpdateCharacterInternalData, (UpdateCharacterDataRequest_1 * request, Action_1_PlayFab_ServerModels_UpdateCharacterDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3BFE0, void, UpdateCharacterReadOnlyData, (UpdateCharacterDataRequest_1 * request, Action_1_PlayFab_ServerModels_UpdateCharacterDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3C0F0, void, UpdateCharacterStatistics, (UpdateCharacterStatisticsRequest_1 * request, Action_1_PlayFab_ServerModels_UpdateCharacterStatisticsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3C200, void, UpdatePlayerStatistics, (UpdatePlayerStatisticsRequest_1 * request, Action_1_PlayFab_ServerModels_UpdatePlayerStatisticsResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3C310, void, UpdateSharedGroupData, (UpdateSharedGroupDataRequest_1 * request, Action_1_PlayFab_ServerModels_UpdateSharedGroupDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3C420, void, UpdateUserData, (UpdateUserDataRequest_1 * request, Action_1_PlayFab_ServerModels_UpdateUserDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3C530, void, UpdateUserInternalData, (UpdateUserInternalDataRequest * request, Action_1_PlayFab_ServerModels_UpdateUserDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3C640, void, UpdateUserInventoryItemCustomData, (UpdateUserInventoryItemDataRequest * request, Action_1_PlayFab_ServerModels_EmptyResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3C750, void, UpdateUserPublisherData, (UpdateUserDataRequest_1 * request, Action_1_PlayFab_ServerModels_UpdateUserDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3C860, void, UpdateUserPublisherInternalData, (UpdateUserInternalDataRequest * request, Action_1_PlayFab_ServerModels_UpdateUserDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3C970, void, UpdateUserPublisherReadOnlyData, (UpdateUserDataRequest_1 * request, Action_1_PlayFab_ServerModels_UpdateUserDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3CA80, void, UpdateUserReadOnlyData, (UpdateUserDataRequest_1 * request, Action_1_PlayFab_ServerModels_UpdateUserDataResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3CB90, void, WriteCharacterEvent, (WriteServerCharacterEventRequest * request, Action_1_PlayFab_ServerModels_WriteEventResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3CCA0, void, WritePlayerEvent, (WriteServerPlayerEventRequest * request, Action_1_PlayFab_ServerModels_WriteEventResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A3CDB0, void, WriteTitleEvent, (WriteTitleEventRequest_1 * request, Action_1_PlayFab_ServerModels_WriteEventResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01554DA0, void, ExecuteCloudScript, (ExecuteCloudScriptServerRequest * request, Action_1_PlayFab_ServerModels_ExecuteCloudScriptResult_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
}
