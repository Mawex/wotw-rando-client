using namespace app;

namespace app::methods::SystemIntegration::Synchronizer::Telemetry::PlayFabJsonSerializer {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (PlayFabJsonSerializer * __this, ISerializerPlugin * underlying));
IL2CPP_REGISTER_METHOD(0x0053B730, void, Initialize, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0053B8F0, Object *, DeserializeObject, (PlayFabJsonSerializer * __this, String * serialized));
IL2CPP_REGISTER_METHOD(0x0053B9A0, String *, SerializeObject, (PlayFabJsonSerializer * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0053BBF0, String *, SerializeObject, (PlayFabJsonSerializer * __this, Object * obj, Object * serializerStrategy));
IL2CPP_REGISTER_METHOD(0x0053BCF0, void, AddGeneratedSerializers, (Dictionary_2_System_Type_System_Action_2_ * serializers));
IL2CPP_REGISTER_METHOD(0x0053D740, void, AddGeneratedDeserializers, (Dictionary_2_System_Type_System_Delegate_ * deserializers));
IL2CPP_REGISTER_METHOD(0x005417A0, void, SerializeToSlot, (JsonBuilder_Slot slot, Object * value));
IL2CPP_REGISTER_METHOD(0x00542200, void, SerializeObjList, (JsonBuilder_Slot slot, List_1_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x00542420, void, SerializeDictionary, (JsonBuilder_Slot slot, Dictionary_2_System_String_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x00542660, void, SerializeJsonObject, (JsonBuilder_Slot slot, JsonObject * value));
IL2CPP_REGISTER_METHOD(0x005427C0, void, SerializeAuthenticationContext, (JsonBuilder_Slot slot, PlayFabAuthenticationContext * value));
IL2CPP_REGISTER_METHOD(0x00542A70, void, SerializeEntityKey, (JsonBuilder_Slot slot, EntityKey_4 * entity));
IL2CPP_REGISTER_METHOD(0x00542C00, void, SerializeEventContents, (JsonBuilder_Slot slot, EventContents * evt));
IL2CPP_REGISTER_METHOD(0x00543000, Object *, DeserializeToObject, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04761150, PlayFabJsonSerializer_DeserializeToObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005431D0, Dictionary_2_System_String_System_Object_ *, DeserializeToDict, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04769118, PlayFabJsonSerializer_DeserializeToDict__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005435C0, List_1_System_Object_ *, DeserializeToList, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0470CB18, PlayFabJsonSerializer_DeserializeToList__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00543960, JsonObject *, DeserializeToJsonObject, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0478F500, PlayFabJsonSerializer_DeserializeToJsonObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00543B60, JsonArray *, DeserializeToJsonArray, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04725380, PlayFabJsonSerializer_DeserializeToJsonArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00543EF0, Dictionary_2_System_String_List_1_System_String_ *, DeserializeToDictOfListOfString, (JsonParser_Slot value));
IL2CPP_REGISTER_METHOD(0x00544630, PlayFabAuthenticationContext *, DeserializeAuthenticationContext, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047738E8, PlayFabJsonSerializer_DeserializeAuthenticationContext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544B60, String *, DeserializeString, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0478A0F0, PlayFabJsonSerializer_DeserializeString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544B70, DateTime, DeserializeDateTime, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04749F90, PlayFabJsonSerializer_DeserializeDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544C50, Guid, DeserializeGuid, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0474CE48, PlayFabJsonSerializer_DeserializeGuid__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544D20, bool, DeserializeBool, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04758770, PlayFabJsonSerializer_DeserializeBool__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544D30, int8_t, DeserializeI8, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04710A10, PlayFabJsonSerializer_DeserializeI8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544D30, uint8_t, DeserializeU8, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0476F640, PlayFabJsonSerializer_DeserializeU8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544D30, int16_t, DeserializeI16, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0473D258, PlayFabJsonSerializer_DeserializeI16__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544D30, uint16_t, DeserializeU16, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047778E0, PlayFabJsonSerializer_DeserializeU16__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544D30, int32_t, DeserializeI32, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04714900, PlayFabJsonSerializer_DeserializeI32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544D50, uint32_t, DeserializeU32, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047969D8, PlayFabJsonSerializer_DeserializeU32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544D50, int64_t, DeserializeI64, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04750878, PlayFabJsonSerializer_DeserializeI64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544D70, uint64_t, DeserializeU64, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04785660, PlayFabJsonSerializer_DeserializeU64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544DB0, float, DeserializeF32, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0472E498, PlayFabJsonSerializer_DeserializeF32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544DD0, double, DeserializeF64, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04764810, PlayFabJsonSerializer_DeserializeF64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544DE0, Nullable_1_DateTime_, DeserializeOptDateTime, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04740300, PlayFabJsonSerializer_DeserializeOptDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544EF0, Nullable_1_Guid_, DeserializeOptGuid, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047509E0, PlayFabJsonSerializer_DeserializeOptGuid__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00544FF0, Nullable_1_Boolean_, DeserializeOptBool, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047106A8, PlayFabJsonSerializer_DeserializeOptBool__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00545080, Nullable_1_SByte_, DeserializeOptI8, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0472D970, PlayFabJsonSerializer_DeserializeOptI8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00545140, Nullable_1_Byte_, DeserializeOptU8, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047034E0, PlayFabJsonSerializer_DeserializeOptU8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00545200, Nullable_1_Int16_, DeserializeOptI16, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0471A8E0, PlayFabJsonSerializer_DeserializeOptI16__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005452D0, Nullable_1_UInt16_, DeserializeOptU16, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0471DEA0, PlayFabJsonSerializer_DeserializeOptU16__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005453A0, Nullable_1_Int32_, DeserializeOptI32, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04715CA8, PlayFabJsonSerializer_DeserializeOptI32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00545470, Nullable_1_UInt32_, DeserializeOptU32, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0472C310, PlayFabJsonSerializer_DeserializeOptU32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00545540, Nullable_1_Int64_, DeserializeOptI64, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0473C850, PlayFabJsonSerializer_DeserializeOptI64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00545610, Nullable_1_UInt64_, DeserializeOptU64, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04742B50, PlayFabJsonSerializer_DeserializeOptU64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00545710, Nullable_1_Single_, DeserializeOptF32, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047722E0, PlayFabJsonSerializer_DeserializeOptF32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005457E0, Nullable_1_Double_, DeserializeOptF64, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04733FA0, PlayFabJsonSerializer_DeserializeOptF64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00545810, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0054C130, void, SerializeBase_PlayFab_SharedModels_PlayFabRequestCommon, (JsonBuilder_Object obj, PlayFabRequestCommon * value));
IL2CPP_REGISTER_METHOD(0x0054C220, void, Serialize_PlayFab_ClientModels_AddFriendRequest, (JsonBuilder_Slot slot, AddFriendRequest * value));
IL2CPP_REGISTER_METHOD(0x0054C450, void, Serialize_PlayFab_ClientModels_DeviceInfoRequest, (JsonBuilder_Slot slot, DeviceInfoRequest * value));
IL2CPP_REGISTER_METHOD(0x0054C610, void, Serialize_PlayFab_ClientModels_ExecuteCloudScriptRequest, (JsonBuilder_Slot slot, ExecuteCloudScriptRequest * value));
IL2CPP_REGISTER_METHOD(0x0054CAC0, void, Serialize_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerRequest, (JsonBuilder_Slot slot, GetFriendLeaderboardAroundPlayerRequest * value));
IL2CPP_REGISTER_METHOD(0x0054D150, void, Serialize_PlayFab_ClientModels_GetFriendLeaderboardRequest, (JsonBuilder_Slot slot, GetFriendLeaderboardRequest * value));
IL2CPP_REGISTER_METHOD(0x0054D820, void, Serialize_PlayFab_ClientModels_GetFriendsListRequest, (JsonBuilder_Slot slot, GetFriendsListRequest * value));
IL2CPP_REGISTER_METHOD(0x0054DC10, void, Serialize_PlayFab_ClientModels_GetLeaderboardAroundPlayerRequest, (JsonBuilder_Slot slot, GetLeaderboardAroundPlayerRequest * value));
IL2CPP_REGISTER_METHOD(0x0054E0B0, void, Serialize_PlayFab_ClientModels_GetLeaderboardRequest, (JsonBuilder_Slot slot, GetLeaderboardRequest * value));
IL2CPP_REGISTER_METHOD(0x0054E590, void, Serialize_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest, (JsonBuilder_Slot slot, GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest * value));
IL2CPP_REGISTER_METHOD(0x0054E8B0, void, Serialize_PlayFab_ClientModels_GetPlayerCombinedInfoRequestParams, (JsonBuilder_Slot slot, GetPlayerCombinedInfoRequestParams * value));
IL2CPP_REGISTER_METHOD(0x0054F2A0, void, Serialize_PlayFab_ClientModels_GetPlayerStatisticsRequest, (JsonBuilder_Slot slot, GetPlayerStatisticsRequest * value));
IL2CPP_REGISTER_METHOD(0x0054F790, void, Serialize_PlayFab_ClientModels_LinkNintendoSwitchDeviceIdRequest, (JsonBuilder_Slot slot, LinkNintendoSwitchDeviceIdRequest * value));
IL2CPP_REGISTER_METHOD(0x0054FA40, void, Serialize_PlayFab_ClientModels_LinkSteamAccountRequest, (JsonBuilder_Slot slot, LinkSteamAccountRequest * value));
IL2CPP_REGISTER_METHOD(0x0054FCF0, void, Serialize_PlayFab_ClientModels_LoginWithCustomIDRequest, (JsonBuilder_Slot slot, LoginWithCustomIDRequest * value));
IL2CPP_REGISTER_METHOD(0x00550060, void, Serialize_PlayFab_ClientModels_PlayerProfileViewConstraints, (JsonBuilder_Slot slot, PlayerProfileViewConstraints * value));
IL2CPP_REGISTER_METHOD(0x00550430, void, Serialize_PlayFab_ClientModels_RemoveFriendRequest, (JsonBuilder_Slot slot, RemoveFriendRequest * value));
IL2CPP_REGISTER_METHOD(0x005505F0, void, Serialize_PlayFab_ClientModels_StatisticNameVersion, (JsonBuilder_Slot slot, StatisticNameVersion * value));
IL2CPP_REGISTER_METHOD(0x005507A0, void, Serialize_PlayFab_ClientModels_UpdateUserTitleDisplayNameRequest, (JsonBuilder_Slot slot, UpdateUserTitleDisplayNameRequest * value));
IL2CPP_REGISTER_METHOD(0x00550960, void, Serialize_PlayFab_DataModels_EntityKey, (JsonBuilder_Slot slot, EntityKey_3 * value));
IL2CPP_REGISTER_METHOD(0x00550AF0, void, Serialize_PlayFab_DataModels_GetFilesRequest, (JsonBuilder_Slot slot, GetFilesRequest * value));
IL2CPP_REGISTER_METHOD(0x00550CB0, void, Serialize_PlayFab_DataModels_InitiateFileUploadsRequest, (JsonBuilder_Slot slot, InitiateFileUploadsRequest * value));
IL2CPP_REGISTER_METHOD(0x00551180, void, Serialize_PlayFab_EventsModels_WriteEventsRequest, (JsonBuilder_Slot slot, WriteEventsRequest * value));
IL2CPP_REGISTER_METHOD(0x005514C0, void, Serialize_PlayFab_PlayFabDataGatherer, (JsonBuilder_Slot slot, PlayFabDataGatherer * value));
IL2CPP_REGISTER_METHOD(0x00551D30, void, Serialize_PlayFab_ProfilesModels_EntityKey, (JsonBuilder_Slot slot, EntityKey_7 * value));
IL2CPP_REGISTER_METHOD(0x00551EC0, void, Serialize_PlayFab_ProfilesModels_EntityPermissionStatement, (JsonBuilder_Slot slot, EntityPermissionStatement * value));
IL2CPP_REGISTER_METHOD(0x00552170, void, Serialize_PlayFab_ProfilesModels_SetEntityProfilePolicyRequest, (JsonBuilder_Slot slot, SetEntityProfilePolicyRequest * value));
IL2CPP_REGISTER_METHOD(0x005524E0, void, Serialize_PlayFab_SharedModels_PlayFabRequestCommon, (JsonBuilder_Slot slot, PlayFabRequestCommon * value));
IL2CPP_REGISTER_METHOD(0x00552670, AdCampaignAttributionModel *, Deserialize_PlayFab_ClientModels_AdCampaignAttributionModel, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0471DC70, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_AdCampaignAttributionModel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00552B90, AddFriendResult *, Deserialize_PlayFab_ClientModels_AddFriendResult, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047838B0, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_AddFriendResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00553000, CharacterInventory *, Deserialize_PlayFab_ClientModels_CharacterInventory, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047428A8, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_CharacterInventory__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005536A0, CharacterResult *, Deserialize_PlayFab_ClientModels_CharacterResult, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0476C940, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_CharacterResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00553CA0, ContactEmailInfoModel *, Deserialize_PlayFab_ClientModels_ContactEmailInfoModel, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047320E8, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_ContactEmailInfoModel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00554380, EmptyResponse *, Deserialize_PlayFab_ClientModels_EmptyResponse, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04786740, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_EmptyResponse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005547B0, EntityKey_1 *, Deserialize_PlayFab_ClientModels_EntityKey, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04730030, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_EntityKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00554C80, EntityTokenResponse *, Deserialize_PlayFab_ClientModels_EntityTokenResponse, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0477AAB0, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_EntityTokenResponse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005551F0, ExecuteCloudScriptResult *, Deserialize_PlayFab_ClientModels_ExecuteCloudScriptResult, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04791DA8, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_ExecuteCloudScriptResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00555DE0, FriendInfo *, Deserialize_PlayFab_ClientModels_FriendInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04760760, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_FriendInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00556800, GetFriendLeaderboardAroundPlayerResult *, Deserialize_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0478A738, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00556FA0, GetFriendsListResult *, Deserialize_PlayFab_ClientModels_GetFriendsListResult, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0470A1B8, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_GetFriendsListResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00557640, GetLeaderboardAroundPlayerResult *, Deserialize_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0472F358, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00557DE0, GetLeaderboardResult *, Deserialize_PlayFab_ClientModels_GetLeaderboardResult, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0472CF80, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_GetLeaderboardResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00558580, GetPlayFabIDsFromNintendoSwitchDeviceIdsResult *, Deserialize_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04728748, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00558C20, GetPlayerCombinedInfoResultPayload *, Deserialize_PlayFab_ClientModels_GetPlayerCombinedInfoResultPayload, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04797360, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_GetPlayerCombinedInfoResultPayload__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0055A890, GetPlayerStatisticsResult *, Deserialize_PlayFab_ClientModels_GetPlayerStatisticsResult, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0478A668, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_GetPlayerStatisticsResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0055AF40, ItemInstance *, Deserialize_PlayFab_ClientModels_ItemInstance, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0478D808, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_ItemInstance__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0055BF20, LinkNintendoSwitchDeviceIdResult *, Deserialize_PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0474C378, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0055C350, LinkSteamAccountResult *, Deserialize_PlayFab_ClientModels_LinkSteamAccountResult, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0473AE60, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_LinkSteamAccountResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0055C780, LinkedPlatformAccountModel *, Deserialize_PlayFab_ClientModels_LinkedPlatformAccountModel, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04704118, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_LinkedPlatformAccountModel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0055CEF0, LocationModel *, Deserialize_PlayFab_ClientModels_LocationModel, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0477DF98, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_LocationModel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0055D7F0, LogStatement *, Deserialize_PlayFab_ClientModels_LogStatement, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04724518, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_LogStatement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0055DD10, LoginResult *, Deserialize_PlayFab_ClientModels_LoginResult, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0475B080, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_LoginResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0055E430, MembershipModel *, Deserialize_PlayFab_ClientModels_MembershipModel, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0471F800, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_MembershipModel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0055EBD0, NintendoSwitchPlayFabIdPair *, Deserialize_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0476F370, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_NintendoSwitchPlayFabIdPair__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0055F0A0, PlayerLeaderboardEntry *, Deserialize_PlayFab_ClientModels_PlayerLeaderboardEntry, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0471C870, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_PlayerLeaderboardEntry__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0055F6F0, PlayerProfileModel *, Deserialize_PlayFab_ClientModels_PlayerProfileModel, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04740DA8, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_PlayerProfileModel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00561590, PushNotificationRegistrationModel *, Deserialize_PlayFab_ClientModels_PushNotificationRegistrationModel, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047743B8, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_PushNotificationRegistrationModel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00561BE0, RemoveFriendResult *, Deserialize_PlayFab_ClientModels_RemoveFriendResult, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047252C0, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_RemoveFriendResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00562010, ScriptExecutionError *, Deserialize_PlayFab_ClientModels_ScriptExecutionError, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0470BBF0, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_ScriptExecutionError__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00562570, StatisticModel *, Deserialize_PlayFab_ClientModels_StatisticModel, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0475E058, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_StatisticModel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00562AD0, StatisticValue *, Deserialize_PlayFab_ClientModels_StatisticValue, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04781098, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_StatisticValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00563030, SubscriptionModel *, Deserialize_PlayFab_ClientModels_SubscriptionModel, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04763068, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_SubscriptionModel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005638A0, TagModel *, Deserialize_PlayFab_ClientModels_TagModel, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047345D0, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_TagModel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00563CD0, UpdateUserTitleDisplayNameResult *, Deserialize_PlayFab_ClientModels_UpdateUserTitleDisplayNameResult, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0472E2D8, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UpdateUserTitleDisplayNameResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005641A0, UserAccountInfo *, Deserialize_PlayFab_ClientModels_UserAccountInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0476A928, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserAccountInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00564DF0, UserAndroidDeviceInfo *, Deserialize_PlayFab_ClientModels_UserAndroidDeviceInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04783658, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserAndroidDeviceInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00565220, UserCustomIdInfo *, Deserialize_PlayFab_ClientModels_UserCustomIdInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04751420, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserCustomIdInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00565650, UserDataRecord *, Deserialize_PlayFab_ClientModels_UserDataRecord, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04764F88, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserDataRecord__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00565CF0, UserFacebookInfo *, Deserialize_PlayFab_ClientModels_UserFacebookInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04724ED8, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserFacebookInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005661C0, UserFacebookInstantGamesIdInfo *, Deserialize_PlayFab_ClientModels_UserFacebookInstantGamesIdInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04787568, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserFacebookInstantGamesIdInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005665F0, UserGameCenterInfo *, Deserialize_PlayFab_ClientModels_UserGameCenterInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04724528, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserGameCenterInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00566A20, UserGoogleInfo *, Deserialize_PlayFab_ClientModels_UserGoogleInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04761658, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserGoogleInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00567020, UserIosDeviceInfo *, Deserialize_PlayFab_ClientModels_UserIosDeviceInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0477E800, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserIosDeviceInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00567450, UserKongregateInfo *, Deserialize_PlayFab_ClientModels_UserKongregateInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04769860, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserKongregateInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00567920, UserNintendoSwitchDeviceIdInfo *, Deserialize_PlayFab_ClientModels_UserNintendoSwitchDeviceIdInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04713698, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserNintendoSwitchDeviceIdInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00567D50, UserOpenIdInfo *, Deserialize_PlayFab_ClientModels_UserOpenIdInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0470B468, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserOpenIdInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005682B0, UserPrivateAccountInfo *, Deserialize_PlayFab_ClientModels_UserPrivateAccountInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0470CC20, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserPrivateAccountInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005686E0, UserPsnInfo *, Deserialize_PlayFab_ClientModels_UserPsnInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0477EEA0, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserPsnInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00568BB0, UserSettings *, Deserialize_PlayFab_ClientModels_UserSettings, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04701A90, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00569020, UserSteamInfo *, Deserialize_PlayFab_ClientModels_UserSteamInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04758010, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserSteamInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00569900, UserTitleInfo *, Deserialize_PlayFab_ClientModels_UserTitleInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0473DA70, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserTitleInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056A190, UserTwitchInfo *, Deserialize_PlayFab_ClientModels_UserTwitchInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047250D8, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserTwitchInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056A660, UserWindowsHelloInfo *, Deserialize_PlayFab_ClientModels_UserWindowsHelloInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04766F78, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserWindowsHelloInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056AB30, UserXboxInfo *, Deserialize_PlayFab_ClientModels_UserXboxInfo, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047519A0, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_UserXboxInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056AF60, ValueToDateModel *, Deserialize_PlayFab_ClientModels_ValueToDateModel, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0474A810, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_ValueToDateModel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056B4C0, VirtualCurrencyRechargeTime *, Deserialize_PlayFab_ClientModels_VirtualCurrencyRechargeTime, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x047245D8, PlayFabJsonSerializer_Deserialize_PlayFab_ClientModels_VirtualCurrencyRechargeTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056B9E0, EntityKey_3 *, Deserialize_PlayFab_DataModels_EntityKey, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04735448, PlayFabJsonSerializer_Deserialize_PlayFab_DataModels_EntityKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056BEB0, GetFileMetadata *, Deserialize_PlayFab_DataModels_GetFileMetadata, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0473BCD8, PlayFabJsonSerializer_Deserialize_PlayFab_DataModels_GetFileMetadata__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056C500, GetFilesResponse *, Deserialize_PlayFab_DataModels_GetFilesResponse, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0477D168, PlayFabJsonSerializer_Deserialize_PlayFab_DataModels_GetFilesResponse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056CCF0, InitiateFileUploadMetadata *, Deserialize_PlayFab_DataModels_InitiateFileUploadMetadata, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04743380, PlayFabJsonSerializer_Deserialize_PlayFab_DataModels_InitiateFileUploadMetadata__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056D1C0, InitiateFileUploadsResponse *, Deserialize_PlayFab_DataModels_InitiateFileUploadsResponse, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x0476E4A0, PlayFabJsonSerializer_Deserialize_PlayFab_DataModels_InitiateFileUploadsResponse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056D950, WriteEventsResponse *, Deserialize_PlayFab_EventsModels_WriteEventsResponse, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04774A60, PlayFabJsonSerializer_Deserialize_PlayFab_EventsModels_WriteEventsResponse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056E040, EntityPermissionStatement *, Deserialize_PlayFab_ProfilesModels_EntityPermissionStatement, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04760388, PlayFabJsonSerializer_Deserialize_PlayFab_ProfilesModels_EntityPermissionStatement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056E830, SetEntityProfilePolicyResponse *, Deserialize_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04700BD0, PlayFabJsonSerializer_Deserialize_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056EED0, HttpResponseObject *, Deserialize_PlayFab_SharedModels_HttpResponseObject, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04734BD8, PlayFabJsonSerializer_Deserialize_PlayFab_SharedModels_HttpResponseObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0056F480, PlayFabRequestCommon *, Deserialize_PlayFab_SharedModels_PlayFabRequestCommon, (JsonParser_Slot value));
IL2CPP_REGISTER_METHODINFO(0x04724490, PlayFabJsonSerializer_Deserialize_PlayFab_SharedModels_PlayFabRequestCommon__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157B4D0, Object *, DeserializeObject, (PlayFabJsonSerializer * __this, String * serialized));
IL2CPP_REGISTER_METHODINFO(0x04717320, PlayFabJsonSerializer_DeserializeObject_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157BAF0, Object *, DeserializeObject, (PlayFabJsonSerializer * __this, String * serialized, Object * serializerStrategy));
IL2CPP_REGISTER_METHOD(0x015E1F40, void, SerializeDictionaryGeneric, (JsonBuilder_Slot slot, Object * value));
IL2CPP_REGISTER_METHOD(0x0157AE50, bool, DeserializeObject, (PlayFabJsonSerializer * __this, String * serialized));
IL2CPP_REGISTER_METHODINFO(0x04720C00, PlayFabJsonSerializer_DeserializeObject_3__MethodInfo);
}
