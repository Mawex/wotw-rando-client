#include <interception_macros.h>

namespace app::methods::PlayFab::PlayFabDataAPI {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01A25870, void, ForgetAllCredentials, ());
IL2CPP_REGISTER_METHOD(0x01A25900, void, AbortFileUploads, (AbortFileUploadsRequest * request, Action_1_PlayFab_DataModels_AbortFileUploadsResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A25A10, void, DeleteFiles, (DeleteFilesRequest * request, Action_1_PlayFab_DataModels_DeleteFilesResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A25B20, void, FinalizeFileUploads, (FinalizeFileUploadsRequest * request, Action_1_PlayFab_DataModels_FinalizeFileUploadsResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A25C30, void, GetFiles, (GetFilesRequest * request, Action_1_PlayFab_DataModels_GetFilesResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A25D40, void, GetObjects, (GetObjectsRequest * request, Action_1_PlayFab_DataModels_GetObjectsResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A25E50, void, InitiateFileUploads, (InitiateFileUploadsRequest * request, Action_1_PlayFab_DataModels_InitiateFileUploadsResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
IL2CPP_REGISTER_METHOD(0x01A25F60, void, SetObjects, (SetObjectsRequest * request, Action_1_PlayFab_DataModels_SetObjectsResponse_ * resultCallback, Action_1_PlayFab_PlayFabError_ * errorCallback, Object * customData, Dictionary_2_System_String_System_String_ * extraHeaders));
}
